//Decompiled with MagicRDR v1.0
//Function Count : 262
//Statics Count : 632
//Natives Count : 440
//Parameters Count : 2

#region Local Var
	struct<921> Local_0 = { 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_325 = 31;
	iLocal_326 = 33;
	iLocal_327 = 1;
	fLocal_328 = 2.0f;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_370 = 0;
	iLocal_371 = 0;
	iLocal_372 = 0;
	bLocal_373 = false;
	iLocal_374 = 0;
	iLocal_375 = 0;
	bLocal_376 = false;
	iLocal_377 = 0;
	iLocal_378 = 0;
	bLocal_379 = false;
	bLocal_380 = false;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_441 = 0;
	bLocal_442 = false;
	bLocal_557 = false;
	iLocal_561 = 0;
	bLocal_562 = true;
	vLocal_570 = { 0,992f, 0,166f, 1,992f };
	vLocal_573 = { -1,178f, 0,167f, 1,987f };
	vLocal_576 = { 1,177f, 0,122f, -1,801f };
	vLocal_579 = { -1,144f, 0,126f, -1,827f };
	vLocal_582 = { -1451,619f, 77,59732f, 2285,729f };
	vLocal_585 = { -1266,49f, 84,303f, 2402,563f };
	vLocal_588 = { -1280,695f, 85,915f, 2367,501f };
	vLocal_591 = { -1445,339f, 79,31211f, 2302,879f };
	vLocal_594 = { -1447,415f, 79,31261f, 2303,509f };
	vLocal_597 = { -1455,739f, 79,34842f, 2268,228f };
	vLocal_600 = { -1457,966f, 79,35226f, 2268,882f };
	bLocal_629 = false;
	iLocal_444 = 0;
	Local_445 = { StackVal, ScriptParam_0 };
	bLocal_555 = Function_261(&(Global_29008[ScriptParam_0]));
	Function_259(&iLocal_551, "$/fragment/p_gen_testbridge01x", 0, 1);
	Unknown_Function();
	if (Global_6643 && ScriptParam_0)
	{
		Unknown_Function();
		if (8)
		{
			bLocal_629 = true;
			Unknown_Function();
		}
	}
	Unknown_Function();
	while (!IS_EXITFLAG_SET())
	{
		bLocal_447 = 1000;
		switch (iLocal_444)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_444 = 1;
				}
				bLocal_447 = false;
				break;
			
			case 0x00000001:
				Function_258();
				if (Function_258())
				{
					iLocal_444 = 2;
				}
				bLocal_447 = false;
				break;
			
			case 0x00000002:
				if (Function_256())
				{
					Function_255(&(Global_29008[Local_445]), 32);
					iLocal_444 = 3;
				}
				bLocal_447 = false;
				break;
			
			case 0x00000003:
				bLocal_448 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PikesBasinVol", &Local_445, 2, 0);
				Function_254(&Global_6643, &Global_7700, ScriptParam_0);
				iLocal_444 = 5;
				if (Function_253() && Function_251())
				{
					bLocal_449 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Pikes_Basin/PikesBasinMP", 0);
				}
				bLocal_447 = false;
				break;
			
			case 0x00000005:
				if (Function_250(&Global_6643, &Global_7700, ScriptParam_0))
				{
					iLocal_444 = 4;
					bLocal_447 = false;
				}
				else
				{
					bLocal_447 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_249(&(Global_29008[Local_445]), 16) && Function_248(Global_29155[ScriptParam_010]))
				{
					iLocal_444 = 6;
				}
				bLocal_447 = false;
				break;
			
			case 0x00000006:
				Unknown_Function();
				if (((!Function_249(&(Global_29008[ScriptParam_0]), 256) && bLocal_555) && 2) && !Global_3380)
				{
					Function_241(0, &uLocal_450, Local_0.f_860);
					Function_240(0, &uLocal_450, Local_0);
					Function_241(1, &uLocal_450, Local_0.f_864);
					Function_240(1, &uLocal_450, Local_0);
					Function_241(2, &uLocal_450, Local_0.f_868);
					Function_240(2, &uLocal_450, Local_0);
					Function_241(3, &uLocal_450, Local_0.f_872);
					Function_240(3, &uLocal_450, Local_0);
					Function_241(4, &uLocal_450, Local_0.f_876);
					Function_240(4, &uLocal_450, Local_0);
					Function_237(&Global_6643, &Global_7700, &uLocal_450, Global_6289, ScriptParam_0);
				}
				else
				{
					bLocal_555 = false;
					iLocal_556 = 1;
				}
				Unknown_Function();
				if (Function_249(&(Global_29008[ScriptParam_0]), 256) || !2)
				{
					iLocal_556 = 1;
				}
				Function_255(&(Global_29008[Local_445]), 8);
				iLocal_444 = 7;
				bLocal_447 = false;
				break;
			
			case 0x00000007:
				iLocal_444 = 8;
				bLocal_447 = false;
				break;
			
			case 0x00000008:
				if (Function_253())
				{
					Function_233(3, 0, 0.0f, 3, Local_0, 1);
				}
				else if (Function_232(ScriptParam_0, &Global_6643, iLocal_556))
				{
					Function_233("Initializing PikesBasin", 0, 0,1f, 3, Local_0, 1);
				}
				else
				{
					Function_233(8, 0, 0,5f, 3, Local_0, 1);
				}
				Function_231(64);
				Function_227(2, 4294967295, 4294967295, 0, 3);
				Function_255(&(Global_29008[Local_445]), 512);
				iLocal_444 = 9;
				bLocal_447 = false;
				break;
			
			case 0x00000009:
				if (Function_223(&iLocal_551))
				{
					Function_221(Local_0, ScriptParam_0);
					Function_255(&(Global_29008[Local_445]), 4);
					Function_220("Finished Initializing PikesBasin", 5.0f);
					iLocal_444 = 10;
					bLocal_447 = false;
					if (bLocal_555 && !Function_219(Global_30668[2]))
					{
						if ((!Global_3380 && !Global_3382) && !Global_3384)
						{
							bLocal_433 = Function_214(0, Global_30668[2], 3);
							if (Function_213(9, 0) || !Global_3365)
							{
								Function_209();
							}
							else
							{
								bLocal_555 = false;
							}
						}
					}
					else
					{
						bLocal_555 = false;
					}
					Function_207(&(Global_29008[Local_445]));
					if (bLocal_562)
					{
						bLocal_566 = CREATE_LAYOUT("Pik_bridge_layout");
						bLocal_563 = CREATE_PROP_IN_LAYOUT(bLocal_566, "Pikes_RopeBridge1", "$/fragments/p_gen_testBridge01x", vLocal_582, 0.0f, 17.0f, 0.0f, 1);
						bLocal_567 = GET_PHYSINST_FROM_OBJECT(bLocal_563);
						if ((NET_IS_IN_SESSION() || Function_253()) || IS_PS3())
						{
							SET_PHYSINST_FROZEN(bLocal_567, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_563, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(bLocal_567, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_563, 0);
						}
						uLocal_610[0] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_567, "boardJoint09", &vLocal_570, &vLocal_591, 0.0f);
						uLocal_610[1] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_567, "boardJoint09", &vLocal_573, &vLocal_594, 0.0f);
						uLocal_610[2] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_567, "boardJoint18", &vLocal_576, &vLocal_597, 0.0f);
						uLocal_610[3] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_567, "boardJoint18", &vLocal_579, &vLocal_600, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(bLocal_563, 0);
						if (!((NET_IS_IN_SESSION() || Function_253()) || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(bLocal_567, 0,9f);
							SET_SLEEP_TOLERANCE(bLocal_567, 0.0f);
							if (!IS_LAYOUTREF_VALID(bLocal_566))
							{
								LOG_ERROR("nNo layout");
							}
						}
						uLocal_603[0] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_566, "nRopeName1", bLocal_567);
						uLocal_603[1] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_566, "nRopeName2", bLocal_567);
						bLocal_564 = CREATE_PROP_IN_LAYOUT(bLocal_566, "Pikes_RopeBridge2", "$/fragments/p_gen_testBridge01x", vLocal_585, -3,683f, -115,073f, 0.0f, 1);
						bLocal_568 = GET_PHYSINST_FROM_OBJECT(bLocal_564);
						if ((NET_IS_IN_SESSION() || Function_253()) || IS_PS3())
						{
							SET_PHYSINST_FROZEN(bLocal_568, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_564, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(bLocal_568, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_564, 0);
						}
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_591, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_564, vLocal_623, &uLocal_626);
						uLocal_610[4] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_568, "boardJoint09", &vLocal_570, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_594, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_564, vLocal_623, &uLocal_626);
						uLocal_610[5] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_568, "boardJoint09", &vLocal_573, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_597, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_564, vLocal_623, &uLocal_626);
						uLocal_610[6] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_568, "boardJoint18", &vLocal_576, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_600, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_564, vLocal_623, &uLocal_626);
						uLocal_610[7] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_568, "boardJoint18", &vLocal_579, &uLocal_626, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(bLocal_564, 0);
						if (!((NET_IS_IN_SESSION() || Function_253()) || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(bLocal_568, 0,9f);
							SET_SLEEP_TOLERANCE(bLocal_568, 0.0f);
							if (!IS_LAYOUTREF_VALID(bLocal_566))
							{
								LOG_ERROR("No layout2");
							}
						}
						uLocal_603[2] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_566, "nRopeName3", bLocal_568);
						uLocal_603[3] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_566, "nRopeName4", bLocal_568);
						bLocal_565 = CREATE_PROP_IN_LAYOUT(bLocal_566, "Pikes_RopeBridge3", "$/fragments/p_gen_testBridge01x", vLocal_588, -0,043f, -13,408f, 0.0f, 1);
						bLocal_569 = GET_PHYSINST_FROM_OBJECT(bLocal_565);
						if ((NET_IS_IN_SESSION() || Function_253()) || IS_PS3())
						{
							SET_PHYSINST_FROZEN(bLocal_569, true);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_565, 0);
						}
						else
						{
							SET_PHYSINST_FROZEN(bLocal_569, false);
							SET_OBJECT_COLLIDE_WITH_WORLD(bLocal_565, 0);
						}
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_591, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_565, vLocal_623, &uLocal_626);
						uLocal_610[8] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_569, "boardJoint09", &vLocal_570, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_594, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_565, vLocal_623, &uLocal_626);
						uLocal_610[9] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_569, "boardJoint09", &vLocal_573, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_597, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_565, vLocal_623, &uLocal_626);
						uLocal_610[10] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_569, "boardJoint18", &vLocal_576, &uLocal_626, 0.0f);
						GET_OBJECT_RELATIVE_OFFSET(bLocal_563, vLocal_600, &vLocal_623);
						GET_OBJECT_RELATIVE_POSITION(bLocal_565, vLocal_623, &uLocal_626);
						uLocal_610[11] = ATTACH_PHYSINST_TO_WORLD2_HIGH_QUALITY(bLocal_569, "boardJoint18", &vLocal_579, &uLocal_626, 0.0f);
						SET_PROP_AI_OBSTACLE_ENABLED(bLocal_565, 0);
						if (!((NET_IS_IN_SESSION() || Function_253()) || IS_PS3()))
						{
							SET_BRIDGE_STIFFNESS(bLocal_569, 0,9f);
							SET_SLEEP_TOLERANCE(bLocal_569, 0.0f);
							if (!IS_LAYOUTREF_VALID(bLocal_566))
							{
								LOG_ERROR("No layout3");
							}
						}
						uLocal_603[4] = CREATE_ROPE_FOR_BRIDGE_LEFT(bLocal_566, "nRopeName5", bLocal_569);
						uLocal_603[5] = CREATE_ROPE_FOR_BRIDGE_RIGHT(bLocal_566, "nRopeName6", bLocal_569);
						Function_206(&uLocal_558, 0.0f);
					}
					else
					{
						LOG_WARNING("Not making bridges.");
					}
				}
				break;
			
			case 0x0000000A:
				Function_203();
				if (bLocal_555)
				{
					bLocal_555 = Function_45();
					bLocal_557 = true;
					bLocal_447 = false;
				}
				if (bLocal_562)
				{
					if (!iLocal_561 && !((NET_IS_IN_SESSION() || Function_253()) || IS_PS3()))
					{
						if (Function_41(&uLocal_558, 1.0f))
						{
							SET_BRIDGE_STIFFNESS(bLocal_567, 0,2f);
							SET_BRIDGE_STIFFNESS(bLocal_568, 0,2f);
							SET_BRIDGE_STIFFNESS(bLocal_569, 0,2f);
							iLocal_561 = 1;
						}
					}
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_447);
	}
	if (IS_LAYOUTREF_VALID(bLocal_566))
	{
		DESTROY_LAYOUT(bLocal_566);
	}
	iLocal_366 = 0;
	while (iLocal_366 < 11)
	{
		if (uLocal_610[iLocal_366] != "")
		{
			RELEASE_CONSTRAINT(uLocal_610[iLocal_366]);
		}
		iLocal_366++;
	}
	iLocal_366 = 0;
	while (iLocal_366 < 5)
	{
		if (IS_OBJECT_VALID(uLocal_603[iLocal_366]))
		{
			DESTROY_OBJECT(uLocal_603[iLocal_366]);
		}
		iLocal_366++;
	}
	if (Function_40(bLocal_433) == 2)
	{
		Function_30(bLocal_433);
	}
	if (bLocal_557)
	{
		Function_21();
	}
	if (bLocal_629)
	{
		Function_19(8);
	}
	Function_17();
	Function_8(&Global_6643, &Global_7700, ScriptParam_0, iLocal_556);
	Function_7();
	Function_2();
	Function_231(64);
	Function_1(&(Global_29008[Local_445]), 32);
	Function_1(&(Global_29008[Local_445]), 64);
	Function_1(&(Global_29008[Local_445]), 8);
	Function_1(&(Global_29008[Local_445]), 512);
	Function_1(&(Global_29008[Local_445]), 4);
	if (IS_SCRIPT_VALID(bLocal_449))
	{
		TERMINATE_SCRIPT(bLocal_449);
	}
	if (IS_SCRIPT_VALID(bLocal_448))
	{
		TERMINATE_SCRIPT(bLocal_448);
	}
	Function_220("Unloaded PikesBasin", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xCAE / 3246
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xCC5 / 3269
{
	Function_3(&Local_233 + 4);
	RELEASE_LAYOUT_REF(Local_233);
	return;
}

void Function_3(int iParam0) //Position: 0xCD7 / 3287
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_4(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xCFD / 3325
{
	if (Function_6(uParam0[iParam13], 4))
	{
		if (Function_6(uParam0[iParam13], 1))
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
			Function_5(uParam0[iParam13], 1);
			Function_5(uParam0[iParam13], 2);
			Function_5(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0xE2B / 3627
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0xE45 / 3653
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0xE62 / 3682
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_8(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xE6D / 3693
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (StackVal != 5 && Function_253())
	{
		return;
	}
	if (Function_249(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(Function_15(iParam2), 12));
		Function_1(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (!Function_14(uParam0[iVar02], 1))
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_14(uParam0[iVar02], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
				Function_13(uParam0[iVar02], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_14(uParam0[iVar02], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_13(uParam0[iVar02], 16);
		}
		iVar0++;
	}
	if (!Function_249(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar1 = true;
	Unknown_Function();
	if (!2 || Function_249(&(Global_29008[iParam2]), 256))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_14(uParam0[iVar02], 2) && !Function_14(uParam0[iVar02], 4))
		{
			Function_9(uParam0, uParam1, iVar0, bParam3);
		}
		if (bVar1)
		{
			if (Function_14(uParam0[iVar02], 2) && !Function_14(uParam0[iVar02], 4))
			{
				iVar2++;
			}
			else
			{
				iVar3++;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar5 = GET_OBJECTSET_FROM_OBJECT(bVar4);
		if (IS_OBJECTSET_VALID(bVar5))
		{
			iVar0 = 0;
			while (GET_OBJECTSET_SIZE(bVar5) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar5));
				CLEAN_OBJECTSET(bVar5);
			}
			DESTROY_OBJECTSET(bVar5);
		}
		if (StackVal && !(((iVar2 != 0 && iVar3 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_255(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_9(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1058 / 4184
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_12(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_11(Global_29007), Function_10(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_14(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_14(uParam0[iParam22], 1) && !bParam3)
	{
		Function_12(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_11(Global_29007), Function_10(Global_29007), false, 0);
	}
}

int Function_10(int iParam0) //Position: 0x11A7 / 4519
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_11(int iParam0) //Position: 0x11D2 / 4562
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0x1206 / 4614
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x1215 / 4629
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_14(var uParam0, int iParam1) //Position: 0x122C / 4652
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0x1248 / 4680
{
	if (!Function_16(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

bool Function_16(int iParam0) //Position: 0x16F6 / 5878
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_17() //Position: 0x170C / 5900
{
	if (IS_OBJECTSET_VALID(bLocal_443))
	{
		Function_18(bLocal_443);
		DESTROY_OBJECTSET(bLocal_443);
	}
	return;
}

void Function_18(bool bParam0) //Position: 0x1727 / 5927
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

void Function_19(bool bParam0) //Position: 0x176C / 5996
{
	if (Function_20(bParam0, 1) && !Function_20(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0x1799 / 6041
{
	return (bParam0 && bParam1) == 0;
}

void Function_21() //Position: 0x17A6 / 6054
{
	Function_3(&bLocal_384);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	CLEAR_PRINTED_OBJECTIVE();
	DECOR_SET_BOOL(Global_34573, "CleanupHerding", true);
	REMOVE_JOURNAL_ENTRY(bLocal_434, false);
	if (!Function_20(bLocal_365, 2))
	{
		DECOR_REMOVE(Global_34573, "PIK_HerdingStarted");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "MakeBadAgain"))
	{
		DECOR_REMOVE(Global_34573, "MakeBadAgain");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PlayerTalkedHelper"))
	{
		DECOR_REMOVE(Global_34573, "PlayerTalkedHelper");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PlayerAggroing"))
	{
		DECOR_REMOVE(Global_34573, "PlayerAggroing");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RancherDead"))
	{
		DECOR_REMOVE(Global_34573, "RancherDead");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PrintThruCut"))
	{
		DECOR_REMOVE(Global_34573, "PrintThruCut");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "RemoveExtraBlips"))
	{
		DECOR_REMOVE(Global_34573, "RemoveExtraBlips");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "PIK_GivenObjective"))
	{
		DECOR_REMOVE(Global_34573, "PIK_GivenObjective");
	}
	if (IS_ACTOR_VALID(bLocal_342))
	{
		RELEASE_ACTOR(bLocal_342);
	}
	if (IS_ACTOR_VALID(bLocal_343))
	{
		RELEASE_ACTOR(bLocal_343);
	}
	if (IS_ACTOR_VALID(bLocal_344))
	{
		RELEASE_ACTOR(bLocal_344);
	}
	if (IS_ACTOR_VALID(bLocal_345))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_345)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_345));
		}
	}
	iLocal_366 = 0;
	while (iLocal_366 < 4)
	{
		Function_28(&Global_6643, &Global_7700, iLocal_366, 0);
		iLocal_366++;
	}
	iLocal_366 = 0;
	while (iLocal_366 < 11)
	{
		if (Function_27(bLocal_346[iLocal_366], 1))
		{
			Function_26(bLocal_346[iLocal_366]);
		}
		iLocal_366++;
	}
	if (Function_27(bLocal_359, 1))
	{
		Function_26(bLocal_359);
	}
	iLocal_366 = 0;
	while (iLocal_366 < 11)
	{
		Function_24(&(bLocal_346[iLocal_366]), 0, 0);
		DESTROY_OBJECT(bLocal_346[iLocal_366]);
		iLocal_366++;
	}
	RESET_FACTIONS_STATUS_TWO_WAY(14, 2);
	if (Function_40(bLocal_433) == 2)
	{
		Function_30(bLocal_433);
	}
	if (IS_LAYOUTREF_VALID(bLocal_329))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_329);
		RELEASE_LAYOUT_REF(bLocal_329);
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	Function_22(1);
	return;
}

void Function_22(int iParam0) //Position: 0x1A7C / 6780
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_23())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_23() //Position: 0x1AB8 / 6840
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_24(var uParam0, bool bParam1, bool bParam2) //Position: 0x1ADD / 6877
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_25(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_25(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1B59 / 7001
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_26(bool bParam0) //Position: 0x1B73 / 7027
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_27(bool bParam0, bool bParam1) //Position: 0x1BC0 / 7104
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_28(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1C16 / 7190
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_14(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_14(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_14(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_13(uParam0[iVar02], 8);
	}
	Function_13(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_29(StackVal);
	if (bParam3)
	{
		Function_9(uParam0, uParam1, uParam2, 0);
	}
}

int Function_29(bool bParam0) //Position: 0x1CB0 / 7344
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_30(bool bParam0) //Position: 0x1D4A / 7498
{
	int iVar0;
	
	if (!Function_38(bParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_31("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_31(char* cParam0, bool bParam1) //Position: 0x1D9D / 7581
{
	struct<4> Var0;
	
	if (!Function_38(bParam1))
	{
		return;
	}
	switch (Function_35(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_32(Function_33(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_35(bParam1), Function_33(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_35(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_35(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_35(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_35(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_35(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_32(int iParam0) //Position: 0x1EC1 / 7873
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_33(bool bParam0) //Position: 0x1EE6 / 7910
{
	if (!Function_34(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_34(int iParam0) //Position: 0x1F06 / 7942
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_35(bool bParam0) //Position: 0x1F1D / 7965
{
	if (!Function_34(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_36() //Position: 0x1F38 / 7992
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_37(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_37(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x217F / 8575
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_38(int iParam0) //Position: 0x21A8 / 8616
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	if (!Function_39(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_39(int iParam0) //Position: 0x21CC / 8652
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_40(int iParam0) //Position: 0x21E1 / 8673
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(bool bParam0, float fParam1) //Position: 0x21FB / 8699
{
	if (Function_44(bParam0))
	{
		if (Function_42(bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_42(bool bParam0) //Position: 0x2217 / 8727
{
	if (Function_44(bParam0))
	{
		if (Function_43(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_43(int iParam0) //Position: 0x22DF / 8927
{
	return Function_20(*iParam0, 2);
}

bool Function_44(bool bParam0) //Position: 0x22EC / 8940
{
	return Function_20(*bParam0, 1);
}

bool Function_45() //Position: 0x22F9 / 8953
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	vector3 vVar17;
	int iVar20;
	
	if ((Global_3380 || Global_3382) || Global_3384)
	{
		return 0;
	}
	GET_POSITION(Global_34573, &uLocal_362);
	switch (iLocal_383)
	{
		case 0x00000000:
			if (Function_223(&bLocal_384) && GET_AMBIENT_NUM_ACTORS_GRANTED_FOR_MISSIONS() <= 38)
			{
				if (!Function_199(&bLocal_359))
				{
					return 0;
				}
				Function_196();
				if (!Function_253())
				{
					bLocal_360 = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChests", bLocal_329, 4294967295, 0);
					Function_193(&bLocal_329, Local_0.f_692, &bLocal_360);
				}
				Function_187();
				Function_186(Local_0.f_860);
				vVar1 = { StackVal, StackVal, Function_186(Local_0.f_860) };
				Function_186(Local_0.f_864);
				vVar4 = { StackVal, StackVal, Function_186(Local_0.f_864) };
				Function_186(Local_0.f_868);
				vVar7 = { StackVal, StackVal, Function_186(Local_0.f_868) };
				Function_186(Local_0.f_872);
				vVar10 = { StackVal, StackVal, Function_186(Local_0.f_872) };
				Function_186(Local_0.f_876);
				vVar13 = { StackVal, StackVal, Function_186(Local_0.f_876) };
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, false), &vVar1, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, true), &vVar4, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, 2), &vVar7, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, 3), &vVar10, 1, 1, 1);
				TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, 4), &vVar13, 1, 1, 1);
				iLocal_383 = 1;
			}
			break;
		
		case 0x00000001:
			if (!bLocal_379)
			{
				bLocal_379 = Function_183(-1178,384f, 76,568f, 2359,734f, 0, 0);
			}
			if (!iLocal_372)
			{
				if (Global_28178 == 5)
				{
					iVar16 = 0;
					while (iVar16 < 11)
					{
						SQUAD_SET_FACTION(bLocal_346[iVar16], 21);
						Function_182(bLocal_346[iVar16], Global_34573, 2);
						iVar16++;
					}
					SQUAD_SET_FACTION(bLocal_359, 21);
					Function_182(bLocal_359, Global_34573, 2);
					iLocal_372 = 1;
				}
			}
			if (!iLocal_374)
			{
				if (SQUAD_IS_VALID(bLocal_346[4]))
				{
					if (SQUAD_GET_SIZE(bLocal_346[4]) == 3)
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[4], 2)))
						{
							Function_186(Local_0.f_400);
							vVar17 = { StackVal, StackVal, Function_186(Local_0.f_400) };
							SET_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[4], 2), Local_0.f_164, 2, true);
							TASK_SHOOT_ENEMIES_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[4], 2), &vVar17, -204.0f, -1.0f);
							iLocal_374 = 1;
						}
					}
				}
			}
			if (!iLocal_381)
			{
				if (Global_3385)
				{
					iVar20 = 0;
					while (iVar20 <= 4)
					{
						if (!Function_14(&(Global_6643[iVar202]), 2) || Function_14(&(Global_6643[iVar202]), 4))
						{
							bLocal_380 = true;
						}
						iVar20++;
					}
					if (!bLocal_380)
					{
						uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_03");
						SC_CHALLENGE_LAUNCH(uVar0);
						if (!Function_44(&bLocal_438))
						{
							Function_181(&bLocal_438);
						}
						else
						{
							Function_180(&bLocal_438);
						}
						iLocal_381 = 1;
					}
				}
			}
			Function_178("sc_challenge_aa_03", &bLocal_438);
			if (!bLocal_376)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "RancherDead") || DECOR_CHECK_EXIST(Global_34573, "KilledCows"))
				{
					if (!Global_3385)
					{
						Global_3385 = 1;
					}
					if (DECOR_CHECK_EXIST(Global_34573, "RancherDead") && DECOR_CHECK_EXIST(Global_34573, "PIK_GivenObjective"))
					{
						if (!bLocal_373)
						{
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_177("PIK_Obj_RancherDead", 0x40f00000, 1, 2, 0, 0, 0);
							bLocal_373 = true;
						}
					}
					if (bLocal_373)
					{
						if (!iLocal_382)
						{
							if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_359) == 0)
							{
								if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_108))
								{
									if (!HUD_IS_SHOWING_OBJECTIVE())
									{
										Function_177("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0);
										if (SQUAD_IS_VALID(bLocal_346[3]))
										{
											if (!Function_27(bLocal_346[3], 1))
											{
												Function_176(bLocal_346[3], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
											}
										}
										if (SQUAD_IS_VALID(bLocal_346[4]))
										{
											if (!Function_27(bLocal_346[4], 1))
											{
												Function_176(bLocal_346[4], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
											}
										}
										iLocal_382 = 1;
									}
								}
							}
						}
					}
					if ((((((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[0]) != 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[1]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[2]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[3]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[4]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[5]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[6]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[7]) != 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_359) != 0)
					{
						Function_175(9, 0, 1);
						SET_WEAPONENUM_LOCKED(15, 0);
						GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
						if (Function_44(&bLocal_438))
						{
							fLocal_367 = Function_42(&bLocal_438);
							if (Function_174(462) < 0.0f)
							{
								if (fLocal_367 > Function_174(462))
								{
									Function_173(462, fLocal_367, 0);
								}
							}
							else
							{
								Function_173(462, fLocal_367, 0);
							}
						}
						Function_172(Function_214(0, Global_30668[2], 3), 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("PB_JournalID"), 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("PB_JournalID"), 1);
						if (DECOR_CHECK_EXIST(Global_34573, "RancherDead"))
						{
							DECOR_REMOVE(Global_34573, "RancherDead");
						}
						if (DECOR_CHECK_EXIST(Global_34573, "KilledCows"))
						{
							DECOR_REMOVE(Global_34573, "KilledCows");
						}
						if (!Function_44(&bLocal_435))
						{
							Function_181(&bLocal_435);
						}
						uLocal_361 = Function_168(bLocal_329, 0, 1, 1, 0);
						bLocal_376 = true;
					}
				}
			}
			if (!iLocal_378)
			{
				if (bLocal_376)
				{
					if (Function_44(&bLocal_435))
					{
						if (Function_42(&bLocal_435) <= 2.0f)
						{
							Function_165(1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1);
							UI_PUSH("CutsceneWithMessages");
							Function_164(uLocal_361, 0);
							PRINT_BIG("PIK_PrintBig", 5.0f, 0, 0, 0);
							Function_180(&bLocal_435);
							iLocal_378 = 1;
						}
					}
				}
			}
			if (!iLocal_377)
			{
				if (Function_44(&bLocal_435))
				{
					if (Function_42(&bLocal_435) <= 7.0f)
					{
						Function_161(2, 1, 1, 1, 1, 1, 0, 1, 0, 1);
						UI_POP("CutsceneWithMessages");
						Function_157(200, 1, 0);
						Function_144(50, 1, 0);
						Function_141(Function_142(1, 1, 1, 0, 0), 1);
						SET_WEAPONENUM_LOCKED(15, 0);
						GIVE_WEAPON_TO_ACTOR(Global_34573, 15, false, 1, 1);
						AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
						Function_110(Global_30736);
						Function_57(Global_30736, 1, 1, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 0);
						if ((Function_56(Function_214(0, Global_30658[3], 3)) <= 1 && Function_56(Function_214(0, Global_30640[2], 3)) <= 1) && Function_56(Function_214(0, Global_30668[2], 3)) <= 1)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(12))
							{
								AWARD_ACHIEVEMENT(12);
							}
						}
						iLocal_377 = 1;
					}
				}
			}
			if (Function_44(&bLocal_435))
			{
				if (Function_42(&bLocal_435) <= 10.0f)
				{
					iLocal_383 = 2;
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "RemoveExtraBlips"))
			{
				iLocal_366 = 0;
				while (iLocal_366 < 11)
				{
					if (Function_27(bLocal_346[iLocal_366], 1))
					{
						Function_26(bLocal_346[iLocal_366]);
					}
					iLocal_366++;
				}
				if (Function_27(bLocal_359, 1))
				{
					Function_26(bLocal_359);
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "TriggerSpecialCase"))
			{
				iLocal_383 = 2;
			}
			Function_50();
			Function_48();
			Function_46();
			if (DECOR_CHECK_EXIST(Global_34573, "EndMission"))
			{
				iLocal_383 = 2;
			}
			break;
		
		case 0x00000002:
			if (!iLocal_368)
			{
				Function_21();
				iLocal_368 = 1;
			}
			break;
	}
	return 1;
}

void Function_46() //Position: 0x2A78 / 10872
{
	if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper1"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper1");
		Function_47("PIK_AfterKillHelper_Obj", 0, -1.0f, 0, 0, 0);
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper2"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper2");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper3"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper3");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper4"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper4");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper5"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper5");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper7"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper7");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper8"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper8");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "PIK_PlayerKilledHelper9"))
	{
		DECOR_REMOVE(Global_34573, "PIK_PlayerKilledHelper9");
	}
	return;
}

int Function_47(char* cParam0, var uParam1, var uParam2, var uParam3, char* cParam4, var uParam5) //Position: 0x2CD6 / 11478
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = uParam1;
			Global_63406[iVar021].f_36 = uParam2;
			Global_63406[iVar021].f_40 = uParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_48() //Position: 0x2D55 / 11605
{
	if (!iLocal_369)
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_108) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[4]) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[3]) != 0)
		{
			if (!Function_27(bLocal_359, 1))
			{
				Function_176(bLocal_359, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				iLocal_369 = 1;
			}
		}
	}
	if (!Function_20(bLocal_365, 32))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_112) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[6]) != 0)
		{
			if (!Function_27(bLocal_346[7], 1))
			{
				Function_176(bLocal_346[7], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 32);
			}
		}
	}
	if (!Function_20(bLocal_365, 64))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_116) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[7]) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[5]) != 0)
		{
			if (!Function_27(bLocal_346[6], 1))
			{
				Function_176(bLocal_346[6], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 64);
			}
		}
	}
	if (!Function_20(bLocal_365, 128))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_120) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[6]) != 0)
		{
			if (!Function_27(bLocal_346[5], 1))
			{
				Function_176(bLocal_346[5], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 128);
			}
		}
	}
	if (!Function_20(bLocal_365, 256))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_124) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[5]) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_359) != 0)
		{
			if (!Function_27(bLocal_346[4], 1))
			{
				Function_176(bLocal_346[4], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 256);
			}
		}
	}
	if (!Function_20(bLocal_365, 512))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_128) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[2]) != 0)
		{
			if (!Function_27(bLocal_346[3], 1))
			{
				Function_176(bLocal_346[3], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 512);
			}
		}
	}
	if (!Function_20(bLocal_365, 1024))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_132) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[3]) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[1]) != 0)
		{
			if (!Function_27(bLocal_346[2], 1))
			{
				Function_176(bLocal_346[2], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 1024);
			}
		}
	}
	if (!Function_20(bLocal_365, 2048))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_136) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[2]) != 0) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[0]) != 0)
		{
			if (!Function_27(bLocal_346[1], 1))
			{
				Function_176(bLocal_346[1], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 2048);
			}
		}
	}
	if (!Function_20(bLocal_365, 4096))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_0.f_140) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_346[1]) != 0)
		{
			if (!Function_27(bLocal_346[0], 1))
			{
				Function_176(bLocal_346[0], 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_49(&bLocal_365, 4096);
			}
		}
	}
	return;
}

