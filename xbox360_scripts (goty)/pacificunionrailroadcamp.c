//Decompiled with MagicRDR v1.0
//Function Count : 101
//Statics Count : 674
//Natives Count : 137
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	bool bLocal_4 = false;
	var uLocal_5 = 0;
	struct<1197> Local_6 = { 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_306 = 0;
	Function_100("Initializing PacificUnionRailroadCamp", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_307 = 1000;
		switch (iLocal_306)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_306 = 1;
				}
				bLocal_307 = false;
				break;
			
			case 0x00000001:
				if (Function_99())
				{
					Global_62981 = 0;
					iLocal_306 = 2;
				}
				bLocal_307 = false;
				break;
			
			case 0x00000002:
				if (Function_90())
				{
					Function_89(&(Global_29008[iScriptParam_0]), 32);
					Local_650[04] = { StackVal, StackVal, StackVal, Function_88(FIND_OBJECT_IN_LAYOUT(Local_6, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(Local_6, "rand_idle_stand15"), 1, 0, 0, 0, 0, 1) };
					Local_650[14] = { StackVal, StackVal, StackVal, Function_88(FIND_OBJECT_IN_LAYOUT(Local_6, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(Local_6, "smoking_stand11"), 1, 0, 0, 0, 0, 1) };
					Local_650[24] = { StackVal, StackVal, StackVal, Function_88(FIND_OBJECT_IN_LAYOUT(Local_6, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(Local_6, "rand_idle_stand14"), 1, 0, 0, 0, 0, 1) };
					Local_650[34] = { StackVal, StackVal, StackVal, Function_88(FIND_OBJECT_IN_LAYOUT(Local_6, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(Local_6, "smoking_stand10"), 1, 0, 0, 0, 0, 1) };
					Local_650[44] = { StackVal, StackVal, StackVal, Function_88(FIND_OBJECT_IN_LAYOUT(Local_6, "stand_yelling_down"), FIND_OBJECT_IN_LAYOUT(Local_6, "rand_idle_stand13"), 1, 0, 0, 0, 0, 1) };
					iLocal_306 = 3;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
				}
				bLocal_307 = false;
				break;
			
			case 0x00000003:
				bLocal_308 = LAUNCH_NEW_SCRIPT_WITH_ARGS("PacificUnionRailroadCampVol", &iScriptParam_0, 2, 0);
				Function_87(&Global_7113, &Global_8395, iScriptParam_0);
				iLocal_306 = 5;
				bLocal_307 = false;
				break;
			
			case 0x00000005:
				if (Function_86(&Global_7113, &Global_8395, iScriptParam_0))
				{
					iLocal_306 = 4;
					bLocal_307 = false;
				}
				else
				{
					bLocal_307 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_85(&(Global_29008[iScriptParam_0]), 16) && Function_84(Global_29155[iScriptParam_010]))
				{
					iLocal_306 = 6;
				}
				bLocal_307 = false;
				break;
			
			case 0x00000006:
				Function_83(0, &uLocal_309, -266.762f, 85.117f, 2120.414f);
				Function_82(0, &uLocal_309, -280.634f, 87.661f, 2121.0f);
				Function_81(0, &uLocal_309, -302.73f, 84.35f, 2131.1f);
				Function_80(0, &uLocal_309, -280.634f, 87.661f, 2121.0f);
				Function_79(0, &uLocal_309, -302.73f, 84.35f, 2131.1f);
				Function_78(0, &uLocal_309, -258.06f, 85.05f, 2122.53f);
				Function_77(0, &uLocal_309, Local_6);
				Function_83(1, &uLocal_309, -266.766f, 85.117f, 2120.2f);
				Function_82(1, &uLocal_309, -298.6489f, 84.32935f, 2116.0f);
				Function_81(1, &uLocal_309, -266.766f, 85.117f, 2120.2f);
				Function_80(1, &uLocal_309, -277.403f, 84.584f, 2095.399f);
				Function_79(1, &uLocal_309, -266.766f, 85.117f, 2120.2f);
				Function_78(1, &uLocal_309, -252.373f, 84.329f, 2123.671f);
				Function_77(1, &uLocal_309, Local_6);
				Function_83(2, &uLocal_309, -299.333f, 84.329f, 2124.0f);
				Function_82(2, &uLocal_309, -290.79f, 84.35f, 2094.42f);
				Function_81(2, &uLocal_309, -304.0f, 84.351f, 2128.0f);
				Function_80(2, &uLocal_309, -290.79f, 84.35f, 2094.42f);
				Function_79(2, &uLocal_309, -304.0f, 84.351f, 2128.0f);
				Function_78(2, &uLocal_309, -315.62f, 84.36777f, 2123.791f);
				Function_77(2, &uLocal_309, Local_6);
				Function_83(3, &uLocal_309, -302.26f, 84.35f, 2123.06f);
				Function_82(3, &uLocal_309, -244.66f, 84.329f, 2103.381f);
				Function_81(3, &uLocal_309, -302.26f, 84.35f, 2123.06f);
				Function_80(3, &uLocal_309, -244.66f, 84.329f, 2103.381f);
				Function_79(3, &uLocal_309, -302.26f, 84.35f, 2123.06f);
				Function_78(3, &uLocal_309, -314.006f, 84.329f, 2126.552f);
				Function_77(3, &uLocal_309, Local_6);
				Function_83(4, &uLocal_309, -299.7092f, 84.32941f, 2082.547f);
				Function_82(4, &uLocal_309, -277.48f, 84.351f, 2129.169f);
				Function_81(4, &uLocal_309, -300.53f, 84.55f, 2088.3f);
				Function_80(4, &uLocal_309, -280.42f, 84.329f, 2093.199f);
				Function_79(4, &uLocal_309, -307.614f, 84.329f, 2118.864f);
				Function_78(4, &uLocal_309, -315.999f, 84.27454f, 2126.504f);
				Function_77(4, &uLocal_309, Local_6);
				Function_83(5, &uLocal_309, -304.1736f, 84.55002f, 2089.449f);
				Function_82(5, &uLocal_309, -249.858f, 84.329f, 2101.484f);
				Function_81(5, &uLocal_309, -301.094f, 84.329f, 2131.663f);
				Function_80(5, &uLocal_309, -249.858f, 84.329f, 2101.484f);
				Function_79(5, &uLocal_309, -302.553f, 84.329f, 2123.962f);
				Function_78(5, &uLocal_309, -314.059f, 84.328f, 2134.831f);
				Function_77(5, &uLocal_309, Local_6);
				Function_83(6, &uLocal_309, -289.72f, 87.32f, 2114.93f);
				Function_82(6, &uLocal_309, -289.72f, 87.32f, 2114.93f);
				Function_81(6, &uLocal_309, -289.72f, 87.32f, 2114.93f);
				Function_80(6, &uLocal_309, -289.72f, 87.32f, 2114.93f);
				Function_79(6, &uLocal_309, -306.2889f, 84.32941f, 2131.512f);
				Function_78(6, &uLocal_309, -314.328f, 84.329f, 2131.738f);
				Function_77(6, &uLocal_309, Local_6);
				Function_83(7, &uLocal_309, -307.653f, 84.329f, 2120.486f);
				Function_82(7, &uLocal_309, -249.983f, 84.352f, 2096.53f);
				Function_81(7, &uLocal_309, -307.653f, 84.329f, 2120.486f);
				Function_80(7, &uLocal_309, -249.983f, 84.352f, 2096.53f);
				Function_79(7, &uLocal_309, -307.653f, 84.329f, 2120.486f);
				Function_78(7, &uLocal_309, -315.302f, 84.406f, 2132.153f);
				Function_77(7, &uLocal_309, Local_6);
				Function_83(8, &uLocal_309, -171.88f, 84.182f, 2071.48f);
				Function_82(8, &uLocal_309, -171.88f, 84.182f, 2071.48f);
				Function_81(8, &uLocal_309, -171.88f, 84.182f, 2071.48f);
				Function_80(8, &uLocal_309, -171.88f, 84.182f, 2071.48f);
				Function_79(8, &uLocal_309, -302.907f, 84.351f, 2128.898f);
				Function_78(8, &uLocal_309, -296.439f, 84.264f, 2137.403f);
				Function_77(8, &uLocal_309, Local_6);
				Function_83(9, &uLocal_309, -305.49f, 84.35f, 2134.11f);
				Function_82(9, &uLocal_309, -274.612f, 84.329f, 2102.467f);
				Function_81(9, &uLocal_309, -305.49f, 84.35f, 2134.11f);
				Function_80(9, &uLocal_309, -274.612f, 84.329f, 2102.467f);
				Function_79(9, &uLocal_309, -305.49f, 84.35f, 2134.11f);
				Function_78(9, &uLocal_309, -297.0513f, 84.26437f, 2137.2f);
				Function_77(9, &uLocal_309, Local_6);
				Function_83(10, &uLocal_309, -294.8471f, 84.329f, 2134.998f);
				Function_82(10, &uLocal_309, -301.502f, 84.329f, 2130.797f);
				Function_81(10, &uLocal_309, -301.502f, 84.329f, 2130.797f);
				Function_80(10, &uLocal_309, -301.502f, 84.329f, 2130.797f);
				Function_79(10, &uLocal_309, -301.502f, 84.329f, 2130.797f);
				Function_78(10, &uLocal_309, -301.502f, 84.329f, 2130.797f);
				Function_77(10, &uLocal_309, Local_6);
				Function_83(11, &uLocal_309, -307.67f, 84.35f, 2128.6f);
				Function_82(11, &uLocal_309, -294.306f, 84.403f, 2088.0f);
				Function_81(11, &uLocal_309, -307.67f, 84.35f, 2128.6f);
				Function_80(11, &uLocal_309, -254.97f, 84.55f, 2097.222f);
				Function_79(11, &uLocal_309, -307.67f, 84.35f, 2128.6f);
				Function_78(11, &uLocal_309, -292.85f, 84.38101f, 2124.313f);
				Function_77(11, &uLocal_309, Local_6);
				Function_83(12, &uLocal_309, -269.74f, 84.329f, 2091.258f);
				Function_82(12, &uLocal_309, -268.05f, 84.59f, 2097.74f);
				Function_81(12, &uLocal_309, -310.8121f, 84.32936f, 2128.0f);
				Function_80(12, &uLocal_309, -268.05f, 84.59f, 2097.74f);
				Function_79(12, &uLocal_309, -310.8121f, 84.32936f, 2128.0f);
				Function_78(12, &uLocal_309, -293.9245f, 84.329f, 2125.675f);
				Function_77(12, &uLocal_309, Local_6);
				Function_83(13, &uLocal_309, -251.671f, 84.329f, 2123.671f);
				Function_82(13, &uLocal_309, -255.091f, 84.55f, 2097.222f);
				Function_81(13, &uLocal_309, -306.124f, 84.329f, 2126.922f);
				Function_80(13, &uLocal_309, -301.247f, 84.55f, 2092.632f);
				Function_79(13, &uLocal_309, -306.124f, 84.329f, 2126.922f);
				Function_78(13, &uLocal_309, -294.2988f, 84.28979f, 2122.371f);
				Function_77(13, &uLocal_309, Local_6);
				Function_83(14, &uLocal_309, -314.006f, 84.329f, 2126.551f);
				Function_82(14, &uLocal_309, -297.875f, 84.394f, 2103.793f);
				Function_81(14, &uLocal_309, -314.006f, 84.329f, 2126.551f);
				Function_80(14, &uLocal_309, -297.875f, 84.394f, 2103.793f);
				Function_79(14, &uLocal_309, -314.006f, 84.329f, 2126.551f);
				Function_78(14, &uLocal_309, -240.0f, 84.219f, 2112.08f);
				Function_77(14, &uLocal_309, Local_6);
				Function_83(15, &uLocal_309, -296.439f, 84.264f, 2137.403f);
				Function_82(15, &uLocal_309, -305.865f, 84.538f, 2110.722f);
				Function_81(15, &uLocal_309, -293.127f, 87.594f, 2104.719f);
				Function_80(15, &uLocal_309, -293.127f, 87.594f, 2104.719f);
				Function_79(15, &uLocal_309, -296.439f, 84.264f, 2137.403f);
				Function_78(15, &uLocal_309, -306.379f, 84.329f, 2131.512f);
				Function_77(15, &uLocal_309, Local_6);
				Function_83(16, &uLocal_309, -314.059f, 84.328f, 2134.831f);
				Function_82(16, &uLocal_309, -301.247f, 84.55f, 2092.632f);
				Function_81(16, &uLocal_309, -307.937f, 84.329f, 2132.0f);
				Function_80(16, &uLocal_309, -271.416f, 84.584f, 2096.576f);
				Function_79(16, &uLocal_309, -307.937f, 84.329f, 2132.0f);
				Function_78(16, &uLocal_309, -307.937f, 84.329f, 2132.0f);
				Function_77(16, &uLocal_309, Local_6);
				Function_73(&Global_7113, &Global_8395, &uLocal_309, Global_6289, iScriptParam_0);
				if (Function_85(&(Global_29008[iScriptParam_0]), 256) || !Function_72(2))
				{
					iLocal_671 = 1;
				}
				Function_71(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_6 + 988));
				Function_71(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_6 + 992));
				Function_71(StackVal, GET_OBJECT_FROM_PERS_CHAR(&Local_6 + 1080));
				Function_89(&(Global_29008[iScriptParam_0]), 8);
				if (Function_85(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_70(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_306 = 10;
				}
				else
				{
					iLocal_306 = 7;
				}
				bLocal_307 = false;
				break;
			
			case 0x00000007:
				Function_56(&Global_62527, 4, Global_30723[2], "$/content/North/Mini_Games/ArmWrestling_UPR/ArmWrestling_UPR", 4294967295, 0, "UPRArmWrestling", 351, -263.113f, 85.117f, 2118.903f, 2.5f, 0, FIND_VOLUME_IN_LAYOUT(bLocal_4, "uprv_armwrestling"));
				Function_55(&Global_62527, 4, 1);
				Function_54(&Global_62527, 4);
				Function_53(iScriptParam_0);
				Function_49(iScriptParam_0);
				Function_44(iScriptParam_0);
				iLocal_306 = 8;
				bLocal_307 = false;
				break;
			
			case 0x00000008:
				Function_40(StackVal, 3, 0.5f, 4, bLocal_4, 1);
				Function_39(64);
				Function_35(0, 8, 4, 7, 3);
				Function_32(bLocal_4);
				Function_89(&(Global_29008[iScriptParam_0]), 512);
				bLocal_307 = false;
				iLocal_306 = 9;
				break;
			
			case 0x00000009:
				Function_30(bLocal_4, iScriptParam_0);
				Function_89(&(Global_29008[iScriptParam_0]), 4);
				Function_29("Finished Initializing PacificUnionRailroadCamp", 5.0f);
				bLocal_307 = false;
				iLocal_306 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_28(Global_62981, 16))
				{
					if (Function_25(&(Global_30723[2])))
					{
						Function_24(&Global_62981, 16);
					}
				}
				Function_21(&Local_650);
				if (Function_85(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_306 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_307);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 2);
	Function_11(&Global_7113, &Global_8395, iScriptParam_0, (iLocal_671 || Global_3380));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_70(&(Global_29008[iScriptParam_0]), 32);
	Function_70(&(Global_29008[iScriptParam_0]), 64);
	Function_70(&(Global_29008[iScriptParam_0]), 8);
	Function_70(&(Global_29008[iScriptParam_0]), 512);
	Function_70(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_308))
	{
		TERMINATE_SCRIPT(bLocal_308);
	}
	Function_29("Unloaded PacificUnionRailroadCamp", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xFFB / 4091
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x1031 / 4145
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x1053 / 4179
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x1069 / 4201
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x107F / 4223
{
	Function_6(&Local_6 + 4);
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_6(int iParam0) //Position: 0x1091 / 4241
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x10B7 / 4279
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x11E5 / 4581
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x11FF / 4607
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x121C / 4636
{
	RELEASE_LAYOUT_REF(bLocal_4);
	return;
}

void Function_11(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1227 / 4647
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar0, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_85(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_70(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_17(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_17(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_16(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_16(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_85(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_72(2) || Function_85(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
		{
			Function_12(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_17(uParam0[iVar162], 2) && !Function_17(uParam0[iVar162], 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		bVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(bVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(bVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar21));
				CLEAN_OBJECTSET(bVar21);
			}
			DESTROY_OBJECTSET(bVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_89(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_12(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1427 / 5159
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_15(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_17(uParam0[iParam22], 1) && !bParam3)
	{
		Function_15(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_14(Global_29007), Function_13(Global_29007), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1576 / 5494
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

int Function_14(int iParam0) //Position: 0x15A1 / 5537
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

void Function_15(var uParam0, int iParam1) //Position: 0x15D5 / 5589
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x15E4 / 5604
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x15FB / 5627
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x1617 / 5655
{
	if (Function_28(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x1632 / 5682
{
	if (!Function_4(iParam0))
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

bool Function_20() //Position: 0x1AE0 / 6880
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_21(int iParam0) //Position: 0x1AE9 / 6889
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < (*iParam0 - 1))
	{
		if (StackVal && IS_GRINGO_VALID(IS_GRINGO_VALID((*iParam0)[bVar04])))
		{
			if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER((*iParam0)[bVar04], "UseCase1")))
			{
				Function_24(iParam0[bVar04] + 8, 64);
				if (Function_28(StackVal, 2))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "1.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				else
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "2.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				if (StackVal && IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(Function_28(StackVal, 4), "UseCase1")))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "3.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "4.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
				}
			}
			else if (IS_OBJECT_VALID(GRINGO_QUERY_NAMED_COMPONENT_USER(StackVal, "UseCase1")))
			{
				if (Function_28(StackVal, 16))
				{
					Function_22(iParam0[bVar04] + 8, 64);
				}
				else if (Function_28(StackVal, 32))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "5.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
					Function_22(iParam0[bVar04] + 8, 64);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
				}
				if (Function_28(StackVal, 2))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "6.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
				if (Function_28(StackVal, 4))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "7.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
			}
			else
			{
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[bVar04])
					{
						if (Function_28(StackVal, 64))
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "8.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "8b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
					else if (StackVal && Function_28(Function_28(StackVal, 64), 16))
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "11b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
					else
					{
						Function_22(iParam0[bVar04] + 8, 64);
						if (Function_28(StackVal, 1))
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "12b.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "13b.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
							GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
						}
					}
				}
				else if (StackVal && Function_28(Function_28(StackVal, 64), 16))
				{
					Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "11.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
					GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
					if (Function_28(StackVal, 1))
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "12.parent.SWITCHING ON: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], true);
					}
					else
					{
						Function_23(StackVal, StackVal, StackVal, *iParam0[bVar04], "13.parent.SWITCHING OFF: ", (*iParam0)[bVar04]);
						GRINGO_ALLOW_ACTIVATION((*iParam0)[bVar04], false);
					}
				}
				if (iParam0[bVar04]->f_12 >= 4294967295)
				{
					iVar1 = iParam0[bVar04]->f_12;
					if (StackVal == (*iParam0)[iVar14])
					{
					}
					else if (Function_28(StackVal, 64))
					{
						if (Function_28(StackVal, 32))
						{
							Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14b.child.SWITCHING OFF: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, false);
						}
						else
						{
							Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "14.child.SWITCHING ON: ");
							GRINGO_ALLOW_ACTIVATION(StackVal, true);
						}
					}
					else if (Function_28(StackVal, 8))
					{
						Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "15.child.SWITCHING ON: ");
						GRINGO_ALLOW_ACTIVATION(StackVal, true);
					}
					else
					{
						Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "16.child.SWITCHING OFF: ");
						Function_22(iParam0[bVar04] + 8, 64);
						GRINGO_ALLOW_ACTIVATION(StackVal, false);
					}
				}
				else if (Function_28(StackVal, 64))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "17.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else if (Function_28(StackVal, 8))
				{
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "18.child.SWITCHING ON: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, true);
				}
				else
				{
					Function_22(iParam0[bVar04] + 8, 64);
					Function_23(StackVal, StackVal, StackVal, StackVal, *iParam0[bVar04], "19.child.SWITCHING OFF: ");
					GRINGO_ALLOW_ACTIVATION(StackVal, false);
				}
			}
		}
		if (Function_28(StackVal, 128))
		{
			PRINTSTRING("Processed relationship: ");
			PRINTINT(bVar0);
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_22(var uParam0, bool bParam1) //Position: 0x2279 / 8825
{
	*uParam0 = (*uParam0 - (*uParam0 && bParam1));
	return;
}

void Function_23(vector3 vParam0) //Position: 0x228C / 8844
{
	if (Function_28(vParam0.z, 128))
	{
		PRINTSTRING(bParam4);
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(bParam5)));
		PRINTNL();
	}
}

void Function_24(var uParam0, int iParam1) //Position: 0x22B3 / 8883
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_25(int iParam0) //Position: 0x22C2 / 8898
{
	bool bVar0;
	
	Function_27(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_27(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	Function_26(*iParam0);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_26(*iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		SET_PROP_FIXED(bVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make armwrestling chair fixed but the physinst is invalid");
	}
	return 1;
}

vector3 Function_26(int iParam0) //Position: 0x23BD / 9149
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.656f, 16.56962f, 3948.088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.743f, 43.17878f, 3720.288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.16f, 20.97986f, 3881.796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.9332f, 85.11941f, 2118.893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_27(int iParam0) //Position: 0x246C / 9324
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.104f, 16.52992f, 3948.271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.721f, 43.17878f, 3720.842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.5623f, 20.97986f, 3882.657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.932f, 85.11941f, 2119.438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_28(bool bParam0, int iParam1) //Position: 0x2517 / 9495
{
	return (bParam0 && iParam1) == 0;
}

void Function_29(bool bParam0, float fParam1) //Position: 0x2524 / 9508
{
	if (!Function_72(128))
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

void Function_30(bool bParam0, bool bParam1) //Position: 0x2562 / 9570
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
		Function_31(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_20())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x265C / 9820
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(bool bParam0) //Position: 0x2669 / 9833
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_34(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_33(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_33(var uParam0) //Position: 0x2754 / 10068
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_34() //Position: 0x2771 / 10097
{
	int iVar0;
	
	return iVar0;
}

void Function_35(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x2779 / 10105
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
		Function_36();
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

void Function_36() //Position: 0x285D / 10333
{
	int iVar0;
	
	Global_26960 = Function_37(StackVal);
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

int Function_37(int iParam0) //Position: 0x28AB / 10411
{
	if (!Function_38(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_38(int iParam0) //Position: 0x28C3 / 10435
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_39(bool bParam0) //Position: 0x28D8 / 10456
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

void Function_40(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x28EB / 10475
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
	Global_28842.f_32 = uParam1;
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
		Function_43();
	}
	if (bParam5)
	{
		Function_41(1048576);
	}
}

void Function_41(int iParam0) //Position: 0x29FE / 10750
{
	Function_42(&Global_28842, iParam0);
	return;
}

void Function_42(var uParam0, var uParam1) //Position: 0x2A0C / 10764
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_43() //Position: 0x2A27 / 10791
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_41(16384);
	}
	return;
}

void Function_44(float fParam0) //Position: 0x2A43 / 10819
{
	Function_45(6, 1, 0, 10, 25, 2, 0, 0, 4, fParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2A8C / 10892
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_46(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, uParam10, iParam11, iParam12, fParam13, iParam14, iParam15, iParam16);
	Global_17483[iParam075].f_92 = iParam9;
}

void Function_46(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, bool bParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, var uParam15) //Position: 0x2ACE / 10958
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = uParam1;
	Global_17483[iParam075].f_120 = uParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = uParam13;
	Global_17483[iParam075].f_80 = uParam7;
	Global_17483[iParam075].f_84 = uParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = uParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = uParam10;
	Global_17483[iParam075].f_104 = uParam11;
	Global_17483[iParam075].f_72 = uParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	if (!Function_18())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, false, false);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_48(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_47(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_48(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_47(int iParam0, int iParam1) //Position: 0x2E76 / 11894
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

bool Function_48(int iParam0) //Position: 0x2E97 / 11927
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_49(int iParam0) //Position: 0x2EAD / 11949
{
	if (!Function_52())
	{
		Function_45(39, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_fame", 63, 2, 70.0f, 8, 120, 0);
		Function_51(&Global_17483[3975] + 120, 1, 4.5f, 64, 4294967295);
		Function_50(&Global_17483[3975] + 120, -4.5f, 2);
	}
	return;
}

void Function_50(int iParam0, float fParam1, int iParam2) //Position: 0x2F2E / 12078
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_51(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x2F44 / 12100
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

bool Function_52() //Position: 0x2F6A / 12138
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		bVar0 = GET_ACTOR_ENUM(Global_34573);
		if (bVar0 == 1)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_53(int iParam0) //Position: 0x2F8F / 12175
{
	Function_45(40, 1, 0, 50, 25, 2, 8288, 0, 4, iParam0, "$/content/Ambient/Town/event_ultra_high_honor", 63, 2, 70.0f, 8, 120, 0);
	Function_51(&Global_17483[4075] + 120, 1, 4.5f, 64, 4294967295);
	Function_50(&Global_17483[4075] + 120, -4.5f, 2);
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x300A / 12298
{
	uParam0[iParam140]->f_128 |= 2097152;
	return;
}

void Function_55(var uParam0, int iParam1, float fParam2) //Position: 0x3025 / 12325
{
	uParam0[iParam140]->f_140 = fParam2;
	uParam0[iParam140]->f_128 |= 8192;
	return;
}

void Function_56(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, char* cParam6, int iParam7, vector3 vParam8, int iParam11, bool bParam12, int iParam13) //Position: 0x3049 / 12361
{
	if (Function_20() && !bParam12)
	{
		return;
	}
	if (!Function_20() && bParam12)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(Global_62968[iParam1]))
	{
		DESTROY_OBJECTSET(Global_62968[iParam1]);
	}
	uParam0[iParam140]->f_4 = Function_65(iParam2, iParam1, 4);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[iParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[iParam140]->f_8 = 4294967295;
	}
	uParam0[iParam140]->f_40 = "";
	uParam0[iParam140]->f_44 = "";
	uParam0[iParam140]->f_48 = iParam13;
	uParam0[iParam140]->f_96 = iParam7;
	uParam0[iParam140]->f_104 = 5;
	uParam0[iParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[iParam140]->f_132 = iParam4;
	uParam0[iParam140]->f_136 = 4294967295;
	uParam0[iParam140]->f_140 = 4294967295;
	uParam0[iParam140]->f_144 = 4294967295;
	strcpy(uParam0[iParam140] + 12, cParam6, 16);
	*(uParam0[iParam140] + 52) = { StackVal, StackVal, vParam8 };
	uParam0[iParam140]->f_64 = iParam11;
	uParam0[iParam140]->f_72 = iParam2;
	if (Global_25974[iParam1] && Function_64(iParam1))
	{
		Function_57(StackVal, StackVal, iParam2, (1 + iParam1), vParam8, 63);
	}
	uParam0[iParam140]->f_140 = 1;
	uParam0[iParam140]->f_128 |= 8192;
}

int Function_57(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x3195 / 12693
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_63(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_62(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_61(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_60(uVar3);
		vVar7 = { StackVal, StackVal, Function_60(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_60(StackVal);
				vVar4 = { StackVal, StackVal, Function_60(StackVal) };
				if (Function_59(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_58(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_58(bool bParam0) //Position: 0x3378 / 13176
{
	switch (bParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_59(vector3 vParam0, vector3 vParam3) //Position: 0x34AF / 13487
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_60(bool bParam0) //Position: 0x34DC / 13532
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_61(vector3 vParam0) //Position: 0x3533 / 13619
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_62(int iParam0) //Position: 0x3581 / 13697
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_63(vector3 vParam0) //Position: 0x3639 / 13881
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_64(int iParam0) //Position: 0x3651 / 13905
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_65(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3674 / 13940
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_69(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_66(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_66(bParam0, bParam1, bParam2, 4294967295);
}

int Function_66(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x36D2 / 14034
{
	var uVar0;
	
	if (!Function_68(bParam2))
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
	uVar0 = Function_69(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_67(uVar0);
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

int Function_67(int iParam0) //Position: 0x3827 / 14375
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

bool Function_68(int iParam0) //Position: 0x3865 / 14437
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_69(int iParam0, int iParam1, int iParam2) //Position: 0x387A / 14458
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_70(var uParam0, int iParam1) //Position: 0x389A / 14490
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_71(var uParam0, bool bParam1) //Position: 0x38B1 / 14513
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0)), bParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_72(int iParam0) //Position: 0x38F9 / 14585
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_73(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3915 / 14613
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_72(2))
	{
		return;
	}
	if (Function_85(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_17(uParam0[iVar02], 2))
		{
			if (Function_74(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_70(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_89(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x39C7 / 14791
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_85(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(iParam0, 2))
	{
		return 1;
	}
	if (Function_17(iParam0, 4))
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
		uParam1->f_8 = Function_76(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_63(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(iParam0, 4);
	}
	Function_75(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x3B32 / 15154
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_63(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_63(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_63(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_63(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_63(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_63(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_76(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x3C6E / 15470
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_34(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

void Function_77(int iParam0, var uParam1, bool bParam2) //Position: 0x3D87 / 15751
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

void Function_78(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3DE2 / 15842
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

void Function_79(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3E48 / 15944
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_80(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3EB0 / 16048
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_81(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3F1A / 16154
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_82(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3F7F / 16255
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_83(int iParam0, var uParam1, vector3 vParam2) //Position: 0x3FE7 / 16359
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_59(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_84(int iParam0) //Position: 0x404D / 16461
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_85(&(Global_29008[iParam0]), 4);
}

bool Function_85(var uParam0, int iParam1) //Position: 0x4069 / 16489
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_86(var uParam0, var uParam1, int iParam2) //Position: 0x4085 / 16517
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_20())
	{
		return 1;
	}
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_85(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_17(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_17(uParam0[iVar02], 8))
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

void Function_87(var uParam0, var uParam1, bool bParam2) //Position: 0x4166 / 16742
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(bParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_20())
	{
		return;
	}
	strcpy(&cVar1, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_85(&(Global_29008[bParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_89(&(Global_29008[bParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_15(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_15(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

struct<16> Function_88(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x424E / 16974
{
	struct<4> Var0;
	
	Var0 = GET_GRINGO_FROM_OBJECT(bParam0);
	Var0.f_4 = GET_GRINGO_FROM_OBJECT(bParam1);
	if (bParam2)
	{
		Function_24(&Var0 + 8, 1);
	}
	else
	{
		Function_22(&Var0 + 8, 1);
	}
	if (bParam3)
	{
		Function_24(&Var0 + 8, 2);
	}
	else
	{
		Function_22(&Var0 + 8, 2);
	}
	if (bParam4)
	{
		Function_24(&Var0 + 8, 4);
	}
	else
	{
		Function_22(&Var0 + 8, 4);
	}
	if (bParam5)
	{
		Function_24(&Var0 + 8, 8);
	}
	else
	{
		Function_22(&Var0 + 8, 8);
	}
	if (bParam6)
	{
		Function_24(&Var0 + 8, 16);
	}
	else
	{
		Function_22(&Var0 + 8, 16);
	}
	if (bParam7)
	{
		Function_24(&Var0 + 8, 32);
	}
	else
	{
		Function_22(&Var0 + 8, 32);
	}
	Function_22(&Var0 + 8, 64);
	Function_22(&Var0 + 8, 128);
	Var0.f_12 = 4294967295;
	return StackVal, StackVal, StackVal, Var0;
}

void Function_89(var uParam0, int iParam1) //Position: 0x4317 / 17175
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_90() //Position: 0x4326 / 17190
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	
	Function_98(3, 3);
	bVar0 = bVar0;
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/indian_sit_ground_smoke", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/multistage_lumber", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_l", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/mex_sleepbed_r", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/arm_wrestling_spectate", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/dog_begging_nosun_norain", 1, 0);
	Function_96(&Local_6 + 4, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	if (!Function_91(&Local_6 + 4))
	{
		return 0;
	}
	Local_6 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("PacificUnionRailroadCamp_layout");
	}
	Local_6.f_524 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", Local_6, 8, 0);
	*(&Local_6 + 528[06]) = { -260.599f, 84.585f, 2093.939f };
	*(&Local_6 + 528[06] + 12) = { 0.0f, 200.9157f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag15", -260.599f, 84.585f, 2093.939f, 0.0f, 200.9157f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_6.f_524);
	*(&Local_6 + 528[16]) = { -263.486f, 84.585f, 2094.351f };
	*(&Local_6 + 528[16] + 12) = { 0.0f, 255.9593f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag5", -263.486f, 84.585f, 2094.351f, 0.0f, 255.9593f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_6.f_524);
	*(&Local_6 + 528[26]) = { -262.4489f, 84.585f, 2096.556f };
	*(&Local_6 + 528[26] + 12) = { 0.0f, 157.989f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag6", -262.4489f, 84.585f, 2096.556f, 0.0f, 157.989f, 0.0f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_6.f_524);
	*(&Local_6 + 528[36]) = { -265.679f, 84.585f, 2096.008f };
	*(&Local_6 + 528[36] + 12) = { 0.0f, 276.9504f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag7", -265.679f, 84.585f, 2096.008f, 0.0f, 276.9504f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_6.f_524);
	*(&Local_6 + 528[46]) = { -265.679f, 84.585f, 2098.405f };
	*(&Local_6 + 528[46] + 12) = { 0.0f, -94.97839f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag8", -265.679f, 84.585f, 2098.405f, 0.0f, -94.97839f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_6.f_524);
	*(&Local_6 + 528[56]) = { -267.969f, 84.585f, 2095.891f };
	*(&Local_6 + 528[56] + 12) = { 0.0f, 186.6167f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag9", -267.969f, 84.585f, 2095.891f, 0.0f, 186.6167f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_6.f_524);
	*(&Local_6 + 528[66]) = { -272.0507f, 84.585f, 2095.941f };
	*(&Local_6 + 528[66] + 12) = { 0.0f, 171.2732f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag10", -272.0507f, 84.585f, 2095.941f, 0.0f, 171.2732f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_6.f_524);
	*(&Local_6 + 528[76]) = { -274.496f, 84.585f, 2095.508f };
	*(&Local_6 + 528[76] + 12) = { 0.0f, 190.6452f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag11", -274.496f, 84.585f, 2095.508f, 0.0f, 190.6452f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_6.f_524);
	*(&Local_6 + 528[86]) = { -276.1889f, 84.585f, 2095.955f };
	*(&Local_6 + 528[86] + 12) = { 0.0f, 192.7698f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag12", -276.1889f, 84.585f, 2095.955f, 0.0f, 192.7698f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_6.f_524);
	*(&Local_6 + 528[96]) = { -277.6696f, 84.585f, 2096.537f };
	*(&Local_6 + 528[96] + 12) = { 0.0f, 183.7367f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag13", -277.6696f, 84.585f, 2096.537f, 0.0f, 183.7367f, 0.0f);
	DECOR_SET_STRING(bVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_6.f_524);
	*(&Local_6 + 528[106]) = { -277.4861f, 84.584f, 2095.357f };
	*(&Local_6 + 528[106] + 12) = { 0.0f, 92.44174f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag14", -277.4861f, 84.584f, 2095.357f, 0.0f, 92.44174f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_6.f_524);
	Local_6.f_796 = CREATE_OBJECTSET_IN_LAYOUT("lumbergrpSet", Local_6, 8, 0);
	*(&Local_6 + 800[06]) = { -250.0973f, 84.40311f, 2102.097f };
	*(&Local_6 + 800[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag200", -250.0973f, 84.40311f, 2102.097f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_6.f_796);
	Local_6.f_828 = CREATE_OBJECTSET_IN_LAYOUT("lumbergrp1Set", Local_6, 8, 0);
	*(&Local_6 + 832[06]) = { -274.851f, 84.329f, 2129.713f };
	*(&Local_6 + 832[06] + 12) = { 0.0f, 59.653f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag201", -274.851f, 84.329f, 2129.713f, 0.0f, 59.653f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_6.f_828);
	Local_6.f_860 = CREATE_OBJECTSET_IN_LAYOUT("barrelgrpSet", Local_6, 8, 0);
	*(&Local_6 + 864[06]) = { -299.304f, 84.55f, 2096.983f };
	*(&Local_6 + 864[06] + 12) = { 0.0f, 4.23f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag300", -299.304f, 84.55f, 2096.983f, 0.0f, 4.23f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_6.f_860);
	Local_6.f_892 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_6, 8, 0);
	*(&Local_6 + 896[06]) = { -268.9317f, 84.10014f, 2104.45f };
	*(&Local_6 + 896[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag400", -268.9317f, 84.10014f, 2104.45f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_6.f_892);
	Local_6.f_924 = CREATE_OBJECTSET_IN_LAYOUT("nhaygrpSet", Local_6, 8, 0);
	*(&Local_6 + 928[06]) = { -269.9227f, 84.44086f, 2101.923f };
	*(&Local_6 + 928[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag405", -269.9227f, 84.44086f, 2101.923f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "putdown");
	DECOR_SET_STRING(bVar16, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_6.f_924);
	Local_6.f_956 = CREATE_OBJECTSET_IN_LAYOUT("moveboxgrpSet", Local_6, 8, 0);
	*(&Local_6 + 960[06]) = { -261.392f, 85.11736f, 2121.629f };
	*(&Local_6 + 960[06] + 12) = { 0.0f, 174.2225f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_6, "Flag500", -261.392f, 85.11736f, 2121.629f, 0.0f, 174.2225f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_6.f_956);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand", "smoking_stand", -279.2508f, 84.3294f, 2103.251f, 0.0f, 149.4077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall", "Rand_Idle_NearWall", -292.5457f, 84.329f, 2097.253f, 0.0f, -91.61221f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand", "rand_idle_stand", -251.0246f, 84.39375f, 2107.018f, 0.0f, -317.5461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand2", "rand_idle_stand", -251.6714f, 84.32935f, 2123.671f, 0.0f, 31.9494f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -272.406f, 84.3294f, 2091.296f, 0.0f, -35.31573f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -240f, 84.21885f, 2112.08f, 0.0f, -102.2088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -295.3271f, 84.32937f, 2126.216f, 0.0f, 99.18674f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_ground_smoke", "Rand_Idle_Sit_Ground", -298.6332f, 84.32938f, 2132.0f, 0.0f, 105.9742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -323.9622f, 83.33489f, 2123.962f, 0.0f, -278.6589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "nsit_docks", "nsit_docks", -280.2972f, 87.60738f, 2121.221f, 0.0f, -35.59731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand3", "rand_idle_stand", -299.3329f, 84.32941f, 2124f, 0.0f, 147.0954f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", -268.1919f, 85.11826f, 2122.03f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -304.1736f, 84.55002f, 2089.449f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lean_rail2", "nlean_rail", -299.7092f, 84.34756f, 2082.547f, 0.0f, -15.08531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Pee", "Pee", -309.1762f, 84.56106f, 2109.906f, 0.0f, -179.3774f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -290.7443f, 83.64059f, 2146.744f, 0.0f, -105.7152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", -263.5143f, 84.61034f, 2100.51f, 0.0f, -177.1633f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", -279.4286f, 87.54841f, 2125.676f, 0.0f, -147.0578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -299.9999f, 84.32935f, 2116.259f, 0.0f, -7.427659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", -269.74f, 84.329f, 2091.258f, 0.0f, -1.515742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_table3", "stand_hammer_table", -296.4352f, 84.6422f, 2096.126f, 0.0f, 0.1719398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground8", "Rand_Idle_Sit_Ground", -290.7271f, 87.59922f, 2104.286f, 0.0f, 91.17555f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand9", "rand_idle_stand", -305.8645f, 84.53843f, 2110.722f, 0.0f, -94.3748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall2", "Rand_Idle_NearWall", -289.3457f, 84.59759f, 2104.32f, 0.0f, 91.86176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall3", "Rand_Idle_NearWall", -301.2272f, 84.57059f, 2090.951f, 0.0f, 181.792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_ground_smoke2", "Rand_Idle_Sit_Ground", -300.4062f, 84.70014f, 2092.159f, 0.0f, 90.00731f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand11", "rand_idle_stand", -292.1161f, 84.32939f, 2112.509f, 0.0f, 259.9453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand12", "rand_idle_stand", -253.0621f, 84.32941f, 2092.0f, 0.0f, -43.95385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_table4", "stand_hammer_table", -269.616f, 84.58009f, 2094.75f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammerground_w_any1", "stand_hammerground_w_any", -284.2853f, 84.32941f, 2116.617f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammerground_w_any2", "stand_hammerground_w_any", -258.9957f, 84.37399f, 2113.335f, 0.0f, -179.3102f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammerground_w_any3", "stand_hammerground_w_any", -242.8076f, 84.32941f, 2113.392f, 0.0f, 179.375f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_ground_smoke3", "Rand_Idle_Sit_Ground", -243.141f, 84.31201f, 2109.459f, 0.0f, 41.52988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_6.f_988 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), Local_6, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_check_clipboard", "stand_check_clipboard", -298.6489f, 84.32935f, 2116.0f, 0.0f, -200.7457f, 0.0f), Local_6.f_988);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_6.f_988)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_yelling_up", "stand_yelling_up", -297.875f, 84.39378f, 2103.792f, 0.0f, -92.67122f, 0.0f), Local_6.f_988);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_6.f_988)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_check_clipboard1", "stand_check_clipboard", -275.6945f, 84.584f, 2095.066f, 0.0f, -83.81947f, 0.0f), Local_6.f_988);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_6.f_988)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_check_clipboard2", "stand_check_clipboard", -303.2441f, 84.35153f, 2108.0f, 0.0f, 260.6552f, 0.0f), Local_6.f_988);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_6.f_988)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_docks5", "nsit_docks", -293.1272f, 87.59378f, 2104.719f, 0.0f, 89.82571f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "repair_kneel3", "repair_kneel", -289.7151f, 84.38799f, 2117.304f, 0.0f, -177.0475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand5", "smoking_stand", -305.2578f, 84.32941f, 2128.851f, 0.0f, -181.4886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -306.3789f, 84.32941f, 2131.512f, 0.0f, -96.38894f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Multistage_sweeping", "Multistage_sweeping", -277.4029f, 84.58439f, 2095.399f, 0.0f, -91.5164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -309.5937f, 84.32941f, 2133.33f, 0.0f, -68.27385f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -307.9366f, 84.32941f, 2132.0f, 0.0f, -83.29604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_guntricks_e_any", "stand_guntricks_e_any", -308.8994f, 84.32941f, 2125.085f, 0.0f, -144.5907f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_guntricks_e_any1", "stand_guntricks_e_any", -307.6673f, 84.32941f, 2127.325f, 0.0f, 24.07184f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand6", "smoking_stand", -302.9257f, 84.32941f, 2131.319f, 0.0f, 94.46873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_6.f_992 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), Local_6, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "Indian_Sit_Ground_Smoke", "Indian_Sit_Ground_Smoke", -303.4368f, 84.33514f, 2130.466f, 0.0f, 122.2069f, 0.0f), Local_6.f_992);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_6.f_992)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_yelling_down", "stand_yelling_down", -277.7226f, 87.57478f, 2123.033f, 0.0f, -33.84819f, 0.0f), Local_6.f_992);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_6.f_992)), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "campfire_talk", "campfire_talk", -298.8902f, 84.34298f, 2134.881f, 0.0f, -112.5517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Multistage_lumber", "Multistage_lumber", -294.3057f, 84.40279f, 2088.0f, 0.0f, -209.1495f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Multistage_lumber1", "Multistage_lumber", -246.89f, 84.329f, 2101.398f, 0.0f, -179.5614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	DECOR_SET_INT(bVar0, "FlagSetNum", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -307.6528f, 84.329f, 2120.486f, 0.0f, 92.77699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", -314.006f, 84.329f, 2126.552f, 0.0f, 90.56123f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -315.62f, 84.36777f, 2123.791f, 0.0f, 12.75637f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "mex_sleepBed_l", "mex_sleepBed_l", -315.999f, 84.27454f, 2126.504f, 0.0f, 69.89555f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lean_fence_L", "lean_fence_L", -244.6597f, 84.32939f, 2103.381f, 0.0f, -74.17025f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "mex_sleepBed_r1", "mex_sleepBed_r", -314.059f, 84.328f, 2134.831f, 0.0f, 109.0961f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "mex_sleepBed_l1", "mex_sleepBed_l", -315.3019f, 84.40627f, 2132.153f, 0.0f, 110.6767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", -314.328f, 84.329f, 2131.738f, 0.0f, -63.96337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", -294.8471f, 84.329f, 2134.998f, 0.0f, -130.6978f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", -297.063f, 84.26437f, 2137.154f, 0.0f, 56.67732f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "mex_sleepBed_r2", "mex_sleepBed_r", -296.439f, 84.264f, 2137.403f, 0.0f, -104.0547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", -292.85f, 84.38101f, 2124.313f, 0.0f, -49.53769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lie_sleep_on_bed_r3", "lie_sleep_on_bed_r", -293.9245f, 84.329f, 2125.675f, 0.0f, -40.75327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "mex_sleepBed_r3", "mex_sleepBed_r", -294.2988f, 84.28979f, 2122.371f, 0.0f, 44.08815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_guntricks_e_any2", "stand_guntricks_e_any", -264.6607f, 84.32939f, 2090.172f, 0.0f, 21.31175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand7", "smoking_stand", -256.6131f, 84.32935f, 2104.482f, 0.0f, -229.0816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_barrel1", "sit_barrel", -261.697f, 84.55f, 2100.643f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Sit_Ground_Drink", "Sit_Ground_Drink", -311.1821f, 84.35149f, 2125.989f, 0.0f, -63.93058f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall4", "Rand_Idle_NearWall", -311.7607f, 84.32937f, 2118.451f, 0.0f, -180.2778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -310.8121f, 84.32936f, 2128.0f, 0.0f, -84.88094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -283.302f, 87.62878f, 2125.038f, 0.0f, 101.259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_NearWall5", "Rand_Idle_NearWall", -299.075f, 84.32938f, 2090.748f, 0.0f, -94.07694f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand8", "smoking_stand", -302.0144f, 84.55f, 2095.012f, 0.0f, -133.5852f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand9", "smoking_stand", -257.0061f, 85.14437f, 2118.648f, 0.0f, -35.2438f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_spit", "stand_spit", -265.38f, 85.11703f, 2117.823f, 0.0f, -34.86943f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 1);
	Local_6.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_6, "arm_wrestling_spectate", "arm_wrestling_spectate", -264.6337f, 85.11941f, 2120.304f, 0.0f, -63.10342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_996), 1);
	Local_6.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall", "stand_hammer_wall", -282.5831f, 84.32134f, 2111.573f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1000), 1);
	Local_6.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall1", "stand_hammer_wall", -268.712f, 84.3324f, 2111.22f, 0.0f, 3.98375f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1004), 1);
	Local_6.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall2", "stand_hammer_wall", -268.2935f, 84.35104f, 2107.836f, 0.0f, 179.7535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1008), 1);
	Local_6.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall3", "stand_hammer_wall", -259.103f, 84.35152f, 2108.147f, 0.0f, 267.2986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1012), 1);
	Local_6.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall4", "stand_hammer_wall", -261.4122f, 84.32699f, 2112.751f, 0.0f, 351.9256f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1016), 1);
	Local_6.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall5", "stand_hammer_wall", -249.4963f, 84.31268f, 2113.484f, 0.0f, 357.4075f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1020), 1);
	Local_6.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_6, "repair_kneel", "repair_kneel", -264.5295f, 84.33018f, 2112.102f, 0.0f, -90.41484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1024), 1);
	Local_6.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_table", "stand_hammer_table", -268.2491f, 84.32483f, 2113.17f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1028), 1);
	Local_6.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_hammer_wall6", "stand_hammer_wall", -275.2304f, 84.35149f, 2120.582f, 0.0f, 140.1084f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1032), 1);
	Local_6.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand10", "smoking_stand", -272.3959f, 84.32217f, 2117.972f, 0.0f, 133.512f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1036), 1);
	Local_6.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand11", "smoking_stand", -272.7484f, 84.34642f, 2119.651f, 0.0f, 132.159f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1040), 1);
	Local_6.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand13", "rand_idle_stand", -273.5462f, 84.31622f, 2117.644f, 0.0f, 135.1958f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1044), 1);
	Local_6.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand14", "rand_idle_stand", -274.9241f, 84.32912f, 2118.563f, 0.0f, 160.5407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1048), 1);
	Local_6.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_6, "rand_idle_stand15", "rand_idle_stand", -273.7637f, 84.34153f, 2119.312f, 0.0f, 140.0703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1052), 1);
	Local_6.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -167.204f, 84.19398f, 2062.033f, 0.0f, -39.45452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1056), 1);
	Local_6.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", -167.204f, 84.19398f, 2068.109f, 0.0f, -53.33166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1060), 1);
	Local_6.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", -167.2195f, 84.19398f, 2075.252f, 0.0f, -135.3244f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1064), 1);
	Local_6.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_6, "lean_fence_L_talking", "lean_fence_L_talking", -170.0493f, 84.19398f, 2075.963f, 0.0f, 180.2888f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1068), 1);
	Local_6.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_smokelean_e_any", "leaning_stand", -167.1948f, 84.19398f, 2060.505f, 0.0f, -359.7245f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1072), 1);
	Local_6.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_6, "sit_barrel", "sit_barrel", -166.7309f, 84.19398f, 2066.87f, 0.0f, -257.7771f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_6.f_1076), 1);
	Local_6.f_1080 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), Local_6, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "nuse_shelf", "nuse_shelf", -172.519f, 84.19398f, 2072.331f, 0.0f, 182.2958f, 0.0f), Local_6.f_1080);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_6.f_1080)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_check_clipboard_20", "stand_check_clipboard", -175.1733f, 84.19398f, 2066.873f, 0.0f, 50.20064f, 0.0f), Local_6.f_1080);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_6.f_1080)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "smoking_stand12", "smoking_stand", -168.2906f, 84.19398f, 2069.358f, 0.0f, -105.4168f, 0.0f), Local_6.f_1080);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_6.f_1080)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_6, "stand_check_clipboard3", "stand_check_clipboard", -170.6364f, 84.19398f, 2066.194f, 0.0f, -86.80048f, 0.0f), Local_6.f_1080);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_6.f_1080)), 0);
	Local_6.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain", "dog_sleeping_nosun_norain", -178.7847f, 83.33339f, 2066.13f, 0.0f, -65.99649f, 0.0f);
	Local_6.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain", "dog_sitting_nosun_norain", -177.1155f, 83.32635f, 2063.515f, 0.0f, -114.5605f, 0.0f);
	Local_6.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing", "dog_peeing", -176.123f, 83.3897f, 2062.861f, 0.0f, -228.2262f, 0.0f);
	Local_6.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_begging_nosun_norain", "dog_begging_nosun_norain", -173.3505f, 83.31264f, 2060.348f, 0.0f, -97.33698f, 0.0f);
	Local_6.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", -179.0085f, 83.33339f, 2077.913f, 0.0f, -150.7849f, 0.0f);
	Local_6.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", -178.8697f, 83.32635f, 2073.833f, 0.0f, -312.5417f, 0.0f);
	Local_6.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", -188.7539f, 83.44596f, 2065.748f, 0.0f, -193.9863f, 0.0f);
	Local_6.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain2", "dog_sitting_nosun_norain", -184.146f, 83.32635f, 2066.758f, 0.0f, -114.5605f, 0.0f);
	Local_6.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", -170.512f, 83.23319f, 2077.15f, 0.0f, -244.2281f, 0.0f);
	Local_6.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", -169.2699f, 84.18502f, 2073.027f, 0.0f, -244.2281f, 0.0f);
	Local_6.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain5", "dog_sleeping_nosun_norain", -254.8585f, 84.36404f, 2090.05f, 0.0f, -182.832f, 0.0f);
	Local_6.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain3", "dog_sitting_nosun_norain", -249.8224f, 84.3472f, 2104.698f, 0.0f, -204.443f, 0.0f);
	Local_6.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain6", "dog_sleeping_nosun_norain", -246.2181f, 84.36404f, 2109.342f, 0.0f, -94.44453f, 0.0f);
	Local_6.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain7", "dog_sleeping_nosun_norain", -266.3858f, 84.36404f, 2108.847f, 0.0f, -84.90373f, 0.0f);
	Local_6.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain8", "dog_sleeping_nosun_norain", -287.7652f, 84.60418f, 2099.381f, 0.0f, -164.9557f, 0.0f);
	Local_6.f_1144 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain9", "dog_sleeping_nosun_norain", -275.388f, 84.3576f, 2122.993f, 0.0f, -164.9557f, 0.0f);
	Local_6.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain10", "dog_sleeping_nosun_norain", -263.2999f, 84.3576f, 2133.662f, 0.0f, -316.3659f, 0.0f);
	Local_6.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain4", "dog_sitting_nosun_norain", -306.7691f, 84.3472f, 2130.097f, 0.0f, -123.6964f, 0.0f);
	Local_6.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sitting_nosun_norain5", "dog_sitting_nosun_norain", -307.647f, 84.3472f, 2123.479f, 0.0f, -14.89172f, 0.0f);
	Local_6.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain11", "dog_sleeping_nosun_norain", -295.8063f, 84.35688f, 2124.774f, 0.0f, -380.823f, 0.0f);
	Local_6.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain12", "dog_sleeping_nosun_norain", -312.5109f, 84.35688f, 2106.095f, 0.0f, -380.823f, 0.0f);
	Local_6.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_sleeping_nosun_norain13", "dog_sleeping_nosun_norain", -308.6532f, 84.35688f, 2082.776f, 0.0f, -380.823f, 0.0f);
	Local_6.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing1", "dog_peeing", -294.009f, 84.37412f, 2081.684f, 0.0f, -295.8659f, 0.0f);
	Local_6.f_1176 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing2", "dog_peeing", -286.0151f, 84.41178f, 2085.514f, 0.0f, -341.7906f, 0.0f);
	Local_6.f_1180 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing3", "dog_peeing", -242.0354f, 84.33924f, 2085.034f, 0.0f, -303.8413f, 0.0f);
	Local_6.f_1184 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing4", "dog_peeing", -242.1467f, 84.36317f, 2096.047f, 0.0f, -268.1775f, 0.0f);
	Local_6.f_1188 = CREATE_GRINGO_IN_LAYOUT(Local_6, "dog_peeing5", "dog_peeing", -273.3949f, 84.40952f, 2107.906f, 0.0f, -298.6665f, 0.0f);
	Local_6.f_1192 = CREATE_GRINGO_IN_LAYOUT(Local_6, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -312.8287f, 84.32936f, 2124.613f, 0.0f, -118.9718f, 0.0f);
	Local_6.f_1196 = CREATE_GRINGO_IN_LAYOUT(Local_6, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", -264.6337f, 85.11941f, 2118.317f, 0.0f, -120.6365f, 0.0f);
	return 1;
}

bool Function_91(int iParam0) //Position: 0x82C1 / 33473
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_95();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_94(iParam0[iVar03], 8);
		}
		else if (Function_93())
		{
			iVar1 = 1;
			Function_94(iParam0[iVar03], 8);
		}
		Function_94(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_94(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_94(iParam0[iVar03], 2);
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
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_94(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_94(iParam0[iVar03], 2);
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
	Function_92();
	return 1;
}

void Function_92() //Position: 0x863C / 34364
{
	if (!Function_72(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_93() //Position: 0x867C / 34428
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

void Function_94(var uParam0, int iParam1) //Position: 0x86A7 / 34471
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_95() //Position: 0x86B8 / 34488
{
	if (!Function_72(128))
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

var Function_96(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x86FA / 34554
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_97(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_94(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_97(var uParam0, int iParam1, int iParam2) //Position: 0x8732 / 34610
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_94(uParam0[iVar03], 4);
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

void Function_98(int iParam0, int iParam1) //Position: 0x87F6 / 34806
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

bool Function_99() //Position: 0x883F / 34879
{
	var uVar0;
	
	Function_98(3, 3);
	uVar0 = uVar0;
	bLocal_4 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_4))
	{
		bLocal_4 = CREATE_LAYOUT("PacificUnionRailroadCamp_layout");
	}
}

void Function_100(bool bParam0, var uParam1) //Position: 0x8989 / 35209
{
	if (!Function_72(128))
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

