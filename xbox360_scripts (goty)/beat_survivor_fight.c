//Decompiled with MagicRDR v1.0
//Function Count : 192
//Statics Count : 128
//Natives Count : 374
//Parameters Count : 51

#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 2;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	vector3 vLocal_32 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_35 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_38 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_41 = { 0.0f, 0.0f, 0.0f };
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0.0f;
	bool bLocal_49 = false;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	vector3 vLocal_56 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_59 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_62 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0.0f;
	var uLocal_73 = 0;
	bool bLocal_74 = false;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	var uVar19;
	int iVar22;
	int iVar24;
	var uVar25;
	vector3 vVar29[16];
	vector3 vVar78[16];
	vector3 vVar127[16];
	vector3 vVar176[4];
	int iVar189[16];
	bool bVar206;
	bool bVar207;
	var uVar208;
	bool bVar229[4];
	bool bVar234[16];
	var uVar251;
	var uVar254;
	int iVar275[4];
	var uVar280[16];
	int iVar297;
	int iVar298;
	bool bVar299;
	int iVar300;
	int iVar301;
	bool bVar302;
	var uVar381;
	int iVar382;
	
	iLocal_21 = 0;
	iLocal_22 = 0;
	iLocal_28 = 3;
	iLocal_29 = 3;
	iLocal_30 = 3;
	iLocal_31 = 3;
	fLocal_48 = 5.0f;
	iLocal_71 = 0;
	fLocal_72 = 1.0f;
	iVar7 = 0;
	fVar8 = 0.0f;
	iVar12 = 0;
	iVar13 = 0;
	iVar14 = 0;
	iVar15 = 0;
	bVar16 = false;
	iVar17 = 0;
	uVar208 = 20;
	uVar251 = 2;
	uVar254 = 20;
	iVar297 = 0;
	iVar298 = 0;
	bVar299 = CREATE_LAYOUT(Function_191());
	iVar301 = Function_190(4);
	switch (Global_29004)
	{
		case 0x00000000:
		case 0x00000002:
			bLocal_0 = iVar301;
			break;
		
		case 0x00000001:
			if (iVar301 != 1 || iVar301 != 2)
			{
				bLocal_0 = false;
			}
			else
			{
				bLocal_0 = 2;
			}
			break;
	}
	switch (bLocal_0)
	{
		case 0x00000000:
			iVar300 = "$/tune/refGroups/campsiteSets/cam_survivorFight01x";
			iVar10 = 2;
			iVar9 = 4;
			iVar11 = 11;
			switch (Global_29004)
			{
				case 0x00000000:
				case 0x00000002:
					iVar275[0] = 404;
					iVar275[1] = 96;
					break;
				
				case 0x00000001:
					iVar275[0] = 269;
					iVar275[1] = 461;
					break;
			}
			break;
		
		case 0x00000001:
			iVar300 = "$/tune/refGroups/campsiteSets/cam_survivorFight02x";
			iVar10 = 3;
			iVar9 = 5;
			iVar11 = 13;
			iVar275[0] = 404;
			iVar275[1] = 96;
			iVar275[2] = 38;
			break;
		
		case 0x00000002:
			iVar300 = "$/tune/refGroups/campsiteSets/cam_survivorFight03x";
			iVar10 = 2;
			iVar9 = 5;
			iVar11 = 12;
			switch (Global_29004)
			{
				case 0x00000000:
				case 0x00000002:
					iVar275[0] = 38;
					iVar275[1] = 96;
					break;
				
				case 0x00000001:
					iVar275[0] = 269;
					iVar275[1] = 461;
					break;
			}
			break;
		
		case 0x00000003:
			iVar300 = "$/tune/refGroups/campsiteSets/cam_survivorFight04x";
			iVar10 = 3;
			iVar9 = 6;
			iVar11 = 13;
			iVar275[0] = 404;
			iVar275[1] = 96;
			iVar275[2] = 38;
			break;
	}
	if (Function_189() && Function_186())
	{
		if ((!IS_POPSET_VALID(Global_30750[4]) || !IS_POPSET_VALID(Global_30750[0])) || !IS_POPSET_VALID(Global_30750[3]))
		{
			iVar298 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				bLocal_49 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (bLocal_49 > 25.0f)
				{
					if (Function_185())
					{
						uVar280[iVar4] = Function_176(Global_30750[4], 0, 0, 1);
					}
					else
					{
						uVar280[iVar4] = Function_175(1214, 1220);
					}
				}
				else
				{
					uVar280[iVar4] = Function_176(Global_30750[0], 0, 0, 1);
				}
				iVar4++;
			}
		}
	}
	else if (Function_189() && !Function_186())
	{
		if (!IS_POPSET_VALID(Global_30750[3]) || !IS_POPSET_VALID(Global_30750[0]))
		{
			iVar298 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				bLocal_49 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (bLocal_49 < 25.0f)
				{
					uVar280[iVar4] = Function_176(Global_30750[0], 0, 0, 1);
				}
				else
				{
					uVar280[iVar4] = Function_175(1214, 1220);
				}
				iVar4++;
			}
		}
	}
	else if (Function_186() && !Function_189())
	{
		if (!IS_POPSET_VALID(Global_30750[4]) || !IS_POPSET_VALID(Global_30750[0]))
		{
			iVar298 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				bLocal_49 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (bLocal_49 < 25.0f)
				{
					uVar280[iVar4] = Function_176(Global_30750[0], 0, 0, 1);
				}
				else
				{
					uVar280[iVar4] = Function_176(Global_30750[4], 0, 0, 1);
				}
				iVar4++;
			}
		}
	}
	else if (!IS_POPSET_VALID(Global_30750[0]))
	{
		iVar298 = 5;
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= iVar11)
		{
			uVar280[iVar4] = Function_176(Global_30750[0], 0, 0, 1);
			iVar4++;
		}
	}
	bVar302 = 26;
	Function_173(&bVar302, iVar300, 7, 0);
	Function_173(&bVar302, "ped_emo_thanks", 5, 0);
	Function_173(&bVar302, "custom/ped_emo_thanks", 8, 0);
	Function_173(&bVar302, "DLC_survivor_fight", 1, 0);
	Function_173(&bVar302, "excited_return", 5, 0);
	Function_173(&bVar302, "custom/excited_return", 8, 0);
	Function_173(&bVar302, "birds_shooting_challenger", 5, 0);
	Function_173(&bVar302, "custom/birds_shooting_challenger", 8, 0);
	iVar4 = 0;
	while (iVar4 <= iVar10)
	{
		Function_172(&bVar302, iVar275[iVar4], 3, 0);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= iVar11)
	{
		Function_172(&bVar302, uVar280[iVar4], 3, 0);
		iVar4++;
	}
	Function_171();
	while (!IS_EXITFLAG_SET())
	{
		iVar3 = 600;
		switch (iVar298)
		{
			case 0x00000000:
				if (Function_165(&bVar302))
				{
					iVar298 = 1;
					iVar3 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_124(&ScriptParam_0, &iVar3, &iVar12, &iVar14, 1))
				{
					iVar298 = 2;
					iVar3 = 0;
				}
				else
				{
					iVar14 = 1;
					iVar298 = 5;
					iVar3 = 0;
				}
				break;
			
			case 0x00000002:
				vLocal_62 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
				vVar29[03] = { 0.0f, 0.0f, 15.1f };
				vVar29[13] = { 0.0f, 0.0f, -13.0f };
				vVar29[23] = { 17.0f, 0.0f, 0.0f };
				vVar29[33] = { -14.0f, 0.0f, 0.0f };
				vVar29[43] = { -9.0f, 0.0f, 11.0f };
				vVar29[53] = { -11.0f, 0.0f, 13.0f };
				vVar29[63] = { 10.0f, 0.0f, 12.0f };
				vVar29[73] = { 12.0f, 0.0f, -10.0f };
				vVar29[83] = { 0.0f, 0.0f, 15.1f };
				vVar29[93] = { 0.0f, 0.0f, -13.0f };
				vVar29[103] = { 17.0f, 0.0f, 0.0f };
				vVar29[113] = { -14.0f, 0.0f, 0.0f };
				vVar29[123] = { -9.0f, 0.0f, 11.0f };
				vVar29[133] = { -11.0f, 0.0f, 13.0f };
				vVar29[143] = { 10.0f, 0.0f, 12.0f };
				vVar29[153] = { 12.0f, 0.0f, -10.0f };
				switch (bLocal_0)
				{
					case 0x00000000:
						vLocal_56 = { 1.74f, 0.0f, 1.74f };
						vLocal_59 = { -0.86f, 0.0f, -1.2f };
						vVar176[03] = { 0.12f, 0.0f, 0.7f };
						vVar176[13] = { 0.94f, 0.0f, -0.46f };
						vVar78[03] = { 3.56f, 0.0f, 0.0f };
						vVar78[13] = { 0.6f, 0.0f, -3.02f };
						vVar78[23] = { -2.98f, 0.0f, 1.0f };
						vVar78[33] = { -0.08f, 0.0f, 3.12f };
						vVar78[43] = { -1.86f, 0.0f, 2.34f };
						vVar78[53] = { 2.92f, 0.0f, -2.4f };
						vVar127[03] = { 0.0f, 89.0f, 0.0f };
						vVar127[13] = { 0.0f, 189.72f, 0.0f };
						vVar127[23] = { 0.0f, 296.28f, 0.0f };
						vVar127[33] = { 0.0f, 4.72f, 0.0f };
						vVar127[43] = { 0.0f, 328.68f, 0.0f };
						vVar127[53] = { 0.0f, 157.68f, 0.0f };
						break;
					
					case 0x00000001:
						vLocal_56 = { 2.38f, 0.0f, -2.58f };
						vLocal_59 = { -2.62f, 0.0f, 1.3f };
						vVar176[03] = { -1.24f, 0.0f, -1.08f };
						vVar176[13] = { 0.36f, 0.0f, -1.52f };
						vVar176[23] = { 0.7f, 0.0f, 0.42f };
						vVar78[03] = { 3.56f, 0.0f, 0.0f };
						vVar78[13] = { 0.6f, 0.0f, -4.38f };
						vVar78[23] = { -2.0f, 0.0f, -3.36f };
						vVar78[33] = { -0.6f, 0.0f, 3.22f };
						vVar78[43] = { 0.9f, 0.0f, 3.46f };
						vVar78[53] = { 3.22f, 0.0f, 1.76f };
						vVar78[63] = { -4.48f, 0.0f, -1.58f };
						vVar127[03] = { 0.0f, 88.2f, 0.0f };
						vVar127[13] = { 0.0f, 191.88f, 0.0f };
						vVar127[23] = { 0.0f, 217.44f, 0.0f };
						vVar127[33] = { 0.0f, 0.0f, 0.0f };
						vVar127[43] = { 0.0f, 0.0f, 0.0f };
						vVar127[53] = { 0.0f, 86.4f, 0.0f };
						vVar127[63] = { 0.0f, 254.52f, 0.0f };
						break;
					
					case 0x00000002:
						vLocal_56 = { -1.72f, 0.0f, 1.2f };
						vLocal_59 = { 2.32f, 0.0f, -1.4f };
						vVar176[03] = { 0.76f, 0.0f, 0.42f };
						vVar176[13] = { 0.12f, 0.0f, -1.0f };
						vVar78[03] = { 3.94f, 0.0f, 0.0f };
						vVar78[13] = { 0.6f, 0.0f, -4.04f };
						vVar78[23] = { -3.66f, 0.0f, -1.86f };
						vVar78[33] = { -0.2f, 0.0f, 4.1f };
						vVar78[43] = { -1.38f, 0.0f, -3.56f };
						vVar78[53] = { 0.8f, 0.0f, 3.52f };
						vVar78[63] = { 3.22f, 0.0f, 1.92f };
						vVar127[03] = { 0.0f, 71.64f, 0.0f };
						vVar127[13] = { 0.0f, 179.64f, 0.0f };
						vVar127[23] = { 0.0f, 250.2f, 0.0f };
						vVar127[33] = { 0.0f, 0.0f, 0.0f };
						vVar127[43] = { 0.0f, 217.8f, 0.0f };
						vVar127[53] = { 0.0f, 0.0f, 0.0f };
						vVar127[63] = { 0.0f, 70.56f, 0.0f };
						break;
					
					case 0x00000003:
						vLocal_56 = { -1.18f, 0.0f, 3.14f };
						vLocal_59 = { 2.28f, 0.0f, -6.28f };
						vVar176[03] = { 1.32f, 0.0f, 0.46f };
						vVar176[13] = { 1.52f, 0.0f, -2.4f };
						vVar176[23] = { 0.32f, 0.0f, -3.12f };
						vVar176[33] = { -1.52f, 0.0f, -0.32f };
						vVar78[03] = { 4.68f, 0.0f, 0.0f };
						vVar78[13] = { 4.68f, 0.0f, -3.18f };
						vVar78[23] = { -4.62f, 0.0f, -1.86f };
						vVar78[33] = { -2.3f, 0.0f, -6.02f };
						vVar78[43] = { 4.52f, 0.0f, 2.2f };
						vVar78[53] = { 5.3f, 0.0f, -1.34f };
						vVar78[63] = { -5.2f, 0.0f, -4.04f };
						vVar78[73] = { -5.2f, 0.0f, -0.5f };
						vVar127[03] = { 0.0f, 97.56f, 0.0f };
						vVar127[13] = { 0.0f, 109.08f, 0.0f };
						vVar127[23] = { 0.0f, 282.6f, 0.0f };
						vVar127[33] = { 0.0f, 196.2f, 0.0f };
						vVar127[43] = { 0.0f, 36.72f, 0.0f };
						vVar127[53] = { 0.0f, 74.88f, 0.0f };
						vVar127[53] = { 0.0f, 74.88f, 0.0f };
						vVar127[63] = { 0.0f, 264.96f, 0.0f };
						vVar127[73] = { 0.0f, 294.48f, 0.0f };
						break;
				}
				bVar206 = CREATE_VOLUME_IN_LAYOUT(bVar299, "Camp Volume", 2, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), 20.0f, 15.0f, 20.0f);
				bVar207 = CREATE_VOLUME_IN_LAYOUT(bVar299, "nSafe Zone", 2, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), 12.0f, 12.0f, 12.0f);
				bLocal_65 = CREATE_VOLUME_IN_LAYOUT(bVar299, Function_191(), 3, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 30.0f, 8.0f, 30.0f);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_65, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_65);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_65);
				iVar4 = 0;
				while (iVar4 <= iVar9)
				{
					iVar189[iVar4] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar127[iVar43], *(&ScriptParam_0 + 20), Vector(Function_191(), bVar299, StackVal) + Vector(vVar78[iVar43], *(&ScriptParam_0 + 8), "DLC_survivor_fight")));
					SNAP_OBJECT_TO_GROUND(iVar189[iVar4], 3.0f, true, 1092616192);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar11)
				{
					bVar234[iVar4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_191(), bVar299, StackVal) + Vector(vVar29[iVar43], *(&ScriptParam_0 + 8), uVar280[iVar4]), *(&ScriptParam_0 + 20));
					if (!Function_123(bVar234[iVar4]))
					{
						Function_114(bVar234[iVar4], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar234[iVar4], 0);
					SNAP_OBJECT_TO_GROUND(bVar234[iVar4], 6.0f, true, 1092616192);
					TASK_WANDER_IN_VOLUME(bVar234[iVar4], bVar206, -1.0f);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar234[iVar4], bVar207, 2, 1);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar9)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar234[iVar4]);
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar234[iVar4], bLocal_65, 2, 1);
					SNAP_ACTOR_TO_GRINGO(bVar234[iVar4], iVar189[iVar4], "UseCase1", 1, 0, 0);
					TASK_CLEAR(bVar234[iVar4]);
					TASK_USE_GRINGO(bVar234[iVar4], GET_GRINGO_FROM_OBJECT(iVar189[iVar4]), "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(bVar234[iVar4], "UsingGringo", 1);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar10)
				{
					bVar229[iVar4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_191(), bVar299, StackVal) + Vector(vVar176[iVar43], *(&ScriptParam_0 + 8), iVar275[iVar4]), *(&ScriptParam_0 + 20));
					Function_113(bVar229[iVar4]);
					SNAP_OBJECT_TO_GROUND(bVar229[iVar4], 3.0f, true, 1092616192);
					GIVE_WEAPON_TO_ACTOR(bVar229[iVar4], 4, 0, 1, 1);
					Function_112(bVar229[iVar4], 0.0f, 0x40400000, 0x40000000);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar229[iVar4], 0.6f);
					AI_DONT_HARM_ACTOR(bVar229[iVar4]);
					Function_111(bVar229[iVar4]);
					Function_110(bVar229[iVar4], Global_34573, 5, 1);
					SET_ACTOR_STAY_WITHIN_VOLUME(bVar229[iVar4], bVar206, 2, 1);
					SET_ACTOR_ALLOW_DISARM(bVar229[iVar4], 0);
					iVar4++;
				}
				if (IS_ACTOR_VALID(bVar229[0]))
				{
					Function_107(StackVal, StackVal, bVar229[0], vLocal_32, &bVar234, &uLocal_44, &iLocal_28, iVar11);
				}
				if (IS_ACTOR_VALID(bVar229[1]))
				{
					Function_107(StackVal, StackVal, bVar229[1], vLocal_35, &bVar234, &uLocal_45, &iLocal_29, iVar11);
				}
				if (IS_ACTOR_VALID(bVar229[2]))
				{
					Function_107(StackVal, StackVal, bVar229[2], vLocal_38, &bVar234, &uLocal_46, &iLocal_30, iVar11);
				}
				if (IS_ACTOR_VALID(bVar229[3]))
				{
					Function_107(StackVal, StackVal, bVar229[3], vLocal_41, &bVar234, &uLocal_47, &iLocal_31, iVar11);
				}
				Function_106(&iVar7, 1);
				Function_106(&iVar7, 16);
				Function_106(&iVar7, 4);
				Function_104(StackVal, StackVal, &uVar0, &uVar1, &uVar2, 3.0f, *(&ScriptParam_0 + 8));
				uVar381 = Function_102(StackVal, StackVal, bVar299, Function_191(), iVar300, *(&ScriptParam_0 + 8), 0.0f, 0.0f, 0.0f, 4294967295);
				iVar298 = 3;
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000003:
				Function_101(StackVal, StackVal, *(&ScriptParam_0 + 8), bVar229[0], &iVar3);
				if (Function_70(StackVal, StackVal, &iVar297, &bVar229, &bVar234, &uVar251, bVar299, &iVar3, *(&ScriptParam_0 + 8), iVar22, &iVar24, &uVar5, ScriptParam_0.f_56, iVar10, iVar11, iVar9))
				{
					iVar298 = 5;
					break;
				}
				if (!Function_64(ScriptParam_0.f_56, bVar229[0], &iVar17, &iVar15, 1, 1, 1, 0))
				{
					iVar298 = 5;
					break;
				}
				Function_51(&uVar208, 1, &bVar16, ScriptParam_0.f_56, 100, 80.0f, 1);
				if (Function_49(StackVal, StackVal, Global_34573, *(&ScriptParam_0 + 8)) < Function_47(1))
				{
					iVar298 = 5;
					break;
				}
				if (iVar22 == 0)
				{
					iVar4 = 0;
					while (iVar4 <= iVar11)
					{
						if (IS_ACTOR_VALID(bVar234[iVar4]))
						{
							if (GET_LAST_ATTACKER(bVar234[iVar4]) == Global_34573)
							{
								iVar22 = 1;
							}
						}
						iVar4++;
					}
					iVar4 = 0;
					while (iVar4 <= iVar10)
					{
						if (IS_ACTOR_VALID(bVar229[iVar4]))
						{
							if (GET_LAST_ATTACKER(bVar229[iVar4]) == Global_34573)
							{
								iVar22 = 1;
							}
						}
						iVar4++;
					}
					if (iVar297 > 3 && iVar22 != 1)
					{
						iVar297 = 2;
					}
				}
				Function_46(&bVar229, iVar10, &uVar19, &bVar18, 0);
				if (!bVar18)
				{
					Function_31(72);
					iVar298 = 5;
					break;
				}
				if (Function_23(&bVar234, &bVar229, &uVar25, &iVar24, iVar10) == 1)
				{
					Function_31(72);
					iVar298 = 5;
				}
				if (iVar297 <= 4 && Function_19(&uLocal_4, 3.0f))
				{
					iVar4 = 0;
					while (iVar4 <= iVar10)
					{
						if (Function_15(bVar229[iVar4], &uVar6, &fVar8, iVar7, 0, 0x40400000))
						{
							Function_13(bVar229[iVar4]);
							TASK_KILL_CHAR(bVar229[iVar4], Global_34573);
							iVar24 = 1;
							Function_12(bVar229[iVar4]);
							iVar3 = 0;
							iVar298 = 5;
							break;
						}
						iVar4++;
					}
				}
				break;
			
			case 0x00000005:
				iVar298 = 6;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar3 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar3);
		}
	}
	Function_11(&uVar0, &uVar1, &uVar2);
	iVar382 = 0;
	while (iVar382 < (iVar11 - 1))
	{
		if (IS_ACTOR_VALID(bVar234[iVar382]))
		{
			TASK_CLEAR(bVar234[iVar382]);
			TASK_WANDER(bVar234[iVar382], -1.0f);
			TASK_PRIORITY_SET(bVar234[iVar382], 2);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar234[iVar382]);
		}
		iVar382++;
	}
	iVar382 = 0;
	while (iVar382 < (iVar10 - 1))
	{
		if (iVar24 == 0)
		{
			if (IS_ACTOR_VALID(bVar229[iVar382]))
			{
				TASK_CLEAR(bVar229[iVar382]);
				TASK_WANDER(bVar229[iVar382], -1.0f);
				TASK_PRIORITY_SET(bVar229[iVar382], 2);
			}
		}
		iVar382++;
	}
	if (IS_VOLUME_VALID(bLocal_65))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_65);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_65);
	}
	if (IS_BLIP_VALID(bLocal_66))
	{
		REMOVE_BLIP(bLocal_66);
	}
	if (!bVar16)
	{
		Function_5(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	iVar4 = 0;
	while (iVar4 <= iVar10)
	{
		if (IS_ACTOR_VALID(bVar229[iVar4]))
		{
			AI_CLEAR_DONT_HARM_ACTOR(bVar229[iVar4]);
			Function_13(bVar229[iVar4]);
		}
		iVar4++;
	}
	Function_1(&bVar302);
	RELEASE_LAYOUT_REF(bVar299);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x12AE / 4782
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

void Function_2(var uParam0, int iParam1) //Position: 0x12D4 / 4820
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

void Function_3(var uParam0, int iParam1) //Position: 0x1402 / 5122
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x141C / 5148
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1439 / 5177
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(bVar0);
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
			Function_6(bVar0);
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

void Function_6(bool bParam0) //Position: 0x1696 / 5782
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

void Function_7(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x16DC / 5852
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x1753 / 5971
{
	char* cVar0[16];
	
	if (!Function_9())
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

bool Function_9() //Position: 0x1792 / 6034
{
	if (Function_10(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x17AD / 6061
{
	return (iParam0 && iParam1) == 0;
}

void Function_11(var uParam0, var uParam1, int iParam2) //Position: 0x17BA / 6074
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

void Function_12(bool bParam0) //Position: 0x17E7 / 6119
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

int Function_13(bool bParam0) //Position: 0x1833 / 6195
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_14(bParam0);
		return 1;
	}
	return 0;
}

void Function_14(bool bParam0) //Position: 0x1849 / 6217
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

bool Function_15(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x1875 / 6261
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
		fVar0 = Function_18(bParam0, Global_34573);
		if (!Function_10(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_16(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_16(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_16(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_16(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_16(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_16(bParam0);
				return 1;
			}
		}
		if (!Function_10(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_16(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_16(bool bParam0) //Position: 0x1A0C / 6668
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_17(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_17(bool bParam0) //Position: 0x1A40 / 6720
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_18(bool bParam0, bool bParam1) //Position: 0x1A57 / 6743
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

bool Function_19(var uParam0, float fParam1) //Position: 0x1B48 / 6984
{
	if (Function_22(uParam0))
	{
		if (Function_20(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_20(int iParam0) //Position: 0x1B64 / 7012
{
	if (Function_22(iParam0))
	{
		if (Function_21(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_21(int iParam0) //Position: 0x1C2C / 7212
{
	return Function_10(*iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x1C39 / 7225
{
	return Function_10(*iParam0, 1);
}

int Function_23(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1C46 / 7238
{
	int iVar0;
	int iVar1;
	
	if (Function_28(bParam0, 1) >= 3 || Function_27(bParam1) != 2)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID((*bParam1)[iVar0]))
			{
				if (GET_LAST_ATTACKER((*bParam1)[iVar0]) == Global_34573)
				{
					iVar1 = 0;
					while (iVar1 <= iParam4)
					{
						if (IS_ACTOR_VALID((*bParam1)[iVar1]))
						{
							TASK_CLEAR((*bParam1)[iVar1]);
							Function_26((*bParam1)[iVar1], &Global_34573);
						}
						iVar1++;
					}
					iVar0 = Function_25(Global_34573, bParam1);
					if (iVar0 != 4294967295)
					{
						Function_24((*bParam1)[iVar0], Global_34573, "SurvivorFight_msg05", "SurvivorFight_msg05", 5, 60, 1, 1);
					}
					*uParam2 = 1;
					*uParam3 = 1;
					return 1;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= iParam4)
	{
		if (IS_ACTOR_VALID((*bParam1)[iVar0]))
		{
			if (IS_ACTOR_HOGTIED((*bParam1)[iVar0]))
			{
				iVar0 = Function_25(Global_34573, bParam1);
				if (iVar0 != 4294967295)
				{
					RESET_ANIM_SET_FOR_ACTOR((*bParam1)[iVar0], 0);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*bParam1)[iVar0]);
					Function_24((*bParam1)[iVar0], Global_34573, "SurvivorFight_msg05", "SurvivorFight_msg05", 5, 60, 1, 1);
				}
				*uParam2 = 1;
				iVar1 = 0;
				while (iVar1 <= iParam4)
				{
					if (IS_ACTOR_VALID((*bParam1)[iVar1]))
					{
						TASK_CLEAR((*bParam1)[iVar1]);
						Function_26((*bParam1)[iVar1], &Global_34573);
					}
					iVar1++;
				}
				*uParam3 = 1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_24(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1DEA / 7658
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_18(bParam0, Global_34573) >= IntToFloat(iParam5))
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
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

int Function_25(bool bParam0, bool bParam1) //Position: 0x1E7A / 7802
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= *bParam1)
	{
		if (IS_ACTOR_VALID((*bParam1)[iVar0]))
		{
			if (IS_ACTOR_ALIVE((*bParam1)[iVar0]))
			{
				fVar3 = Function_18(bParam0, (*bParam1)[iVar0]);
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

int Function_26(bool bParam0, int iParam1) //Position: 0x1ED5 / 7893
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

int Function_27(int iParam0) //Position: 0x1FBA / 8122
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_ACTOR_VALID((*iParam0)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*iParam0)[iVar0]) == Global_34573)
			{
				DECOR_SET_BOOL((*iParam0)[iVar0], "PlayerAttacked", 1);
			}
		}
		if (DECOR_CHECK_EXIST((*iParam0)[iVar0], "PlayerAttacked"))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_28(bool bParam0, int iParam1) //Position: 0x2030 / 8240
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		if (Function_29((*bParam0)[iVar0], iParam1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_29(bool bParam0, bool bParam1) //Position: 0x2060 / 8288
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
			Function_13(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_13(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_30(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_30(bool bParam0, int iParam1) //Position: 0x20FC / 8444
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

void Function_31(int iParam0) //Position: 0x2146 / 8518
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_32(409, 1, 0, 0);
	}
	return;
}

int Function_32(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x2177 / 8567
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2397 / 9111
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_43(390))), 32);
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
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_191(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34(int iParam0) //Position: 0x29C4 / 10692
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x29D5 / 10709
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x2ACA / 10954
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2AE3 / 10979
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x2B48 / 11080
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, int iParam1) //Position: 0x2B5A / 11098
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2B6C / 11116
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x2C9C / 11420
{
	return Global_35278[iParam020].f_48;
}

float Function_42(int iParam0) //Position: 0x2CAB / 11435
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_43(int iParam0) //Position: 0x2CE4 / 11492
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_44(int iParam0) //Position: 0x2D21 / 11553
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

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x2EBB / 11963
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

void Function_46(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x30FF / 12543
{
	int iVar0;
	
	*uParam2 = 1;
	*uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_29((*bParam0)[iVar0], bParam4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam2 = 0;
		}
		iVar0++;
	}
}

float Function_47(bool bParam0) //Position: 0x313B / 12603
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

void Function_48(float fParam0, int iParam1) //Position: 0x3176 / 12662
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

float Function_49(bool bParam0, vector3 vParam1) //Position: 0x31FF / 12799
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

vector3 Function_50(bool bParam0) //Position: 0x3279 / 12921
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

void Function_51(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x32E3 / 13027
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
			Function_63(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_62(0);
		}
		if (bParam6)
		{
			Function_60(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_58(iParam3);
		}
		Function_56(iParam3);
		if (Function_55(StackVal, 32768))
		{
			Function_52(1);
		}
		Global_16876[iParam36].f_12++;
		Function_32(408, 1, 0, 0);
	}
}

void Function_52(bool bParam0) //Position: 0x33D0 / 13264
{
	if (bParam0)
	{
		Function_54(0x10000000);
	}
	else
	{
		Function_53(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_53(int iParam0) //Position: 0x33F4 / 13300
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_54(int iParam0) //Position: 0x3411 / 13329
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_55(var uParam0, int iParam1) //Position: 0x3424 / 13348
{
	return (uParam0 && iParam1) == 0;
}

void Function_56(int iParam0) //Position: 0x3431 / 13361
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
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
			bVar1 = Function_57(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_57(int iParam0) //Position: 0x34D5 / 13525
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_58(int iParam0) //Position: 0x34EB / 13547
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
	Function_59(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_59(var uParam0, var uParam1, int iParam2) //Position: 0x3589 / 13705
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x35A1 / 13729
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
			Function_61(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_61(int iParam0) //Position: 0x3623 / 13859
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

void Function_62(int iParam0) //Position: 0x3671 / 13937
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_57(900)), 0);
	return;
}

void Function_63(bool bParam0) //Position: 0x3693 / 13971
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (bParam0 + Function_57(200)), 0);
	return;
}

bool Function_64(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x36B4 / 14004
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_18(Global_34573, bParam1) > 15.0f)
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
		if (Function_67() && !*uParam2)
		{
			return 0;
		}
		if (Function_66(iParam0) && !*uParam2)
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
		if (!Function_65(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_65(int iParam0, int iParam1) //Position: 0x37E2 / 14306
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

int Function_66(int iParam0) //Position: 0x3803 / 14339
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

int Function_67() //Position: 0x3841 / 14401
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
						if (Function_68(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_68(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_68(bool bParam0, bool bParam1) //Position: 0x38FC / 14588
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_50(bParam0);
			vVar0 = { StackVal, StackVal, Function_50(bParam0) };
			Function_69(bParam1);
			vVar3 = { StackVal, StackVal, Function_69(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_69(bool bParam0) //Position: 0x399C / 14748
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

bool Function_70(var uParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, vector3 vParam6, int iParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15) //Position: 0x3A08 / 14856
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	var uVar12;
	var uVar15;
	
	uParam4 = uParam4;
	iVar0 = iVar0;
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_100(iParam1, iParam13, 60.0f))
			{
				Function_24((*iParam1)[0], Global_34573, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				bLocal_66 = ADD_BLIP_FOR_COORD(&vParam6, 325, 0f, 2, 0);
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_100(iParam1, iParam13, 45.0f))
			{
				iVar0 = Function_25(Global_34573, iParam1);
				Function_24((*iParam1)[iVar0], Global_34573, "SurvivorFight_msg04", "SurvivorFight_msg04", 5, 60, 1, 1);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				if (Function_98(iParam1, 4294967295, 40.0f) || iParam9 != 1)
				{
					iVar0 = Function_25(Global_34573, iParam1);
					Function_24((*iParam1)[iVar0], Global_34573, "SurvivorFight_msg01", "SurvivorFight_msg01", 5, 60, 1, 1);
					Function_96(&uLocal_1, 0.0f);
					iVar0 = 0;
					while (iVar0 <= iParam13)
					{
						if (IS_ACTOR_VALID((*iParam1)[iVar0]))
						{
							AI_CLEAR_DONT_HARM_ACTOR((*iParam1)[iVar0]);
							AI_SET_FIRE_DELAY((*iParam1)[iVar0], 0.3f);
							AI_SET_FIRE_DELAY_RANDOMNESS((*iParam1)[iVar0], 0.3f);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= iParam14)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME((*bParam2)[iVar0]);
						SET_ACTOR_STAY_WITHIN_VOLUME((*bParam2)[iVar0], bLocal_65, 2, 1);
						DECOR_REMOVE((*bParam2)[iVar0], "Targeted");
						iVar8 = Function_95((*bParam2)[iVar0], iParam1);
						bLocal_49 = RAND_FLOAT_RANGE(0.0f, 100.0f);
						if (Function_185())
						{
							vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_56, vParam6, StackVal) };
						}
						else
						{
							vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_59, vParam6, StackVal) };
						}
						if (GET_TASK_STATUS((*bParam2)[iVar0], 19) != 1)
						{
							TASK_CLEAR((*bParam2)[iVar0]);
							if (bLocal_49 > 30.0f)
							{
								FIND_GROUND_INTERSECTION(&vVar9, 6.0f, &uVar12, &uVar15);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_COORD(false, &uVar12, 0.25f, 2);
								TASK_MELEE_ATTACK(false, (*iParam1)[iVar8], -1.0f);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM((*bParam2)[iVar0], iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET((*bParam2)[iVar0], 1);
							}
							else
							{
								FIND_GROUND_INTERSECTION(&vVar9, 6.0f, &uVar12, &uVar15);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_COORD(false, &uVar12, 0.25f, 1);
								TASK_MELEE_ATTACK(false, (*iParam1)[iVar8], -1.0f);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM((*bParam2)[iVar0], iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET((*bParam2)[iVar0], 1);
							}
						}
						iVar0++;
					}
					iLocal_28 = 0;
					iLocal_29 = 0;
					iLocal_30 = 0;
					iLocal_31 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				Function_107(StackVal, StackVal, (*iParam1)[0], vLocal_32, bParam2, &uLocal_44, &iLocal_28, iParam14);
			}
			if (IS_ACTOR_VALID((*iParam1)[1]))
			{
				Function_107(StackVal, StackVal, (*iParam1)[1], vLocal_35, bParam2, &uLocal_45, &iLocal_29, iParam14);
			}
			if (IS_ACTOR_VALID((*iParam1)[2]))
			{
				Function_107(StackVal, StackVal, (*iParam1)[2], vLocal_38, bParam2, &uLocal_46, &iLocal_30, iParam14);
			}
			if (iLocal_52 != 0 && Function_28(bParam2, 1) >= iParam13)
			{
				iVar0 = 0;
				while (iVar0 <= iParam14)
				{
					if (IS_ACTOR_ALIVE((*bParam2)[iVar0]))
					{
						if (DECOR_CHECK_EXIST((*bParam2)[iVar0], "UsingGringo"))
						{
							DECOR_REMOVE((*bParam2)[iVar0], "UsingGringo");
						}
						if (DECOR_CHECK_EXIST((*bParam2)[iVar0], "Targeted"))
						{
							DECOR_REMOVE((*bParam2)[iVar0], "Targeted");
						}
						if (DECOR_CHECK_EXIST((*bParam2)[iVar0], "PlayerAttacked"))
						{
							DECOR_REMOVE((*bParam2)[iVar0], "PlayerAttacked");
						}
					}
					iVar0++;
				}
				iLocal_52 = 1;
			}
			if (Function_28(bParam2, 1) >= (iParam14 / 2) && iVar6 != 0)
			{
				iVar0 = 0;
				while (iVar0 <= iParam14)
				{
					if (DECOR_CHECK_EXIST((*bParam2)[iVar0], "UsingGringo"))
					{
						DECOR_REMOVE((*bParam2)[iVar0], "UsingGringo");
						DECOR_REMOVE((*bParam2)[iVar0], "Targeted");
						TASK_CLEAR((*bParam2)[iVar0]);
						AI_QUICK_EXIT_GRINGO((*bParam2)[iVar0], 1);
						iVar8 = Function_95((*bParam2)[iVar0], iParam1);
						if (Function_185())
						{
							vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_56, vParam6, StackVal) };
							FIND_GROUND_INTERSECTION(&vVar9, 6.0f, &uVar12, &uVar15);
							iVar1 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(false, &uVar12, 0.25f, 1);
							TASK_MELEE_ATTACK(false, (*iParam1)[iVar8], -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM((*bParam2)[iVar0], iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
							TASK_PRIORITY_SET((*bParam2)[iVar0], 0);
						}
						else
						{
							vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_59, vParam6, StackVal) };
							FIND_GROUND_INTERSECTION(&vVar9, 6.0f, &uVar12, &uVar15);
							iVar1 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(false, &uVar12, 0.25f, 1);
							TASK_MELEE_ATTACK(false, (*iParam1)[iVar8], -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM((*bParam2)[iVar0], iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
							TASK_PRIORITY_SET((*bParam2)[iVar0], 0);
						}
					}
					iVar0++;
				}
				iVar6 = 1;
			}
			if (Function_28(bParam3, 1) <= 2)
			{
				Function_92(bParam2, bParam3, iParam14);
			}
			Function_90(iParam1, bParam2, &uLocal_75, &uLocal_76, iParam13, uParam15);
			Function_46(iParam1, iParam13, &uVar2, &uVar3, 0);
			Function_46(bParam2, iParam14, &uVar4, &bVar5, 0);
			if (uVar3 && !bVar5)
			{
				Function_31(72);
				Function_96(&uLocal_4, 0.0f);
				iVar0 = 0;
				while (iVar0 <= iParam13)
				{
					if (IS_ACTOR_ALIVE((*iParam1)[iVar0]))
					{
						MEMORY_CONSIDER_AS((*iParam1)[iVar0], Global_34573, 5);
						CLEAR_LAST_ATTACK((*iParam1)[iVar0]);
						CLEAR_LAST_ATTACK(Global_34573);
						TASK_FACE_ACTOR((*iParam1)[iVar0], Global_34573, 0, 3.0f);
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH((*iParam1)[iVar0]);
						iVar7++;
					}
					iVar0++;
				}
				if (iVar7 >= 1)
				{
					Function_89(iParam12, 1.0f);
					uLocal_67 = "SurvivorFight_msg07";
				}
				else
				{
					uLocal_67 = "SurvivorFight_msg06";
					Function_89(iParam12, 0);
				}
				iVar0 = 0;
				while (iVar0 <= iParam13)
				{
					if (Function_29((*iParam1)[iVar0], 1))
					{
						*uParam11 = iVar0;
						*uParam0 = 4;
						break;
					}
					iVar0++;
				}
			}
			break;
		
		case 0x00000004:
			if (iParam9 == 1)
			{
				if (iLocal_51 == 0)
				{
					iVar0 = 0;
					while (iVar0 <= iParam13)
					{
						if (iVar0 != *uParam11)
						{
							if (IS_ACTOR_ALIVE((*iParam1)[iVar0]))
							{
								SET_ANIM_SET_FOR_ACTOR((*iParam1)[iVar0], "excited_return", 0);
								SET_ACTION_NODE_FOR_ACTOR((*iParam1)[iVar0], "excited_return");
							}
						}
						iVar0++;
					}
					iLocal_51 = 1;
				}
				if (Function_87(iParam1[*uParam11], &Global_34573, &fLocal_72, &iLocal_71, &uLocal_68, uParam4, 30.0f, &bLocal_74, uLocal_73, uParam5, "ped_emo_thanks", "ped_emo_thanks", uLocal_67, uLocal_67, 30.0f, 2, -5.0f, 0, 3.0f, 0, "SurvivorFightPlayer_msg01", 0, 1, 0, 0x40800000))
				{
					if (bLocal_74)
					{
						Function_80(iParam12, 4294967295, 0x3f800000);
						iVar0 = 0;
						while (iVar0 <= iParam13)
						{
							if (IS_ACTOR_VALID((*iParam1)[iVar0]) && iVar0 != *uParam11)
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME((*iParam1)[iVar0]);
								Function_13((*iParam1)[iVar0]);
								MEMORY_CLEAR_EVENTS((*iParam1)[iVar0], 1);
								MEMORY_CLEAR_ALL((*iParam1)[iVar0]);
								MEMORY_CONSIDER_AS((*iParam1)[iVar0], Global_34573, 5);
								AI_GLOBAL_CLEAR_DANGER(Global_34573);
								vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_56, vLocal_62, StackVal) };
								FIND_GROUND_INTERSECTION(&vVar9, 6.0f, &uVar12, &uVar15);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_GO_NEAR_COORD(false, &uVar12, 0.5f, 2);
								TASK_FLEE_COORD(false, &vParam6, 2, -1.0f, -1.0f, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM((*iParam1)[iVar0], iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET((*iParam1)[iVar0], 1);
								*uParam10 = 1;
							}
							else if (IS_ACTOR_VALID((*iParam1)[iVar0]) && iVar0 == *uParam11)
							{
								RESET_ANIM_SET_FOR_ACTOR((*iParam1)[iVar0], 1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME((*iParam1)[iVar0]);
								Function_13((*iParam1)[iVar0]);
								MEMORY_REPORT_POSITION_AUTO((*iParam1)[iVar0], (*iParam1)[*uParam11], 1);
								TASK_CLEAR((*iParam1)[iVar0]);
								TASK_FOLLOW_OBJECT_AT_DISTANCE((*iParam1)[iVar0], (*iParam1)[*uParam11], 5.0f, 2);
								TASK_PRIORITY_SET((*iParam1)[iVar0], 0);
								*uParam10 = 1;
							}
							iVar0++;
						}
						return 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= iParam13)
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME((*iParam1)[iVar0]);
				Function_71((*iParam1)[iVar0], 0, 0, 2);
				return 1;
				iVar0++;
			}
			break;
		
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000006:
			break;
	}
	return 0;
}

int Function_71(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x42B4 / 17076
{
	int iVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_72(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_72(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_72(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4394 / 17300
{
	char* cVar0[32];
	
	Function_79();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_78(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_77(bParam0, 0);
	Function_76(bParam0, iParam1);
	Function_75(bParam0, uParam2);
	Function_74(bParam0, uParam3);
	if (Function_73(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_73(bool bParam0) //Position: 0x45E2 / 17890
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_74(bool bParam0, bool bParam1) //Position: 0x4605 / 17925
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x4628 / 17960
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x464C / 17996
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x4672 / 18034
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_78(bool bParam0) //Position: 0x4695 / 18069
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_79() //Position: 0x46B3 / 18099
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_80(int iParam0, bool bParam1, float fParam2) //Position: 0x46FD / 18173
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4[6];
	bool bVar11;
	int iVar12;
	float fVar13;
	
	bVar0 = false;
	bVar1 = false;
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
			bVar1 = true;
			break;
		
		case 0x00000001:
			bVar1 = 2;
			break;
		
		case 0x00000002:
			bVar1 = 3;
			break;
	}
	bVar1 = CEIL((IntToFloat(bVar1) * fParam2));
	if (bParam1 == 4294967295)
	{
		bVar11 = false;
		Function_86(Global_34573, &uVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar4[iVar12]));
			bParam1 = Function_85(Global_34573, uVar4[iVar12]);
			if (bParam1 == 34)
			{
				bParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_81(Function_84(), 0, 1);
		}
	}
	else
	{
		bParam1 = Function_85(Global_34573, bParam1);
		if (bParam1 == 34)
		{
			bParam1 = 16;
		}
	}
	if (!bVar0)
	{
		fVar13 = GET_WEAPON_MAX_AMMO(bParam1);
		if (fVar13 >= 2.0f)
		{
			fVar13 = (fVar13 + 4.0f);
		}
		bVar2 = (fVar13 * IntToFloat(bVar1));
		if (bVar2 < (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1)))
		{
			bVar2 = (_GET_MAX_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1)) - _GET_AMMO_AMOUNT(Global_34573, GET_AMMO_ENUM(bParam1), 1));
		}
		if (bVar2 > 1.0f)
		{
			Function_81(Function_84(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(bParam1), bVar2, 1, 1);
		}
	}
	return;
}

int Function_81(bool bParam0, bool bParam1, int iParam2) //Position: 0x48BC / 18620
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_83(bParam0), Function_82()) == 0)
		{
			ADD_ITEM(Function_83(bParam0), Function_82(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_83(bParam0), Function_82(), iParam2);
	return 1;
}

var Function_82() //Position: 0x4907 / 18695
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_83(bool bParam0) //Position: 0x491C / 18716
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

bool Function_84() //Position: 0x4A0D / 18957
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

int Function_85(bool bParam0, int iParam1) //Position: 0x4A69 / 19049
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_86(bool bParam0, var uParam1, bool bParam2) //Position: 0x4A7A / 19066
{
	*bParam2 = 0;
	if (Function_85(bParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 6))
		{
			(*uParam1)[*bParam2] = 39;
			*bParam2++;
		}
	}
	if (Function_85(bParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 8))
		{
			(*uParam1)[*bParam2] = 41;
			*bParam2++;
		}
	}
	if (Function_85(bParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 7))
		{
			(*uParam1)[*bParam2] = 40;
			*bParam2++;
		}
	}
	if (Function_85(bParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 9))
		{
			(*uParam1)[*bParam2] = 42;
			*bParam2++;
		}
	}
	if (Function_85(bParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 10))
		{
			(*uParam1)[*bParam2] = 43;
			*bParam2++;
		}
	}
	if (Function_85(bParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(bParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(bParam0, 11))
		{
			(*uParam1)[*bParam2] = 44;
			*bParam2++;
		}
	}
	return;
}

bool Function_87(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x4B9A / 19354
{
	int iVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_18(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_191(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_191(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_18(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_18(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_29(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_24(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_24(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_96(uParam4, 0.0f);
			}
			else if (!Function_29(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_88(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_71(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_19(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_71(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_24(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_88(*uParam0))
			{
				if (Function_19(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_71(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_71(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

bool Function_88(bool bParam0) //Position: 0x4F40 / 20288
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

void Function_89(int iParam0, bool bParam1) //Position: 0x4F65 / 20325
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
			bParam1 = bParam1;
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

void Function_90(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0x4FE8 / 20456
{
	int iVar0;
	
	if (Function_28(bParam0, 1) != (iParam4 - 1) && *uParam2 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID((*bParam0)[iVar0]))
			{
				if (GET_LAST_ATTACKER((*bParam0)[iVar0]) != Global_34573)
				{
					*uParam2 = 1;
				}
			}
			iVar0++;
		}
		if (*uParam2 == 1)
		{
			iVar0 = Function_25(Global_34573, bParam0);
			Function_91();
			if (iVar0 != 4294967295)
			{
				Function_24((*bParam0)[iVar0], Global_34573, "SurvivorFight_msg03", "SurvivorFight_msg03", 5, 60, 1, 1);
			}
		}
	}
	if (Function_28(bParam1, 1) != iParam5 && *uParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID((*bParam0)[iVar0]))
			{
				if (GET_LAST_ATTACKER((*bParam0)[iVar0]) != Global_34573)
				{
					*uParam3 = 1;
				}
			}
			iVar0++;
		}
		if (*uParam3 == 1)
		{
			iVar0 = Function_25(Global_34573, bParam0);
			if (iVar0 != 4294967295)
			{
				Function_24((*bParam0)[iVar0], Global_34573, "SurvivorFight_msg02", "SurvivorFight_msg02", 5, 60, 1, 1);
			}
		}
	}
}

void Function_91() //Position: 0x5125 / 20773
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_92(var uParam0, bool bParam1, int iParam2) //Position: 0x513A / 20794
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam2)
	{
		if (Function_93(Global_34573, (*uParam0)[iVar0]) >= 1.5f && Function_28(bParam1, 1) >= 2)
		{
			if ((*bParam1)[0] != "" || !IS_ACTOR_ALIVE((*bParam1)[0]))
			{
				if ((*uParam0)[iVar0] == (*bParam1)[0] && (*uParam0)[iVar0] == (*bParam1)[1])
				{
					(*bParam1)[0] = (*uParam0)[iVar0];
					TASK_CLEAR((*bParam1)[0]);
					TASK_MELEE_ATTACK((*bParam1)[0], Global_34573, -1.0f);
				}
			}
			else if ((*bParam1)[1] != "" || !IS_ACTOR_ALIVE((*bParam1)[1]))
			{
				if ((*uParam0)[iVar0] == (*bParam1)[0] && (*uParam0)[iVar0] == (*bParam1)[1])
				{
					(*bParam1)[1] = (*uParam0)[iVar0];
					TASK_CLEAR((*bParam1)[1]);
					TASK_MELEE_ATTACK((*bParam1)[1], Global_34573, -1.0f);
				}
			}
		}
		iVar0++;
	}
	return;
}

float Function_93(bool bParam0, bool bParam1) //Position: 0x5214 / 21012
{
	var uVar0;
	int iVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &iVar3);
	iVar6 = Function_94(&uVar0, &iVar3);
	return iVar6;
}

float Function_94(var uParam0, int iParam1) //Position: 0x5233 / 21043
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

int Function_95(bool bParam0, int iParam1) //Position: 0x5251 / 21073
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 10000.0f;
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((IS_ACTOR_ALIVE((*iParam1)[iVar0]) && !DECOR_CHECK_EXIST((*iParam1)[iVar0], "UsingGringo")) && !DECOR_CHECK_EXIST((*iParam1)[iVar0], "Targeted"))
		{
			fVar3 = Function_18(bParam0, (*iParam1)[iVar0]);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void Function_96(var uParam0, float fParam1) //Position: 0x52CF / 21199
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_106(uParam0, 1);
	Function_97(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_97(var uParam0, int iParam1) //Position: 0x52F0 / 21232
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

int Function_98(var uParam0, int iParam1, bool bParam2) //Position: 0x5303 / 21251
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_29((*uParam0)[iVar0], 0))
		{
			if (Function_99((*uParam0)[iVar0], 1.0f, bParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_99(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5349 / 21321
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_100(var uParam0, int iParam1, float fParam2) //Position: 0x5363 / 21347
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar0]))
		{
			if (Function_18((*uParam0)[iVar0], Global_34573) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_101(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x539D / 21405
{
}

var Function_102(var uParam0, bool bParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x53A5 / 21413
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_103())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_103() //Position: 0x54EE / 21742
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_104(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x54F7 / 21751
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
		if (Function_105(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
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

int Function_105(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x5598 / 21912
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

void Function_106(int iParam0, bool bParam1) //Position: 0x562C / 22060
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

int Function_107(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, int iParam6, int iParam7) //Position: 0x563B / 22075
{
	int iVar0;
	float fVar1;
	
	switch (*iParam6)
	{
		case 0x00000000:
			iVar0 = Function_95(bParam0, bParam4);
			if (iVar0 != 4294967295)
			{
				if (IS_ACTOR_ALIVE((*bParam4)[iVar0]))
				{
					if (Function_28(bParam4, 1) > (iParam7 / 2))
					{
						DECOR_SET_BOOL((*bParam4)[iVar0], "Targeted", 1);
					}
					*uParam5 = (*bParam4)[iVar0];
					fVar1 = Function_109(bParam0);
					AI_SET_WEAPON_MAX_RANGE(bParam0, (fVar1 * 1.5f));
					MEMORY_REPORT_POSITION_AUTO(bParam0, *uParam5, 1);
					Function_108(bParam0, *uParam5);
					TASK_PRIORITY_SET(bParam0, 1);
					MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
					*iParam6 = 1;
					Function_96(&uParam1, 0.0f);
					break;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_29(*uParam5, 0))
			{
				if (Function_19(&uParam1, fLocal_48) || Function_18(*uParam5, bParam0) > 8.0f)
				{
					if (Function_28(bParam4, 1) > 6)
					{
						Function_112(bParam0, 50.0f, -1.0f, -1.0f);
					}
					else
					{
						Function_112(bParam0, 40.0f, -1.0f, -1.0f);
					}
					*iParam6 = 2;
				}
			}
			else
			{
				*iParam6 = 0;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_ALIVE(*uParam5))
			{
				if (GET_LAST_ATTACKER(*uParam5) == bParam0)
				{
					*iParam6 = 0;
					break;
				}
				else
				{
					*iParam6 = 0;
				}
			}
			break;
		
		case 0x00000003:
			iVar0 = Function_95(bParam0, bParam4);
			if (iVar0 != 4294967295)
			{
				if (Function_29((*bParam4)[iVar0], 0))
				{
					DECOR_SET_BOOL((*bParam4)[iVar0], "Targeted", 1);
					*uParam5 = (*bParam4)[iVar0];
					MEMORY_REPORT_POSITION_AUTO(bParam0, *uParam5, 1);
					Function_108(bParam0, *uParam5);
					*iParam6 = 4;
					break;
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	return 0;
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x57C7 / 22471
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

var Function_109(bool bParam0) //Position: 0x57DD / 22493
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(bParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

int Function_110(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x57F6 / 22518
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, iParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, iParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_111(bool bParam0) //Position: 0x5849 / 22601
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_112(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x5863 / 22627
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_113(bool bParam0) //Position: 0x58AA / 22698
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(bParam0, 1);
	return;
}

void Function_114(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x58D4 / 22740
{
	var uVar0;
	
	if (Function_122(bParam0) && !Function_121(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (iParam2 == 4294967294 && iParam3 == 4294967294)
	{
		if (iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, iParam2, iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_119(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", 1);
	Function_118(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", 1);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_115(bParam0, uParam4, uParam5);
}

void Function_115(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5B37 / 23351
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_116(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_116(bool bParam0, int iParam1, bool bParam2) //Position: 0x5BE9 / 23529
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_191(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_117();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_191(), vVar3, Function_117());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_191(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_117();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_191(), vVar0, Function_117());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", 1);
	}
	return;
}

vector3 Function_117() //Position: 0x5D99 / 23961
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_118(bool bParam0) //Position: 0x5DA2 / 23970
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

void Function_119(bool bParam0) //Position: 0x5DD6 / 24022
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_120(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_120(var uParam0, int iParam1) //Position: 0x613A / 24890
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, iParam1);
		iVar0++;
	}
	return;
}

bool Function_121(bool bParam0, int iParam1) //Position: 0x615C / 24924
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_122(bool bParam0) //Position: 0x619E / 24990
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_123(bool bParam0) //Position: 0x61BE / 25022
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_121(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_124(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6209 / 25097
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_161(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_159(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_125(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_5(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_161(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_159(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x659B / 26011
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
			Function_158(iParam0 + 4);
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
						bVar0 = Function_157(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_156(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_154(StackVal, StackVal, StackVal, vVar9, Function_155());
				}
				else
				{
					bVar0 = Function_153(StackVal, StackVal, StackVal, vVar9, Function_155(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_158(iParam0 + 4);
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
					if (Function_152(bVar14))
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
				Function_151(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_150(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_150(&vVar9, &vVar6) };
				if (!Function_149(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_48(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_146(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_142(iParam0);
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
					if (!Function_141(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_140(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_139(StackVal, Function_139(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_138(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_135(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_134((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_134((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_133(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_133(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_141(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_140(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_141(StackVal, Function_140(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_139(StackVal, Function_139(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_135(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_130((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_127(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_127(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_126(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_126(vector3 vParam0) //Position: 0x6DC5 / 28101
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

bool Function_127(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6DFA / 28154
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
								return Function_128(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_128(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_128(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_128(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_128(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_128(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_128(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_128(&Global_6704, &Global_7790, bParam3);
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
								return Function_128(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_128(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_128(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_128(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_128(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_128(&Global_7027, &Global_8268, bParam3);
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
		return Function_128(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_128(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_128(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_128(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_128(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_128(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_128(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_128(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_128(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_128(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_128(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_128(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_128(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_128(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_128(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_128(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_128(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_128(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_128(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_128(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_128(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_128(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_128(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_128(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_128(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_128(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_128(var uParam0, var uParam1, bool bParam2) //Position: 0x740F / 29711
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_129(uParam0[iVar02], 2))
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

bool Function_129(var uParam0, int iParam1) //Position: 0x7461 / 29793
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_130(int iParam0) //Position: 0x747D / 29821
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
			if (Function_131(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_131(bool bParam0) //Position: 0x74D8 / 29912
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_132(bParam0);
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

var Function_132(bool bParam0) //Position: 0x7510 / 29968
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

vector3 Function_133(int iParam0) //Position: 0x7556 / 30038
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_134(int iParam0, int iParam1) //Position: 0x7575 / 30069
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

bool Function_135(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x75A5 / 30117
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
	Function_136(4294967295);
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
			else if (Function_94(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_136(bool bParam0) //Position: 0x7675 / 30325
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
						Function_137(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_49(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_137(iVar0);
						}
					}
					else if (Function_49(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_137(iVar0);
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
			Function_137(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_137(int iParam0) //Position: 0x77D6 / 30678
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

bool Function_138(vector3 vParam0) //Position: 0x7837 / 30775
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

int Function_139(vector3 vParam0) //Position: 0x78D8 / 30936
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

bool Function_140(vector3 vParam0) //Position: 0x7924 / 31012
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

bool Function_141(vector3 vParam0) //Position: 0x797D / 31101
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

int Function_142(int iParam0) //Position: 0x79FA / 31226
{
	float fVar0;
	bool bVar1;
	
	Function_48(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_145(0);
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_143(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_143(struct<33> Param0) //Position: 0x7B95 / 31637
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

void Function_144(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x7CC1 / 31937
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

void Function_145(float fParam0) //Position: 0x7D12 / 32018
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
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

int Function_146(int iParam0, vector3 vParam1) //Position: 0x7D56 / 32086
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_148();
	Function_145(0);
	Function_147(0);
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_143(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_147(bool bParam0) //Position: 0x7EF8 / 32504
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

void Function_148() //Position: 0x7FAB / 32683
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

bool Function_149(vector3 vParam0) //Position: 0x7FBA / 32698
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_150(var uParam0, int iParam1) //Position: 0x7FD2 / 32722
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_133(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_133(&iVar25), StackVal) };
		Function_133(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_133(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_48(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_133(&iVar31);
			vVar11 = { StackVal, StackVal, Function_133(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_133(&iVar25);
			vVar11 = { StackVal, StackVal, Function_133(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_151(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x80E0 / 32992
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_149(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_149(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

bool Function_152(int iParam0) //Position: 0x8212 / 33298
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_153(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8228 / 33320
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
						if (Function_135(&vVar5, &fVar4, 0, 0))
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

var Function_154(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x82D0 / 33488
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
				if (Function_135(&vVar5, &uVar4, 0, 0))
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

var Function_155() //Position: 0x8359 / 33625
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

var Function_156(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x838A / 33674
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

var Function_157(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x841F / 33823
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

int Function_158(int iParam0) //Position: 0x849C / 33948
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_191());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_191());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_159(bool bParam0, int iParam1) //Position: 0x84CD / 33997
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
	Function_136(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_160(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_160(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x862E / 34350
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_161(bool bParam0, vector3 vParam1) //Position: 0x86C9 / 34505
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_162(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x86F9 / 34553
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_163(bool bParam0) //Position: 0x871C / 34588
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("0", &cVar8, ""), 4);
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

struct<32> Function_164(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8786 / 34694
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_165(int iParam0) //Position: 0x87A5 / 34725
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_170();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_169(iParam0[iVar03], 8);
		}
		else if (Function_168())
		{
			iVar1 = 1;
			Function_169(iParam0[iVar03], 8);
		}
		Function_169(iParam0[iVar03], 16);
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
				Function_169(iParam0[iVar03], 1);
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
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_169(iParam0[iVar03], 2);
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
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_169(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_169(iParam0[iVar03], 2);
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
	Function_166();
	return 1;
}

void Function_166() //Position: 0x8B20 / 35616
{
	if (!Function_167(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_167(int iParam0) //Position: 0x8B60 / 35680
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_168() //Position: 0x8B7C / 35708
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

void Function_169(var uParam0, int iParam1) //Position: 0x8BA7 / 35751
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_170() //Position: 0x8BB8 / 35768
{
	if (!Function_167(128))
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

void Function_171() //Position: 0x8BFA / 35834
{
	return;
}

var Function_172(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8C00 / 35840
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_4(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_169(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_169(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_173(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8CD0 / 36048
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_174(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_169(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_174(var uParam0, int iParam1, int iParam2) //Position: 0x8D08 / 36104
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_169(uParam0[iVar03], 4);
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

var Function_175(int iParam0, bool bParam1) //Position: 0x8DCC / 36300
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

var Function_176(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8DF3 / 36339
{
	return Function_177(uParam0, iParam1, iParam2, 4294967295, iParam3);
}

var Function_177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8E07 / 36359
{
	return Function_178(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x8E20 / 36384
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
		Function_184();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_183(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_182(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_182(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_181(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_183(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_181(bVar0))
				{
					Function_180();
				}
				Function_179(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_183(bVar1))
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

void Function_179(int iParam0) //Position: 0x9113 / 37139
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

void Function_180() //Position: 0x91C7 / 37319
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

bool Function_181(bool bParam0) //Position: 0x9201 / 37377
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

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x922E / 37422
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
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
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

bool Function_183(bool bParam0) //Position: 0x937F / 37759
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_184() //Position: 0x9396 / 37782
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_180();
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
	Function_180();
	return;
}

bool Function_185() //Position: 0x93E1 / 37857
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_186() //Position: 0x93F4 / 37876
{
	if (Function_187(Global_30735) >= 0)
	{
		return 1;
	}
	if (Function_187(Global_30737) >= 0)
	{
		return 1;
	}
	if (Function_187(Global_30738) >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_187(int iParam0) //Position: 0x9425 / 37925
{
	if (!Function_188(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_188(int iParam0) //Position: 0x943F / 37951
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_189() //Position: 0x9456 / 37974
{
	if (Global_29004 != 2)
	{
		return 1;
	}
	return 0;
}

var Function_190(bool bParam0) //Position: 0x9466 / 37990
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

var Function_191() //Position: 0x947F / 38015
{
	var uVar0;
	
	return uVar0;
}