void Function_49(bool bParam0, bool bParam1) //Position: 0x309E / 12446
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

int Function_50() //Position: 0x30AD / 12461
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	
	if ((((Function_54(Global_34573, bLocal_359, 1, 1, 1, 20.0f) && !iLocal_371) && !Global_28178 != 5) || (Function_54(Global_34573, bLocal_359, 1, 1, 1, 0.0f) && !iLocal_371)) || DECOR_CHECK_EXIST(Global_34573, "MakeBadAgain"))
	{
		DECOR_REMOVE(Global_34573, "MakeBadAgain");
		if (!DECOR_CHECK_EXIST(Global_34573, "PlayerTalkedHelper"))
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
		}
		if (!DECOR_CHECK_EXIST(Global_34573, "PrintThruCut"))
		{
			if (!iLocal_375)
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				Function_177("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0);
				iLocal_375 = 1;
			}
		}
		Function_53(bLocal_359);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_359, true, 1, 4294967295);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		SQUAD_SET_FACTION(bLocal_359, 19);
		Function_182(bLocal_359, Global_34573, 4);
		Function_52(bLocal_359, Global_34573);
		Function_51(bLocal_346[0], Global_34573, 1);
		Function_51(bLocal_346[1], Global_34573, 1);
		Function_51(bLocal_346[2], Global_34573, 1);
		Function_51(bLocal_346[3], Global_34573, 1);
		Function_51(bLocal_346[4], Global_34573, 1);
		Function_51(bLocal_346[5], Global_34573, 1);
		Function_51(bLocal_346[6], Global_34573, 1);
		Function_51(bLocal_346[7], Global_34573, 1);
		Function_51(bLocal_346[8], Global_34573, 1);
		Function_51(bLocal_346[9], Global_34573, 1);
		Function_51(bLocal_346[10], Global_34573, 1);
		Function_51(bLocal_346[11], Global_34573, 1);
		Function_51(bLocal_359, Global_34573, 1);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			Function_53(bLocal_346[iVar0]);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_346[iVar0], true, 1, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			SQUAD_SET_FACTION(bLocal_346[iVar0], 19);
			Function_182(bLocal_346[iVar0], Global_34573, 4);
			Function_52(bLocal_346[iVar0], Global_34573);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 11)
		{
			bVar2 = false;
			while (bVar2 < (SQUAD_GET_SIZE(bLocal_346[iVar1]) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar1], bVar2)))
				{
					AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar1], bVar2), 1);
				}
				bVar2++;
			}
			iVar1++;
		}
		bVar3 = false;
		while (bVar3 < (SQUAD_GET_SIZE(bLocal_359) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, bVar3)))
			{
				AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, bVar3), 1);
			}
			bVar3++;
		}
		DECOR_SET_BOOL(Global_34573, "PlayerAggroing", true);
		iLocal_371 = 1;
	}
	iVar4 = 0;
	while (iVar4 < 11)
	{
		if ((((Function_54(Global_34573, bLocal_346[iVar4], 1, 1, 1, 20.0f) && !iLocal_370) && !Global_28178 != 5) || (Function_54(Global_34573, bLocal_346[iVar4], 1, 1, 1, 0.0f) && !iLocal_370)) || DECOR_CHECK_EXIST(Global_34573, "MakeBadAgain"))
		{
			DECOR_REMOVE(Global_34573, "MakeBadAgain");
			if (!DECOR_CHECK_EXIST(Global_34573, "PlayerTalkedHelper"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "PrintThruCut"))
			{
				if (!iLocal_375)
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_177("PIK_Obj_PutDown", 0x40f00000, 1, 2, 0, 0, 0);
					iLocal_375 = 1;
				}
			}
			Function_51(bLocal_346[0], Global_34573, 1);
			Function_51(bLocal_346[1], Global_34573, 1);
			Function_51(bLocal_346[2], Global_34573, 1);
			Function_51(bLocal_346[3], Global_34573, 1);
			Function_51(bLocal_346[4], Global_34573, 1);
			Function_51(bLocal_346[5], Global_34573, 1);
			Function_51(bLocal_346[6], Global_34573, 1);
			Function_51(bLocal_346[7], Global_34573, 1);
			Function_51(bLocal_346[8], Global_34573, 1);
			Function_51(bLocal_346[9], Global_34573, 1);
			Function_51(bLocal_346[10], Global_34573, 1);
			Function_51(bLocal_346[11], Global_34573, 1);
			Function_51(bLocal_359, Global_34573, 1);
			iVar5 = 0;
			while (iVar5 < 11)
			{
				Function_53(bLocal_346[iVar5]);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_346[iVar5], true, 1, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				SQUAD_SET_FACTION(bLocal_346[iVar5], 19);
				Function_182(bLocal_346[iVar5], Global_34573, 4);
				Function_52(bLocal_346[iVar5], Global_34573);
				iVar5++;
			}
			iVar6 = 0;
			while (iVar6 < 11)
			{
				bVar7 = false;
				while (bVar7 < (SQUAD_GET_SIZE(bLocal_346[iVar6]) - 1))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar6], bVar7)))
					{
						AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar6], bVar7), 1);
					}
					bVar7++;
				}
				iVar6++;
			}
			bVar8 = false;
			while (bVar8 < (SQUAD_GET_SIZE(bLocal_359) - 1))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, bVar8)))
				{
					AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_359, bVar8), 1);
				}
				bVar8++;
			}
			Function_53(bLocal_359);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_359, true, 1, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			SQUAD_SET_FACTION(bLocal_359, 19);
			Function_182(bLocal_359, Global_34573, 4);
			Function_52(bLocal_359, Global_34573);
			DECOR_SET_BOOL(Global_34573, "PlayerAggroing", true);
			iLocal_370 = 1;
		}
		iVar4++;
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(bLocal_346[iVar9]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	iVar9 = 4;
	while (iVar9 < 6)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(bLocal_346[iVar9]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	iVar9 = 8;
	while (iVar9 < 11)
	{
		bVar10 = false;
		while (bVar10 < (SQUAD_GET_SIZE(bLocal_346[iVar9]) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
			{
				if (IS_ACTOR_SHOOTING(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10)))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10))))
					{
						ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[iVar9], bVar10), 322, 0, 2, 0);
					}
				}
			}
			bVar10++;
		}
		iVar9++;
	}
	return 1;
}

