//Decompiled with MagicRDR v1.0
//Function Count : 192
//Statics Count : 160
//Natives Count : 371
//Parameters Count : 62

#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	struct<2> Local_40 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<2> Local_44 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<2> Local_48 = { 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<2> Local_52 = { 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0.0f;
	float fLocal_65 = 0.0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	struct<2> Local_72 = { 0, 0 } ;
	var uLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	var uLocal_77 = 0;
	struct<2> Local_78 = { 0, 0 } ;
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
	int iLocal_91 = 0;
	float fLocal_92 = 0.0f;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = false;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<2> Var28[16];
	struct<2> Var61[16];
	struct<2> Var94[16];
	struct<2> Var127[4];
	var uVar136[16];
	var uVar153;
	var uVar154;
	var uVar155;
	int iVar176[4];
	int iVar181[16];
	var uVar198;
	var uVar201;
	int iVar222[4];
	var uVar227[16];
	int iVar244;
	int iVar245;
	var uVar246;
	var uVar247;
	int iVar248;
	var uVar249;
	var uVar302;
	int iVar303;
	
	iLocal_27 = 0;
	iLocal_28 = 0;
	iLocal_36 = 3;
	iLocal_37 = 3;
	iLocal_38 = 3;
	iLocal_39 = 3;
	fLocal_64 = 5.0f;
	iLocal_91 = 0;
	fLocal_92 = 1.0f;
	iVar7 = 0;
	fVar8 = 0.0f;
	iVar12 = 0;
	iVar13 = 0;
	iVar14 = 0;
	iVar15 = 0;
	bVar16 = false;
	iVar17 = 0;
	uVar155 = 20;
	uVar198 = 2;
	uVar201 = 20;
	iVar244 = 0;
	iVar245 = 0;
	uVar246 = CREATE_LAYOUT(Function_191());
	iVar248 = Function_190(4);
	switch (Global_43787)
	{
		case 0x00000000:
		case 0x00000002:
			iLocal_0 = iVar248;
			break;
		
		case 0x00000001:
			if (iVar248 != 1 || iVar248 != 2)
			{
				iLocal_0 = 0;
			}
			else
			{
				iLocal_0 = 2;
			}
			break;
	}
	switch (iLocal_0)
	{
		case 0x00000000:
			uVar247 = "$/tune/refGroups/campsiteSets/cam_survivorFight01x";
			iVar10 = 2;
			iVar9 = 4;
			iVar11 = 11;
			switch (Global_43787)
			{
				case 0x00000000:
				case 0x00000002:
					iVar222[0] = 404;
					iVar222[1] = 96;
					break;
				
				case 0x00000001:
					iVar222[0] = 269;
					iVar222[1] = 461;
					break;
			}
			break;
		
		case 0x00000001:
			uVar247 = "$/tune/refGroups/campsiteSets/cam_survivorFight02x";
			iVar10 = 3;
			iVar9 = 5;
			iVar11 = 13;
			iVar222[0] = 404;
			iVar222[1] = 96;
			iVar222[2] = 38;
			break;
		
		case 0x00000002:
			uVar247 = "$/tune/refGroups/campsiteSets/cam_survivorFight03x";
			iVar10 = 2;
			iVar9 = 5;
			iVar11 = 12;
			switch (Global_43787)
			{
				case 0x00000000:
				case 0x00000002:
					iVar222[0] = 38;
					iVar222[1] = 96;
					break;
				
				case 0x00000001:
					iVar222[0] = 269;
					iVar222[1] = 461;
					break;
			}
			break;
		
		case 0x00000003:
			uVar247 = "$/tune/refGroups/campsiteSets/cam_survivorFight04x";
			iVar10 = 3;
			iVar9 = 6;
			iVar11 = 13;
			iVar222[0] = 404;
			iVar222[1] = 96;
			iVar222[2] = 38;
			break;
	}
	if (Function_189() && Function_186())
	{
		if ((!IS_POPSET_VALID(&(Global_46972[4])) || !IS_POPSET_VALID(&(Global_46972[0]))) || !IS_POPSET_VALID(&(Global_46972[3])))
		{
			iVar245 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				fLocal_65 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (fLocal_65 > 25.0f)
				{
					if (Function_185())
					{
						uVar227[iVar4] = Function_176(&(Global_46972[4]), 0, 0, 1);
					}
					else
					{
						uVar227[iVar4] = Function_175(1214, 1220);
					}
				}
				else
				{
					uVar227[iVar4] = Function_176(&(Global_46972[0]), 0, 0, 1);
				}
				iVar4++;
			}
		}
	}
	else if (Function_189() && !Function_186())
	{
		if (!IS_POPSET_VALID(&(Global_46972[3])) || !IS_POPSET_VALID(&(Global_46972[0])))
		{
			iVar245 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				fLocal_65 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (fLocal_65 < 25.0f)
				{
					uVar227[iVar4] = Function_176(&(Global_46972[0]), 0, 0, 1);
				}
				else
				{
					uVar227[iVar4] = Function_175(1214, 1220);
				}
				iVar4++;
			}
		}
	}
	else if (Function_186() && !Function_189())
	{
		if (!IS_POPSET_VALID(&(Global_46972[4])) || !IS_POPSET_VALID(&(Global_46972[0])))
		{
			iVar245 = 5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar11)
			{
				fLocal_65 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (fLocal_65 < 25.0f)
				{
					uVar227[iVar4] = Function_176(&(Global_46972[0]), 0, 0, 1);
				}
				else
				{
					uVar227[iVar4] = Function_176(&(Global_46972[4]), 0, 0, 1);
				}
				iVar4++;
			}
		}
	}
	else if (!IS_POPSET_VALID(&(Global_46972[0])))
	{
		iVar245 = 5;
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= iVar11)
		{
			uVar227[iVar4] = Function_176(&(Global_46972[0]), 0, 0, 1);
			iVar4++;
		}
	}
	uVar249 = 26;
	Function_173(&uVar249, &uVar247, 7, 0);
	Function_173(&uVar249, "ped_emo_thanks", 5, 0);
	Function_173(&uVar249, "custom/ped_emo_thanks", 8, 0);
	Function_173(&uVar249, "DLC_survivor_fight", 1, 0);
	Function_173(&uVar249, "excited_return", 5, 0);
	Function_173(&uVar249, "custom/excited_return", 8, 0);
	Function_173(&uVar249, "birds_shooting_challenger", 5, 0);
	Function_173(&uVar249, "custom/birds_shooting_challenger", 8, 0);
	iVar4 = 0;
	while (iVar4 <= iVar10)
	{
		Function_172(&uVar249, iVar222[iVar4], 3, 0);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= iVar11)
	{
		Function_172(&uVar249, uVar227[iVar4], 3, 0);
		iVar4++;
	}
	Function_171();
	while (!IS_EXITFLAG_SET())
	{
		iVar3 = 600;
		switch (iVar245)
		{
			case 0x00000000:
				if (Function_165(&uVar249))
				{
					iVar245 = 1;
					iVar3 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_124(&ScriptParam_0, &iVar3, &iVar12, &iVar14, 1))
				{
					iVar245 = 2;
					iVar3 = 0;
				}
				else
				{
					iVar14 = 1;
					iVar245 = 5;
					iVar3 = 0;
				}
				break;
			
			case 0x00000002:
				Local_78 = *(&ScriptParam_0 + 16);
				Var28[02] = Vector(0.0f, 0.0f, 15,1f);
				Var28[12] = Vector(0.0f, 0.0f, -13.0f);
				Var28[22] = Vector(17.0f, 0.0f, 0.0f);
				Var28[32] = Vector(-14.0f, 0.0f, 0.0f);
				Var28[42] = Vector(-9.0f, 0.0f, 11.0f);
				Var28[52] = Vector(-11.0f, 0.0f, 13.0f);
				Var28[62] = Vector(10.0f, 0.0f, 12.0f);
				Var28[72] = Vector(12.0f, 0.0f, -10.0f);
				Var28[82] = Vector(0.0f, 0.0f, 15,1f);
				Var28[92] = Vector(0.0f, 0.0f, -13.0f);
				Var28[102] = Vector(17.0f, 0.0f, 0.0f);
				Var28[112] = Vector(-14.0f, 0.0f, 0.0f);
				Var28[122] = Vector(-9.0f, 0.0f, 11.0f);
				Var28[132] = Vector(-11.0f, 0.0f, 13.0f);
				Var28[142] = Vector(10.0f, 0.0f, 12.0f);
				Var28[152] = Vector(12.0f, 0.0f, -10.0f);
				switch (iLocal_0)
				{
					case 0x00000000:
						Local_72 = Vector(1,74f, 0.0f, 1,74f);
						Local_75 = Vector(-0,86f, 0.0f, -1,2f);
						Var127[02] = Vector(0,12f, 0.0f, 0,7f);
						Var127[12] = Vector(0,94f, 0.0f, -0,46f);
						Var61[02] = Vector(3,56f, 0.0f, 0.0f);
						Var61[12] = Vector(0,6f, 0.0f, -3,02f);
						Var61[22] = Vector(-2,98f, 0.0f, 1.0f);
						Var61[32] = Vector(-0,08f, 0.0f, 3,12f);
						Var61[42] = Vector(-1,86f, 0.0f, 2,34f);
						Var61[52] = Vector(2,92f, 0.0f, -2,4f);
						Var94[02] = Vector(0.0f, 89.0f, 0.0f);
						Var94[12] = Vector(0.0f, 189,72f, 0.0f);
						Var94[22] = Vector(0.0f, 296,28f, 0.0f);
						Var94[32] = Vector(0.0f, 4,72f, 0.0f);
						Var94[42] = Vector(0.0f, 328,68f, 0.0f);
						Var94[52] = Vector(0.0f, 157,68f, 0.0f);
						break;
					
					case 0x00000001:
						Local_72 = Vector(2,38f, 0.0f, -2,58f);
						Local_75 = Vector(-2,62f, 0.0f, 1,3f);
						Var127[02] = Vector(-1,24f, 0.0f, -1,08f);
						Var127[12] = Vector(0,36f, 0.0f, -1,52f);
						Var127[22] = Vector(0,7f, 0.0f, 0,42f);
						Var61[02] = Vector(3,56f, 0.0f, 0.0f);
						Var61[12] = Vector(0,6f, 0.0f, -4,38f);
						Var61[22] = Vector(-2.0f, 0.0f, -3,36f);
						Var61[32] = Vector(-0,6f, 0.0f, 3,22f);
						Var61[42] = Vector(0,9f, 0.0f, 3,46f);
						Var61[52] = Vector(3,22f, 0.0f, 1,76f);
						Var61[62] = Vector(-4,48f, 0.0f, -1,58f);
						Var94[02] = Vector(0.0f, 88,2f, 0.0f);
						Var94[12] = Vector(0.0f, 191,88f, 0.0f);
						Var94[22] = Vector(0.0f, 217,44f, 0.0f);
						Var94[32] = Vector(0.0f, 0.0f, 0.0f);
						Var94[42] = Vector(0.0f, 0.0f, 0.0f);
						Var94[52] = Vector(0.0f, 86,4f, 0.0f);
						Var94[62] = Vector(0.0f, 254,52f, 0.0f);
						break;
					
					case 0x00000002:
						Local_72 = Vector(-1,72f, 0.0f, 1,2f);
						Local_75 = Vector(2,32f, 0.0f, -1,4f);
						Var127[02] = Vector(0,76f, 0.0f, 0,42f);
						Var127[12] = Vector(0,12f, 0.0f, -1.0f);
						Var61[02] = Vector(3,94f, 0.0f, 0.0f);
						Var61[12] = Vector(0,6f, 0.0f, -4,04f);
						Var61[22] = Vector(-3,66f, 0.0f, -1,86f);
						Var61[32] = Vector(-0,2f, 0.0f, 4,1f);
						Var61[42] = Vector(-1,38f, 0.0f, -3,56f);
						Var61[52] = Vector(0,8f, 0.0f, 3,52f);
						Var61[62] = Vector(3,22f, 0.0f, 1,92f);
						Var94[02] = Vector(0.0f, 71,64f, 0.0f);
						Var94[12] = Vector(0.0f, 179,64f, 0.0f);
						Var94[22] = Vector(0.0f, 250,2f, 0.0f);
						Var94[32] = Vector(0.0f, 0.0f, 0.0f);
						Var94[42] = Vector(0.0f, 217,8f, 0.0f);
						Var94[52] = Vector(0.0f, 0.0f, 0.0f);
						Var94[62] = Vector(0.0f, 70,56f, 0.0f);
						break;
					
					case 0x00000003:
						Local_72 = Vector(-1,18f, 0.0f, 3,14f);
						Local_75 = Vector(2,28f, 0.0f, -6,28f);
						Var127[02] = Vector(1,32f, 0.0f, 0,46f);
						Var127[12] = Vector(1,52f, 0.0f, -2,4f);
						Var127[22] = Vector(0,32f, 0.0f, -3,12f);
						Var127[32] = Vector(-1,52f, 0.0f, -0,32f);
						Var61[02] = Vector(4,68f, 0.0f, 0.0f);
						Var61[12] = Vector(4,68f, 0.0f, -3,18f);
						Var61[22] = Vector(-4,62f, 0.0f, -1,86f);
						Var61[32] = Vector(-2,3f, 0.0f, -6,02f);
						Var61[42] = Vector(4,52f, 0.0f, 2,2f);
						Var61[52] = Vector(5,3f, 0.0f, -1,34f);
						Var61[62] = Vector(-5,2f, 0.0f, -4,04f);
						Var61[72] = Vector(-5,2f, 0.0f, -0,5f);
						Var94[02] = Vector(0.0f, 97,56f, 0.0f);
						Var94[12] = Vector(0.0f, 109,08f, 0.0f);
						Var94[22] = Vector(0.0f, 282,6f, 0.0f);
						Var94[32] = Vector(0.0f, 196,2f, 0.0f);
						Var94[42] = Vector(0.0f, 36,72f, 0.0f);
						Var94[52] = Vector(0.0f, 74,88f, 0.0f);
						Var94[52] = Vector(0.0f, 74,88f, 0.0f);
						Var94[62] = Vector(0.0f, 264,96f, 0.0f);
						Var94[72] = Vector(0.0f, 294,48f, 0.0f);
						break;
				}
				uVar153 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uVar246, "Camp Volume", 2,802597E-45f, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28), Vector(20.0f, 15.0f, 20.0f));
				uVar154 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uVar246, "nSafe Zone", 2,802597E-45f, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28), Vector(12.0f, 12.0f, 12.0f));
				uLocal_81 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uVar246, Function_191(), 4,203895E-45f, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 8.0f, 30.0f));
				CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_81, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_81);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_81);
				iVar4 = 0;
				while (iVar4 <= iVar9)
				{
					uVar136[iVar4] = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var94[iVar42], *(&ScriptParam_0 + 28), Vector(Function_191(), &uVar246, StackVal) + Vector(Var61[iVar42], *(&ScriptParam_0 + 16), "DLC_survivor_fight")));
					SNAP_OBJECT_TO_GROUND(&(uVar136[iVar4]), 3.0f, 1, 1092616192);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar11)
				{
					iVar181[iVar4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_191(), &uVar246, StackVal) + Vector(Var28[iVar42], *(&ScriptParam_0 + 16), uVar227[iVar4]), *(&ScriptParam_0 + 28));
					if (!Function_123(&(iVar181[iVar4])))
					{
						Function_114(&(iVar181[iVar4]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
					}
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(iVar181[iVar4]), 0);
					SNAP_OBJECT_TO_GROUND(&(iVar181[iVar4]), 6.0f, 1, 1092616192);
					TASK_WANDER_IN_VOLUME(&(iVar181[iVar4]), &uVar153, -1.0f);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(iVar181[iVar4]), &uVar154, 2, 1);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar9)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iVar181[iVar4]));
					SET_ACTOR_STAY_WITHIN_VOLUME(&(iVar181[iVar4]), &uLocal_81, 2, 1);
					SNAP_ACTOR_TO_GRINGO(&(iVar181[iVar4]), &(uVar136[iVar4]), "UseCase1", 1, 0, 0);
					TASK_CLEAR(&(iVar181[iVar4]));
					TASK_USE_GRINGO(&(iVar181[iVar4]), GET_GRINGO_FROM_OBJECT(&(uVar136[iVar4])), "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(&(iVar181[iVar4]), "UsingGringo", 1);
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 <= iVar10)
				{
					iVar176[iVar4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(Function_191(), &uVar246, StackVal) + Vector(Var127[iVar42], *(&ScriptParam_0 + 16), iVar222[iVar4]), *(&ScriptParam_0 + 28));
					Function_113(&(iVar176[iVar4]));
					SNAP_OBJECT_TO_GROUND(&(iVar176[iVar4]), 3.0f, 1, 1092616192);
					GIVE_WEAPON_TO_ACTOR(&(iVar176[iVar4]), 4, 0f, 1, 1);
					Function_112(&(iVar176[iVar4]), 0.0f, 0x40400000, 0x40000000);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(iVar176[iVar4]), 0,6f);
					AI_DONT_HARM_ACTOR(&(iVar176[iVar4]));
					Function_111(&(iVar176[iVar4]));
					Function_110(&(iVar176[iVar4]), &Global_54076, 5, 1);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(iVar176[iVar4]), &uVar153, 2, 1);
					SET_ACTOR_ALLOW_DISARM(&(iVar176[iVar4]), 0);
					iVar4++;
				}
				if (IS_ACTOR_VALID(&(iVar176[0])))
				{
					Function_107(StackVal, &(iVar176[0]), Local_40, &iVar181, &iLocal_56, &iLocal_36, iVar11);
				}
				if (IS_ACTOR_VALID(&(iVar176[1])))
				{
					Function_107(StackVal, &(iVar176[1]), Local_44, &iVar181, &iLocal_58, &iLocal_37, iVar11);
				}
				if (IS_ACTOR_VALID(&(iVar176[2])))
				{
					Function_107(StackVal, &(iVar176[2]), Local_48, &iVar181, &iLocal_60, &iLocal_38, iVar11);
				}
				if (IS_ACTOR_VALID(&(iVar176[3])))
				{
					Function_107(StackVal, &(iVar176[3]), Local_52, &iVar181, &iLocal_62, &iLocal_39, iVar11);
				}
				Function_106(&iVar7, 1);
				Function_106(&iVar7, 16);
				Function_106(&iVar7, 4);
				Function_104(StackVal, &uVar0, &uVar1, &uVar2, 3.0f, *(&ScriptParam_0 + 16));
				uVar302 = Function_103(StackVal, StackVal, &uVar246, Function_191(), &uVar247, *(&ScriptParam_0 + 16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				iVar245 = 3;
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000003:
				Function_102(StackVal, *(&ScriptParam_0 + 16), &(iVar176[0]), &iVar3);
				if (Function_71(StackVal, &iVar244, &iVar176, &iVar181, &uVar198, &uVar246, &iVar3, *(&ScriptParam_0 + 16), iVar22, &iVar24, &uVar5, ScriptParam_0.f_64, iVar10, iVar11, iVar9))
				{
					iVar245 = 5;
					break;
				}
				if (!Function_65(ScriptParam_0.f_64, &(iVar176[0]), &iVar17, &iVar15, 1, 1, 1, 0))
				{
					iVar245 = 5;
					break;
				}
				Function_52(&uVar155, 1, &bVar16, ScriptParam_0.f_64, 100, 80.0f, 1);
				if (Function_50(StackVal, &Global_54076, *(&ScriptParam_0 + 16)) < Function_48(1))
				{
					iVar245 = 5;
					break;
				}
				if (iVar22 == 0)
				{
					iVar4 = 0;
					while (iVar4 <= iVar11)
					{
						if (IS_ACTOR_VALID(&(iVar181[iVar4])))
						{
							if (GET_LAST_ATTACKER(&(iVar181[iVar4])) == &Global_54076)
							{
								iVar22 = 1;
							}
						}
						iVar4++;
					}
					iVar4 = 0;
					while (iVar4 <= iVar10)
					{
						if (IS_ACTOR_VALID(&(iVar176[iVar4])))
						{
							if (GET_LAST_ATTACKER(&(iVar176[iVar4])) == &Global_54076)
							{
								iVar22 = 1;
							}
						}
						iVar4++;
					}
					if (iVar244 > 3 && iVar22 != 1)
					{
						iVar244 = 2;
					}
				}
				Function_47(&iVar176, iVar10, &uVar19, &bVar18, 0);
				if (!bVar18)
				{
					Function_31(72);
					iVar245 = 5;
					break;
				}
				if (Function_23(&iVar181, &iVar176, &uVar25, &iVar24, iVar10) == 1)
				{
					Function_31(72);
					iVar245 = 5;
				}
				if (iVar244 <= 4 && Function_19(&uLocal_5, 3.0f))
				{
					iVar4 = 0;
					while (iVar4 <= iVar10)
					{
						if (Function_15(&(iVar176[iVar4]), &uVar6, &fVar8, iVar7, 0, 0x40400000))
						{
							Function_13(&(iVar176[iVar4]));
							TASK_KILL_CHAR(&(iVar176[iVar4]), &Global_54076);
							iVar24 = 1;
							Function_12(&(iVar176[iVar4]));
							iVar3 = 0;
							iVar245 = 5;
							break;
						}
						iVar4++;
					}
				}
				break;
			
			case 0x00000005:
				iVar245 = 6;
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
	iVar303 = 0;
	while (iVar303 < (iVar11 - 1))
	{
		if (IS_ACTOR_VALID(&(iVar181[iVar303])))
		{
			TASK_CLEAR(&(iVar181[iVar303]));
			TASK_WANDER(&(iVar181[iVar303]), -1.0f);
			TASK_PRIORITY_SET(&(iVar181[iVar303]), 2);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iVar181[iVar303]));
		}
		iVar303++;
	}
	iVar303 = 0;
	while (iVar303 < (iVar10 - 1))
	{
		if (iVar24 == 0)
		{
			if (IS_ACTOR_VALID(&(iVar176[iVar303])))
			{
				TASK_CLEAR(&(iVar176[iVar303]));
				TASK_WANDER(&(iVar176[iVar303]), -1.0f);
				TASK_PRIORITY_SET(&(iVar176[iVar303]), 2);
			}
		}
		iVar303++;
	}
	if (IS_VOLUME_VALID(&uLocal_81))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_81);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_81);
	}
	if (IS_BLIP_VALID(&uLocal_83))
	{
		REMOVE_BLIP(&uLocal_83);
	}
	if (!bVar16)
	{
		Function_5(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	iVar4 = 0;
	while (iVar4 <= iVar10)
	{
		if (IS_ACTOR_VALID(&(iVar176[iVar4])))
		{
			AI_CLEAR_DONT_HARM_ACTOR(&(iVar176[iVar4]));
			Function_13(&(iVar176[iVar4]));
		}
		iVar4++;
	}
	Function_1(&uVar249);
	RELEASE_LAYOUT_REF(&uVar246);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x12CB / 4811
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x12F3 / 4851
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

void Function_3(struct<13> Param0) //Position: 0x143E / 5182
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x145B / 5211
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1479 / 5241
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_6(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(&bVar0);
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
			Function_6(&bVar0);
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

void Function_6(bool bParam0) //Position: 0x16E5 / 5861
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

void Function_7(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x172F / 5935
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x17B4 / 6068
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

bool Function_9() //Position: 0x17F3 / 6131
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x180E / 6158
{
	return (iParam0 && iParam1) == 0;
}

void Function_11(var uParam0, var uParam1, int iParam2) //Position: 0x181B / 6171
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

void Function_12(int iParam0) //Position: 0x184E / 6222
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

int Function_13(int iParam0) //Position: 0x18A1 / 6305
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_14(&iParam0);
		return 1;
	}
	return 0;
}

void Function_14(bool bParam0) //Position: 0x18B9 / 6329
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

bool Function_15(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x18EC / 6380
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
		fVar0 = Function_18(&iParam0, &Global_54076);
		if (!Function_10(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_16(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_16(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_16(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_16(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_16(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_16(&iParam0);
				return 1;
			}
		}
		if (!Function_10(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_16(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_16(int iParam0) //Position: 0x1AB5 / 6837
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_17(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_17(int iParam0) //Position: 0x1AF2 / 6898
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_18(int iParam0, int iParam1) //Position: 0x1B0B / 6923
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_19(var uParam0, float fParam1) //Position: 0x1C00 / 7168
{
	if (Function_22(&uParam0))
	{
		if (Function_20(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_20(vector3 vParam0) //Position: 0x1C1E / 7198
{
	if (Function_22(&vParam0))
	{
		if (Function_21(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_21(int iParam0) //Position: 0x1CEB / 7403
{
	return Function_10(iParam0, 2);
}

bool Function_22(int iParam0) //Position: 0x1CF9 / 7417
{
	return Function_10(iParam0, 1);
}

int Function_23(int iParam0, int[] iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1D07 / 7431
{
	int iVar0;
	int iVar1;
	
	if (Function_28(&iParam0, 1) >= 3 || Function_27(&iParam1) != 2)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID(&(iParam1[iVar0])))
			{
				if (GET_LAST_ATTACKER(&(iParam1[iVar0])) == &Global_54076)
				{
					iVar1 = 0;
					while (iVar1 <= iParam4)
					{
						if (IS_ACTOR_VALID(&(iParam1[iVar1])))
						{
							TASK_CLEAR(&(iParam1[iVar1]));
							Function_26(&(iParam1[iVar1]), &Global_54076);
						}
						iVar1++;
					}
					iVar0 = Function_25(&Global_54076, &iParam1);
					if (iVar0 != 4294967295)
					{
						Function_24(&(iParam1[iVar0]), &Global_54076, "SurvivorFight_msg05", "SurvivorFight_msg05", 5, 60, 1, 1);
					}
					uParam2 = 1;
					uParam3 = 1;
					return 1;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= iParam4)
	{
		if (IS_ACTOR_VALID(&(iParam1[iVar0])))
		{
			if (IS_ACTOR_HOGTIED(&(iParam1[iVar0])))
			{
				iVar0 = Function_25(&Global_54076, &iParam1);
				if (iVar0 != 4294967295)
				{
					RESET_ANIM_SET_FOR_ACTOR(&(iParam1[iVar0]), 0);
					CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(iParam1[iVar0]));
					Function_24(&(iParam1[iVar0]), &Global_54076, "SurvivorFight_msg05", "SurvivorFight_msg05", 5, 60, 1, 1);
				}
				uParam2 = 1;
				iVar1 = 0;
				while (iVar1 <= iParam4)
				{
					if (IS_ACTOR_VALID(&(iParam1[iVar1])))
					{
						TASK_CLEAR(&(iParam1[iVar1]));
						Function_26(&(iParam1[iVar1]), &Global_54076);
					}
					iVar1++;
				}
				uParam3 = 1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_24(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1ED4 / 7892
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_18(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

int Function_25(int iParam0, int[] iParam1) //Position: 0x1F81 / 8065
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
				fVar3 = Function_18(&iParam0, &(iParam1[iVar0]));
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

int Function_26(var uParam0, int iParam1) //Position: 0x1FE4 / 8164
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

int Function_27(int[] iParam0) //Position: 0x20DA / 8410
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (IS_ACTOR_VALID(&(iParam0[iVar0])))
		{
			if (GET_LAST_ATTACKER(&(iParam0[iVar0])) == &Global_54076)
			{
				DECOR_SET_BOOL(&(iParam0[iVar0]), "PlayerAttacked", 1);
			}
		}
		if (DECOR_CHECK_EXIST(&(iParam0[iVar0]), "PlayerAttacked"))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int Function_28(int[] iParam0, int iParam1) //Position: 0x215A / 8538
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_29(&(iParam0[iVar0]), &iParam1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_29(int iParam0, bool bParam1) //Position: 0x218E / 8590
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
			Function_13(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_13(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_30(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
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

int Function_30(int iParam0, int iParam1) //Position: 0x2239 / 8761
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

void Function_31(int iParam0) //Position: 0x228B / 8843
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_32(409, 1, 0, 0);
	}
	return;
}

int Function_32(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x22BC / 8892
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_33(iParam0);
	return 1;
}

void Function_33(bool bParam0) //Position: 0x24E4 / 9444
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

void Function_34(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2582 / 9602
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_44(390))), 32);
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
					fVar19 = (Function_43(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_43(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_191(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_35(int iParam0) //Position: 0x2BC0 / 11200
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2BD1 / 11217
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x2CC8 / 11464
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2CE3 / 11491
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x2D4A / 11594
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, int iParam1) //Position: 0x2D5C / 11612
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2D6E / 11630
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x2EA2 / 11938
{
	return Global_55480[iParam016].f_96;
}

float Function_43(int iParam0) //Position: 0x2EB1 / 11953
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_44(int iParam0) //Position: 0x2EEA / 12010
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_45(int iParam0) //Position: 0x2F27 / 12071
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

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x30C1 / 12481
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

void Function_47(int[] iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x3305 / 13061
{
	int iVar0;
	
	uParam2 = 1;
	uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_29(&(iParam0[iVar0]), &bParam4))
		{
			uParam3 = 1;
		}
		else
		{
			uParam2 = 0;
		}
		iVar0++;
	}
}

float Function_48(bool bParam0) //Position: 0x3348 / 13128
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

void Function_49(float fParam0, int iParam1) //Position: 0x3384 / 13188
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

float Function_50(var uParam0, struct<2> Param1) //Position: 0x3415 / 13333
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

struct<8> Function_51(int iParam0) //Position: 0x348C / 13452
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

void Function_52(var[] uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6) //Position: 0x34F8 / 13560
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
			Function_64(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_63(0);
		}
		if (&bParam6)
		{
			Function_61(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Global_6644 = 1;
			Function_59(iParam3);
		}
		Function_57(iParam3);
		if (Function_56(StackVal, 32768))
		{
			Function_53(1);
		}
		Global_26652[iParam34].f_16++;
		Function_32(408, 1, 0, 0);
	}
}

void Function_53(bool bParam0) //Position: 0x35F1 / 13809
{
	if (bParam0)
	{
		Function_55(0x10000000);
	}
	else
	{
		Function_54(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_54(int iParam0) //Position: 0x3616 / 13846
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_55(int iParam0) //Position: 0x3633 / 13875
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x3646 / 13894
{
	return (uParam0 && iParam1) == 0;
}

void Function_57(int iParam0) //Position: 0x3653 / 13907
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
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
			bVar1 = Function_58(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_58(int iParam0) //Position: 0x36F9 / 14073
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_59(int iParam0) //Position: 0x3710 / 14096
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
	Function_60(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_60(vector3 vParam0) //Position: 0x37AF / 14255
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_61(int iParam0, int iParam1) //Position: 0x37CB / 14283
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
			Function_62(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_62(struct<113> Param0) //Position: 0x3852 / 14418
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

void Function_63(int iParam0) //Position: 0x38B0 / 14512
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_58(900)), 0);
	return;
}

void Function_64(bool bParam0) //Position: 0x38D4 / 14548
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&bParam0 + Function_58(200)), 0);
	return;
}

bool Function_65(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x38F7 / 14583
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_18(&Global_54076, &iParam1) > 15.0f)
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
		if (Function_68() && !uParam2)
		{
			return 0;
		}
		if (Function_67(iParam0) && !uParam2)
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
		if (!Function_66(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_66(int iParam0, int iParam1) //Position: 0x3A3A / 14906
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

int Function_67(int iParam0) //Position: 0x3A5B / 14939
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

int Function_68() //Position: 0x3A9B / 15003
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
						if (Function_69(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_69(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_69(int iParam0, var uParam1) //Position: 0x3B5E / 15198
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_51(&iParam0);
			Var0 = Function_51(&iParam0);
			Function_70(&uParam1);
			Var2 = Function_70(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_70(float fParam0) //Position: 0x3C00 / 15360
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		GET_OBJECT_POSITION(&fParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_71(var uParam0, int[] iParam1, var uParam4, var uParam5, struct<2> Param6, int iParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, var uParam14) //Position: 0x3C6E / 15470
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
	var uVar9;
	var uVar11;
	var uVar13;
	
	uParam4 = &uParam4;
	iVar0 = iVar0;
	switch (uParam0)
	{
		case 0x00000000:
			if (Function_101(&iParam1, iParam12, 60.0f))
			{
				Function_24(&(iParam1[0]), &Global_54076, "SCREAM_HIGH", 0, 5, 60, 1, 1);
				uLocal_83 = ADD_BLIP_FOR_COORD(&Param6, 325, 0, 2, 0);
				uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_101(&iParam1, iParam12, 45.0f))
			{
				iVar0 = Function_25(&Global_54076, &iParam1);
				Function_24(&(iParam1[iVar0]), &Global_54076, "SurvivorFight_msg04", "SurvivorFight_msg04", 5, 60, 1, 1);
				uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				if (Function_99(&iParam1, 4294967295, 40.0f) || iParam8 != 1)
				{
					iVar0 = Function_25(&Global_54076, &iParam1);
					Function_24(&(iParam1[iVar0]), &Global_54076, "SurvivorFight_msg01", "SurvivorFight_msg01", 5, 60, 1, 1);
					Function_97(&uLocal_1, 0.0f);
					iVar0 = 0;
					while (iVar0 <= iParam12)
					{
						if (IS_ACTOR_VALID(&(iParam1[iVar0])))
						{
							AI_CLEAR_DONT_HARM_ACTOR(&(iParam1[iVar0]));
							AI_SET_FIRE_DELAY(&(iParam1[iVar0]), 0,3f);
							AI_SET_FIRE_DELAY_RANDOMNESS(&(iParam1[iVar0]), 0,3f);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= iParam13)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iParam2[iVar0]));
						SET_ACTOR_STAY_WITHIN_VOLUME(&(iParam2[iVar0]), &uLocal_81, 2, 1);
						DECOR_REMOVE(&(iParam2[iVar0]), "Targeted");
						iVar8 = Function_96(&(iParam2[iVar0]), &iParam1);
						fLocal_65 = RAND_FLOAT_RANGE(0.0f, 100.0f);
						if (Function_185())
						{
							uVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Local_72, Param6, StackVal);
						}
						else
						{
							uVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Local_75, Param6, StackVal);
						}
						if (GET_TASK_STATUS(&(iParam2[iVar0]), 19) != 1)
						{
							TASK_CLEAR(&(iParam2[iVar0]));
							if (fLocal_65 > 30.0f)
							{
								FIND_GROUND_INTERSECTION(&uVar9, 6.0f, &uVar11, &uVar13);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_COORD(0, &uVar11, 0,25f, 2);
								TASK_MELEE_ATTACK(0, &(iParam1[iVar8]), -1.0f);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&(iParam2[iVar0]), iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET(&(iParam2[iVar0]), true);
							}
							else
							{
								FIND_GROUND_INTERSECTION(&uVar9, 6.0f, &uVar11, &uVar13);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_COORD(0, &uVar11, 0,25f, 1);
								TASK_MELEE_ATTACK(0, &(iParam1[iVar8]), -1.0f);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&(iParam2[iVar0]), iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET(&(iParam2[iVar0]), true);
							}
						}
						iVar0++;
					}
					iLocal_36 = 0;
					iLocal_37 = 0;
					iLocal_38 = 0;
					iLocal_39 = 0;
					uParam0 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				Function_107(StackVal, &(iParam1[0]), Local_40, &iParam2, &iLocal_56, &iLocal_36, iParam13);
			}
			if (IS_ACTOR_VALID(&(iParam1[1])))
			{
				Function_107(StackVal, &(iParam1[1]), Local_44, &iParam2, &iLocal_58, &iLocal_37, iParam13);
			}
			if (IS_ACTOR_VALID(&(iParam1[2])))
			{
				Function_107(StackVal, &(iParam1[2]), Local_48, &iParam2, &iLocal_60, &iLocal_38, iParam13);
			}
			if (iLocal_68 != 0 && Function_28(&iParam2, 1) >= iParam12)
			{
				iVar0 = 0;
				while (iVar0 <= iParam13)
				{
					if (IS_ACTOR_ALIVE(&(iParam2[iVar0])))
					{
						if (DECOR_CHECK_EXIST(&(iParam2[iVar0]), "UsingGringo"))
						{
							DECOR_REMOVE(&(iParam2[iVar0]), "UsingGringo");
						}
						if (DECOR_CHECK_EXIST(&(iParam2[iVar0]), "Targeted"))
						{
							DECOR_REMOVE(&(iParam2[iVar0]), "Targeted");
						}
						if (DECOR_CHECK_EXIST(&(iParam2[iVar0]), "PlayerAttacked"))
						{
							DECOR_REMOVE(&(iParam2[iVar0]), "PlayerAttacked");
						}
					}
					iVar0++;
				}
				iLocal_68 = 1;
			}
			if (Function_28(&iParam2, 1) >= (iParam13 / 2) && iVar6 != 0)
			{
				iVar0 = 0;
				while (iVar0 <= iParam13)
				{
					if (DECOR_CHECK_EXIST(&(iParam2[iVar0]), "UsingGringo"))
					{
						DECOR_REMOVE(&(iParam2[iVar0]), "UsingGringo");
						DECOR_REMOVE(&(iParam2[iVar0]), "Targeted");
						TASK_CLEAR(&(iParam2[iVar0]));
						AI_QUICK_EXIT_GRINGO(&(iParam2[iVar0]), 1);
						iVar8 = Function_96(&(iParam2[iVar0]), &iParam1);
						if (Function_185())
						{
							uVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Local_72, Param6, StackVal);
							FIND_GROUND_INTERSECTION(&uVar9, 6.0f, &uVar11, &uVar13);
							iVar1 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(0, &uVar11, 0,25f, 1);
							TASK_MELEE_ATTACK(0, &(iParam1[iVar8]), -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&(iParam2[iVar0]), iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
							TASK_PRIORITY_SET(&(iParam2[iVar0]), false);
						}
						else
						{
							uVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Local_75, Param6, StackVal);
							FIND_GROUND_INTERSECTION(&uVar9, 6.0f, &uVar11, &uVar13);
							iVar1 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_COORD(0, &uVar11, 0,25f, 1);
							TASK_MELEE_ATTACK(0, &(iParam1[iVar8]), -1.0f);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&(iParam2[iVar0]), iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
							TASK_PRIORITY_SET(&(iParam2[iVar0]), false);
						}
					}
					iVar0++;
				}
				iVar6 = 1;
			}
			if (Function_28(&iParam3, 1) <= 2)
			{
				Function_93(&iParam2, &iParam3, iParam13);
			}
			Function_91(&iParam1, &iParam2, &uLocal_96, &uLocal_97, iParam12, uParam14);
			Function_47(&iParam1, iParam12, &uVar2, &uVar3, 0);
			Function_47(&iParam2, iParam13, &uVar4, &bVar5, 0);
			if (uVar3 && !bVar5)
			{
				Function_31(72);
				Function_97(&uLocal_5, 0.0f);
				iVar0 = 0;
				while (iVar0 <= iParam12)
				{
					if (IS_ACTOR_ALIVE(&(iParam1[iVar0])))
					{
						MEMORY_CONSIDER_AS(&(iParam1[iVar0]), &Global_54076, 5);
						CLEAR_LAST_ATTACK(&(iParam1[iVar0]));
						CLEAR_LAST_ATTACK(&Global_54076);
						TASK_FACE_ACTOR(&(iParam1[iVar0]), &Global_54076, 0, 3.0f);
						CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&(iParam1[iVar0]));
						iVar7++;
					}
					iVar0++;
				}
				if (iVar7 >= 1)
				{
					Function_90(iParam11, 1.0f);
					uLocal_85 = "SurvivorFight_msg07";
				}
				else
				{
					uLocal_85 = "SurvivorFight_msg06";
					Function_90(iParam11, 0);
				}
				iVar0 = 0;
				while (iVar0 <= iParam12)
				{
					if (Function_29(&(iParam1[iVar0]), 1))
					{
						uParam10 = iVar0;
						uParam0 = 4;
						break;
					}
					iVar0++;
				}
			}
			break;
		
		case 0x00000004:
			if (iParam8 == 1)
			{
				if (iLocal_67 == 0)
				{
					iVar0 = 0;
					while (iVar0 <= iParam12)
					{
						if (iVar0 != uParam10)
						{
							if (IS_ACTOR_ALIVE(&(iParam1[iVar0])))
							{
								SET_ANIM_SET_FOR_ACTOR(&(iParam1[iVar0]), "excited_return", 0);
								SET_ACTION_NODE_FOR_ACTOR(&(iParam1[iVar0]), "excited_return");
							}
						}
						iVar0++;
					}
					iLocal_67 = 1;
				}
				if (Function_88(&(iParam1[uParam10]), &Global_54076, &fLocal_92, &iLocal_91, &uLocal_87, &uParam4, 30.0f, &bLocal_95, &uLocal_93, &uParam5, "ped_emo_thanks", "ped_emo_thanks", &uLocal_85, &uLocal_85, 30.0f, 2, -5.0f, 0, 3.0f, 0, "SurvivorFightPlayer_msg01", 0, 1, 0, 0x40800000))
				{
					if (bLocal_95)
					{
						Function_81(iParam11, 4294967295, 0x3f800000);
						iVar0 = 0;
						while (iVar0 <= iParam12)
						{
							if (IS_ACTOR_VALID(&(iParam1[iVar0])) && iVar0 != uParam10)
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iParam1[iVar0]));
								Function_13(&(iParam1[iVar0]));
								MEMORY_CLEAR_EVENTS(&(iParam1[iVar0]), 1);
								MEMORY_CLEAR_ALL(&(iParam1[iVar0]));
								MEMORY_CONSIDER_AS(&(iParam1[iVar0]), &Global_54076, 5);
								AI_GLOBAL_CLEAR_DANGER(&Global_54076);
								uVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Local_72, Local_78, StackVal);
								FIND_GROUND_INTERSECTION(&uVar9, 6.0f, &uVar11, &uVar13);
								iVar1 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_GO_NEAR_COORD(0, &uVar11, 0,5f, 2);
								TASK_FLEE_COORD(0, &Param6, 2, -1.0f, -1.0f, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(&(iParam1[iVar0]), iVar1);
								TASK_SEQUENCE_RELEASE(iVar1, 1);
								TASK_PRIORITY_SET(&(iParam1[iVar0]), true);
								uParam9 = 1;
							}
							else if (IS_ACTOR_VALID(&(iParam1[iVar0])) && iVar0 == uParam10)
							{
								RESET_ANIM_SET_FOR_ACTOR(&(iParam1[iVar0]), 1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iParam1[iVar0]));
								Function_13(&(iParam1[iVar0]));
								MEMORY_REPORT_POSITION_AUTO(&(iParam1[iVar0]), &(iParam1[uParam10]), 1);
								TASK_CLEAR(&(iParam1[iVar0]));
								TASK_FOLLOW_OBJECT_AT_DISTANCE(&(iParam1[iVar0]), &(iParam1[uParam10]), 5.0f, 2);
								TASK_PRIORITY_SET(&(iParam1[iVar0]), false);
								uParam9 = 1;
							}
							iVar0++;
						}
						return 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= iParam12)
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iParam1[iVar0]));
				Function_72(&(iParam1[iVar0]), 0, 0, 2);
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

int Function_72(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x45E0 / 17888
{
	int iVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!IS_ACTOR_VEHICLE(&iParam0))
		{
			SQUAD_LEAVE(&iParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &iParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_73(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_73(&iParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_73(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x46CE / 18126
{
	char* cVar0[32];
	
	Function_80();
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
	if (Function_79(&uParam0) == 1)
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
	Function_78(&uParam0, 0);
	Function_77(&uParam0, iParam1);
	Function_76(&uParam0, &uParam2);
	Function_75(&uParam0, uParam3);
	if (Function_74(&uParam0) != 5)
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

int Function_74(int iParam0) //Position: 0x493A / 18746
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_75(var uParam0, bool bParam1) //Position: 0x495E / 18782
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x4982 / 18818
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x49A8 / 18856
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_78(var uParam0, bool bParam1) //Position: 0x49CF / 18895
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_79(bool bParam0) //Position: 0x49F3 / 18931
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_80() //Position: 0x4A12 / 18962
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

void Function_81(int iParam0, int iParam1, float fParam2) //Position: 0x4A61 / 19041
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	var uVar4[6];
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
		Function_87(&Global_54076, &uVar4, &bVar11);
		if (bVar11 >= 0)
		{
			PRINTINT(bVar11);
			iVar12 = RAND_INT_RANGE(0, (bVar11 - 1));
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(uVar4[iVar12]));
			iParam1 = Function_86(&Global_54076, uVar4[iVar12]);
			if (&iParam1 == 34)
			{
				iParam1 = 16;
			}
		}
		else
		{
			bVar0 = true;
			Function_82(Function_85(), 0, 1);
		}
	}
	else
	{
		iParam1 = Function_86(&Global_54076, &iParam1);
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
			Function_82(Function_85(), 0, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(&iParam1), fVar2, 1, 1);
		}
	}
	return;
}

int Function_82(bool bParam0, bool bParam1, int iParam2) //Position: 0x4C37 / 19511
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_84(bParam0), Function_83()) == 0)
		{
			ADD_ITEM(Function_84(bParam0), Function_83(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_84(bParam0), Function_83(), &iParam2);
	return 1;
}

var Function_83() //Position: 0x4C85 / 19589
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_84(bool bParam0) //Position: 0x4C9A / 19610
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

bool Function_85() //Position: 0x4D8E / 19854
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

int Function_86(var uParam0, int iParam1) //Position: 0x4DEA / 19946
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_87(var uParam0, int[] iParam1, bool bParam2) //Position: 0x4DFC / 19964
{
	bParam2 = 0;
	if (Function_86(&uParam0, 39) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 6, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 6))
		{
			iParam1[bParam2] = 39;
			bParam2++;
		}
	}
	if (Function_86(&uParam0, 41) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 8, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 8))
		{
			iParam1[bParam2] = 41;
			bParam2++;
		}
	}
	if (Function_86(&uParam0, 40) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 7, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 7))
		{
			iParam1[bParam2] = 40;
			bParam2++;
		}
	}
	if (Function_86(&uParam0, 42) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 9, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 9))
		{
			iParam1[bParam2] = 42;
			bParam2++;
		}
	}
	if (Function_86(&uParam0, 43) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 10, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 10))
		{
			iParam1[bParam2] = 43;
			bParam2++;
		}
	}
	if (Function_86(&uParam0, 44) != 4294967295)
	{
		if (_GET_AMMO_AMOUNT(&uParam0, 11, 1) > _GET_MAX_AMMO_AMOUNT(&uParam0, 11))
		{
			iParam1[bParam2] = 44;
			bParam2++;
		}
	}
	return;
}

bool Function_88(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, var uParam12, bool bParam13, var uParam14, int iParam15, var uParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x4F47 / 20295
{
	int iVar0;
	
	uParam9 = uParam9;
	uParam18 = &uParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
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
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&iParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
				uParam2 = Function_18(&iParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
				iParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_191(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &iParam8, &iParam1, Function_191(), Vector(0.0f, 0,5f, &uParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &uParam14, 1, 1, 0) || Function_18(&Global_54076, &iParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &iParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&iParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_18(&iParam0, &iParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &uParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &iParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &iParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&iParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_29(&iParam0, 0))
			{
				if (IS_ACTOR_VALID(&iParam0))
				{
					TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&iParam0, &uParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, &uParam11);
			TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&iParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&iParam0, &uParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, &uParam11);
				}
				if (&bParam19)
				{
					Function_24(&iParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_24(&iParam0, &Global_54076, &uParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_97(&uParam4, 0.0f);
			}
			else if (!Function_29(&iParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_89(&iParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_72(&iParam0, 4, 0, 1);
					}
				}
				else if (Function_19(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_72(&iParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &iParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_24(&Global_54076, &iParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_89(&iParam0))
			{
				if (Function_19(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_72(&iParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, &uParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				uParam7 = 1;
				if (&bParam17)
				{
					Function_72(&iParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&iParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&iParam0);
				ACTOR_END_FORCE_HOLSTER(&iParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x536C / 21356
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

void Function_90(bool bParam0, bool bParam1) //Position: 0x5394 / 21396
{
	switch (bParam0)
	{
		case 0x00000036:
		case 0x00000039:
		case 0x0000003A:
		case 0x00000041:
		case 0x00000043:
		case 0x0000004A:
		case 0x0000003B:
		case 0x00000037:
			bParam1 = &bParam1;
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

void Function_91(int[] iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0x5419 / 21529
{
	int iVar0;
	
	if (Function_28(&iParam0, 1) != (iParam4 - 1) && uParam2 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID(&(iParam0[iVar0])))
			{
				if (GET_LAST_ATTACKER(&(iParam0[iVar0])) != &Global_54076)
				{
					uParam2 = 1;
				}
			}
			iVar0++;
		}
		if (uParam2 == 1)
		{
			iVar0 = Function_25(&Global_54076, &iParam0);
			Function_92();
			if (iVar0 != 4294967295)
			{
				Function_24(&(iParam0[iVar0]), &Global_54076, "SurvivorFight_msg03", "SurvivorFight_msg03", 5, 60, 1, 1);
			}
		}
	}
	if (Function_28(&iParam1, 1) != iParam5 && uParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 <= iParam4)
		{
			if (IS_ACTOR_VALID(&(iParam0[iVar0])))
			{
				if (GET_LAST_ATTACKER(&(iParam0[iVar0])) != &Global_54076)
				{
					uParam3 = 1;
				}
			}
			iVar0++;
		}
		if (uParam3 == 1)
		{
			iVar0 = Function_25(&Global_54076, &iParam0);
			if (iVar0 != 4294967295)
			{
				Function_24(&(iParam0[iVar0]), &Global_54076, "SurvivorFight_msg02", "SurvivorFight_msg02", 5, 60, 1, 1);
			}
		}
	}
}

void Function_92() //Position: 0x5572 / 21874
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_93(var[] uParam0, int[] iParam1) //Position: 0x5587 / 21895
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam2)
	{
		if (Function_94(&Global_54076, &(uParam0[iVar0])) >= 1,5f && Function_28(&iParam1, 1) >= 2)
		{
			if (&iParam1[0] != "" || !IS_ACTOR_ALIVE(&(iParam1[0])))
			{
				if (&uParam0[iVar0] == &iParam1[0] && &uParam0[iVar0] == &iParam1[1])
				{
					iParam1[0] = &uParam0[iVar0];
					TASK_CLEAR(&(iParam1[0]));
					TASK_MELEE_ATTACK(&(iParam1[0]), &Global_54076, -1.0f);
				}
			}
			else if (&iParam1[1] != "" || !IS_ACTOR_ALIVE(&(iParam1[1])))
			{
				if (&uParam0[iVar0] == &iParam1[0] && &uParam0[iVar0] == &iParam1[1])
				{
					iParam1[1] = &uParam0[iVar0];
					TASK_CLEAR(&(iParam1[1]));
					TASK_MELEE_ATTACK(&(iParam1[1]), &Global_54076, -1.0f);
				}
			}
		}
		iVar0++;
	}
	return;
}

float Function_94(var uParam0, int iParam1) //Position: 0x568F / 22159
{
	var uVar0;
	int iVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &iVar2);
	iVar4 = Function_95(&uVar0, &iVar2);
	return iVar4;
}

float Function_95(struct<2> Param0) //Position: 0x56B0 / 22192
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	iVar2 = VMAG(Var0);
	return iVar2;
}

int Function_96(int iParam0, int[] iParam1) //Position: 0x56CF / 22223
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
		if ((IS_ACTOR_ALIVE(&(iParam1[iVar0])) && !DECOR_CHECK_EXIST(&(iParam1[iVar0]), "UsingGringo")) && !DECOR_CHECK_EXIST(&(iParam1[iVar0]), "Targeted"))
		{
			fVar3 = Function_18(&iParam0, &(iParam1[iVar0]));
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

void Function_97(vector3 vParam0) //Position: 0x5757 / 22359
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_106(&vParam0, 1);
	Function_98(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x577C / 22396
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

int Function_99(var[] uParam0, int iParam1, bool bParam2) //Position: 0x5792 / 22418
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		if (Function_29(&(uParam0[iVar0]), 0))
		{
			if (Function_100(&(uParam0[iVar0]), 1.0f, &bParam2, 1, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_100(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x57E1 / 22497
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

bool Function_101(var[] uParam0, int iParam1, float fParam2) //Position: 0x5801 / 22529
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (IS_ACTOR_VALID(&(uParam0[iVar0])))
		{
			if (Function_18(&(uParam0[iVar0]), &Global_54076) > fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_102(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5840 / 22592
{
}

var Function_103(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x5848 / 22600
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

void Function_104(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x599F / 22943
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
		if (Function_105(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
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

int Function_105(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x5A4A / 23114
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

void Function_106(int iParam0, int iParam1) //Position: 0x5AF0 / 23280
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_107(int iParam0, var uParam1, var uParam2, int[] iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5B01 / 23297
{
	int iVar0;
	float fVar1;
	
	switch (iParam5)
	{
		case 0x00000000:
			iVar0 = Function_96(&iParam0, &iParam3);
			if (iVar0 != 4294967295)
			{
				if (IS_ACTOR_ALIVE(&(iParam3[iVar0])))
				{
					if (Function_28(&iParam3, 1) > (iParam6 / 2))
					{
						DECOR_SET_BOOL(&(iParam3[iVar0]), "Targeted", 1);
					}
					iParam4 = &iParam3[iVar0];
					fVar1 = Function_109(&iParam0);
					AI_SET_WEAPON_MAX_RANGE(&iParam0, (fVar1 * 1,5f));
					MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam4, 1);
					Function_108(&iParam0, &iParam4);
					TASK_PRIORITY_SET(&iParam0, true);
					MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
					iParam5 = 1;
					Function_97(&uParam1, 0.0f);
					break;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_29(&iParam4, 0))
			{
				if (Function_19(&uParam1, fLocal_64) || Function_18(&iParam4, &iParam0) > 8.0f)
				{
					if (Function_28(&iParam3, 1) > 6)
					{
						Function_112(&iParam0, 50.0f, -1.0f, -1.0f);
					}
					else
					{
						Function_112(&iParam0, 40.0f, -1.0f, -1.0f);
					}
					iParam5 = 2;
				}
			}
			else
			{
				iParam5 = 0;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_ALIVE(&iParam4))
			{
				if (GET_LAST_ATTACKER(&iParam4) == &iParam0)
				{
					iParam5 = 0;
					break;
				}
				else
				{
					iParam5 = 0;
				}
			}
			break;
		
		case 0x00000003:
			iVar0 = Function_96(&iParam0, &iParam3);
			if (iVar0 != 4294967295)
			{
				if (Function_29(&(iParam3[iVar0]), 0))
				{
					DECOR_SET_BOOL(&(iParam3[iVar0]), "Targeted", 1);
					iParam4 = &iParam3[iVar0];
					MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam4, 1);
					Function_108(&iParam0, &iParam4);
					iParam5 = 4;
					break;
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	return 0;
}

void Function_108(int iParam0, int iParam1) //Position: 0x5CBC / 23740
{
	var uVar0;
	
	GET_POSITION(&iParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(&iParam0, &iParam1, &uVar0);
	return;
}

var Function_109(int iParam0) //Position: 0x5CD5 / 23765
{
	struct<5> Var0;
	
	if (GET_ACTOR_CURRENT_WEAPON_AI_PARAMETERS(&iParam0, &Var0))
	{
		return StackVal;
	}
	return 0.0f;
}

int Function_110(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5CEF / 23791
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, iParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, iParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_111(int iParam0) //Position: 0x5D4F / 23887
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam0, 0);
	}
	return;
}

void Function_112(int iParam0, float fParam1, float fParam2, float fParam3) //Position: 0x5D6C / 23916
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, 0.0f);
		}
	}
}

void Function_113(bool bParam0) //Position: 0x5DBD / 23997
{
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bParam0, 0);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&bParam0, false);
	AI_SET_ALLOW_ATTACK_HOGTIED_ACTORS(&bParam0, 1);
	return;
}

void Function_114(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x5DED / 24045
{
	var uVar0;
	
	if (Function_122(&uParam0) && !Function_121(&uParam0, 1))
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
	Function_119(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", 1);
	Function_118(&uParam0);
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
	Function_115(&uParam0, &uParam4, &uParam5);
}

void Function_115(var uParam0, int iParam1, bool bParam2) //Position: 0x608A / 24714
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
			Function_116(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_116(var uParam0, int iParam1, bool bParam2) //Position: 0x6147 / 24903
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_191(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_117();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_191(), Var2, Function_117());
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_191(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_117();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_191(), Var0, Function_117());
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

struct<8> Function_117() //Position: 0x6313 / 25363
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_118(int iParam0) //Position: 0x631D / 25373
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

void Function_119(int iParam0) //Position: 0x6354 / 25428
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
	Function_120(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_120(var uParam0, int iParam1) //Position: 0x6712 / 26386
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

bool Function_121(var uParam0, int iParam1) //Position: 0x6735 / 26421
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_122(int iParam0) //Position: 0x677A / 26490
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_123(int iParam0) //Position: 0x679B / 26523
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_121(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_124(struct<65> Param0) //Position: 0x67EA / 26602
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_161(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_159(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_125(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_5(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_161(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_159(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_125(struct<73> Param0) //Position: 0x6BA8 / 27560
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
			Function_158(&Param0 + 8);
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
						uVar0 = Function_157(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_156(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_154(StackVal, &Param0 + 8, Var7, Function_155());
				}
				else
				{
					uVar0 = Function_153(StackVal, &Param0 + 8, Var7, Function_155(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_158(&Param0 + 8);
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
					if (Function_152(bVar11))
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
				Function_151(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_150(&Var7, &uVar5);
				Var3 = Function_150(&Var7, &uVar5);
				if (!Function_149(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_49(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_146(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_142(&Param0);
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
					if (!Function_141(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_140(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_139(Function_139(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_138(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_135(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_134((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_134((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_133(&Var12);
				*(&Param0 + 16) = Function_133(&Var12);
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
				if (!Function_141(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_140(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_141(Function_140(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_139(Function_139(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_135(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_130((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_127(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_127(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_126(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_126(struct<2> Param0) //Position: 0x746F / 29807
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

int Function_127(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x74A6 / 29862
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
								return Function_128(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_128(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_128(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_128(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_128(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_128(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_128(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_128(&Global_11826, &Global_13998, bParam3);
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
								return Function_128(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_128(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_128(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_128(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_128(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_128(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_128(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_128(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_128(&Global_12472, &Global_14954, bParam3);
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
		return Function_128(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_128(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_128(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_128(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_128(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_128(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_128(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_128(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_128(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_128(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_128(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_128(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_128(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_128(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_128(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_128(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_128(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_128(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_128(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_128(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_128(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_128(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_128(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_128(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_128(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_128(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_128(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x7ABC / 31420
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_129(&(Param0[iVar02]), 2))
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

bool Function_129(var uParam0, int iParam1) //Position: 0x7B16 / 31510
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_130(int iParam0) //Position: 0x7B33 / 31539
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
			if (Function_131(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_131(int iParam0) //Position: 0x7B9B / 31643
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_132(&iParam0);
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

var Function_132(var uParam0) //Position: 0x7BD9 / 31705
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

struct<8> Function_133(vector3 vParam0) //Position: 0x7C26 / 31782
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_134(int iParam0, int iParam1) //Position: 0x7C48 / 31816
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

bool Function_135(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x7C7A / 31866
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
	Function_136(4294967295);
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
			else if (Function_95(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_136(int iParam0) //Position: 0x7D56 / 32086
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
						Function_137(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_50(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_137(iVar0);
						}
					}
					else if (Function_50(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_137(iVar0);
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
			Function_137(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_137(int iParam0) //Position: 0x7EC4 / 32452
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

bool Function_138(struct<2> Param0) //Position: 0x7F2C / 32556
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

int Function_139(struct<2> Param0) //Position: 0x7FD1 / 32721
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

bool Function_140(struct<2> Param0) //Position: 0x8020 / 32800
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

bool Function_141(struct<2> Param0) //Position: 0x807B / 32891
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

int Function_142(bool bParam0) //Position: 0x80FA / 33018
{
	float fVar0;
	bool bVar1;
	
	Function_49(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_145(0);
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_143(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_143(struct<33> Param0) //Position: 0x82AC / 33452
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

void Function_144(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x83D8 / 33752
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

void Function_145(float fParam0) //Position: 0x8429 / 33833
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

int Function_146(int iParam0, struct<2> Param1) //Position: 0x8470 / 33904
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_148();
	Function_145(0);
	Function_147(0);
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
		Function_144(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_143(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_147(bool bParam0) //Position: 0x8625 / 34341
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

void Function_148() //Position: 0x86D8 / 34520
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

bool Function_149(vector3 vParam0) //Position: 0x86E7 / 34535
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_150(struct<2> Param0) //Position: 0x86FF / 34559
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_133(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_133(&iVar18), StackVal);
		Function_133(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_133(&iVar21), StackVal);
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
			Function_133(&iVar21);
			Var8 = Function_133(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_133(&iVar18);
			Var8 = Function_133(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_151(struct<2> Param0, struct<5> Param2) //Position: 0x8819 / 34841
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
		if (!Function_149(StackVal, Param2))
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
			if (!Function_149(StackVal, Param2))
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

bool Function_152(bool bParam0) //Position: 0x895C / 35164
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_153(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x8972 / 35186
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
						if (Function_135(&Var5, &fVar4, 0, 0))
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

var Function_154(var uParam0, struct<2> Param1, float fParam3) //Position: 0x8A27 / 35367
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
				if (Function_135(&Var5, &uVar4, 0, 0))
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

var Function_155() //Position: 0x8AB9 / 35513
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

var Function_156(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x8AEA / 35562
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

var Function_157(var uParam0, struct<2> Param1, float fParam3) //Position: 0x8B8C / 35724
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

int Function_158(int iParam0) //Position: 0x8C12 / 35858
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_191());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_191());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_159(var uParam0, int iParam1) //Position: 0x8C48 / 35912
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
	Function_136(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_160(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_160(int iParam0, var uParam1, struct<2> Param2) //Position: 0x8DB2 / 36274
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_161(var uParam0, struct<2> Param1) //Position: 0x8E5A / 36442
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_162(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_162(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x8E88 / 36488
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_163(char* cParam0) //Position: 0x8EAC / 36524
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("0", &cVar8, ""), 4);
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

struct<32> Function_164(char* cParam0) //Position: 0x8F18 / 36632
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_165(struct<2>[] Param0) //Position: 0x8F3A / 36666
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_170();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_169(&(Param0[iVar02]), 8);
		}
		else if (Function_168())
		{
			iVar1 = 1;
			Function_169(&(Param0[iVar02]), 8);
		}
		Function_169(&(Param0[iVar02]), 16);
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
				Function_169(&(Param0[iVar02]), 1);
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
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
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
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
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

void Function_166() //Position: 0x92FC / 37628
{
	if (!Function_167(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_167(int iParam0) //Position: 0x933C / 37692
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_168() //Position: 0x9358 / 37720
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

void Function_169(struct<13> Param0) //Position: 0x9386 / 37766
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_170() //Position: 0x9399 / 37785
{
	if (!Function_167(128))
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

void Function_171() //Position: 0x93DB / 37851
{
	return;
}

var Function_172(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x93E1 / 37857
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
			Function_169(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_169(&(Param0[iVar02]), 8);
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

var Function_173(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x94BD / 38077
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_174(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_169(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_174(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x94FB / 38139
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_169(&(Param0[iVar02]), 4);
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

var Function_175(int iParam0, bool bParam1) //Position: 0x95CA / 38346
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

var Function_176(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x95F1 / 38385
{
	return Function_177(&uParam0, iParam1, &iParam2, 4294967295, &iParam3);
}

var Function_177(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9608 / 38408
{
	return Function_178(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_178(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x9626 / 38438
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
		Function_184();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_183(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_182(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_182(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_181(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_183(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_181(iVar0))
				{
					Function_180();
				}
				Function_179(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_183(iVar1))
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

void Function_179(int iParam0) //Position: 0x991F / 39199
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

void Function_180() //Position: 0x99D3 / 39379
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

bool Function_181(int iParam0) //Position: 0x9A0E / 39438
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

void Function_182(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x9A3B / 39483
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

bool Function_183(int iParam0) //Position: 0x9B96 / 39830
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_184() //Position: 0x9BAD / 39853
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_180();
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
	Function_180();
	return;
}

bool Function_185() //Position: 0x9BF9 / 39929
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_186() //Position: 0x9C0C / 39948
{
	if (Function_187(Global_46949) >= 0)
	{
		return 1;
	}
	if (Function_187(Global_46951) >= 0)
	{
		return 1;
	}
	if (Function_187(Global_46952) >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_187(int iParam0) //Position: 0x9C3D / 39997
{
	if (!Function_188(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_188(int iParam0) //Position: 0x9C57 / 40023
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_189() //Position: 0x9C6E / 40046
{
	if (Global_43787 != 2)
	{
		return 1;
	}
	return 0;
}

var Function_190(bool bParam0) //Position: 0x9C7E / 40062
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

var Function_191() //Position: 0x9C97 / 40087
{
	var uVar0;
	
	return &uVar0;
}

