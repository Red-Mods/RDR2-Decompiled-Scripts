//Decompiled with MagicRDR v1.0
//Function Count : 74
//Statics Count : 558
//Natives Count : 128
//Parameters Count : 2

#region Local Var
	struct<1097> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_275 = 0;
	Function_73("Initializing Escalera Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_276 = 500;
		uLocal_277 = Function_72();
		switch (iLocal_275)
		{
			case 0x00000000:
				if (Function_70())
				{
					bLocal_342 = Function_69(Local_0, "escalara", iScriptParam_0);
					iLocal_275 = 1;
				}
				bLocal_276 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_342))
				{
					iLocal_275 = 2;
				}
				bLocal_276 = false;
				break;
			
			case 0x00000002:
				Function_68(&iLocal_278);
				Function_67(&iLocal_278, &iLocal_281, 4, Local_0.f_244, 4294967295, 4);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_420, 4294967295, 524554);
				Function_67(StackVal, &iLocal_278, &iLocal_281, 5, 4294967295, 0x1000108);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_448, 4294967295, 0x200010a);
				Function_67(StackVal, &iLocal_278, &iLocal_281, 5, 4294967295, 65802);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_12, 4294967295, 65802);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_16, 4294967295, 65794);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_488, 4294967295, 8458);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_352, 4294967295, 778);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_20, 4294967295, 1290);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_472, 4294967295, 4362);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_24, 4294967295, 4194570);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_416, 4294967295, 65802);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_436, 4294967295, 266);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_504, 4294967295, 778);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_536, 4294967295, 65802);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_516, 4294967295, 0x400010a);
				Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_272, 4294967295, 0x1000000);
				Function_65(&Local_343, bLocal_342, "generalhouse03", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_16, 0, 1);
				Function_65(&Local_343, bLocal_342, "generalhouse03", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_16, 0, 1);
				Function_65(&Local_343, bLocal_342, "villa01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "villa01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "blacksmith01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "ncantina01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "ncantina01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "ncantina01", 3, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "doctor01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "gunsmith01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "gunsmith01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "church01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "church01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "whorehouse01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "whorehouse01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "villaPost01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "villaPost01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "villaPost01", 3, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "bullRing01", 1, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				Function_65(&Local_343, bLocal_342, "bullRing01", 3, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				iLocal_544 = Function_65(&Local_343, bLocal_342, "villaPost01", 4, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				if (iLocal_544 <= 0 && iLocal_544 > Local_343)
				{
					Function_64(&(Local_343[iLocal_5445]), 1);
				}
				iLocal_545 = Function_65(&Local_343, bLocal_342, "villaPost01", 5, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				if (iLocal_545 <= 0 && iLocal_545 > Local_343)
				{
					Function_64(&(Local_343[iLocal_5455]), 1);
				}
				iLocal_546 = Function_65(&Local_343, bLocal_342, "villaPost01", 6, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				if (iLocal_546 <= 0 && iLocal_546 > Local_343)
				{
					Function_64(&(Local_343[iLocal_5465]), 1);
				}
				iLocal_547 = Function_65(&Local_343, bLocal_342, "doctor01", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_488, 1, 0);
				if (iLocal_547 <= 0 && iLocal_547 > Local_343)
				{
					Function_63(&(Local_343[iLocal_5475]), 33);
				}
				iLocal_548 = Function_65(&Local_343, bLocal_342, "gunsmith01", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_472, 1, 0);
				if (iLocal_548 <= 0 && iLocal_548 > Local_343)
				{
					Function_63(&(Local_343[iLocal_5485]), 33);
				}
				iLocal_549 = Function_65(&Local_343, bLocal_342, "gunsmith01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_472, 0, 0);
				if (iLocal_549 <= 0 && iLocal_549 > Local_343)
				{
					Function_63(&(Local_343[iLocal_5495]), 33);
				}
				if (Function_59(36, 0) && !Function_59(41, 0))
				{
					Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_264, 4294967295, 0x4000018a);
					Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_80, 4294967295, 136);
				}
				else
				{
					Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_264, 4294967295, 0x4000010a);
					Function_67(&iLocal_278, &iLocal_281, 5, Local_0.f_80, 4294967295, 8);
				}
				if (!Function_59(26, 0))
				{
					iLocal_550 = Function_65(&Local_343, bLocal_342, "villaWall04", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_550 <= 0 && iLocal_550 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5505]), 63);
					}
					iLocal_551 = Function_65(&Local_343, bLocal_342, "villaWall04", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_551 <= 0 && iLocal_551 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5515]), 63);
					}
					iLocal_552 = Function_65(&Local_343, bLocal_342, "villaWall02", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_552 <= 0 && iLocal_552 > Local_343)
					{
						Function_58(Local_343[iLocal_5525], 1);
					}
					iLocal_553 = Function_65(&Local_343, bLocal_342, "villaWall02", 4, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_553 <= 0 && iLocal_553 > Local_343)
					{
						Function_58(Local_343[iLocal_5535], 1);
					}
					iLocal_554 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_554 <= 0 && iLocal_554 > Local_343)
					{
						Function_58(Local_343[iLocal_5545], 1);
					}
					iLocal_555 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_555 <= 0 && iLocal_555 > Local_343)
					{
						Function_58(Local_343[iLocal_5555], 1);
					}
				}
				else if ((Function_59(29, 0) && !Function_59(35, 0)) && !Function_59(33, 0))
				{
					iLocal_550 = Function_65(&Local_343, bLocal_342, "villaWall04", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_550 <= 0 && iLocal_550 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5505]), 63);
					}
					iLocal_551 = Function_65(&Local_343, bLocal_342, "villaWall04", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_551 <= 0 && iLocal_551 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5515]), 63);
					}
					iLocal_552 = Function_65(&Local_343, bLocal_342, "villaWall02", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_552 <= 0 && iLocal_552 > Local_343)
					{
						Function_58(Local_343[iLocal_5525], 1);
					}
					iLocal_553 = Function_65(&Local_343, bLocal_342, "villaWall02", 4, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_553 <= 0 && iLocal_553 > Local_343)
					{
						Function_58(Local_343[iLocal_5535], 1);
					}
					iLocal_554 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_554 <= 0 && iLocal_554 > Local_343)
					{
						Function_58(Local_343[iLocal_5545], 1);
					}
					iLocal_555 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_555 <= 0 && iLocal_555 > Local_343)
					{
						Function_58(Local_343[iLocal_5555], 1);
					}
				}
				else if (((Function_59(29, 0) && Function_59(35, 0)) && Function_59(33, 0)) && !Function_59(36, 0))
				{
					iLocal_550 = Function_65(&Local_343, bLocal_342, "villaWall04", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_550 <= 0 && iLocal_550 > Local_343)
					{
						Function_57(Local_343[iLocal_5505], 1);
					}
					iLocal_551 = Function_65(&Local_343, bLocal_342, "villaWall04", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_551 <= 0 && iLocal_551 > Local_343)
					{
						Function_57(Local_343[iLocal_5515], 1);
					}
					iLocal_552 = Function_65(&Local_343, bLocal_342, "villaWall02", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_552 <= 0 && iLocal_552 > Local_343)
					{
						Function_57(Local_343[iLocal_5525], 1);
					}
					iLocal_553 = Function_65(&Local_343, bLocal_342, "villaWall02", 4, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_553 <= 0 && iLocal_553 > Local_343)
					{
						Function_57(Local_343[iLocal_5535], 1);
					}
					iLocal_554 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_554 <= 0 && iLocal_553 > Local_343)
					{
						Function_57(Local_343[iLocal_5545], 1);
					}
					iLocal_555 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_555 <= 0 && iLocal_553 > Local_343)
					{
						Function_57(Local_343[iLocal_5555], 1);
					}
				}
				else if (Function_59(36, 0))
				{
					iLocal_550 = Function_65(&Local_343, bLocal_342, "villaWall04", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_550 <= 0 && iLocal_550 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5505]), 63);
					}
					iLocal_551 = Function_65(&Local_343, bLocal_342, "villaWall04", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_551 <= 0 && iLocal_551 > Local_343)
					{
						Function_63(&(Local_343[iLocal_5515]), 63);
					}
					iLocal_552 = Function_65(&Local_343, bLocal_342, "villaWall02", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_552 <= 0 && iLocal_552 > Local_343)
					{
						Function_58(Local_343[iLocal_5525], 1);
					}
					iLocal_553 = Function_65(&Local_343, bLocal_342, "villaWall02", 4, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_553 <= 0 && iLocal_553 > Local_343)
					{
						Function_58(Local_343[iLocal_5535], 1);
					}
					iLocal_554 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_554 <= 0 && iLocal_554 > Local_343)
					{
						Function_58(Local_343[iLocal_5545], 1);
					}
					iLocal_555 = Function_65(&Local_343, bLocal_342, "villaPost01props01", 3, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
					if (iLocal_555 <= 0 && iLocal_555 > Local_343)
					{
						Function_58(Local_343[iLocal_5555], 1);
					}
				}
				iLocal_275 = 3;
				bLocal_276 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[iScriptParam_0]), 16);
				Function_55("Finished Initializing Escalera Volumes", 5.0f);
				iLocal_275 = 4;
				bLocal_276 = false;
				break;
			
			case 0x00000004:
				Function_17(&iLocal_278, &iLocal_281, uLocal_277, iScriptParam_0);
				Function_12(&Local_343, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_276 = false;
				break;
		}
		WAIT(bLocal_276);
	}
	Function_4(&iLocal_278, &iLocal_281);
	Function_3(&Local_343);
	Function_2();
	Function_1(&(Global_29008[iScriptParam_0]), 16);
	Function_55("Unloaded Escalera Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xF2E / 3886
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xF45 / 3909
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0xF50 / 3920
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xFAA / 4010
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_11(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(iParam1[iVar03], 4);
		}
		if (Function_11(iParam1[iVar03], 8))
		{
			Function_5(0, 0, 30);
			Function_10(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1002 / 4098
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_6(Global_16524, bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10DF / 4319
{
	int iVar0;
	
	Function_9(bParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_7();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0x1258 / 4696
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x1264 / 4708
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

void Function_9(int iParam0) //Position: 0x12AA / 4778
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

void Function_10(var uParam0, int iParam1) //Position: 0x12F0 / 4848
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x130A / 4874
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x1327 / 4903
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_16();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_15((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_14(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_72(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_13(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_14(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_72(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_72(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_14(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x16F3 / 5875
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x1704 / 5892
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x171E / 5918
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0x1730 / 5936
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x1739 / 5945
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_18(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x17BA / 6074
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(uParam0))
	{
		return 0;
	}
	Function_1(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *uParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*uParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_51(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_50(uParam0, 8);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(uParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_50(uParam0, 4);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(uParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_47(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_16())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_50(uParam0, 16);
								Function_39(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 16))
					{
						Function_10(uParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_11(uParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_38(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_37(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_50(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_19(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_19(int iParam0) //Position: 0x1BD3 / 7123
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_38(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_24(473, 1, 0, 0);
		iVar0 = Function_23(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_24(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_24(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_24(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_22(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_22(7, 30);
	}
	if (Function_21(473) <= Function_20(473))
	{
		if (!Function_16())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_20(int iParam0) //Position: 0x1CD2 / 7378
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1D0F / 7439
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1D48 / 7496
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_23(int iParam0) //Position: 0x1DAF / 7599
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1E07 / 7687
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2027 / 8231
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_20(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x2654 / 9812
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x265C / 9820
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x266D / 9837
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x2762 / 10082
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x277B / 10107
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x27E0 / 10208
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x27F2 / 10226
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x2922 / 10530
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x2931 / 10545
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2ACB / 10955
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

void Function_36(var uParam0, int iParam1) //Position: 0x2CE5 / 11493
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2CF2 / 11506
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2D18 / 11544
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2D34 / 11572
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_42(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	iVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(iVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(iVar3, iParam1);
		SET_CRIME_VICTIM(iVar3, bParam3);
		SET_CRIME_CRIMINAL(iVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(iVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_40();
		}
		SET_CRIME_FACTION(StackVal, iVar3);
		SET_CRIME_TALLIED(iVar3, 0);
		SET_CRIME_COUNTER(iVar3, 1);
		SET_CRIME_WORLD_REGION(iVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(iVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(iVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(iVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return iVar3;
}

void Function_40() //Position: 0x2FC4 / 12228
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_41(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		iVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(iVar3))
		{
			SET_CRIME_WITNESSED(iVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_41(bool bParam0, bool bParam1) //Position: 0x3027 / 12327
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_42(bool bParam0) //Position: 0x3056 / 12374
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_47(2048))
	{
		return 0;
	}
	if (Function_16() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_43(int iParam0) //Position: 0x30CC / 12492
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x30DD / 12509
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_45(int iParam0) //Position: 0x30F6 / 12534
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x310C / 12556
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x3121 / 12577
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x313F / 12607
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_49(int iParam0) //Position: 0x31E3 / 12771
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x31F9 / 12793
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x320A / 12810
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x327C / 12924
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x32A1 / 12961
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x32BE / 12990
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x32DA / 13018
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x3318 / 13080
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x3327 / 13095
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_58(bool bParam0, bool bParam1) //Position: 0x3378 / 13176
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

bool Function_59(int iParam0, bool bParam1) //Position: 0x33CC / 13260
{
	int iVar0;
	
	iVar0 = Function_61(iParam0);
	if (!Function_60(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_60(int iParam0) //Position: 0x3409 / 13321
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_61(int iParam0) //Position: 0x3420 / 13344
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_62(int iParam0) //Position: 0x343A / 13370
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_63(var uParam0, int iParam1) //Position: 0x3450 / 13392
{
	Function_13(uParam0, 2);
	uParam0->f_4 = iParam1;
	return;
}

void Function_64(var uParam0, bool bParam1) //Position: 0x3462 / 13410
{
	if (bParam1)
	{
		Function_13(uParam0, 2049);
	}
	else
	{
		Function_14(uParam0, 2048);
	}
	return;
}

int Function_65(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x3480 / 13440
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_66(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_13(uParam0[iVar05], 1);
	}
	Function_13(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_13(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_13(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_66(bool bParam0) //Position: 0x355F / 13663
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		if (!IS_DOOR_VALID((*bParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_67(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x358D / 13709
{
	if (*iParam0 >= (*iParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	iParam1[*iParam03]->f_4 = bParam3;
	(*iParam1)[*iParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*iParam0++;
}

void Function_68(int iParam0) //Position: 0x3668 / 13928
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_69(bool bParam0, bool bParam1, int iParam2) //Position: 0x3677 / 13943
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_70() //Position: 0x3696 / 13974
{
	var uVar0;
	
	Function_71(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Escalera_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Escalera_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_stable", 2, -4267,259f, 19,39853f, 4447,987f, 0.0f, 34,82648f, 0.0f, 13,38025f, 4,941638f, 10,51609f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_shack_sm", 2, -4244,821f, 23,43998f, 4371,434f, 0.0f, 20,70693f, 0.0f, 9,31706f, 4,580968f, 5,333848f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_shack_med", 2, -4267,038f, 22,43778f, 4397,988f, 0.0f, -1,951884f, 0.0f, 13,13086f, 5,630255f, 7,289723f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_house_player", 2, -4329,898f, 24,60545f, 4459,245f, 0.0f, 32,09788f, 0.0f, 7,477418f, 6,46971f, 11,22011f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_whorehouse", 2, -4312,049f, 31,9447f, 4377,159f, 0.0f, 28,98291f, 0.0f, 8,206093f, 6,170606f, 10,8731f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_church", 2, -4329,144f, 28,11459f, 4409,81f, 0.0f, -22,46498f, 0.0f, 11,47036f, 5,412824f, 11,58299f);
	Local_0.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_mansion_grnds_set");
	(*&Local_0 + 28)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds", 2, -4349,006f, 43,22042f, 4356,615f, 0.0f, 4,235481f, 0.0f, 49,18926f, 10,66269f, 12,30656f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[0]);
	(*&Local_0 + 28)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds2", 2, -4350,99f, 46,27676f, 4341,108f, 0.0f, -0,6092508f, 0.0f, 33,2895f, 4,269508f, 5,596886f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[1]);
	(*&Local_0 + 28)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds4", 3, -4354,73f, 44,75412f, 4346,337f, 0.0f, -1,165959f, 0.0f, 12,78028f, 2,993473f, 9,040867f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[2]);
	(*&Local_0 + 28)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds5", 2, -4332,224f, 45,29765f, 4344,691f, 0.0f, 0.0f, 0.0f, 15,68796f, 3,135142f, 3,132881f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[3]);
	(*&Local_0 + 28)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds6", 2, -4358,441f, 43,99646f, 4318,179f, 0.0f, 0.0f, 0.0f, 17,7116f, 7,332778f, 6,184252f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[4]);
	(*&Local_0 + 28)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds7", 2, -4356,008f, 42,63873f, 4311,824f, 0.0f, 0.0f, 0.0f, 22,44259f, 7,445648f, 5,463752f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[5]);
	(*&Local_0 + 28)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds8", 2, -4365,019f, 39,04513f, 4306,357f, 0.0f, 0.0f, 0.0f, 3,942281f, 5,389917f, 8,954739f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[6]);
	(*&Local_0 + 28)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds9", 2, -4350,344f, 41,52211f, 4315,165f, 0.0f, 0.0f, 0.0f, 34,77551f, 9,832869f, 14,03065f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[7]);
	(*&Local_0 + 28)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds16", 2, -4366,493f, 44,13532f, 4331,217f, 0.0f, 0.0f, 0.0f, 2,322235f, 4,733295f, 18,53592f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[8]);
	(*&Local_0 + 28)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds17", 2, -4360,075f, 44,29683f, 4324f, 0.0f, 0.0f, 0.0f, 13,46099f, 4,75444f, 3,932355f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[9]);
	(*&Local_0 + 28)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds18", 2, -4379,275f, 42,63437f, 4361,915f, 0.0f, 24,2056f, 0.0f, 8,466811f, 10,66269f, 11,60019f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[10]);
	(*&Local_0 + 28)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_grounds19", 2, -4372,069f, 36,94319f, 4274,356f, 0.0f, 0.0f, 0.0f, 8,448764f, 9,832869f, 14,03065f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 28)[11]);
	Local_0.f_156 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_streets_set");
	(*&Local_0 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street3", 2, -4300,426f, 24,12488f, 4411,384f, 0.0f, -53,43549f, 0.0f, 13,90111f, 6,550866f, 18,99853f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[0]);
	(*&Local_0 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street5", 2, -4281,004f, 20,15587f, 4439,794f, 0.0f, -50,79865f, 0.0f, 8,004083f, 4,591478f, 20,15537f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[1]);
	(*&Local_0 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street11", 2, -4312,493f, 26,83917f, 4387,229f, 0.0f, 29,33883f, 0.0f, 62,81261f, 4,963216f, 4,256499f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[2]);
	(*&Local_0 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street12", 2, -4288,432f, 18,07058f, 4447,857f, 0.0f, -5,254051f, 0.0f, 15,64275f, 6,516308f, 5,033622f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[3]);
	(*&Local_0 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street16", 3, -4298,151f, 20,09574f, 4449,944f, 0.0f, 8,499175f, 0.0f, 5,989166f, 2,895216f, 9,844782f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[4]);
	(*&Local_0 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_town_night_01", 3, -4347,473f, 25,74602f, 4435,072f, 0.0f, 20.0f, 0.0f, 4,647288f, 2,226583f, 4,362153f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[5]);
	(*&Local_0 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_town_night_03", 3, -4272,096f, 22,94232f, 4396,237f, 0.0f, 69,98267f, 0.0f, 5,696298f, 5,696298f, 12,27775f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[6]);
	(*&Local_0 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_town_night_04", 3, -4246,09f, 23,90442f, 4372,063f, 0.0f, 20.0f, 0.0f, 5,696298f, 5,696298f, 5,696298f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[7]);
	(*&Local_0 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street17", 2, -4312,898f, 28,14938f, 4405,233f, 0.0f, 36,53682f, 0.0f, 8,284896f, 2,978309f, 5,853208f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[8]);
	(*&Local_0 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street23", 2, -4295,242f, 31,32895f, 4392,286f, 0.0f, 30,79081f, 0.0f, 9,564462f, 3,377842f, 2,477308f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[9]);
	(*&Local_0 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street22", 2, -4300,958f, 31,14355f, 4390,278f, 0.0f, 29,76625f, 0.0f, 1,680597f, 3,43404f, 6,623867f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[10]);
	(*&Local_0 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street21", 2, -4306,933f, 31,5274f, 4390,891f, 0.0f, 29,77303f, 0.0f, 9,253347f, 3,800457f, 2,020292f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[11]);
	(*&Local_0 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street20", 2, -4314,939f, 32,09445f, 4384,506f, 0.0f, 29,88078f, 0.0f, 1,998773f, 4,833694f, 16,57427f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[12]);
	(*&Local_0 + 84)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street19", 2, -4299,384f, 32,85699f, 4375,634f, 0.0f, 30,4637f, 0.0f, 2,6044f, 3,800457f, 4,174544f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[13]);
	(*&Local_0 + 84)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street18", 2, -4282,218f, 23,47477f, 4388,37f, 0.0f, 30,26113f, 0.0f, 7,513713f, 4,570604f, 3,453721f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[14]);
	(*&Local_0 + 84)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street24", 2, -4353,481f, 30,8873f, 4411,096f, 0.0f, 4,061805f, 0.0f, 6,902004f, 3,6254f, 1,936845f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[15]);
	(*&Local_0 + 84)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_street25", 2, -4349,073f, 30,8873f, 4408,313f, 0.0f, 1,24426f, 0.0f, 1,997512f, 3,6254f, 7,090909f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 84)[16]);
	Local_0.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_chickens_set");
	(*&Local_0 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks01", 3, -4277,403f, 19,44716f, 4460,196f, 0.0f, 41,07115f, 0.0f, 4,195096f, 4,289063f, 4,704233f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[0]);
	(*&Local_0 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks02", 3, -4328,883f, 24,94934f, 4434,323f, 0.0f, 32,40672f, 0.0f, 9,175081f, 5,252069f, 6,240525f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[1]);
	(*&Local_0 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks03", 3, -4281,38f, 16,71091f, 4435,388f, 0.0f, 41,07115f, 0.0f, 18,5116f, 4,289063f, 9,975072f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[2]);
	(*&Local_0 + 160)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks05", 3, -4287,458f, 23,03888f, 4405,496f, 0.0f, 92,11543f, 0.0f, 4,615218f, 4,289063f, 8,439607f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[3]);
	(*&Local_0 + 160)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks06", 3, -4341,462f, 28,26401f, 4408.0f, 0.0f, 189,7346f, 0.0f, 3,660419f, 2,795264f, 7,556119f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[4]);
	(*&Local_0 + 160)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_trap_chicks07", 3, -4369,184f, 32,2837f, 4410,078f, 0.0f, 20.0f, 0.0f, 5,883089f, 2,941675f, 6,369331f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 160)[5]);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_goats_set");
	(*&Local_0 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_goats1", 3, -4323,684f, 25,03005f, 4445,524f, 0.0f, 37,59151f, 0.0f, 7,967511f, 4,992918f, 10,29833f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 192)[0]);
	(*&Local_0 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_goats2", 3, -4269,027f, 22,82394f, 4396,511f, 0.0f, 20.0f, 0.0f, 12,09985f, 4,071661f, 11,57585f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 192)[1]);
	(*&Local_0 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_goats3", 3, -4275,722f, 27,46273f, 4369,616f, 0.0f, 34,95853f, 0.0f, 10,06355f, 4,071661f, 4,031206f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 192)[2]);
	(*&Local_0 + 192)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_goats4", 3, -4347,318f, 25,26793f, 4446,708f, 0.0f, -16,98521f, 0.0f, 5,078985f, 3,815647f, 7,742615f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 192)[3]);
	(*&Local_0 + 192)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_goats5", 3, -4260,016f, 18,4535f, 4441,755f, 0.0f, 33,24678f, 0.0f, 2,045762f, 4,111716f, 4,04452f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 192)[4]);
	Local_0.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_birds_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds_04", 3, -4280.0f, 13,80741f, 4441,861f, 0.0f, 20.0f, 0.0f, 35,65415f, 17,92159f, 35,65415f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 220)[0]);
	(*&Local_0 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds_01", 3, -4344,307f, 27,94712f, 4325,537f, 0.0f, 6,992178f, 0.0f, 92,66156f, 25,98933f, 91,99322f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 220)[1]);
	(*&Local_0 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds_02", 3, -4341,872f, 21,61056f, 4448,801f, 0.0f, 20.0f, 0.0f, 35,65415f, 17,92159f, 35,65415f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 220)[2]);
	(*&Local_0 + 220)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds_03", 3, -4292,764f, 17,07368f, 4403,691f, 0.0f, 20.0f, 0.0f, 35,65415f, 17,92159f, 21,65944f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 220)[3]);
	Local_0.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_region", 3, -4336,111f, 35,37071f, 4369,008f, 0.0f, 30.0f, 0.0f, 90.0f, 50.0f, 130.0f);
	Local_0.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_mansion_set");
	(*&Local_0 + 248)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion1", 2, -4359,139f, 43,68315f, 4330,115f, 0.0f, 0.0f, 0.0f, 10,69277f, 5,527383f, 6,583543f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[0]);
	(*&Local_0 + 248)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion2", 2, -4343,664f, 44,93644f, 4326,755f, 0.0f, 0.0f, 0.0f, 18,07751f, 5,940547f, 7,214034f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[1]);
	(*&Local_0 + 248)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion3", 2, -4343,662f, 44,17587f, 4333,805f, 0.0f, 0.0f, 0.0f, 4,186317f, 3,789164f, 6,328987f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 248)[2]);
	Local_0.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_duelStayOut", 2, -4296,827f, 22,38285f, 4406,034f, 0.0f, -29,6633f, 0.0f, 13,73523f, 7,425228f, 9,432426f);
	Local_0.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_herd", 2, -4361,514f, 38,9896f, 4279,007f, 0.0f, 0.0f, 0.0f, 22,55995f, 17,79327f, 35,00778f);
	Local_0.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_coral", 3, -4336,917f, 36,58512f, 4282,47f, 0.0f, -2,697187f, 0.0f, 11,97169f, 3,265406f, 9,67456f);
	Local_0.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_stable", 2, -4315,892f, 34,94909f, 4296,187f, 0.0f, 0.0f, 0.0f, 11,33789f, 4,081092f, 7,739824f);
	Local_0.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_mansion_stands", 2, -4335,935f, 38,55129f, 4302,379f, 0.0f, 0.0f, 0.0f, 17,82498f, 5,286415f, 7,478785f);
	Local_0.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_mansion_animals_set");
	(*&Local_0 + 288)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_animals1", 3, -4391,885f, 38,89531f, 4332,65f, 0.0f, 20.0f, 0.0f, 24,63327f, 11,28139f, 17,43324f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 288)[0]);
	(*&Local_0 + 288)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_animals2", 3, -4324,474f, 43,85611f, 4315,548f, 0.0f, 20.0f, 0.0f, 8,668767f, 6,247503f, 8,668767f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 288)[1]);
	(*&Local_0 + 288)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_animals3", 2, -4319,76f, 41,84449f, 4337,45f, 0.0f, 0.0f, 0.0f, 7,832994f, 5,935623f, 28,37858f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 288)[2]);
	Local_0.f_320 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_cell_set");
	(*&Local_0 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cell_01", 2, -4358,013f, 32,0137f, 4379,383f, 0.0f, 5,489073f, 0.0f, 2,48468f, 4,629098f, 11,9451f);
	ADD_TO_VOLUME_SET(Local_0.f_320, (*&Local_0 + 308)[0]);
	(*&Local_0 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cell_02", 2, -4355,033f, 31,80708f, 4383,049f, 0.0f, 4,218038f, 0.0f, 3,734768f, 5,013413f, 3,701885f);
	ADD_TO_VOLUME_SET(Local_0.f_320, (*&Local_0 + 308)[1]);
	Local_0.f_340 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_jail_set");
	(*&Local_0 + 324)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_jail_01", 2, -4354,156f, 31,61466f, 4372,506f, 0.0f, 4,245905f, 0.0f, 6,012289f, 5,51573f, 4,305815f);
	ADD_TO_VOLUME_SET(Local_0.f_340, (*&Local_0 + 324)[0]);
	(*&Local_0 + 324)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_jail_02", 2, -4355,086f, 31,61466f, 4377,382f, 0.0f, 4,70227f, 0.0f, 2,877953f, 5,51573f, 7,090989f);
	ADD_TO_VOLUME_SET(Local_0.f_340, (*&Local_0 + 324)[1]);
	(*&Local_0 + 324)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_jail_03", 2, -4356,977f, 31,61466f, 4371,952f, 0.0f, 4,245905f, 0.0f, 6,012289f, 5,51573f, 2,603951f);
	ADD_TO_VOLUME_SET(Local_0.f_340, (*&Local_0 + 324)[2]);
	Local_0.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_cantina_set");
	(*&Local_0 + 344)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cantina10", 2, -4292,751f, 27,66521f, 4386,064f, 0.0f, 30,67461f, 0.0f, 17,87438f, 4,006684f, 11,32041f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 344)[0]);
	Local_0.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nescv_null", 3, -4332,404f, 30,11765f, 4367,112f, 0.0f, 20.0f, 0.0f, 85,66031f, 24,80309f, 120,4857f);
	Local_0.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_merchant", 2, -4296,51f, 18,78425f, 4435,539f, 0.0f, -51,13494f, 0.0f, 4,913551f, 7,797821f, 4,27949f);
	Local_0.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_cantina_exterior_set");
	(*&Local_0 + 364)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cantina_exterior_01", 2, -4292,179f, 28,12161f, 4395,584f, 0.0f, 29,41659f, 0.0f, 9,193122f, 3,84573f, 4,632034f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 364)[0]);
	(*&Local_0 + 364)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cantina_exterior_02", 2, -4289,889f, 31,43037f, 4384,39f, 0.0f, 30,0945f, 0.0f, 10,19531f, 3,84573f, 10,24821f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 364)[1]);
	(*&Local_0 + 364)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cantina_exterior_03", 2, -4282,726f, 28,12301f, 4382,462f, 0.0f, -59,63307f, 0.0f, 13,16091f, 3,399215f, 2,644361f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 364)[2]);
	(*&Local_0 + 364)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_cantina_exterior_04", 2, -4283,965f, 28,12161f, 4389,187f, 0.0f, -149,8622f, 0.0f, 10,90695f, 3,84573f, 2,386087f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 364)[3]);
	Local_0.f_400 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_slums_set");
	(*&Local_0 + 388)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_slums_01", 2, -4356,618f, 32,63358f, 4442,609f, 0.0f, -55,18805f, 0.0f, 6,489566f, 10,31759f, 11,9451f);
	ADD_TO_VOLUME_SET(Local_0.f_400, (*&Local_0 + 388)[0]);
	(*&Local_0 + 388)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_slums_02", 2, -4353,41f, 26,24759f, 4432,738f, 0.0f, -0,2525224f, 0.0f, 11,28116f, 22,04029f, 16,67489f);
	ADD_TO_VOLUME_SET(Local_0.f_400, (*&Local_0 + 388)[1]);
	Local_0.f_416 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_gaurdsbooth_set");
	(*&Local_0 + 404)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_gaurdsbooth_01", 2, -4357,071f, 38,28051f, 4372,089f, 0.0f, 4,828046f, 0.0f, 6,068132f, 8,775215f, 25,35933f);
	ADD_TO_VOLUME_SET(Local_0.f_416, (*&Local_0 + 404)[0]);
	(*&Local_0 + 404)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_gaurdsbooth_02", 2, -4335,112f, 32,21043f, 4382,789f, 0.0f, 2,475469f, 0.0f, 15,27985f, 4,689213f, 2,747173f);
	ADD_TO_VOLUME_SET(Local_0.f_416, (*&Local_0 + 404)[1]);
	Local_0.f_420 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_blacksmith", 2, -4287,325f, 19,06578f, 4455,266f, 0.0f, -94,70093f, 0.0f, 7,177554f, 4,21707f, 9,070653f);
	Local_0.f_436 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_gaurdstower_set");
	(*&Local_0 + 424)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_gaurdstower_01", 2, -4322,529f, 44,37113f, 4360,316f, 0.0f, -0,4297826f, 0.0f, 7,417058f, 10,08406f, 7,546127f);
	ADD_TO_VOLUME_SET(Local_0.f_436, (*&Local_0 + 424)[0]);
	(*&Local_0 + 424)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_gaurdstower_02", 2, -4357,541f, 42,92591f, 4365,904f, 0.0f, 3,906137f, 0.0f, 6,820062f, 8,819748f, 7,220263f);
	ADD_TO_VOLUME_SET(Local_0.f_436, (*&Local_0 + 424)[1]);
	Local_0.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_market_set");
	(*&Local_0 + 440)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_market_02", 2, -4287,953f, 18,21172f, 4432,596f, 0.0f, -51,13494f, 0.0f, 10,04956f, 8,331608f, 20,9527f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 440)[0]);
	Local_0.f_452 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_fff", 2, -4275,621f, 18,148f, 4453,366f, 0.0f, 35,29165f, 0.0f, 5,042478f, 8,401946f, 6,854197f);
	Local_0.f_456 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_liarsdice", 3, -4289,072f, 27,53466f, 4380,791f, 0.0f, 20.0f, 0.0f, 2,706349f, 1,64002f, 2,634037f);
	Local_0.f_460 = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_toughGuys", 3, -4291,468f, 28,09845f, 4388,521f, 0.0f, 20.0f, 0.0f, 2,775224f, 1,491449f, 2,572878f);
	Local_0.f_472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_gunsmith_set");
	(*&Local_0 + 464)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_gunsmith_01", 2, -4317,001f, 28,50505f, 4399,281f, 0.0f, 36,11814f, 0.0f, 8,288177f, 4,520738f, 7,242889f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 464)[0]);
	Local_0.f_488 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_doctor_office_set");
	(*&Local_0 + 476)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_doctor_01", 2, -4314,157f, 23,61385f, 4417,431f, 0.0f, 36,5887f, 0.0f, 7,234996f, 5,746381f, 7,099365f);
	ADD_TO_VOLUME_SET(Local_0.f_488, (*&Local_0 + 476)[0]);
	(*&Local_0 + 476)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_doctor_02", 2, -4311,881f, 24,66318f, 4414,003f, 0.0f, 36,5887f, 0.0f, 0,2927533f, 1,599172f, 2,976604f);
	ADD_TO_VOLUME_SET(Local_0.f_488, (*&Local_0 + 476)[1]);
	Local_0.f_504 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_bar_set");
	(*&Local_0 + 492)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_building_02", 2, -4293,287f, 25,59168f, 4386,154f, 0.0f, 29,38348f, 0.0f, 20,33139f, 18,05088f, 12,52254f);
	ADD_TO_VOLUME_SET(Local_0.f_504, (*&Local_0 + 492)[0]);
	(*&Local_0 + 492)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_building_04", 2, -4308,29f, 27,71786f, 4378,653f, 0.0f, 29,38348f, 0.0f, 16,46486f, 18,05088f, 21,004f);
	ADD_TO_VOLUME_SET(Local_0.f_504, (*&Local_0 + 492)[1]);
	Local_0.f_516 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_bunkhouse_set");
	(*&Local_0 + 508)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_bunkhouse_01", 2, -4354,29f, 28,85424f, 4405,618f, 0.0f, 0.0f, 0.0f, 9,428194f, 10,65013f, 9,415748f);
	ADD_TO_VOLUME_SET(Local_0.f_516, (*&Local_0 + 508)[0]);
	Local_0.f_536 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "escv_house_set");
	(*&Local_0 + 520)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_house_08", 2, -4329,215f, 42,47079f, 4334,165f, 0.0f, -0,3231021f, 0.0f, 10,98457f, 18,05088f, 18,57778f);
	ADD_TO_VOLUME_SET(Local_0.f_536, (*&Local_0 + 520)[0]);
	(*&Local_0 + 520)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_house_09", 2, -4343,546f, 43,32122f, 4329,931f, 0.0f, -0,3231021f, 0.0f, 21,46405f, 18,05088f, 18,57778f);
	ADD_TO_VOLUME_SET(Local_0.f_536, (*&Local_0 + 520)[1]);
	(*&Local_0 + 520)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "escv_house_010", 2, -4355,264f, 43,32122f, 4331,595f, 0.0f, -0,3231021f, 0.0f, 21,46405f, 18,05088f, 12,15581f);
	ADD_TO_VOLUME_SET(Local_0.f_536, (*&Local_0 + 520)[2]);
	CREATE_POINT_IN_LAYOUT(Local_0, "escf_report_crime", -4349,156f, 30,1f, 4387,117f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_jail_leave_start", -4345,331f, 30,159f, 4376,899f, 0.0f, 180.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_jail_leave_end", -4342,732f, 30,118f, 4381,589f, 0.0f, 198,3f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_jail_sit", -4355,349f, 30,16f, 4384,089f, 0.0f, 360,8713f, 0.0f);
	*(&Local_0 + 540) = { -4336,354f, 30,189f, 4382,037f };
	*(&Local_0 + 540 + 12) = { 0.0f, 6,343981f, 0.0f };
	Local_0.f_564 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_merc_giver", -4336,354f, 30,189f, 4382,037f, 0.0f, 6,343981f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_lawspawn_cam", -4347,416f, 30,83f, 4370,966f, -0,95f, 0,134f, 0,281f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_law_spawn", -4352,477f, 30,159f, 4371,556f, 0.0f, 271,122f, 0.0f);
	*(&Local_0 + 568) = { -4291,712f, 22,019f, 4411,935f };
	*(&Local_0 + 568 + 12) = { 0.0f, 32,379f, 0.0f };
	Local_0.f_592 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_playerDuel1", -4291,712f, 22,019f, 4411,935f, 0.0f, 32,379f, 0.0f);
	*(&Local_0 + 596) = { -4295,746f, 22,211f, 4404,816f };
	*(&Local_0 + 596 + 12) = { 0.0f, 206,075f, 0.0f };
	Local_0.f_620 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_enDuel1", -4295,746f, 22,211f, 4404,816f, 0.0f, 206,075f, 0.0f);
	*(&Local_0 + 624) = { -4367,358f, 30,354f, 4395,463f };
	*(&Local_0 + 624 + 12) = { 0.0f, 283,026f, 0.0f };
	Local_0.f_648 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_playerDuel2", -4367,358f, 30,354f, 4395,463f, 0.0f, 283,026f, 0.0f);
	*(&Local_0 + 652) = { -4359,254f, 30,098f, 4392,85f };
	*(&Local_0 + 652 + 12) = { 0.0f, 99,893f, 0.0f };
	Local_0.f_676 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_enDuel2", -4359,254f, 30,098f, 4392,85f, 0.0f, 99,893f, 0.0f);
	*(&Local_0 + 680) = { -4371,927f, 38,944f, 4310,245f };
	*(&Local_0 + 680 + 12) = { 0.0f, 183,848f, 0.0f };
	Local_0.f_704 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_playerDuel3", -4371,927f, 38,944f, 4310,245f, 0.0f, 183,848f, 0.0f);
	*(&Local_0 + 708) = { -4371,883f, 39,214f, 4318,49f };
	*(&Local_0 + 708 + 12) = { 0.0f, 4,124742f, 0.0f };
	Local_0.f_732 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_enDuel3", -4371,883f, 39,214f, 4318,49f, 0.0f, 4,124742f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esvf_jail_leave_end1", -4355,299f, 30,159f, 4372,061f, 0.0f, 198,3f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "escf_cell_leave_cop", -4356,091f, 30,159f, 4380,156f, 0.0f, 187,798f, 0.0f);
	*(&Local_0 + 736) = { -4287,021f, 18,02942f, 4455,931f };
	*(&Local_0 + 736 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_760 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_blacksmith", -4287,021f, 18,02942f, 4455,931f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 764) = { -4329,538f, 22,12138f, 4459,181f };
	*(&Local_0 + 764 + 12) = { 0.0f, -57,35551f, 0.0f };
	Local_0.f_788 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_house", -4329,538f, 22,12138f, 4459,181f, 0.0f, -57,35551f, 0.0f);
	*(&Local_0 + 792) = { -4312,378f, 23,02092f, 4417,454f };
	*(&Local_0 + 792 + 12) = { 0.0f, -50,66671f, 0.0f };
	Local_0.f_816 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_store", -4312,378f, 23,02092f, 4417,454f, 0.0f, -50,66671f, 0.0f);
	*(&Local_0 + 820) = { -4307,957f, 22,35f, 4409,908f };
	*(&Local_0 + 820 + 12) = { 0.0f, 101,7534f, 0.0f };
	Local_0.f_844 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store", -4307,957f, 22,35f, 4409,908f, 0.0f, 101,7534f, 0.0f);
	*(&Local_0 + 848) = { -4306,119f, 22,257f, 4408,294f };
	*(&Local_0 + 848 + 12) = { 0.0f, 101,7534f, 0.0f };
	Local_0.f_872 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store", -4306,119f, 22,257f, 4408,294f, 0.0f, 101,7534f, 0.0f);
	*(&Local_0 + 876) = { -4308,626f, 25,17f, 4406,501f };
	*(&Local_0 + 876 + 12) = { 0.0f, 101,7534f, 0.0f };
	Local_0.f_900 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store", -4308,626f, 25,17f, 4406,501f, 0.0f, 101,7534f, 0.0f);
	*(&Local_0 + 904) = { -4303,77f, 25,321f, 4406,04f };
	*(&Local_0 + 904 + 12) = { 0.0f, 101,7534f, 0.0f };
	Local_0.f_928 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store", -4303,77f, 25,321f, 4406,04f, 0.0f, 101,7534f, 0.0f);
	*(&Local_0 + 932) = { -4314,573f, 26,86858f, 4399,444f };
	*(&Local_0 + 932 + 12) = { 0.0f, -147,7705f, 0.0f };
	Local_0.f_956 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_gunsmith", -4314,573f, 26,86858f, 4399,444f, 0.0f, -147,7705f, 0.0f);
	*(&Local_0 + 960) = { -4329,218f, 27,33505f, 4408,665f };
	*(&Local_0 + 960 + 12) = { 0.0f, 157,8708f, 0.0f };
	Local_0.f_984 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_church", -4329,218f, 27,33505f, 4408,665f, 0.0f, 157,8708f, 0.0f);
	*(&Local_0 + 988) = { -4296,162f, 26,67004f, 4390,679f };
	*(&Local_0 + 988 + 12) = { 0.0f, -150,5799f, 0.0f };
	Local_0.f_1012 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_saloon", -4296,162f, 26,67004f, 4390,679f, 0.0f, -150,5799f, 0.0f);
	*(&Local_0 + 1016) = { -4343,611f, 42,02343f, 4325,88f };
	*(&Local_0 + 1016 + 12) = { 0.0f, 179,1484f, 0.0f };
	Local_0.f_1040 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_house1", -4343,611f, 42,02343f, 4325,88f, 0.0f, 179,1484f, 0.0f);
	*(&Local_0 + 1044) = { -4285,002f, 18,07688f, 4432,889f };
	*(&Local_0 + 1044 + 12) = { 0.0f, -148,0607f, 0.0f };
	Local_0.f_1068 = CREATE_POINT_IN_LAYOUT(Local_0, "escf_interiorPoint_market", -4285,002f, 18,07688f, 4432,889f, 0.0f, -148,0607f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos1", -4294,873f, 58,897f, 4236,993f, -4,485f, 155,662f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos2", -4215,654f, 23,309f, 4441,264f, 0,972f, 61,641f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos3", -4285,062f, 21,63f, 4487,494f, 6,788f, 30,347f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos4", -4431,528f, 43,843f, 4411,876f, 2,328f, -63,601f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos5", -4323,916f, 23,52f, 4459,042f, 8,121f, -0,358f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos6", -4280,561f, 23,926f, 4407,822f, 6,732f, 95,602f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos7", -4304,535f, 23,597f, 4428,917f, 12,852f, 6,99f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos8", -4306,232f, 19,087f, 4443,632f, 7,16f, -75,767f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos9", -4372,777f, 40,612f, 4362,268f, 8,792f, -44,57f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "esc_vista_cam_pos10", -4362,492f, 34,985f, 4284,378f, 13,266f, -141,983f, 0.0f);
	*(&Local_0 + 1072) = { -4303,891f, 22,923f, 4402,163f };
	*(&Local_0 + 1072 + 12) = { 0.0f, -50,66671f, 0.0f };
	Local_0.f_1096 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store", -4303,891f, 22,923f, 4402,163f, 0.0f, -50,66671f, 0.0f);
	return 1;
}

void Function_71(int iParam0, int iParam1) //Position: 0x6153 / 24915
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

var Function_72() //Position: 0x619C / 24988
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_73(bool bParam0, var uParam1) //Position: 0x61B1 / 25009
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