void Function_51(bool bParam0, bool bParam1, bool bParam2) //Position: 0x37BA / 14266
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x3825 / 14373
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_53(bool bParam0) //Position: 0x3877 / 14455
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_54(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x38A9 / 14505
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_55(bParam0, bVar1, iParam2, iParam3, iParam4, fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_55(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3909 / 14601
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_56(bool bParam0) //Position: 0x39F6 / 14838
{
	if (!Function_34(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_57(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3A10 / 14864
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_38(bParam0))
	{
		Function_36();
		return;
	}
	iVar0 = Function_35(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_33(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_109(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_108(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_102();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_31("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_98(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_33(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_60(1);
			Function_59(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_58(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_58(int iParam0, int iParam1) //Position: 0x3C22 / 15394
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_59(bool bParam0, int iParam1) //Position: 0x3C5C / 15452
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_253())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_60(bool bParam0) //Position: 0x3C9E / 15518
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_91();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_62();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_61(&Global_63095, 1);
		Function_61(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_61(int iParam0, bool bParam1) //Position: 0x3CEF / 15599
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_62() //Position: 0x3D02 / 15618
{
	Function_89();
	Function_88();
	Function_88();
	Function_87();
	Function_87();
	Function_86();
	Function_86();
	Function_70();
	Function_70();
	if (!Function_253())
	{
		Function_67();
		Function_66();
		Function_65();
		Function_64();
	}
	Function_63();
	return;
}

void Function_63() //Position: 0x3D35 / 15669
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_64() //Position: 0x3E3B / 15931
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
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
	Global_83815 = fVar0;
	return;
}

void Function_65() //Position: 0x3E6E / 15982
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
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_66() //Position: 0x4000 / 16384
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
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_67() //Position: 0x41B4 / 16820
{
	Function_68(&Global_28260, 1, 0);
	return;
}

void Function_68(int iParam0, bool bParam1, var uParam2) //Position: 0x41C2 / 16834
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_69();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_69() //Position: 0x43B3 / 17331
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_70() //Position: 0x43C8 / 17352
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
				iVar2 = ((Function_85((50 + iVar4)) + Function_85((183 + iVar4))) + Function_85((90 + iVar4)));
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
	Function_71(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_71(int iParam0, bool bParam1, bool bParam2) //Position: 0x4463 / 17507
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_84(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_83(iParam0);
	if (bParam2)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_72(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x46FE / 18174
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_82(390))), 32);
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
					bVar19 = (Function_174(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_174(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_80(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_77(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_74(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_73(), &Var9);
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

var Function_73() //Position: 0x4D2B / 19755
{
	int iVar0;
	
	return iVar0;
}

var Function_74(int iParam0) //Position: 0x4D33 / 19763
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_75(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4D44 / 19780
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_76(char* cParam0, char* cParam1) //Position: 0x4E39 / 20025
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_77(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4E52 / 20050
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_79(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_78(Function_79(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_78(int iParam0, int iParam1) //Position: 0x4EB7 / 20151
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_79(int iParam0, bool bParam1) //Position: 0x4EC9 / 20169
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_80(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4EDB / 20187
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
	if (((Function_81(iParam0) != 19 || Function_81(iParam0) != 17) || Function_81(iParam0) != 10) || Function_81(iParam0) != 9)
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

int Function_81(int iParam0) //Position: 0x500B / 20491
{
	return Global_35278[iParam020].f_48;
}

var Function_82(int iParam0) //Position: 0x501A / 20506
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_83(int iParam0) //Position: 0x5057 / 20567
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

int Function_84(int iParam0, bool bParam1, bool bParam2) //Position: 0x51F1 / 20977
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

int Function_85(bool bParam0) //Position: 0x540B / 21515
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_86() //Position: 0x544C / 21580
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
		iVar2 = ((Function_85((50 + iVar3) + 15) + Function_85((183 + iVar3) + 15)) + Function_85((90 + iVar3) + 15));
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
	Function_71(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_87() //Position: 0x54D5 / 21717
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
			iVar2 = ((Function_85((50 + iVar3) + 8) + Function_85((183 + iVar3) + 8)) + Function_85((90 + iVar3) + 8));
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
	Function_71(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_88() //Position: 0x556C / 21868
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
		iVar2 = ((Function_85((50 + iVar3)) + Function_85((183 + iVar3))) + Function_85((90 + iVar3)));
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
	Function_71(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_89() //Position: 0x55EB / 21995
{
	Function_90(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_71(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x5611 / 22033
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_84(iParam0, bParam1, 1);
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_72(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_91() //Position: 0x581B / 22555
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_93(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_93(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_92(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_92(vector3 vParam0) //Position: 0x58BC / 22716
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_93(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x58D4 / 22740
{
	int iVar0;
	
	iVar0 = Function_96(uParam2, uParam3);
	if (Function_95(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_49(&Global_63095, 1);
			Function_61(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_49(&Global_63095, 2);
			Function_61(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_49(&Global_63095, 2);
		Function_61(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_94();
	return StackVal, StackVal, Function_94();
}

vector3 Function_94() //Position: 0x59BB / 22971
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_95(int iParam0) //Position: 0x59C4 / 22980
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_96(bool bParam0, bool bParam1) //Position: 0x59DA / 23002
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_97(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_97(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_95(bVar0) && !bParam1)
	{
		bVar0 = Function_96(bParam0, 1);
	}
	return bVar0;
}

float Function_97(vector3 vParam0, vector3 vParam3) //Position: 0x5AA1 / 23201
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_98(bool bParam0) //Position: 0x5ABE / 23230
{
	int iVar0;
	int iVar1;
	
	if (!Function_34(bParam0))
	{
		return;
	}
	switch (Function_35(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_33(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_101(12, 1, 0, 0);
				Function_100(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_101(13, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_101(14, 1, 0, 0);
				Function_100(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_101(15, 1, 0, 0);
				Function_100(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_101(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_33(bParam0))
			{
				case 0x00000000:
					if (Function_56(bParam0) == 1)
					{
						iVar0 = Function_99(bParam0);
						if (Function_16(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_100(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_100(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_100(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_100(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_100(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_100(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_100(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_100(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_100(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_100(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_100(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_100(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_100(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_100(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_100(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_100(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_100(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_100(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_100(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_100(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_101(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_101(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_101(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_99(bParam0) == 0)
			{
				if (Function_56(bParam0) == 1)
				{
					Function_101(458, 1, 0, 0);
					iVar0 = Function_33(bParam0);
					if (Function_16(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_100(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_100(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_100(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_100(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_100(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_100(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_100(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_100(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_56(bParam0) == 1)
			{
				Function_101(400, 1, 0, 0);
			}
			switch (Function_33(bParam0))
			{
				case 0x00000001:
					Function_101(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_100(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_100(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_101(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_100(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_100(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_99(bool bParam0) //Position: 0x5F9A / 24474
{
	if (!Function_34(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

void Function_100(int iParam0, bool bParam1) //Position: 0x5FB9 / 24505
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

int Function_101(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6020 / 24608
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
	Function_84(iParam0, TO_FLOAT(bParam1), 1);
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_102() //Position: 0x6240 / 25152
{
	int iVar0;
	int iVar1;
	
	if (!Function_107(Global_6269))
	{
		return;
	}
	iVar0 = Function_85(24);
	iVar1 = Function_106(Global_6269);
	if (!Function_107(iVar0) && Function_105(iVar1) < 0)
	{
		Function_71(24, Global_6269, 0);
		Function_103(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_105(Function_106(iVar0)))
	{
		Function_71(24, Global_6269, 0);
		Function_103(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_103(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x62C0 / 25280
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_104(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_104(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x6612 / 26130
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_105(int iParam0) //Position: 0x6695 / 26261
{
	if (!Function_38(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_106(int iParam0) //Position: 0x66AF / 26287
{
	if (!Function_107(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_107(int iParam0) //Position: 0x66C9 / 26313
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_108(int iParam0) //Position: 0x66DF / 26335
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_109(char* cParam0) //Position: 0x6709 / 26377
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

void Function_110(int iParam0) //Position: 0x695F / 26975
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_33(iParam0) == Global_30640[2])
	{
		if (Function_140(2) && !Function_139(2))
		{
			Function_132(2, 2, 0, 0, 1);
		}
	}
	if (Function_33(iParam0) == Global_30658[3])
	{
		if (Function_140(6) && !Function_139(6))
		{
			Function_132(6, 16, 0, 0, 1);
		}
	}
	if (!Function_140(10) || Function_139(10))
	{
		return;
	}
	bVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(false) - 1), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
	bVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_56(Global_30734);
	if (Global_30734 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_56(Global_30736);
	if (Global_30736 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_56(Global_30738);
	if (Global_30738 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_56(Global_30737);
	if (Global_30737 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_56(Global_30739);
	if (Global_30739 == iParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073611].f_36, bVar0, bVar1) && !Global_30736 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073411].f_36, bVar0, bVar1) && !Global_30734 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073811].f_36, bVar0, bVar1) && !Global_30738 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073711].f_36, bVar0, bVar1) && !Global_30737 != iParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(Global_13172[Global_3073911].f_36, bVar0, bVar1) && !Global_30739 != iParam0)
	{
		return;
	}
	Function_111(10, 0, 1);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6B06 / 27398
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0))
	{
		if (!Function_140(bParam0))
		{
			Function_115(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_101(457, 1, 0, 0);
		Function_114(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_113(0, 0, 1, 1))
			{
				Function_60(1);
				Function_59(1, 0);
			}
			else
			{
				Function_112();
			}
		}
	}
	return;
}

void Function_112() //Position: 0x6CA4 / 27812
{
	return;
}

bool Function_113(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6CAA / 27818
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_114(bool bParam0, int iParam1) //Position: 0x6D4E / 27982
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

void Function_115(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6DA3 / 28067
{
	struct<8> Var0;
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_130(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_140(bParam0))
	{
		Function_101(456, 1, 0, 0);
		Function_114(bParam0, 2);
		if (bParam2)
		{
			if (!Function_113(0, 0, 1, 1))
			{
				Function_60(1);
				Function_59(1, 5);
			}
			else
			{
				Function_112();
			}
		}
		Function_124(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_123() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_123() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_122(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_121(Global_76846, 2))
		{
			Function_116(Global_34573, 2, 1, 0);
		}
	}
}

void Function_116(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6EED / 28397
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_118(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_117(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_117(char* cParam0, int iParam1) //Position: 0x6F59 / 28505
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_118(bool bParam0, var uParam1, int iParam2) //Position: 0x6F90 / 28560
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_120(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_119(uVar0))
		{
			case 0x00000002:
				if (!Function_121(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_119(char* cParam0) //Position: 0x7008 / 28680
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

int Function_120(int iParam0) //Position: 0x70A9 / 28841
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_61(&iVar1, 2147483648);
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

bool Function_121(int iParam0, int iParam1) //Position: 0x70E6 / 28902
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_122(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x70F9 / 28921
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_123() //Position: 0x7144 / 28996
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_124(bool bParam0) //Position: 0x7171 / 29041
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_128(bParam0, Function_129(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_128(bParam0, Function_129(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_127(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_126(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_125(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_125(int iParam0) //Position: 0x7321 / 29473
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_126(bool bParam0, bool bParam1) //Position: 0x7378 / 29560
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

var Function_127(int iParam0) //Position: 0x739D / 29597
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_128(bool bParam0, int iParam1) //Position: 0x73F3 / 29683
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

int Function_129(bool bParam0) //Position: 0x7452 / 29778
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_130(int iParam0) //Position: 0x745E / 29790
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_131(int iParam0) //Position: 0x747A / 29818
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_132(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7490 / 29840
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_130(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_138(bParam0, 2))
	{
		Function_101(456, 1, 0, 0);
		Function_114(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_122(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_128(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_114(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_113(0, 0, 1, 1))
			{
				Function_60(1);
				Function_59(1, 0);
			}
			else
			{
				Function_112();
			}
		}
		Function_124(bParam0);
		if (StackVal && !Function_20(((((!Function_123() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_20((((Function_123() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_121(Global_76846, 2))
		{
			Function_116(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_134();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_133(3, bParam1);
				break;
			
			case 0x00000005:
				Function_133(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_133(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_133(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_133(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_133(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_100(2, 24);
				break;
			
			case 0x00000003:
				Function_100(2, 25);
				break;
			
			case 0x0000000F:
				Function_100(2, 26);
				break;
			
			case 0x0000000D:
				Function_100(2, 27);
				break;
			
			case 0x0000000E:
				Function_100(2, 28);
				break;
			}
	}
}

void Function_133(int iParam0, bool bParam1) //Position: 0x771F / 30495
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_134() //Position: 0x777E / 30590
{
	if (Function_131(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_137(Global_28180);
			Global_28180.f_8 = Function_135(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_137(Global_28180);
			Global_28180.f_8 = Function_135(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_135(int iParam0, int iParam1) //Position: 0x77F9 / 30713
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_213(6, 0) || Function_213(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_136(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_213(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_136(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_136(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_136(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_136(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_213(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_136(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_136(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_136(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_136(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_136(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_136(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_136(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_213(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_136(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_213(6, 0) && Function_136(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_136(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_213(9, 0) && Function_136(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_136(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_213(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_92(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_92(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_92(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_136(int iParam0) //Position: 0x83ED / 33773
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_137(int iParam0) //Position: 0x8402 / 33794
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_138(int iParam0, int iParam1) //Position: 0x8451 / 33873
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

bool Function_139(int iParam0) //Position: 0x847E / 33918
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_138(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_140(int iParam0) //Position: 0x84CF / 33999
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_138(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_141(bool bParam0, bool bParam1) //Position: 0x8521 / 34081
{
	bool bVar0;
	
	bVar0 = Function_85(0);
	if ((Function_85(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_101(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_85(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_101(597, bParam0, 0, 0);
	}
	if ((Function_85(597) + Function_85(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

var Function_142(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x85EC / 34284
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
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_85(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_143(17), Global_34573))
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

var Function_143(bool bParam0) //Position: 0x86EE / 34542
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

void Function_144(int iParam0, bool bParam1, bool bParam2) //Position: 0x87DF / 34783
{
	int iVar0;
	bool bVar1;
	
	if (Function_156(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_85(3);
	Function_153();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_151(3, bVar1);
		if (!bParam2)
		{
			if (!Function_121(Global_76848, 4))
			{
				Function_116(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_101(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_174(3));
	iVar0 = Function_85(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_146(4, Function_150(Global_12976.f_156), 1);
				Function_145(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x89A2 / 35234
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_146(int iParam0, char* cParam1, bool bParam2) //Position: 0x8C00 / 35840
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_103(iParam0, cParam1, 0, 1);
	iVar1 = Function_147();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_147() //Position: 0x8D85 / 36229
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_148();
	return 0;
}

void Function_148() //Position: 0x8E24 / 36388
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_149(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_149(int iParam0) //Position: 0x8ED3 / 36563
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_150(int iParam0) //Position: 0x8F31 / 36657
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_151(int iParam0, bool bParam1) //Position: 0x8FC0 / 36800
{
	bool bVar0;
	int iVar1;
	
	Function_101(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_152(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_147();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_152(int iParam0, int iParam1) //Position: 0x915D / 37213
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_153() //Position: 0x919E / 37278
{
	Function_155(3, 0.0f);
	Function_154(3, 10000.0f);
	return;
}

int Function_154(int iParam0, int iParam1) //Position: 0x91B4 / 37300
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_155(int iParam0, int iParam1) //Position: 0x91F4 / 37364
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_156(int iParam0) //Position: 0x9234 / 37428
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_157(int iParam0, bool bParam1, bool bParam2) //Position: 0x9243 / 37443
{
	int iVar0;
	bool bVar1;
	
	if (Function_156(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_85(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_151(1, bVar1);
			if (!bParam2)
			{
				if (!Function_121(Global_76848, 1))
				{
					Function_116(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_160(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_121(Global_76848, 2))
				{
					Function_116(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_101(1, bVar1, 0, 0);
	}
	else
	{
		Function_159(1, (4294967295 * bVar1), 0);
	}
	if (Function_85(1) <= 4294962296)
	{
		Function_71(1, 4294962296, 0);
	}
	else if (Function_85(1) >= 5000)
	{
		Function_71(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_174(1));
	iVar0 = Function_85(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_146(2, Function_158(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_146(2, Function_158(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_146(2, Function_158(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_146(2, Function_158(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_146(2, Function_158(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_146(2, Function_158(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_146(2, Function_158(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_146(2, Function_158(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_146(2, Function_158(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_146(2, Function_158(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_146(2, Function_158(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_146(2, Function_158(Global_12976.f_152), 0);
			}
			break;
	}
	Function_145(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_158(int iParam0) //Position: 0x9558 / 38232
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_159(int iParam0, bool bParam1, int iParam2) //Position: 0x95FB / 38395
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_83(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_72(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_160(int iParam0, bool bParam1) //Position: 0x97F6 / 38902
{
	bool bVar0;
	int iVar1;
	
	Function_159(iParam0, bParam1, 0);
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
	iVar1 = Function_152(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_147();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_161(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x9992 / 39314
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_69();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_253())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_101(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_163();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_162(uParam9);
}

void Function_162(bool bParam0) //Position: 0x9A82 / 39554
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_163() //Position: 0x9B27 / 39719
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_164(bool bParam0, bool bParam1) //Position: 0x9B3C / 39740
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_165(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x9B51 / 39761
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_163();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_69();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_253())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_167(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_73(), 2, Function_167(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_101(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_166()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_166()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	Unknown_Function();
	if (67108864)
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Unknown_Function();
	}
	Unknown_Function();
	if (134217728)
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Unknown_Function();
	}
}

var Function_166() //Position: 0x9DFA / 40442
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_167(bool bParam0) //Position: 0x9E79 / 40569
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9E8A / 40586
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_73(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PIK_Vista01", 2, 1);
	}
	Function_169(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_169(int iParam0) //Position: 0x9F01 / 40705
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_171(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_170(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.0f, 0, 0);
	return;
}

void Function_170(int iParam0) //Position: 0x9F36 / 40758
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298,358f, 89,32796f, 2378,287f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,085643f, -1,275337f, -0,000837f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_171(int iParam0) //Position: 0x9FA4 / 40868
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57,75359f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1298,552f, 90,06156f, 2378,257f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,042042f, -1,742399f, -0,000834f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_172(int iParam0, int iParam1) //Position: 0xA012 / 40978
{
	if (!Function_38(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

int Function_173(int iParam0, float fParam1, bool bParam2) //Position: 0xA02D / 41005
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > fParam1)
	{
		Function_84(iParam0, fParam1, 0);
	}
	Global_34581[iParam0] = fParam1;
	Function_83(iParam0);
	if (bParam2)
	{
		Function_72(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_174(int iParam0) //Position: 0xA299 / 41625
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_175(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA2D2 / 41682
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_143(bParam0), Function_69()) == 0)
		{
			ADD_ITEM(Function_143(bParam0), Function_69(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_143(bParam0), Function_69(), bParam2);
	return 1;
}

void Function_176(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xA31D / 41757
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_177(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA407 / 41991
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_178(char* cParam0, bool bParam1) //Position: 0xA45A / 42074
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(cParam0);
	iVar1 = Function_179(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_84611[iVar1140].f_64 && Function_44(bParam1))
		{
			(*&Global_84611[iVar1140] + 144)[412] = Function_42(bParam1);
		}
	}
	return;
}

var Function_179(int iParam0) //Position: 0xA499 / 42137
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

void Function_180(bool bParam0) //Position: 0xA4CB / 42187
{
	Function_206(bParam0, 0.0f);
	return;
}

void Function_181(bool bParam0) //Position: 0xA4D7 / 42199
{
	if (!Function_44(bParam0))
	{
		Function_206(bParam0, 0.0f);
	}
	return;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA4EC / 42220
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_183(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xA531 / 42289
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_185(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_184(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_184(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_184(bool bParam0, bool bParam1) //Position: 0xA692 / 42642
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA69F / 42655
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

vector3 Function_186(bool bParam0) //Position: 0xA749 / 42825
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

void Function_187() //Position: 0xA770 / 42864
{
	int iVar0;
	
	*(&iVar0 + 20) = 1;
	Function_94();
	Function_94();
	Function_188(StackVal, StackVal, StackVal, StackVal, 4096, 1, GET_ASSET_ID("$/content/Frontier/Hennigans_Stead/Pikes_Basin/ActionArea/PikesBasin_Herding", 4), Function_94(), Function_94(), 0, 0, 0, Global_30668[2], 0, 0, 0, &iVar0, 0, 0, 0x40a00000, 4294967295, 0, 0);
	if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("NuHerd_Layout")))
	{
		LOG_ERROR("HERDING LAYOUT IS VALID");
		bLocal_345 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("NuHerd_Layout"), "Pete_The_Pikes_Basin_Herder");
	}
	return;
}

int Function_188(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0xA865 / 43109
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_192(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_191(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_190(&(Global_25267[iVar058]), 1);
					Function_189(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_189(var uParam0, int iParam1) //Position: 0xA9A7 / 43431
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_190(var uParam0, int iParam1) //Position: 0xA9C1 / 43457
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_191(int iParam0, int iParam1) //Position: 0xA9D2 / 43474
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_192(var uParam0, int iParam1) //Position: 0xAB3E / 43838
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_193(var uParam0, bool bParam1, int iParam2) //Position: 0xAB5B / 43867
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	struct<8> Var6;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		Function_186(bVar1);
		vVar2 = { StackVal, StackVal, Function_186(bVar1) };
		bVar5 = GET_OBJECT_HEADING(bVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_194("amb_areaChest") };
	}
}

struct<32> Function_194(bool bParam0) //Position: 0xAE17 / 44567
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_195("0", &cVar8, ""), 4);
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

struct<32> Function_195(char* cParam0, char* cParam1, char* cParam2) //Position: 0xAE81 / 44673
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_196() //Position: 0xAEA0 / 44704
{
	bool bVar0;
	int iVar1;
	int iVar2[6];
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	vector3 vVar51;
	vector3 vVar54;
	vector3 vVar57;
	vector3 vVar60;
	vector3 vVar63;
	bool bVar66;
	bool bVar67;
	char* cVar68[16];
	
	bLocal_346[0] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad1"));
	bLocal_346[1] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad2"));
	bLocal_346[2] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad3"));
	bLocal_346[3] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad4"));
	bLocal_346[4] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad5"));
	bLocal_346[5] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad6"));
	bLocal_346[6] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad7"));
	bLocal_346[7] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad8"));
	bLocal_346[8] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad9"));
	bLocal_346[9] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad10"));
	bLocal_346[10] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad11"));
	bLocal_346[11] = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_canyonSquad12"));
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_329);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	iVar1 = 0;
	iVar2[0] = 477;
	iVar2[1] = 480;
	iVar2[2] = 479;
	iVar2[3] = 481;
	iVar2[4] = 478;
	iVar2[5] = 482;
	bVar9 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar9))
	{
		bVar10 = GET_OBJECT_NAME(bVar9);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		vVar14 = { 0.0f, 0.0f, 0.0f };
		GET_OBJECT_POSITION(bVar9, &vVar11);
		GET_OBJECT_ORIENTATION(bVar9, &vVar14);
		if (DECOR_CHECK_EXIST(bVar9, "PIK_Canyon") && DECOR_CHECK_EXIST(bVar9, "FTE"))
		{
			if (STRING_CONTAINS_STRING(bVar10, "p1_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[0]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "p2_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[1]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "3_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[2]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "4_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[3]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "5_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[4]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "6_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[5]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "7_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[6]);
			}
			else if (STRING_CONTAINS_STRING(bVar10, "8_"))
			{
				bVar17 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, bVar10, iVar2[iVar1], vVar11, vVar14);
				SQUAD_JOIN(bVar17, bLocal_346[7]);
			}
			iVar1++;
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar17, 37, 5.0f);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar17, true);
			Function_198(bVar17, 60.0f, 359.0f, 360.0f, 0,25f);
			AI_SET_WEAPON_MAX_RANGE(bVar17, 40.0f);
			ACTOR_ENABLE_VARIABLE_MESH(bVar17, 0, true);
		}
		if (iVar1 >= 5)
		{
			iVar1 = 0;
		}
		bVar9 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	vVar18 = { -1250,367f, 80,22279f, 2185,654f };
	vVar21 = { 0.0f, 60,742f, 0.0f };
	vVar24 = { -1251,885f, 80,12868f, 2183,575f };
	vVar27 = { 0.0f, 258,1044f, 0.0f };
	vVar30 = { -1268.0f, 80,314f, 2240.0f };
	vVar33 = { 0.0f, 7,574f, 0.0f };
	vVar36 = { -1272,061f, 80,31372f, 2232,837f };
	vVar39 = { 0.0f, -4,182f, 0.0f };
	vVar42 = { -1290,873f, 76,29803f, 2289,005f };
	vVar45 = { 0.0f, -31,949f, 0.0f };
	vVar48 = { -1297,173f, 76,29803f, 2285,627f };
	vVar51 = { 0.0f, -39,859f, 0.0f };
	vVar54 = { -1306,897f, 71,27841f, 2353,559f };
	vVar57 = { 0.0f, 27,446f, 0.0f };
	vVar60 = { -1323,141f, 71,27841f, 2348,429f };
	vVar63 = { 0.0f, -5,392f, 0.0f };
	bLocal_330[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad01Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar18, vVar21));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_330[0], "UseCase1", 0);
	bLocal_330[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad01Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar24, vVar27));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_330[1], "UseCase1", 0);
	bLocal_333[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad02Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar30, vVar33));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_333[0], "UseCase1", 0);
	bLocal_333[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad02Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar36, vVar39));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_333[1], "UseCase1", 0);
	bLocal_336[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad03Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar42, vVar45));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_336[0], "UseCase1", 0);
	bLocal_336[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad03Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar48, vVar51));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_336[1], "UseCase1", 0);
	bLocal_339[0] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad04Gringo01", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar54, vVar57));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_339[0], "UseCase1", 0);
	bLocal_339[1] = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_329, "Squad04Gringo02", "$/content/scripting/gringo/simpleGringo/rand_idle_stand_nospawn", vVar60, vVar63));
	GRINGO_SET_USABLE_BY_PLAYER(bLocal_339[1], "UseCase1", 0);
	if (SQUAD_GET_SIZE(bLocal_346[0]) == 2)
	{
		if (IS_GRINGO_VALID(bLocal_330[0]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[0], false), bLocal_330[0], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd01gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(bLocal_330[1]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[0], true), bLocal_330[1], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd01gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(bLocal_346[1]) == 2)
	{
		if (IS_GRINGO_VALID(bLocal_333[0]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[1], false), bLocal_333[0], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd02gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(bLocal_333[1]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[1], true), bLocal_333[1], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd02gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(bLocal_346[2]) == 2)
	{
		if (IS_GRINGO_VALID(bLocal_336[0]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[2], false), bLocal_336[0], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd03gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(bLocal_336[1]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[2], true), bLocal_336[1], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd03gringo[1] IS INVALID");
		}
	}
	if (SQUAD_GET_SIZE(bLocal_346[3]) == 2)
	{
		if (IS_GRINGO_VALID(bLocal_339[0]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[3], false), bLocal_339[0], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd04gringo[0] IS INVALID");
		}
		if (IS_GRINGO_VALID(bLocal_339[1]))
		{
			TASK_USE_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(bLocal_346[3], true), bLocal_339[1], "UseCase1", 4294967295, 1);
		}
		else
		{
			LOG_ERROR("sqd04gringo[1] IS INVALID");
		}
	}
	Function_185(-1178,384f, 76,568f, 2359,734f, &bVar66, &bVar67);
	bLocal_343 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, "aHorsey1", 976, -1180,755f, 76,298f, 2358,911f, 0.0f, -50.0f, 0.0f);
	ACCESSORIZE_HORSE(bLocal_343, 3);
	if (IS_GRINGO_VALID(bVar66))
	{
		TASK_PRIORITY_SET(bLocal_343, true);
		TASK_USE_GRINGO(bLocal_343, bVar66, "UseCase1", true, 1);
	}
	else
	{
		TASK_STAND_STILL(bLocal_343, -1.0f, 0, 0);
	}
	bLocal_344 = CREATE_ACTOR_IN_LAYOUT(bLocal_329, "aHorsey2", 976, -1179,655f, 76,298f, 2360,737f, 0.0f, -50.0f, 0.0f);
	ACCESSORIZE_HORSE(bLocal_344, 3);
	if (IS_GRINGO_VALID(bVar67))
	{
		TASK_PRIORITY_SET(bLocal_344, true);
		TASK_USE_GRINGO(bLocal_344, bVar67, "UseCase1", true, 1);
	}
	else
	{
		TASK_STAND_STILL(bLocal_344, -1.0f, 0, 0);
	}
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(14, Global_34573, 4);
	SET_FACTIONS_STATUS_TWO_WAY(14, 20, 4);
	iLocal_366 = 0;
	while (iLocal_366 < 11)
	{
		strcpy(&cVar68, "nv_groupIn", 16);
		straddi(&cVar68, iLocal_366 + 1, 16);
		Function_182(bLocal_346[iLocal_366], Global_34573, 2);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_346[iLocal_366], 0);
		Function_197(bLocal_346[iLocal_366], FIND_VOLUME_IN_LAYOUT(Global_30616, &cVar68), 1, 1);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_346[iLocal_366], 690856);
		iLocal_366++;
	}
	return;
}

void Function_197(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBBC3 / 48067
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0xBC12 / 48146
{
	SET_ACTOR_VISION_MAX_RANGE(bParam0, bParam1, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, bParam2);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, bParam3);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, fParam4);
}

bool Function_199(bool bParam0) //Position: 0xBC39 / 48185
{
	bool bVar0;
	bool bVar1;
	
	*bParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_329, "PIK_MainSquad"));
	iLocal_366 = 0;
	while (iLocal_366 < 4)
	{
		bVar0 = Function_200(&Global_6643, &Global_7700, iLocal_366, 0, 0, 1);
		if (IS_ACTOR_VALID(bVar0))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
			Function_198(bVar0, 60.0f, 359.0f, 359.0f, 0,25f);
			SQUAD_JOIN(bVar0, *bParam0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*bParam0, 690856);
			if (iLocal_366 == 4)
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
				SET_WEAPONENUM_LOCKED(15, 0);
				GIVE_WEAPON_TO_ACTOR(bVar0, 15, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
			}
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar0, FIND_VOLUME_IN_LAYOUT(Global_30616, "npikv_cows"), 1, 1);
			bVar1 = (COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bVar0) + 10.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, bVar1);
		}
		iLocal_366++;
	}
	Function_197(*bParam0, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_MainCampStayIn"), 4, 1);
	return 1;
}

var Function_200(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xBD2C / 48428
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_14(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_14(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_14(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_12(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_202(StackVal, StackVal, StackVal, Global_6289, Function_73(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_14(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_12(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_12(uParam0[iVar02], 1);
	Function_201(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_201(bool bParam0, bool bParam1) //Position: 0xBEC2 / 48834
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_202(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xBF64 / 48996
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

void Function_203() //Position: 0xC07E / 49278
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_442)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_443) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_443);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_204(Global_34573, bVar1) > 100.0f)
			{
				Function_186(bVar1);
				vVar3 = { StackVal, StackVal, Function_186(bVar1) };
				if (!Function_20(iLocal_441, bVar2))
				{
					Function_49(&iLocal_441, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_61(&iLocal_441, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_204(bool bParam0, bool bParam1) //Position: 0xC107 / 49415
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_205(bParam0);
			vVar0 = { StackVal, StackVal, Function_205(bParam0) };
			Function_205(bParam1);
			vVar3 = { StackVal, StackVal, Function_205(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_205(bool bParam0) //Position: 0xC1A2 / 49570
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

void Function_206(bool bParam0, float fParam1) //Position: 0xC20E / 49678
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_49(bParam0, 1);
	Function_61(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

int Function_207(int iParam0) //Position: 0xC22F / 49711
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_249(iParam0, 2048))
	{
		return 0;
	}
	if (Function_253() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_443 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_442 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_186(bVar1);
		vVar2 = { StackVal, StackVal, Function_186(bVar1) };
		Function_208(bVar1);
		vVar5 = { StackVal, StackVal, Function_208(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_194("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_443);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

vector3 Function_208(bool bParam0) //Position: 0xC353 / 50003
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_209() //Position: 0xC37A / 50042
{
	bool bVar0;
	
	if ((!Function_121(Global_76846, 16) && !Global_34165.f_36) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		Function_116(Global_34573, 16, 1, 0);
	}
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bVar0 > 50)
	{
		AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	bLocal_329 = CREATE_LAYOUT("PIK_AA_Layout");
	bLocal_434 = CREATE_JOURNAL_ENTRY("PB_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(bLocal_434, 0);
	Function_210();
	bLocal_365 = false;
	iLocal_383 = 0;
	RAND_SET_SEED(ROUND(GET_CURRENT_GAME_TIME()));
	bLocal_433 = Function_214(0, Global_30668[2], 3);
	if (Function_56(bLocal_433) == 0)
	{
		Function_49(&bLocal_365, 1);
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(38);
	return 1;
}

void Function_210() //Position: 0xC478 / 50296
{
	Function_211(&bLocal_384, 477, 3, 1);
	Function_211(&bLocal_384, 478, 3, 1);
	Function_211(&bLocal_384, 479, 3, 1);
	Function_211(&bLocal_384, 480, 3, 1);
	Function_211(&bLocal_384, 481, 3, 1);
	Function_211(&bLocal_384, 482, 3, 1);
	Function_211(&bLocal_384, 483, 3, 1);
	Function_211(&bLocal_384, 484, 3, 1);
	Function_211(&bLocal_384, 485, 3, 1);
	Function_211(&bLocal_384, 976, 3, 1);
	Function_211(&bLocal_384, 977, 3, 1);
	Function_211(&bLocal_384, 1009, 3, 1);
	Function_211(&bLocal_384, 1010, 3, 1);
	Function_211(&bLocal_384, 1011, 3, 1);
	Function_259(&bLocal_384, "action_areas", 10, 0);
	Function_259(&bLocal_384, "rand_idle_stand_nospawn", 1, 0);
	return;
}

var Function_211(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC562 / 50530
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_212(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_212(uParam0[iVar03], 8);
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

void Function_212(var uParam0, int iParam1) //Position: 0xC632 / 50738
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

int Function_213(int iParam0, bool bParam1) //Position: 0xC643 / 50755
{
	int iVar0;
	
	iVar0 = Function_106(iParam0);
	if (!Function_34(iVar0))
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

bool Function_214(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC680 / 50816
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_218(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_215(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_215(bParam0, bParam1, bParam2, 4294967295);
}

int Function_215(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC6DE / 50910
{
	var uVar0;
	
	if (!Function_217(bParam2))
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
	uVar0 = Function_218(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_216(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_216(int iParam0) //Position: 0xC833 / 51251
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_217(int iParam0) //Position: 0xC871 / 51313
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_218(int iParam0, int iParam1, int iParam2) //Position: 0xC886 / 51334
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_219(int iParam0) //Position: 0xC8A6 / 51366
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Function_249(&(Global_29008[iParam0]), 2048);
}

void Function_220(bool bParam0, float fParam1) //Position: 0xC8C4 / 51396
{
	Unknown_Function();
	if (!128)
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

void Function_221(bool bParam0, bool bParam1) //Position: 0xC902 / 51458
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_222(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_253())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_222(var uParam0, int iParam1) //Position: 0xC9FC / 51708
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

bool Function_223(bool bParam0) //Position: 0xCA09 / 51721
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_226();
	iVar1 = 0;
	if (!Function_6(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_212(bParam0[iVar03], 8);
		}
		else if (Function_225())
		{
			iVar1 = 1;
			Function_212(bParam0[iVar03], 8);
		}
		Function_212(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_6(bParam0[iVar03], 4))
		{
			if (!Function_6(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_6(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_6(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_212(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_6(bParam0[iVar03], 4))
		{
			if (!Function_6(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_212(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_212(bParam0[iVar03], 2);
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
	Function_224();
	return 1;
}

void Function_224() //Position: 0xCD84 / 52612
{
	Unknown_Function();
	if (!128)
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_225() //Position: 0xCDC4 / 52676
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

void Function_226() //Position: 0xCDEF / 52719
{
	Unknown_Function();
	if (!128)
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

void Function_227(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xCE31 / 52785
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_228();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_228() //Position: 0xCF15 / 53013
{
	int iVar0;
	
	Global_26960 = Function_229(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_229(int iParam0) //Position: 0xCF63 / 53091
{
	if (!Function_230(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_230(int iParam0) //Position: 0xCF7B / 53115
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_231(int iParam0) //Position: 0xCF90 / 53136
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_232(int iParam0, var uParam1, bool bParam2) //Position: 0xCFA3 / 53155
{
	char* cVar0[64];
	struct<5> Var16;
	
	*uParam1[02] = { StackVal, *uParam1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_249(&(Global_29008[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_30717[1] && Function_213(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	if (Function_253())
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = *uParam1;
	stradd(&cVar0, &Global_29155[Global_30621[Global_29004]10] + 20, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	Global_30617 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_233(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xD063 / 53347
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = iParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_236();
	}
	if (bParam5)
	{
		Function_234(1048576);
	}
}

void Function_234(int iParam0) //Position: 0xD176 / 53622
{
	Function_235(&Global_28842, iParam0);
	return;
}

void Function_235(var uParam0, var uParam1) //Position: 0xD184 / 53636
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_236() //Position: 0xD19F / 53663
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_234(16384);
	}
	return;
}

void Function_237(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xD1BB / 53691
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Unknown_Function();
	if (!2)
	{
		return;
	}
	if (Function_249(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_14(uParam0[iVar02], 2))
		{
			if (Function_238(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_1(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_255(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xD26D / 53869
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_249(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_14(uParam0, 2))
	{
		return 1;
	}
	if (Function_14(uParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, false))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_202(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_92(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_13(uParam0, 4);
	}
	Function_239(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_239(bool bParam0, int iParam1) //Position: 0xD3D8 / 54232
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_92(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_92(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_240(int iParam0, var uParam1, bool bParam2) //Position: 0xD514 / 54548
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	uParam1[bVar020]->f_72 = bParam2;
	return;
}

void Function_241(int iParam0, var uParam1, bool bParam2) //Position: 0xD56F / 54639
{
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_OBJ_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_247(iParam0, uParam1, bParam2);
		Function_246(iParam0, uParam1, bParam2);
		Function_245(iParam0, uParam1, bParam2);
		Function_244(iParam0, uParam1, bParam2);
		Function_243(iParam0, uParam1, bParam2);
		Function_242(iParam0, uParam1, bParam2);
	}
	return;
}

void Function_242(var uParam0, var uParam1, bool bParam2) //Position: 0xD60A / 54794
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Night object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 60);
	return;
}

void Function_243(var uParam0, var uParam1, bool bParam2) //Position: 0xD66E / 54894
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Evening object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 48);
	return;
}

void Function_244(var uParam0, var uParam1, bool bParam2) //Position: 0xD6D4 / 54996
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Afternoon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 36);
	return;
}

void Function_245(var uParam0, var uParam1, bool bParam2) //Position: 0xD73C / 55100
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Noon object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 24);
	return;
}

void Function_246(var uParam0, var uParam1, bool bParam2) //Position: 0xD79F / 55199
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Morning object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020] + 12);
	return;
}

void Function_247(var uParam0, var uParam1, bool bParam2) //Position: 0xD805 / 55301
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (!IS_OBJECT_VALID(bParam2))
	{
		LOG_ERROR("Dawn object is not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	GET_OBJECT_POSITION(bParam2, uParam1[bVar020]);
	PRINTVECTOR(*uParam1[bVar020]);
	PRINTNL();
	return;
}

int Function_248(int iParam0) //Position: 0xD874 / 55412
{
	if (!Function_16(iParam0))
	{
		return 1;
	}
	return Function_249(&(Global_29008[iParam0]), 4);
}

bool Function_249(var uParam0, int iParam1) //Position: 0xD890 / 55440
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_250(var uParam0, var uParam1, int iParam2) //Position: 0xD8AC / 55468
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_253())
	{
		return 1;
	}
	if (Function_249(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(Function_15(iParam2), 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_14(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_14(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_251() //Position: 0xD978 / 55672
{
	if (Function_253())
	{
		return (Function_252() != 1 || Function_252() != 0);
	}
	return 0;
}

int Function_252() //Position: 0xD991 / 55697
{
	return Global_79349.f_16;
}

bool Function_253() //Position: 0xD99D / 55709
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_254(var uParam0, var uParam1, int iParam2) //Position: 0xD9A6 / 55718
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_253())
	{
		return;
	}
	if (!Function_249(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(Function_15(iParam2), 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(Function_15(iParam2), 12));
			Function_255(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_12(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_12(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_255(var uParam0, int iParam1) //Position: 0xDA7C / 55932
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_256() //Position: 0xDA8B / 55947
{
	var uVar0;
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling", 1, 0);
	Function_259(&Local_233 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	if (!Function_223(&Local_233 + 4))
	{
		return 0;
	}
	Local_233 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(Local_233))
	{
		Local_233 = CREATE_LAYOUT("PikesBasin_layout");
	}
	Local_233.f_188 = CREATE_GRINGO_IN_LAYOUT(Local_233, "kneel_hammer", "kneel_hammer", -1202,302f, 75,29413f, 2354,097f, 0.0f, -74,60783f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_188), 0);
	Local_233.f_192 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Pee_nospawn", "Pee_nospawn", -1192.0f, 75,29413f, 2357,749f, 0.0f, -177,0614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_192), 0);
	Local_233.f_196 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Pee_nospawn1", "Pee_nospawn", -1169,195f, 76,489f, 2391,551f, 0.0f, -116,1596f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_196), 0);
	Local_233.f_200 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1197,084f, 75,29413f, 2366,027f, 0.0f, -186,261f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_200), 0);
	Local_233.f_204 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -1199,385f, 75,29413f, 2370,493f, 0.0f, -46,43064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_204), 0);
	Local_233.f_208 = CREATE_GRINGO_IN_LAYOUT(Local_233, "rand_idle_stand", "rand_idle_stand", -1194,401f, 75,29413f, 2379,484f, 0.0f, 17,88893f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_208), 0);
	Local_233.f_212 = CREATE_GRINGO_IN_LAYOUT(Local_233, "rand_idle_stand1", "rand_idle_stand", -1202,31f, 75,29407f, 2361,132f, 0.0f, -140,612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_212), 0);
	Local_233.f_216 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1198,014f, 75,29413f, 2368,262f, 0.0f, -108,9585f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_216), 0);
	Local_233.f_220 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -1214,618f, 74,29016f, 2371,631f, 0.0f, -72,79943f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_220), 0);
	Local_233.f_224 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -1195,559f, 75,29413f, 2370,29f, 0.0f, 30,13509f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_224), 0);
	Local_233.f_228 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_smoke", "sit_ground_smoke", -1190,802f, 75,29413f, 2374,861f, 0.0f, 100,2602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_228), 0);
	Local_233.f_232 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_smoke1", "sit_ground_smoke", -1194,976f, 75,29413f, 2366,998f, 0.0f, -219,1066f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_232), 0);
	Local_233.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_guntricks_e_any", "stand_guntricks_e_any", -1208f, 75,29413f, 2364.0f, 0.0f, 69,66526f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_236), 0);
	Local_233.f_240 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_guntricks_e_any1", "stand_guntricks_e_any", -1207,994f, 74,29016f, 2376,025f, 0.0f, 73,27496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_240), 0);
	Local_233.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_guntricks_e_any2", "stand_guntricks_e_any", -1196.0f, 75,29413f, 2360.0f, 0.0f, 69,98853f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_244), 0);
	Local_233.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -1220.0f, 74,29016f, 2368.0f, 0.0f, 103,784f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_248), 0);
	Local_233.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_spit", "stand_spit", -1200.0f, 75,29413f, 2376.0f, 0.0f, 86,50423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_252), 0);
	Local_233.f_256 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_spit1", "stand_spit", -1206,262f, 75,29411f, 2356,792f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_256), 0);
	Local_233.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_yelling", "stand_yelling_mid", -1205,428f, 75,29413f, 2367,632f, 0.0f, -97,40594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_260), 0);
	Local_233.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_233, "kneel_hammer1", "kneel_hammer", -1244,944f, 75,39232f, 2531,394f, 0.0f, -137,8052f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_264), 0);
	Local_233.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Pee_nospawn2", "Pee_nospawn", -1230,62f, 76,25161f, 2518,232f, 0.0f, -71,4719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_268), 0);
	Local_233.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -1243,949f, 75,29412f, 2523,44f, 0.0f, 181,0862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_272), 0);
	Local_233.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_233, "rand_idle_stand2", "rand_idle_stand", -1248,017f, 75,40473f, 2527,961f, 0.0f, 58,84678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_276), 0);
	Local_233.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -1244,204f, 75,34436f, 2527,539f, 0.0f, -33,51836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_280), 0);
	Local_233.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_play_harmonica2", "sit_ground_play_harmonica", -1240,836f, 75,29408f, 2526,966f, 0.0f, 56,64608f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_284), 0);
	Local_233.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_announce", "stand_announce", -1243,957f, 75,298f, 2520,003f, 0.0f, 192,8241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_288), 0);
	Local_233.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_guntricks_e_any3", "stand_guntricks_e_any", -1240,005f, 75,29413f, 2524,009f, 0.0f, 111,8986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_292), 0);
	Local_233.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1252,123f, 75,19318f, 2523,851f, 0.0f, 61,24049f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_296), 0);
	Local_233.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_spit2", "stand_spit", -1248,017f, 75,42365f, 2532,021f, 0.0f, 21,16471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_300), 0);
	Local_233.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_yawning_n_any", "stand_yawning_n_any", -1241,378f, 75,29407f, 2530,489f, 0.0f, 42,40554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_304), 0);
	Local_233.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_yelling1", "stand_yelling", -1238,453f, 75,33948f, 2529,928f, 0.0f, 42,61644f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_308), 0);
	Local_233.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Pee_nospawn3", "Pee_nospawn", -1495,551f, 76,29803f, 2292,629f, 0.0f, 280,3958f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_312), 0);
	Local_233.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -1495,988f, 77,30194f, 2279,976f, 0.0f, -41,60196f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_316), 0);
	Local_233.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_233, "rand_idle_stand3", "rand_idle_stand", -1493,025f, 77,30194f, 2274,117f, 0.0f, 118,4338f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_320), 0);
	Local_233.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", -1493,487f, 77,30194f, 2278,184f, 0.0f, 41,13057f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_324), 0);
	Local_233.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_smoke2", "sit_ground_smoke", -1495,083f, 77,30194f, 2273,966f, 0.0f, -172,2864f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_328), 0);
	Local_233.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_233, "sit_ground_smoke3", "sit_ground_smoke", -1496,851f, 77,30194f, 2276,556f, 0.0f, -60,06681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_332), 0);
	Local_233.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_announce1", "stand_announce", -1490,797f, 77,30194f, 2283,772f, 0.0f, -334,6429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_336), 0);
	Local_233.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_announce2", "stand_announce", -1500.0f, 76,29803f, 2288.0f, 0.0f, -47,23029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_340), 0);
	Local_233.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_guntricks_e_any4", "stand_guntricks_e_any", -1500.0f, 77,30194f, 2280.0f, 0.0f, -86,52061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_344), 0);
	Local_233.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_spit3", "stand_spit", -1496f, 77,30194f, 2284.0f, 0.0f, -102,6642f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_348), 0);
	Local_233.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_yawning_n_any1", "stand_yawning_n_any", -1480f, 77,6004f, 2276.0f, 0.0f, 127,0419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_352), 0);
	Local_233.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_233, "stand_yelling2", "stand_yelling", -1489,977f, 77,30194f, 2276,747f, 0.0f, 90,28252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_233.f_356), 0);
	Local_233.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Locked_Footlocker", "Locked_Footlocker", -1239,362f, 76,12821f, 2516,392f, 0.0f, -230,5784f, 0.0f);
	Local_233.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_233, "Locked_Footlocker1", "Locked_Footlocker", -1483,228f, 77,6f, 2272,772f, 0.0f, -217,2793f, 0.0f);
	return 1;
}

void Function_257(int iParam0, int iParam1) //Position: 0xEDD4 / 60884
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

struct<8> Function_258() //Position: 0xEE1D / 60957
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_257(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PikesBasin_layout");
	}
	Local_0.f_24 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "AlreadyInsideSet_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_AreadyIn1", 2, -1139,669f, 85,50198f, 2397,994f, 0.0f, -98,43246f, 0.0f, 72,28513f, 38,93865f, 29,30383f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_AlreadyIn2", 2, -1244,81f, 85,29498f, 2113,82f, 0.0f, 0.0f, 0.0f, 55,32957f, 28,01724f, 28,01724f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_AlreadyIn3", 2, -1401,132f, 74,07532f, 2244,32f, 0.0f, 46,80381f, 0.0f, 33,13998f, 33,13998f, 59,95037f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_alreadyIn4", 2, -1595,619f, 53,96125f, 2437,53f, 0.0f, -37,01864f, 0.0f, 71,20465f, 23,2709f, 23,2709f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[3]);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_helperStop", 2, -1178,028f, 76,29803f, 2368,719f, 0.0f, 0.0f, 0.0f, 8,237045f, 8,237045f, 9,253483f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_guardVol", 2, -1175,562f, 76,18143f, 2362,396f, 0.0f, 35,91524f, 0.0f, 11,11741f, 4,474076f, 15,52327f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_bridgesniCyl1", 2, -1280,723f, 87,13815f, 2369,308f, 0.0f, -11,37486f, 0.0f, 6,065359f, 6,065359f, 13,57058f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_bridgesniCyl2", 2, -1266,951f, 85,35784f, 2402,505f, 0.0f, -113,9405f, 0.0f, 4,693594f, 4,693594f, 13,95571f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_slowDown", 2, -1164,005f, 90,71706f, 2327,153f, 0.0f, -23,07202f, 0.0f, 17,27579f, 17,27579f, 24,33576f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn1", 2, -1253,801f, 80,314f, 2182,282f, 0.0f, -42,79086f, 0.0f, 27,61767f, 18,75238f, 20,04885f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn2", 2, -1272.0f, 80,31372f, 2236.0f, 0.0f, 0.0f, 0.0f, 21,51628f, 21,51628f, 21,51628f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn3", 2, -1296.0f, 76,29803f, 2288.0f, 0.0f, 0.0f, 0.0f, 34,95654f, 23,60032f, 23,60032f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn4", 2, -1311,946f, 70,275f, 2350,613f, 0.0f, 0.0f, 0.0f, 22,63349f, 21,44477f, 21,44477f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn5", 2, -1278,395f, 72,65167f, 2434,16f, 0.0f, -14,70481f, 0.0f, 31,97156f, 29,29355f, 19,24492f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn6", 2, -1265,314f, 70,43589f, 2505,984f, 0.0f, 66,77618f, 0.0f, 25,02906f, 14,28399f, 27,45445f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn7", 2, -1359,338f, 72,322f, 2436,749f, 0.0f, 15,98228f, 0.0f, 160,8902f, 27,50153f, 47,53299f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn8", 2, -1478,667f, 59,52267f, 2468,32f, 0.0f, 0.0f, 0.0f, 21,0649f, 37,31767f, 30,44314f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn9", 2, -1425,953f, 62,244f, 2408,26f, 0.0f, 33,54885f, 0.0f, 30,26427f, 23,14559f, 23,14559f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn10", 2, -1425,721f, 70,275f, 2337,188f, 0.0f, 0.0f, 0.0f, 28,39706f, 28,39706f, 28,39706f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn11", 2, -1467,874f, 70,374f, 2299,959f, 0.0f, 0.0f, 0.0f, 28,68723f, 28,68723f, 28,68723f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_groupIn12", 2, -1419,859f, 70,52f, 2263,771f, 0.0f, -51,09812f, 0.0f, 38,50616f, 11,87008f, 16,37532f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_ArmGateway", 2, -1625,022f, 53,95382f, 2413,722f, 0.0f, -42,72219f, 0.0f, 9,400867f, 15,05778f, 8,67498f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_introGateway", 2, -1503,814f, 59,72019f, 2460,026f, 0.0f, 0.0f, 0.0f, 2,134621f, 2,697062f, 3,491583f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_helperIntro", 2, -1503,47f, 59,35239f, 2461,05f, 0.0f, 0.0f, 0.0f, 2,652559f, 5,064361f, 2,652559f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_blipMainCampSquad", 2, -1216,7f, 75,29413f, 2370,382f, 0.0f, 0.0f, 0.0f, 168,1334f, 128,6735f, 113,9047f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad8", 2, -1496,443f, 69,0963f, 2452,288f, 0.0f, -4,721901f, 0.0f, 186,1838f, 48,31003f, 75,76049f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad7", 2, -1353,833f, 69,0963f, 2451,325f, 0.0f, -15,48637f, 0.0f, 100,3228f, 48,31003f, 68,34258f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad6", 2, -1281,962f, 69,0963f, 2493,322f, 0.0f, 30,4951f, 0.0f, 113,3849f, 48,31003f, 87,72249f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad5", 2, -1267,796f, 69,0963f, 2439,839f, 0.0f, 87,60785f, 0.0f, 113,3849f, 48,31003f, 48,50608f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad4", 2, -1312,318f, 83,79956f, 2333,569f, 0.0f, 84,99364f, 0.0f, 109,5603f, 48,31003f, 48,86852f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad3", 2, -1288,323f, 83,79956f, 2276,337f, 0.0f, 49,85001f, 0.0f, 112,6867f, 48,31003f, 44,00807f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad2", 2, -1274,505f, 83,79956f, 2235,281f, 0.0f, 74,46017f, 0.0f, 93,29057f, 48,31003f, 70,20873f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BlipSquad1", 2, -1255,359f, 83,79956f, 2168,172f, 0.0f, 74,46017f, 0.0f, 111,5295f, 48,31003f, 70,20873f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_MainCampStayIn", 2, -1200,78f, 75,54284f, 2368,463f, 0.0f, 0.0f, 0.0f, 37,88311f, 20,66769f, 32,60902f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet01", 3, -1177,527f, 72,63332f, 2369,007f, 0.0f, 2,914154f, 0.0f, 56,80202f, 56,80202f, 56,80202f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet02", 3, -1250,711f, 84,03722f, 2139,524f, 0.0f, 2,914154f, 0.0f, 32,67224f, 32,67224f, 32,67224f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet03", 3, -1408,88f, 80,74612f, 2229,907f, 0.0f, 2,914154f, 0.0f, 23,84316f, 23,84316f, 23,84316f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_VolumeSet04", 3, -1585,562f, 50,80611f, 2438,274f, 0.0f, 2,914154f, 0.0f, 41,29047f, 38,31564f, 41,29047f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_BridgeGuyStayIn", 2, -1267,027f, 85,61971f, 2402,348f, 0.0f, -24,63436f, 0.0f, 8,233026f, 4,08976f, 3,708815f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_excitedReturn", 2, -1490,9f, 59,52267f, 2468,32f, 0.0f, 0.0f, 0.0f, 50,54816f, 60,89615f, 49,67807f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CheckPlayerHorse", 2, -1504,312f, 59,35239f, 2461,05f, 0.0f, 0.0f, 0.0f, 14,22822f, 15,17736f, 14,60995f);
	*(&Local_0 + 176) = { -1503,966f, 59,05378f, 2461,444f };
	*(&Local_0 + 176 + 12) = { 0.0f, 274,7909f, 0.0f };
	Local_0.f_200 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_help_front", -1503,966f, 59,05378f, 2461,444f, 0.0f, 274,7909f, 0.0f);
	*(&Local_0 + 204) = { -1608,838f, 53,96173f, 2422,991f };
	*(&Local_0 + 204 + 12) = { 0.0f, -113,2362f, 0.0f };
	Local_0.f_228 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_teleport", -1608,838f, 53,96173f, 2422,991f, 0.0f, -113,2362f, 0.0f);
	*(&Local_0 + 232) = { -1239,878f, 75,66244f, 2520,361f };
	*(&Local_0 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_256 = CREATE_POINT_IN_LAYOUT(Local_0, "nf_camp1_1", -1239,878f, 75,66244f, 2520,361f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 260) = { -1240.0f, 75,29407f, 2528f };
	*(&Local_0 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_284 = CREATE_POINT_IN_LAYOUT(Local_0, "nf_camp1_2", -1240.0f, 75,29407f, 2528f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 288) = { -1496f, 77,30194f, 2284.0f };
	*(&Local_0 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_312 = CREATE_POINT_IN_LAYOUT(Local_0, "nf_camp2_1", -1496f, 77,30194f, 2284.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 316) = { -1492f, 77,30194f, 2284.0f };
	*(&Local_0 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_340 = CREATE_POINT_IN_LAYOUT(Local_0, "nf_camp2_2", -1492f, 77,30194f, 2284.0f, 0.0f, 0.0f, 0.0f);
	Local_0.f_344 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group1_1", -1250,268f, 80,21631f, 2185,513f, 0.0f, 60,74244f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_344, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_344, "FTE", true);
	Local_0.f_348 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group1_2", -1251,885f, 80,12868f, 2183,575f, 0.0f, 258,1044f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_348, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_348, "FTE", true);
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group1_3", -1253,715f, 80,31372f, 2188,117f, 0.0f, -33,97869f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_352, "PIK_Canyon", true);
	Local_0.f_356 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group2_1", -1268f, 80,31372f, 2240.0f, 0.0f, 7,574362f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_356, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_356, "FTE", true);
	Local_0.f_360 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group2_2", -1272,061f, 80,31372f, 2232,837f, 0.0f, -4,182311f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_360, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_360, "FTE", true);
	Local_0.f_364 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group2_3", -1274,929f, 79,30981f, 2240.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_364, "PIK_Canyon", true);
	Local_0.f_368 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group3_1", -1290,873f, 76,29803f, 2289,005f, 0.0f, -31,94887f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_368, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_368, "FTE", true);
	Local_0.f_372 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group3_2", -1297,173f, 76,29803f, 2285,627f, 0.0f, -39,85867f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_372, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_372, "FTE", true);
	Local_0.f_376 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group3_3", -1301,273f, 76,29803f, 2285,453f, 0.0f, 327,0281f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_376, "PIK_Canyon", true);
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group4_1", -1306,897f, 71,27841f, 2353,559f, 0.0f, 27,44552f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_380, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_380, "FTE", true);
	Local_0.f_384 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group4_2", -1323,141f, 71,27841f, 2348,429f, 0.0f, 5,391821f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_384, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_384, "FTE", true);
	Local_0.f_388 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group4_3", -1309,483f, 71,27841f, 2354,814f, 0.0f, 41,27657f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_388, "PIK_Canyon", true);
	Local_0.f_392 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group5_1", -1282,078f, 70,32738f, 2433,271f, 0.0f, -198,1902f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_392, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_392, "FTE", true);
	Local_0.f_396 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group5_2", -1274,775f, 70,28547f, 2433,839f, -176,5139f, 29,47797f, 182,9077f);
	DECOR_SET_BOOL(Local_0.f_396, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_396, "FTE", true);
	Local_0.f_400 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group5_3", -1267,109f, 84,18763f, 2402,51f, 0.0f, -203,9592f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_400, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_400, "FTE", true);
	Local_0.f_404 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group6_1", -1267,538f, 69,32523f, 2501,696f, 0.0f, -215,1035f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_404, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_404, "FTE", true);
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group6_2", -1257,553f, 70,05267f, 2500,39f, 0.0f, -198,1204f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_408, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_408, "FTE", true);
	Local_0.f_412 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group6_3", -1260,314f, 69,43683f, 2511,771f, 0.0f, 69,9072f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_412, "PIK_Canyon", true);
	Local_0.f_416 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group7_1", -1349,316f, 72,34944f, 2438,939f, 0.0f, -291,7401f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_416, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_416, "FTE", true);
	Local_0.f_420 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group7_2", -1333,182f, 73,15293f, 2434,341f, 0.0f, -285,5722f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_420, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_420, "FTE", true);
	Local_0.f_424 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group7_3", -1355,373f, 73,04667f, 2426,764f, 0.0f, -272,9511f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_424, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_424, "FTE", true);
	Local_0.f_428 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group7_4", -1390,267f, 76,69369f, 2462,469f, 0.0f, -265,598f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_428, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_428, "FTE", true);
	Local_0.f_432 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group7_5", -1410,233f, 68,90279f, 2446,952f, 0.0f, -237,4765f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_432, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_432, "FTE", true);
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group8_1", -1471,338f, 60,93575f, 2469,271f, 0.0f, -245,6488f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_436, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_436, "FTE", true);
	Local_0.f_440 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group8_2", -1478,161f, 60,18522f, 2476,429f, 0.0f, -268,5379f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_440, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_440, "FTE", true);
	Local_0.f_444 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group8_3", -1477,018f, 60,35752f, 2469,042f, 0.0f, -282,0281f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_444, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_444, "FTE", true);
	Local_0.f_448 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group9_1", -1432.0f, 64,25095f, 2408.0f, 0.0f, 138,7788f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_448, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_448, "FTE", true);
	Local_0.f_452 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group9_2", -1424.0f, 64,25099f, 2412.0f, 0.0f, 126,2359f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_452, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_452, "FTE", true);
	Local_0.f_456 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group9_3", -1424.0f, 64,79581f, 2400.0f, 0.0f, -262,6426f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_456, "PIK_Canyon", true);
	Local_0.f_460 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group10_1", -1416f, 70,27448f, 2336f, 0.0f, -219,3174f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_460, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_460, "FTE", true);
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group10_2", -1432f, 70,27446f, 2340.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_464, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_464, "FTE", true);
	Local_0.f_468 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group10_3", -1432f, 70,27448f, 2332f, 0.0f, -241,2943f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_468, "PIK_Canyon", true);
	Local_0.f_472 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group11_1", -1464.0f, 70,27451f, 2296.0f, 0.0f, -189,857f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_472, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_472, "FTE", true);
	Local_0.f_476 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group11_2", -1480f, 69,27057f, 2308.0f, 0.0f, -34,79613f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_476, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_476, "FTE", true);
	Local_0.f_480 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group11_3", -1471,832f, 69,27057f, 2312.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_480, "PIK_Canyon", true);
	Local_0.f_484 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group12_1", -1420.0f, 71,27841f, 2273,024f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_484, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_484, "FTE", true);
	Local_0.f_488 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group12_2", -1424.0f, 71,27841f, 2264f, 0.0f, -83,38127f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_488, "PIK_Canyon", true);
	DECOR_SET_BOOL(Local_0.f_488, "FTE", true);
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "f_group12_3", -1412.0f, 71,13173f, 2268,177f, 0.0f, 67,39184f, 0.0f);
	DECOR_SET_BOOL(Local_0.f_492, "PIK_Canyon", true);
	*(&Local_0 + 496) = { -1457,178f, 86,87448f, 2310,231f };
	*(&Local_0 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "bridgePin1_2", -1457,178f, 86,87448f, 2310,231f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 524) = { -1455,008f, 86,87398f, 2310,237f };
	*(&Local_0 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "bridgePin1_1", -1455,008f, 86,87398f, 2310,237f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 552) = { -1454,823f, 86,91029f, 2274,059f };
	*(&Local_0 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "bridgePin1_3", -1454,823f, 86,91029f, 2274,059f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 580) = { -1457,144f, 86,91412f, 2274,033f };
	*(&Local_0 + 580 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "bridgePin1_4", -1457,144f, 86,91412f, 2274,033f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 608) = { -1634,091f, 54,21176f, 2402,574f };
	*(&Local_0 + 608 + 12) = { 0.0f, 52,20312f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "f_playerGoToFlag", -1634,091f, 54,21176f, 2402,574f, 0.0f, 52,20312f, 0.0f);
	*(&Local_0 + 636) = { -1161,776f, 76,63732f, 2364.0f };
	*(&Local_0 + 636 + 12) = { 0.0f, 109,5129f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "f_HerdCreation", -1161,776f, 76,63732f, 2364.0f, 0.0f, 109,5129f, 0.0f);
	*(&Local_0 + 664) = { -1660,24f, 51,9105f, 2392,137f };
	*(&Local_0 + 664 + 12) = { 0.0f, 64,63776f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "f_CowGoToFlag", -1660,24f, 51,9105f, 2392,137f, 0.0f, 64,63776f, 0.0f);
	Local_0.f_692 = CREATE_OBJECTSET_IN_LAYOUT("PIK_AreaChestsSet", Local_0, 8, 0);
	*(&Local_0 + 696[06]) = { -1190,333f, 75,295f, 2379,068f };
	*(&Local_0 + 696[06] + 12) = { 0.0f, 90.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_AreaChests01", -1190,333f, 75,295f, 2379,068f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_692);
	*(&Local_0 + 696[16]) = { -1194,71f, 75,295f, 2361,093f };
	*(&Local_0 + 696[16] + 12) = { 0.0f, 140,6601f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_AreaChests02", -1194,71f, 75,295f, 2361,093f, 0.0f, 140,6601f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_692);
	*(&Local_0 + 748) = { -1503,75f, 59,10756f, 2460,121f };
	*(&Local_0 + 748 + 12) = { 0.0f, -180.0f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportJohnCrouch", -1503,75f, 59,10756f, 2460,121f, 0.0f, -180.0f, 0.0f);
	*(&Local_0 + 776) = { -1503,809f, 59,05842f, 2461,374f };
	*(&Local_0 + 776 + 12) = { 0.0f, -51,92019f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportRancherCrouch", -1503,809f, 59,05842f, 2461,374f, 0.0f, -51,92019f, 0.0f);
	*(&Local_0 + 804) = { -1178,068f, 76,29803f, 2369,931f };
	*(&Local_0 + 804 + 12) = { 0.0f, -134,7105f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportRancher", -1178,068f, 76,29803f, 2369,931f, 0.0f, -134,7105f, 0.0f);
	*(&Local_0 + 832) = { -1176,856f, 76,29803f, 2371,131f };
	*(&Local_0 + 832 + 12) = { 0.0f, -318,3134f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "f_teleportMarston", -1176,856f, 76,29803f, 2371,131f, 0.0f, -318,3134f, 0.0f);
	Local_0.f_860 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_MAINCAMP1", -1204.0f, 75,29412f, 2363,419f, 0.0f, 97,0135f, 0.0f);
	Local_0.f_864 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_MAINCAMP2", -1192.0f, 75,29413f, 2380.0f, 0.0f, 65,82169f, 0.0f);
	Local_0.f_868 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_MAINCAMP3", -1212,993f, 74,29016f, 2371,007f, 0.0f, 85,32869f, 0.0f);
	Local_0.f_872 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_MAINCAMP4", -1192f, 75,29413f, 2368.0f, 0.0f, 96,14014f, 0.0f);
	Local_0.f_876 = CREATE_POINT_IN_LAYOUT(Local_0, "f_PIK_MAINCAMP5", -1204f, 74,61318f, 2378,142f, 0.0f, 101,9614f, 0.0f);
	Local_0.f_880 = CREATE_POINT_IN_LAYOUT(Local_0, "f_TeleportHorse", -1512,136f, 58,64619f, 2461,237f, 0.0f, -65,3695f, 0.0f);
	Local_0.f_884 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "introCover", -1504,215f, 59,13425f, 2461f, 0.0f, -90,29622f, 0.0f, 4);
	Local_0.f_888 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low1", -1430,396f, 64,9642f, 2465,819f, 0.0f, -66,76308f, 0.0f, 4);
	Local_0.f_892 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low1a", -1375,024f, 70,46259f, 2438,6f, 0.0f, -73,59174f, 0.0f, 4);
	Local_0.f_896 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low2", -1281,78f, 68,36338f, 2523,242f, 0.0f, -74,8913f, 0.0f, 4);
	Local_0.f_900 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low3", -1287,685f, 70,39079f, 2458,864f, 0.0f, -24,91617f, 0.0f, 4);
	Local_0.f_904 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low4", -1241,877f, 73,56133f, 2375,054f, 0.0f, -89,48199f, 0.0f, 4);
	Local_0.f_908 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low5", -1216,463f, 74,29016f, 2369,405f, 0.0f, -449,8068f, 0.0f, 4);
	Local_0.f_912 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low6", -1306,166f, 73,15712f, 2323,85f, 0.0f, -363,3798f, 0.0f, 4);
	Local_0.f_916 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low7", -1276,516f, 77,5472f, 2281,081f, 0.0f, -373,7749f, 0.0f, 4);
	Local_0.f_920 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_0, "cover_low8", -1262,99f, 80,40509f, 2211,63f, 0.0f, -381,7527f, 0.0f, 4);
}

var Function_259(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1149F / 70815
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_260(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_212(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_260(var uParam0, int iParam1, int iParam2) //Position: 0x114D7 / 70871
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_212(uParam0[iVar03], 4);
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

int Function_261(int iParam0) //Position: 0x1159B / 71067
{
	if (Global_3421)
	{
		return 0;
	}
	*iParam0 = *iParam0;
	if (Global_3380 || Global_3379)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3379)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 1;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	if (Function_249(iParam0, 256))
	{
		return 0;
	}
	if (Function_253())
	{
		return 0;
	}
	return 1;
}

