//Decompiled with MagicRDR v1.0
//Function Count : 141
//Statics Count : 97
//Natives Count : 137
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 8;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_31 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 8;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	float fLocal_73 = 0.0f;
	float fLocal_74 = 0.0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0.0f;
	int iLocal_95 = 0;
	float fLocal_96 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	var uVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;
	bool bVar33;
	var uVar34;
	int iVar36;
	int iVar37;
	var uVar38;
	int iVar39;
	bool bVar40;
	
	iLocal_13 = 0;
	iLocal_16 = 0;
	uLocal_69 = Vector(-4475.0f, 15.0f, 3192.0f);
	iLocal_72 = 0;
	fLocal_73 = 0.0f;
	fLocal_74 = 0.0f;
	iLocal_77 = 0;
	iLocal_79 = 0;
	iLocal_80 = 0;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_93 = 0;
	fLocal_94 = 0.0f;
	iLocal_95 = 0;
	fLocal_96 = 0.0f;
	Function_140("TMS Boot Ps3 - Script Running");
	Function_140("now with DO_EMERGENCY_BAG_CLEANUP (2)");
	Function_140("and COOP scoring");
	Function_140("and achievementchecking!");
	Function_140("and cart cleanup!");
	Function_140("and COOP scoring again...");
	Function_140("and COOP minecart cleanup");
	Function_140("and reduced profile stats delay to 90 minutes");
	Function_140("and reduced profile stats delay to 45 minutes");
	Function_140("and leave if your slot is too high, reduce profile stats delay to 20 minutes, and set CC submission delay to 20 minutes");
	Function_140("and set profile stats delay back to 45 minutes, while keeping CC submission delay of 20 minutes");
	Function_140("lets run a fixup on people that got the outfit pack early, with the wrong TU check");
	Function_140("Added timed SC Playlist support");
	Function_140("and MODE pack avatar unlocking, disabled SC playlist test, removes Hard Core Free Roam from Japan, bumped Japan protocol version for compatibility");
	Function_140("and fix for selected character not being retained on reboot");
	Function_140("and now added support for Hard Core Free Roam support for Japan, profile stats delay down to 20 minutes");
	Function_140("Fixup for areas discovered and unique bounty locations stats being set to wrong territory");
	Function_140("reduce profile stats delay to 10 minutes");
	Function_140("Additional fixup for discovered regions and bounty locations. We are now referencing the SC bitfield data and resetting status based on this saved state, which uses rich presence index to store data. Remove previous fixup");
	Function_140("Profile stats off for Undead (barring the bug) and TestTMSVersionBump commandline ofr MP testing");
	Function_140("More serious fixup for people that got the outfit pack early, with the wrong TU check, and ran the suggested workaround which screwed up the previous fix");
	Function_140("reduce profile stats delay to 5 minutes");
	Function_140("Add check to unlock Gentleman's Attire if user is signed into SC");
	Function_140("Enable UN profile stats if HAS_GLOBAL_TU is present");
	Function_140("With multiple XP bonuses supported (fixed)");
	Function_140("Made sure Zombie Hunter outfit flags are being set properly");
	Function_140("With ZombieC loaded (fixed)");
	Function_140("Fixes for Social Club outfit not showing up in menu");
	Function_140("Fixes for Gamestop outfit not showing up in menu");
	Function_140("With ZombieC loaded AFTER MP_UNLOCK_DLC_ZOMBIE_PACK is set");
	Function_140("Added BonusPack / 2 fixes for above (CL 115764); MP Profile stats fix (CL 115772); MP invisibility fix (bug 222509, CL 115774)");
	Function_140("Added unlocking Avatar Awards outside of original SP campaign");
	Function_140("Boot up fix for bad Bounty Hunter region");
	Function_140("Fix for SC representation of the UN Apocalypse Horse challenge");
	Function_140("Fix prevents players from using map holes to teleport out of the map");
	Function_140("Fix for SC representation of the UN Apocalypse Horse challenge - now tracks horses, not ranks");
	Function_140("Working on fix for UN 100% Town Saving");
	Function_140("Fix for missing scrap information being sent to SC");
	Function_140("Used teleport fix to fix the issue where players were using a pot in Escalera to clip through the mansion");
	Function_140("Used teleport fix to fix the issue where players were using the second story door and fire bottles to clip through the posada in Chupa Rosa");
	Function_140("More exceptions added to emergency teleporter.  Added a ray-cast based emergency teleportation system to catch players getting into places they can shoot out of but no one can shoot in.");
	Function_140("Ray cast teleporter disabled.  Can be re-enabled by un-commenting the definition for k_Enable_Ray_Cast_Teleporter at the top of this file.");
	Function_140("Added cannon reinsertion check for El Presidio levels to combat prop sync bug");
	Function_140("B* 223022 Map Escape Totally fixed this time. The volumes extend a hair into the world.");
	Function_140("B* 223051 Fix for pre-order golden guns no longer working with latest TU");
	Function_140("Altering M&M playlists to accomodate hardcore playlists");
	Function_140("Apply protocol version mask to avoid matchmaking with old M&M playlists");
	Function_140("Fail safe added for when players manage to cheat themselves to more health (fire bottle + teleporter)");
	Function_140("Adding new HC variants of M&M playlists");
	Function_140("Remove TMS protocol bump, since it can break cross-title invites or SP -> MP invites.");
	Function_140("Only add M&M HC playlists if we have M&M.");
	Function_140("New cart kill logic (v4)");
	Function_140("Fix for movie house not working on PSN version of game v3");
	Function_140("Teleporter added for map escape south of Bacchus Place, South East of Butter Bridge v2");
	Function_140("Check to see if we have the Cheat Menu ISO hack in MP v9");
	Function_140("Teleporter added for map escape near tree north of Pikes Basin");
	Function_140("Hack removes explosive rifle in free roam if you're not supposed to have it.");
	Function_140("Add Chuparosa Inn Invulnerability safe guard");
	Function_140("Non-permanent Golden Guns Toggle added.");
	Function_140("Hack removes all undead nightmare weapons when just rolling around in free roam");
	Function_140("Hack removes zombie corpses for XP cheat");
	Function_140("Narrow scope of XP cheat");
	PRINTSTRING("TMS was compiled with -final, this is good and necessary");
	PRINTNL();
	NET_SET_TUNING_PARAM(8, 300.0f);
	NET_SET_TUNING_PARAM(0, 1200.0f);
	NET_SCRIPTMSG_REGISTER_HANDLER(81, 33494);
	fVar0 = 9000.0f;
	fVar1 = 0.0f;
	fVar2 = 1.0f;
	fVar3 = 1.0f;
	fVar9 = 0.0f;
	fVar12 = 0.0f;
	fVar13 = 0.0f;
	fVar14 = 0.0f;
	fVar15 = 0.0f;
	fVar16 = 0.0f;
	fVar17 = 0.0f;
	fVar18 = 0.0f;
	bVar19 = false;
	bVar20 = false;
	bVar21 = false;
	while (!IS_EXITFLAG_SET())
	{
		WAIT(false);
		if ((((Function_138("@UI.NAVIGATE_LEFT", &fVar18, 5.0f) && Function_138("@UI.CANCEL", &fVar15, 5.0f)) && Function_138("@GENERIC.USE", &fVar14, 5.0f)) && Function_138("@RADIAL_MENU.SHOW_HIDE", &fVar13, 5.0f)) && Function_138("@FOOT.COVER", &fVar12, 5.0f))
		{
			if (!bVar20)
			{
				Function_137(0);
				PRINTSTRING("FORCING ALL GOLDEN GUNS OFF");
				PRINTNL();
				bVar20 = true;
				bVar21 = true;
			}
		}
		else
		{
			bVar20 = false;
		}
		if ((((Function_138("@UI.NAVIGATE_LEFT", &fVar18, 5.0f) && Function_138("@UI.ACCEPT", &fVar17, 5.0f)) && Function_138("@FOOT.JUMP", &fVar16, 5.0f)) && Function_138("@RADIAL_MENU.SHOW_HIDE", &fVar13, 5.0f)) && Function_138("@FOOT.COVER", &fVar12, 5.0f))
		{
			if (!bVar19)
			{
				Function_137(1);
				PRINTSTRING("FORCING ALL GOLDEN GUNS ON");
				PRINTNL();
				bVar19 = true;
				bVar21 = true;
			}
		}
		else
		{
			bVar19 = false;
		}
		if (GET_CURRENT_GAME_TIME() < fVar2)
		{
			if (!iLocal_82)
			{
				if (IS_STRING_VALID(UI_GET_STRING("HAS_GLOBAL_TU")))
				{
					if (Function_135(1024))
					{
						PRINTSTRING("TMS: Applying zombie lasso fix (load ZombieC, post MP_UNLOCK_DLC_ZOMBIE_PACK)");
						PRINTNL();
						REQUEST_ACTION_TREE("ZombieC");
						iLocal_82 = 1;
					}
				}
			}
			if (!(((((((((Global_99146 || Global_6627) || Global_6638) || Global_6639) || Global_6624) || !IS_ACTOR_ALIVE(&Global_54076)) || HUD_IS_FADED()) || HUD_IS_FADING()) || Function_134()) || (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME()))
			{
				if (!Global_39428[8])
				{
					if (NET_IS_UNLOCKED(8) && !Function_134())
					{
						Function_133(11);
						Global_39428[8] = 1;
					}
				}
				if (!Global_39428[0])
				{
					if (NET_IS_UNLOCKED(0) && !Function_134())
					{
						Function_133(6);
						Global_39428[0] = 1;
					}
				}
			}
			fVar2 = 1.0f;
			if (!Function_132(1) || !Function_131(1))
			{
				if (NET_MAILBOX_IS_SIGNED_INTO_SC() || Global_39428[1])
				{
					if (!Function_130(0, 0, 1, 1))
					{
						if ((((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Function_134()) && IS_ACTOR_ALIVE(&Global_54076)) && (Global_39873 + 5.0f) > GET_CURRENT_GAME_TIME())
						{
							Function_129(1, 1, 0, 0, 1);
							Function_128(1, 1, 0);
						}
					}
				}
			}
			if (!Function_132(2))
			{
				if (Global_39428[4] || Function_135(32768))
				{
					if (!Function_130(0, 0, 1, 1))
					{
						if ((((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Function_134()) && IS_ACTOR_ALIVE(&Global_54076)) && (Global_39873 + 5.0f) > GET_CURRENT_GAME_TIME())
						{
							Function_129(2, 1, 0, 0, 1);
							Function_84(2, 1);
						}
					}
				}
			}
			if (Function_83())
			{
				if (!Function_82(Global_39906.f_24))
				{
					Function_80(0);
					Function_78(1);
				}
			}
			else if (GET_ITEM_COUNT(Function_77(13), Function_76()) >= 0)
			{
				if (IS_ACTOR_VALID(Function_76()))
				{
					Function_75(13, 1);
					Function_75(65, 1);
				}
			}
			fVar1 = GET_CURRENT_GAME_TIME();
			if (!Function_74(11, 17))
			{
				if (!Global_6623)
				{
					if (Global_6607)
					{
						if (Function_71(1, 0))
						{
							if (iVar4 == 0)
							{
								iVar6 = GET_TIME_OF_DAY();
							}
							fVar2 = 0.0f;
							if (!bVar7)
							{
								iVar22 = 0;
								while (iVar22 <= 20)
								{
									if ((iVar4 + iVar22) <= Global_21684)
									{
										if (GET_DAY(&Global_21684[(iVar4 + iVar22)7] + 40) != 0)
										{
											if (IS_LATER_THAN(&Global_21684[(iVar4 + iVar22)7] + 40, &iVar6))
											{
												iVar6 = &Global_21684[(iVar4 + iVar22)7] + 40;
												Function_70(&iVar6);
												PRINTNL();
											}
										}
									}
									iVar22++;
								}
								iVar4 = (iVar4 + iVar22);
								if (iVar4 > Global_21684)
								{
									bVar7 = true;
								}
							}
							if (bVar7)
							{
								iVar22 = 0;
								while (iVar22 <= 20)
								{
									if ((iVar5 + iVar22) <= Global_26652)
									{
										if (GET_DAY(&(Global_26652[(iVar5 + iVar22)4])) != 0)
										{
											if (IS_LATER_THAN(&(Global_26652[(iVar5 + iVar22)4]), &iVar6))
											{
												iVar6 = &Global_26652[(iVar5 + iVar22)4];
												Function_70(&iVar6);
												PRINTNL();
											}
										}
									}
									iVar22++;
								}
								iVar5 = (iVar5 + iVar22);
								if (iVar5 > Global_21684)
								{
									iVar8 = 1;
								}
							}
							if (iVar8 && bVar7)
							{
								Function_69(11, 17);
								uVar23 = MAKE_TIME_OF_DAY_EX(GET_DAY(false) + 3, GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
								if (IS_LATER_THAN(&iVar6, &uVar23))
								{
									SET_TIME_OF_DAY(&iVar6);
									Function_68(8, (GET_DAY(false) - 2), 0);
									Function_70(&iVar6);
									PRINTNL();
								}
							}
						}
					}
				}
			}
			if (Function_131(4))
			{
				Function_67(3, 63);
			}
			if (Function_131(5))
			{
				Function_67(3, 4032);
			}
			if (Function_131(6))
			{
				Function_67(3, 258048);
			}
			if (Function_131(7))
			{
				Function_67(3, 16515072);
			}
			if (Function_131(8))
			{
				Function_67(3, 0x3f000000);
			}
			if (Function_131(9))
			{
				Function_67(2, 16515072);
			}
			if (Function_131(2))
			{
				Function_67(11, 62);
			}
			if (Function_131(16))
			{
				Function_67(11, 1984);
			}
			if (Function_131(17))
			{
				Function_67(11, 63488);
			}
			if (!Function_74(11, 16))
			{
				if (((!iLocal_83 && Global_6607) && !HUD_IS_FADED()) && !HUD_IS_FADING())
				{
					bVar24 = false;
					while (bVar24 <= Global_43791)
					{
						if (StackVal && StackVal == 1 == 0)
						{
							bVar25 = (Global_44085[bVar249].f_64 - 5);
							iVar26 = 8;
							while (bVar25 >= 30)
							{
								bVar25 = (bVar25 - 31);
								iVar26++;
							}
							if (iVar26 < 10)
							{
								if (Function_74(iVar26, bVar25))
								{
									if (!Function_66(&(Global_43791[bVar24]), 4096))
									{
										Function_65(&(Global_43791[bVar24]), 4096);
										iLocal_84 = 1;
									}
								}
								else if (Function_66(&(Global_43791[bVar24]), 4096))
								{
									Function_64(&(Global_43791[bVar24]), 4096);
									iLocal_84 = 1;
								}
							}
							else if (bVar24 == Global_46914[4])
							{
								if (Function_74(7, 30))
								{
									if (!Function_66(&(Global_43791[bVar24]), 4096))
									{
										Function_65(&(Global_43791[bVar24]), 4096);
										iLocal_84 = 1;
									}
								}
								else if (Function_66(&(Global_43791[bVar24]), 4096))
								{
									Function_64(&(Global_43791[bVar24]), 4096);
									iLocal_84 = 1;
								}
							}
						}
						bVar24++;
					}
					if (iLocal_84)
					{
						Global_54086[473] = 0.0f;
						Global_54086[474] = 0.0f;
						Global_54086[475] = 0.0f;
						Global_54086[476] = 0.0f;
						bVar24 = false;
						while (bVar24 <= Global_43791)
						{
							if (StackVal && StackVal == 1 == 0)
							{
								if (Function_66(&(Global_43791[bVar24]), 4096))
								{
									Function_62(473, 1, 0, 0);
									iVar27 = Function_61(bVar24);
									if (iVar27 == Global_46722[0])
									{
										Function_62(474, 1, 0, 0);
									}
									else if (iVar27 == Global_46722[1])
									{
										Function_62(475, 1, 0, 0);
									}
									else if (iVar27 == Global_46722[2])
									{
										Function_62(476, 1, 0, 0);
									}
								}
							}
							bVar24++;
						}
					}
					iLocal_83 = 1;
				}
				if (((!iLocal_85 && Global_6607) && !HUD_IS_FADED()) && !HUD_IS_FADING())
				{
					bVar29 = false;
					bVar30 = false;
					bVar31 = false;
					bVar28 = false;
					while (bVar28 <= 20)
					{
						bVar24 = Function_60(bVar28);
						iVar32 = Function_55(bVar24, 0, 2);
						if (Function_74(4, bVar28))
						{
							if (Function_54(iVar32) == 0)
							{
								Function_53(iVar32, 1);
								iLocal_86 = 1;
							}
							if (bVar28 <= 8)
							{
								bVar29++;
							}
							else if (bVar28 <= 16)
							{
								bVar30++;
							}
							else
							{
								bVar31++;
							}
						}
						else if (Function_54(iVar32) >= 0)
						{
							Function_53(iVar32, 0);
							iLocal_86 = 1;
						}
						bVar28++;
					}
					if (iLocal_86)
					{
						Function_68(363, bVar29, 0);
						Function_68(364, bVar30, 0);
						Function_68(365, bVar31, 0);
					}
					iLocal_85 = 1;
				}
				if (iLocal_86 || iLocal_84)
				{
					Function_28();
					iLocal_86 = 0;
					iLocal_84 = 0;
				}
				if (iLocal_83 && iLocal_85)
				{
					Function_69(11, 16);
					iLocal_83 = 0;
					iLocal_85 = 0;
				}
			}
			if ((Global_39428[10] && !Function_27()) && !bVar21)
			{
				bVar33 = true;
				if (Function_26() || Function_135(65536))
				{
					bVar33 = IS_GOLDEN_GUNS_ON();
				}
				if (bVar33)
				{
					if (!GET_WEAPON_GOLD(&Global_54076, 4))
					{
						SET_WEAPON_GOLD(&Global_54076, 4, true);
					}
					if (!GET_WEAPON_GOLD(&Global_54076, 8))
					{
						SET_WEAPON_GOLD(&Global_54076, 8, true);
					}
				}
			}
			if (!IS_GRINGO_VALID(&iVar10))
			{
				if (Function_25(Global_46760[0]))
				{
					uVar34 = Vector(-2074,223f, 19,52564f, 2647,24f);
					iVar10 = LOCATE_GRINGO_OF_TYPE("player_sit_movie", &uVar34, 5.0f, 0);
				}
				else if (Function_25(Global_46914[0]))
				{
					uVar34 = Vector(713,6155f, 81,98243f, 1285,187f);
					iVar10 = LOCATE_GRINGO_OF_TYPE("player_sit_movie", &uVar34, 5.0f, 0);
				}
			}
			else if (!Function_25(Global_46760[0]) && !Function_25(Global_46914[0]))
			{
				iVar10 = "";
			}
			if (IS_GRINGO_VALID(&iVar10))
			{
				if (GET_CURRENT_GRINGO(&Global_54076) == &iVar10)
				{
					if (!UNK_0xD036DF91())
					{
						if (fVar9 > 1.0f)
						{
							fVar9 = GET_CURRENT_GAME_TIME();
						}
						else if ((GET_CURRENT_GAME_TIME() - fVar9) < 5.0f)
						{
							if (Function_25(Global_46760[0]))
							{
								fVar9 = 0.0f;
								if (!bVar11)
								{
									UNK_0x7614AEBA("/dev_hdd0/game/NPEB00833/USRDIR/arm00.bik", 0);
									bVar11 = true;
								}
								else
								{
									UNK_0x7614AEBA("/dev_hdd0/game/NPUB30638/USRDIR/arm00.bik", 0);
									bVar11 = false;
								}
							}
							else if (Function_25(Global_46914[0]))
							{
								if (!bVar11)
								{
									if ((Function_22(Function_55(0, Global_46914[0], 3)) % 2) == 1)
									{
										UNK_0x7614AEBA("/dev_hdd0/game/NPEB00833/USRDIR/blk00.bik", 1);
									}
									else
									{
										UNK_0x7614AEBA("/dev_hdd0/game/NPEB00833/USRDIR/arm00.bik", 1);
									}
									bVar11 = true;
								}
								else
								{
									if ((Function_22(Function_55(0, Global_46914[0], 3)) % 2) == 1)
									{
										UNK_0x7614AEBA("/dev_hdd0/game/NPUB30638/USRDIR/blk00.bik", 1);
									}
									else
									{
										UNK_0x7614AEBA("/dev_hdd0/game/NPUB30638/USRDIR/arm00.bik", 1);
									}
									bVar11 = false;
								}
								fVar9 = 0.0f;
							}
							else
							{
								fVar9 = 0.0f;
							}
						}
					}
					else
					{
						fVar9 = 0.0f;
					}
				}
				else
				{
					fVar9 = 0.0f;
				}
			}
			else
			{
				fVar9 = 0.0f;
			}
			if (!iLocal_80)
			{
				if (Function_27())
				{
					iLocal_80 = 1;
					if (IS_STRING_VALID(UI_GET_STRING("HAS_GLOBAL_TU")))
					{
						PRINTSTRING("HAS_GLOBAL_TU string detected...Enabling UN profile stats!");
					}
					else
					{
						PRINTSTRING("HAS_GLOBAL_TU string missing...Disabling UN profile stats!");
						NET_SET_TUNING_PARAM(8, 0.0f);
					}
					PRINTNL();
				}
			}
			if (Function_27())
			{
				if (Function_71(3, 0))
				{
					if (Function_21(23, 1))
					{
						Function_69(13, 10);
					}
					if (Function_21(23, 2))
					{
						Function_69(13, 11);
					}
					if (Function_21(23, 4))
					{
						Function_69(13, 12);
					}
					if (Function_21(23, 8))
					{
						Function_69(13, 13);
					}
					if (Function_21(23, 16))
					{
						Function_69(13, 14);
					}
				}
				iVar36 = Function_20(2);
				switch (iVar36)
				{
					case 0x0000000A:
						Function_69(14, 23);
					
					default:
				}
				if (Function_18(2, 5, 1) != 1.0f)
				{
					Function_69(14, 22);
				}
				else
				{
					Function_16(14, 4194304);
				}
				if (Function_18(2, 8, 1) != 1.0f)
				{
					Function_69(14, 20);
				}
				else
				{
					Function_16(14, 1048576);
				}
				if (Function_18(2, 6, 1) != 1.0f)
				{
					Function_69(14, 19);
				}
				else
				{
					Function_16(14, 524288);
				}
				if (Function_18(2, 7, 1) != 1.0f)
				{
					Function_69(14, 21);
				}
				else
				{
					Function_16(14, 2097152);
				}
				if (Function_15())
				{
					iVar39 = 4294967295;
					bVar40 = false;
					iVar37 = 0;
					while (iVar37 <= 29)
					{
						uVar38 = Function_14(iVar37);
						Function_13(uVar38, &iVar39, &bVar40);
						if (!Function_74(iVar39, bVar40))
						{
							if (Function_10(uVar38))
							{
								Function_69(iVar39, bVar40);
							}
						}
						iVar37++;
					}
				}
			}
			if (Function_9(2, 16384))
			{
				if (Global_6607)
				{
					Function_7(2, 16384);
					Function_84(2, 0);
				}
			}
			Function_1();
			fVar2 = (GET_CURRENT_GAME_TIME() + fVar2);
		}
	}
	PRINTSTRING("TMS Boot PS3 - Script Ended");
	PRINTNL();
	return;
}

void Function_1() //Position: 0x2038 / 8248
{
	int iVar0;
	bool bVar1;
	
	if (NET_IS_UNLOCKED(11))
	{
		if (NET_IS_UNLOCKED(46))
		{
			if (Global_6603 == 1.0f)
			{
				PRINTSTRING("TMS: UNLOCK_DLC_ITEM_06 CHANGING XP MULTIPLIER TO 1.0f WITH bShowHelpMessage ");
				Function_6(iLocal_15);
				PRINTNL();
				if (iLocal_15)
				{
					PRINTSTRING("TMS: tms_multiplayer_bonus_off");
					PRINTNL();
					Function_4("tms_multiplayer_bonus_off", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_15 = 0;
				}
				Global_6603 = 1.0f;
			}
		}
		else
		{
			if (NET_IS_UNLOCKED(36))
			{
				iVar0++;
			}
			if (NET_IS_UNLOCKED(37))
			{
				iVar0 += 2;
			}
			if (NET_IS_UNLOCKED(38))
			{
				iVar0 += 4;
			}
			if (NET_IS_UNLOCKED(39))
			{
				iVar0 += 8;
			}
			bVar1 = Function_3(iVar0);
			if (Global_6603 == bVar1)
			{
				PRINTSTRING("TMS: CHANGING XP MULTIPLIER TO ");
				PRINTINT(Function_2(NET_IS_UNLOCKED(36)));
				PRINTINT(Function_2(NET_IS_UNLOCKED(37)));
				PRINTINT(Function_2(NET_IS_UNLOCKED(38)));
				PRINTINT(Function_2(NET_IS_UNLOCKED(39)));
				PRINTSTRING(" WHICH IS A SCORE OF ");
				PRINTFLOAT(bVar1);
				PRINTNL();
				PRINTSTRING("TMS: bShowHelpMessage is currently ");
				Function_6(iLocal_15);
				PRINTNL();
			}
			if (!iLocal_15 && IS_ACTOR_VALID(Function_76()))
			{
				PRINTSTRING("TMS: tms_multiplayer_bonus_on");
				PRINTNL();
				UI_SET_STRING("tms_dynamic", F2STR(bVar1, 2, 2));
				Function_4("tms_multiplayer_bonus_on", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_15 = 1;
			}
			Global_6603 = bVar1;
		}
	}
	else
	{
		if (Global_6603 == 1.0f)
		{
			PRINTSTRING("TMS: CHANGING XP MULTIPLIER TO 1.0f WITH bShowHelpMessage ");
			Function_6(iLocal_15);
			PRINTNL();
		}
		if (iLocal_15)
		{
			PRINTSTRING("TMS: tms_multiplayer_bonus_off");
			PRINTNL();
			Function_4("tms_multiplayer_bonus_off", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_15 = 0;
		}
		Global_6603 = 1.0f;
	}
	return;
}

int Function_2(bool bParam0) //Position: 0x2327 / 8999
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

var Function_3(int iParam0) //Position: 0x2335 / 9013
{
	switch (iParam0)
	{
		case 0x00000000:
			return 2.0f;
			break;
		
		case 0x00000001:
			return 3.0f;
			break;
		
		case 0x00000002:
			return 4.0f;
			break;
		
		case 0x00000003:
			return 5.0f;
			break;
		
		case 0x00000004:
			return 6.0f;
			break;
		
		case 0x00000005:
			return 10.0f;
			break;
		
		case 0x00000006:
			return 15.0f;
			break;
		
		case 0x00000007:
			return 20.0f;
			break;
		
		case 0x00000008:
			return 25.0f;
			break;
		
		case 0x00000009:
			return 30.0f;
			break;
		
		case 0x0000000A:
			return 35.0f;
			break;
		
		case 0x0000000B:
			return 40.0f;
			break;
		
		case 0x0000000C:
			return 45.0f;
			break;
		
		case 0x0000000D:
			return 50.0f;
			break;
		
		case 0x0000000E:
			return 75.0f;
			break;
		
		case 0x0000000F:
			return 100.0f;
			break;
	}
	return 1.0f;
}

void Function_4(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x241F / 9247
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_5(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_5(int iParam0) //Position: 0x24AA / 9386
{
	char* cVar0[16];
	
	if (!Function_27())
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

void Function_6(bool bParam0) //Position: 0x24E9 / 9449
{
	if (bParam0)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x250C / 9484
{
	int iVar0;
	
	if (!Function_8(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_42265[iParam09].f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(int iParam0) //Position: 0x2571 / 9585
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x2587 / 9607
{
	int iVar0;
	
	if (!Function_8(iParam0))
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

bool Function_10(bool bParam0) //Position: 0x25B4 / 9652
{
	int iVar0;
	
	iVar0 = Function_55(0, bParam0, 3);
	if (!Function_12(iVar0))
	{
		return 0;
	}
	if (Function_11(Global_21684[iVar07].f_24, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_11(bool bParam0, int iParam1) //Position: 0x25E1 / 9697
{
	return (bParam0 && iParam1) == 0;
}

bool Function_12(int iParam0) //Position: 0x25EE / 9710
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_13(int iParam0, var uParam1, int iParam2) //Position: 0x2605 / 9733
{
	if (iParam0 == Global_46760[0])
	{
		uParam1 = 13;
		iParam2 = 18;
	}
	else if (iParam0 == Global_46760[2])
	{
		uParam1 = 13;
		iParam2 = 29;
	}
	else if (iParam0 == Global_46760[1])
	{
		uParam1 = 13;
		iParam2 = 23;
	}
	else if (iParam0 == Global_46796[1])
	{
		uParam1 = 13;
		iParam2 = 22;
	}
	else if (iParam0 == Global_46796[3])
	{
		uParam1 = 13;
		iParam2 = 30;
	}
	else if (iParam0 == Global_46816[0])
	{
		uParam1 = 13;
		iParam2 = 16;
	}
	else if (iParam0 == Global_46816[1])
	{
		uParam1 = 13;
		iParam2 = 17;
	}
	else if (iParam0 == Global_46838[0])
	{
		uParam1 = 14;
		iParam2 = 3;
	}
	else if (iParam0 == Global_46850[0])
	{
		uParam1 = 13;
		iParam2 = 19;
	}
	else if (iParam0 == Global_46850[1])
	{
		uParam1 = 14;
		iParam2 = 0;
	}
	else if (iParam0 == Global_46850[2])
	{
		uParam1 = 14;
		iParam2 = 1;
	}
	else if (iParam0 == Global_46866[0])
	{
		uParam1 = 13;
		iParam2 = 20;
	}
	else if (iParam0 == Global_46866[1])
	{
		uParam1 = 13;
		iParam2 = 27;
	}
	else if (iParam0 == Global_46866[2])
	{
		uParam1 = 13;
		iParam2 = 26;
	}
	else if (iParam0 == Global_46894[3])
	{
		uParam1 = 13;
		iParam2 = 28;
	}
	else if (iParam0 == Global_46894[0])
	{
		uParam1 = 13;
		iParam2 = 25;
	}
	else if (iParam0 == Global_46914[0])
	{
		uParam1 = 13;
		iParam2 = 15;
	}
	else if (iParam0 == Global_46926[2])
	{
		uParam1 = 13;
		iParam2 = 21;
	}
	else if (iParam0 == Global_46926[1])
	{
		uParam1 = 13;
		iParam2 = 24;
	}
	else if (iParam0 == Global_46926[0])
	{
		uParam1 = 14;
		iParam2 = 2;
	}
	return;
}

var Function_14(int iParam0) //Position: 0x280C / 10252
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

bool Function_15() //Position: 0x2992 / 10642
{
	return Function_11(Global_21684[Function_55(111, 111, 5)7].f_20, 4);
}

void Function_16(int iParam0, int iParam1) //Position: 0x29AA / 10666
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&iParam1 > 0)
	{
		Function_17(&Global_21369 + 260[iParam0], &iParam1);
	}
	return;
	return;
}

void Function_17(int iParam0, int iParam1) //Position: 0x2A11 / 10769
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

float Function_18(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2A27 / 10791
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_19();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

var Function_19() //Position: 0x2AEE / 10990
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &iVar0;
}

int Function_20(int iParam0) //Position: 0x2B3F / 11071
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

bool Function_21(bool bParam0, int iParam1) //Position: 0x2B67 / 11111
{
	int iVar0;
	
	if (!Function_8(bParam0))
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

int Function_22(int iParam0) //Position: 0x2BC6 / 11206
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_23(int iParam0) //Position: 0x2BE0 / 11232
{
	if (!Function_12(iParam0))
	{
		return 0;
	}
	if (!Function_24(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_24(int iParam0) //Position: 0x2C04 / 11268
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_25(bool bParam0) //Position: 0x2C19 / 11289
{
	if (!Function_82(bParam0))
	{
		return 1;
	}
	return Function_66(&(Global_43791[bParam0]), 4);
}

bool Function_26() //Position: 0x2C35 / 11317
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_11(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_27() //Position: 0x2C65 / 11365
{
	if (Function_11(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_28() //Position: 0x2C80 / 11392
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0.0f;
	iVar1 = Function_52();
	iVar2 = Function_50();
	iVar3 = Function_49();
	fVar0 = (fVar0 + (24.0f * Function_47(1.0f, (IntToFloat(Function_48(12)) / 24.0f))));
	fVar0 = (fVar0 + (17.0f * Function_47(1.0f, (IntToFloat(Function_48(13)) / 17.0f))));
	fVar0 = (fVar0 + (7.0f * Function_47(1.0f, (IntToFloat(Function_48(14)) / 7.0f))));
	fVar0 = (fVar0 + (9.0f * Function_47(1.0f, (IntToFloat(Function_48(15)) / 9.0f))));
	fVar0 = (fVar0 + (4,5f * Function_47(1.0f, (IntToFloat(iVar1) / 9.0f))));
	fVar0 = (fVar0 + (3,5f * Function_47(1.0f, (IntToFloat(iVar3) / 7.0f))));
	fVar0 = (fVar0 + (2.0f * Function_47(1.0f, (IntToFloat(((Function_48(363) + Function_48(364)) + Function_48(365))) / 20.0f))));
	fVar0 = (fVar0 + (2,5f * Function_47(1.0f, (IntToFloat(Function_48(469)) / 5.0f))));
	fVar0 = (fVar0 + (2,5f * Function_47(1.0f, (IntToFloat(Function_48(400)) / 5.0f))));
	fVar0 = (fVar0 + (3.0f * Function_47(1.0f, (IntToFloat(Function_48(410)) / 6.0f))));
	fVar0 = (fVar0 + (3.0f * Function_47(1.0f, (Function_46(474) / Function_45(474)))));
	fVar0 = (fVar0 + (2.0f * Function_47(1.0f, (Function_46(475) / Function_45(475)))));
	fVar0 = (fVar0 + (1.0f * Function_47(1.0f, (Function_46(476) / Function_45(476)))));
	fVar0 = (fVar0 + (9.0f * Function_47(1.0f, (IntToFloat(iVar2) / 18.0f))));
	fVar0 = (fVar0 + (2.0f * Function_47(1.0f, (Function_46(468) / 13.0f))));
	if (Function_20(3) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_20(3) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_20(0) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_20(0) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_20(2) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_20(2) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	if (Function_20(1) > 10)
	{
		fVar0 = (fVar0 + 2.0f);
	}
	else if (Function_20(1) > 5)
	{
		fVar0 = (fVar0 + 1.0f);
	}
	Function_43();
	Function_30(5, fVar0, 0);
	Function_29(iVar1, iVar2, iVar3);
	if (fVar0 <= 100.0f)
	{
		if (!Function_131(12))
		{
			Function_128(12, 0, 1);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(32))
		{
			AWARD_ACHIEVEMENT(32);
		}
	}
	else if (fVar0 <= 75.0f)
	{
		if (!Function_132(12))
		{
			Function_129(12, 0, 1, 1, 0);
		}
	}
	return;
}

void Function_29(var uParam0, var uParam1, int iParam2) //Position: 0x2EE7 / 12007
{
	if (Function_20(3) > 10)
	{
	}
	else if (Function_20(3) > 5)
	{
	}
	if (Function_20(0) > 10)
	{
	}
	else if (Function_20(0) > 5)
	{
	}
	if (Function_20(2) > 10)
	{
	}
	else if (Function_20(2) > 5)
	{
	}
	if (Function_20(1) > 10)
	{
	}
	else if (Function_20(1) > 5)
	{
	}
	return;
}

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x2F3D / 12093
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_42(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_41(iParam0);
	if (&bParam2)
	{
		Function_31(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x31AA / 12714
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_45(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_46(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_46(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_39(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_36(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_33(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_32() //Position: 0x37E8 / 14312
{
	int iVar0;
	
	return &iVar0;
}

var Function_33(int iParam0) //Position: 0x37F1 / 14321
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3802 / 14338
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

struct<32> Function_35(char* cParam0) //Position: 0x38F9 / 14585
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_36(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3914 / 14612
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_38(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_37(Function_38(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_37(int iParam0, int iParam1) //Position: 0x397B / 14715
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_38(int iParam0, bool bParam1) //Position: 0x398D / 14733
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_39(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x399F / 14751
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

int Function_40(int iParam0) //Position: 0x3AD3 / 15059
{
	return Global_55480[iParam016].f_96;
}

void Function_41(int iParam0) //Position: 0x3AE2 / 15074
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

int Function_42(int iParam0, bool bParam1, bool bParam2) //Position: 0x3C7C / 15484
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

void Function_43() //Position: 0x3EC0 / 16064
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = (Function_44(2, Function_20(1)) - 1);
	bVar1 = SHIFT_LEFT((Function_44(2, Function_20(0)) - 1), 10);
	bVar2 = SHIFT_LEFT((Function_44(2, Function_20(2)) - 1), 20);
	bVar3 = SHIFT_LEFT((Function_44(2, Function_20(3)) - 1), 20);
	Function_67(5, ((iVar0 || bVar1) || bVar2));
	Function_67(4, bVar3);
	return;
}

int Function_44(int iParam0, int iParam1) //Position: 0x3F17 / 16151
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

float Function_45(int iParam0) //Position: 0x3F44 / 16196
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_46(int iParam0) //Position: 0x3F81 / 16257
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_47(int iParam0, int iParam1) //Position: 0x3FBA / 16314
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_48(bool bParam0) //Position: 0x3FCD / 16333
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

var Function_49() //Position: 0x4010 / 16400
{
	int iVar0;
	
	if (Function_54(Global_46948) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46950) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46952) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46951) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46953) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46955) >= 0)
	{
		iVar0++;
	}
	if (Function_54(Global_46954) >= 0)
	{
		iVar0++;
	}
	return iVar0;
}

var Function_50() //Position: 0x4088 / 16520
{
	int iVar0;
	bool bVar1;
	
	if (Function_51(3))
	{
		bVar1 = (bVar1 || 1);
		iVar0++;
	}
	if (Function_51(9))
	{
		bVar1 = (bVar1 || 2);
		iVar0++;
	}
	if (Function_51(14))
	{
		bVar1 = (bVar1 || 4);
		iVar0++;
	}
	if (Function_51(20))
	{
		bVar1 = (bVar1 || 8);
		iVar0++;
	}
	if (Function_51(22))
	{
		bVar1 = (bVar1 || 16);
		iVar0++;
	}
	if (Function_51(27))
	{
		bVar1 = (bVar1 || 32);
		iVar0++;
	}
	if (Function_51(31))
	{
		bVar1 = (bVar1 || 64);
		iVar0++;
	}
	if (Function_51(34))
	{
		bVar1 = (bVar1 || 128);
		iVar0++;
	}
	if (Function_51(37))
	{
		bVar1 = (bVar1 || 256);
		iVar0++;
	}
	if (Function_51(44))
	{
		bVar1 = (bVar1 || 512);
		iVar0++;
	}
	if (Function_51(48))
	{
		bVar1 = (bVar1 || 1024);
		iVar0++;
	}
	if (Function_51(53))
	{
		bVar1 = (bVar1 || 2048);
		iVar0++;
	}
	if (Function_51(56))
	{
		bVar1 = (bVar1 || 4096);
		iVar0++;
	}
	if (Function_51(59))
	{
		bVar1 = (bVar1 || 8192);
		iVar0++;
	}
	if (Function_51(63))
	{
		bVar1 = (bVar1 || 16384);
		iVar0++;
	}
	if (Function_51(67))
	{
		bVar1 = (bVar1 || 32768);
		iVar0++;
	}
	if (Function_51(71))
	{
		bVar1 = (bVar1 || 65536);
		iVar0++;
	}
	if (Function_51(76))
	{
		bVar1 = (bVar1 || 131072);
		iVar0++;
	}
	Function_67(7, bVar1);
	return iVar0;
}

bool Function_51(int iParam0) //Position: 0x4219 / 16921
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

var Function_52() //Position: 0x422E / 16942
{
	int iVar0;
	
	if (Function_131(9))
	{
		iVar0++;
	}
	if (Function_131(10))
	{
		iVar0++;
	}
	if (Function_131(3))
	{
		iVar0++;
	}
	if (Function_131(15))
	{
		iVar0++;
	}
	if (Function_131(14))
	{
		iVar0++;
	}
	if (Function_131(5))
	{
		iVar0++;
	}
	if (Function_131(6))
	{
		iVar0++;
	}
	if (Function_131(7))
	{
		iVar0++;
	}
	if (Function_131(8))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_53(int iParam0, int iParam1) //Position: 0x42B0 / 17072
{
	if (!Function_23(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_12 = iParam1;
	return;
}

int Function_54(int iParam0) //Position: 0x42CB / 17099
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_55(bool bParam0, bool bParam1, bool bParam2) //Position: 0x42E5 / 17125
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_59(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_56(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_56(bParam0, bParam1, bParam2, 4294967295);
}

int Function_56(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4343 / 17219
{
	var uVar0;
	
	if (!Function_58(bParam2))
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
	uVar0 = Function_59(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_57(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_57(int iParam0) //Position: 0x44A7 / 17575
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_58(int iParam0) //Position: 0x44E5 / 17637
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_59(int iParam0, int iParam1, int iParam2) //Position: 0x44FA / 17658
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_60(int iParam0) //Position: 0x451A / 17690
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46760[6];
			break;
		
		case 0x00000001:
			return Global_46760[7];
			break;
		
		case 0x00000002:
			return Global_46760[11];
			break;
		
		case 0x00000003:
			return Global_46760[13];
			break;
		
		case 0x00000004:
			return Global_46796[7];
			break;
		
		case 0x00000005:
			return Global_46838[3];
			break;
		
		case 0x00000006:
			return Global_46816[3];
			break;
		
		case 0x00000007:
			return Global_46816[6];
			break;
		
		case 0x00000008:
			return Global_46850[5];
			break;
		
		case 0x00000009:
			return Global_46866[4];
			break;
		
		case 0x0000000A:
			return Global_46866[3];
			break;
		
		case 0x0000000B:
			return Global_46866[7];
			break;
		
		case 0x0000000C:
			return Global_46866[11];
			break;
		
		case 0x0000000D:
			return Global_46866[9];
			break;
		
		case 0x0000000E:
			return Global_46866[8];
			break;
		
		case 0x0000000F:
			return Global_46866[10];
			break;
		
		case 0x00000010:
			return Global_46926[6];
			break;
		
		case 0x00000011:
			return Global_46926[3];
			break;
		
		case 0x00000012:
			return Global_46926[5];
			break;
		
		case 0x00000013:
			return Global_46926[4];
			break;
	}
	return Global_46760[6];
}

var Function_61(int iParam0) //Position: 0x4673 / 18035
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_82(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

int Function_62(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x46CB / 18123
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
	Function_42(iParam0, TO_FLOAT(bParam1), 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_63(iParam0);
	return 1;
}

void Function_63(int iParam0) //Position: 0x48F3 / 18675
{
	switch (iParam0)
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

void Function_64(var uParam0, int iParam1) //Position: 0x4991 / 18833
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_65(var uParam0, int iParam1) //Position: 0x49AB / 18859
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_66(var uParam0, int iParam1) //Position: 0x49BC / 18876
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_67(int iParam0, bool bParam1) //Position: 0x49D9 / 18905
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x4A48 / 19016
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_42(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_41(iParam0);
	if (&bParam2)
	{
		Function_31(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x4CE4 / 19684
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &bParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_70(int iParam0) //Position: 0x4D4E / 19790
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

bool Function_71(int iParam0, bool bParam1) //Position: 0x4D98 / 19864
{
	int iVar0;
	
	iVar0 = Function_72(iParam0);
	if (!Function_12(iVar0))
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

var Function_72(int iParam0) //Position: 0x4DD6 / 19926
{
	if (!Function_73(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_73(int iParam0) //Position: 0x4DF0 / 19952
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_74(int iParam0, bool bParam1) //Position: 0x4E06 / 19974
{
	bool bVar0;
	
	if (iParam0 < 16 || iParam0 > 0)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	if (((*&Global_21369 + 260)[iParam0] && bVar0) != 0)
	{
		return 1;
	}
	return 0;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x4E72 / 20082
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_77(bParam0), Function_76()) >= 0)
		{
			DELETE_ITEM(Function_77(bParam0), Function_76(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_77(bParam0), Function_76(), 1);
	return 1;
}

var Function_76() //Position: 0x4EBA / 20154
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_77(bool bParam0) //Position: 0x4ECF / 20175
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

void Function_78(int iParam0) //Position: 0x4FC3 / 20419
{
	Function_80(0);
	Function_79();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	Global_39906.f_40 = 0;
	if (&iParam0 == 1)
	{
		Function_17(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_79() //Position: 0x500C / 20492
{
	Function_17(&Global_39906 + 8, 2);
	Function_17(&Global_39906 + 8, 4);
	Function_17(&Global_39906 + 8, 8);
	Function_17(&Global_39906 + 8, 16);
	Function_17(&Global_39906 + 8, 32);
	Function_17(&Global_39906 + 8, 64);
	Function_17(&Global_39906 + 8, 128);
	Function_17(&Global_39906 + 8, 256);
	Function_17(&Global_39906 + 8, 512);
	Function_17(&Global_39906 + 8, 1024);
	Function_17(&Global_39906 + 8, 2048);
	Function_17(&Global_39906 + 8, 131072);
	Function_17(&Global_39906 + 8, 262144);
	Function_17(&Global_39906 + 8, 524288);
	return;
}

void Function_80(int iParam0) //Position: 0x50A6 / 20646
{
	if (iParam0 == 1)
	{
		Function_81(&Global_39906 + 8, 1);
	}
	else
	{
		Function_17(&Global_39906 + 8, 1);
	}
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x50C7 / 20679
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x50D8 / 20696
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_83() //Position: 0x50EE / 20718
{
	return Function_11(StackVal, 1);
}

void Function_84(bool bParam0, bool bParam1) //Position: 0x50FD / 20733
{
	var uVar0;
	int iVar1;
	
	if (Function_51(20))
	{
		Function_85(bParam0, 16, 1, 0, &bParam1);
	}
	uVar0 = Function_55(0, Global_46760[2], 3);
	iVar1 = Function_54(uVar0);
	if (iVar1 >= 0)
	{
		Function_85(bParam0, 2, 1, 0, &bParam1);
	}
	return;
}

void Function_85(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x513C / 20796
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_8(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_127(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_9(bParam0, 2))
	{
		Function_62(456, 1, 0, 0);
		Function_126(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_4(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_21(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_126(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_103(1);
				Function_102(1, 0);
			}
			else
			{
				Function_101();
			}
		}
		Function_96(bParam0);
		if (StackVal && !Function_11(((((!Function_134() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_11((((Function_134() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_27())
		{
			if (!Function_95(Global_119934, 2))
			{
				Function_90(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_86();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_67(3, bParam1);
				break;
			
			case 0x00000005:
				Function_67(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_67(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_67(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_67(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_67(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_69(2, 24);
				break;
			
			case 0x00000003:
				Function_69(2, 25);
				break;
			
			case 0x0000000F:
				Function_69(2, 26);
				break;
			
			case 0x0000000D:
				Function_69(2, 27);
				break;
			
			case 0x0000000E:
				Function_69(2, 28);
				break;
			}
	}
}

void Function_86() //Position: 0x53DB / 21467
{
	if (Function_8(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_89(Global_42827);
			(&Global_42827 + 8) = Function_87(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_89(Global_42827);
			*(&Global_42827 + 8) = Function_87(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_87(int iParam0, int iParam1) //Position: 0x545B / 21595
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_71(6, 0) || Function_71(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_51(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_71(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_51(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_51(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_51(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_51(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_71(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_51(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_51(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_51(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_51(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_51(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_51(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_51(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_71(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_51(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_71(6, 0) && Function_51(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_51(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_71(9, 0) && Function_51(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_51(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_71(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_88(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_88(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_88(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_88(char* cParam0) //Position: 0x60BE / 24766
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_89(int iParam0) //Position: 0x60D6 / 24790
{
	int iVar0;
	int iVar1;
	
	if (!Function_8(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_90(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6125 / 24869
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_92(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_91(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_91(char* cParam0) //Position: 0x619A / 24986
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x61D4 / 25044
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_94(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_93(uVar0))
		{
			case 0x00000002:
				if (!Function_95(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_93(char* cParam0) //Position: 0x6250 / 25168
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

int Function_94(int iParam0) //Position: 0x62F1 / 25329
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_17(&iVar1, 2147483648);
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

bool Function_95(var uParam0, int iParam1) //Position: 0x632E / 25390
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_96(bool bParam0) //Position: 0x6341 / 25409
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_21(bParam0, Function_100(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_21(bParam0, Function_100(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_99(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_98(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_97(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_97(int iParam0) //Position: 0x64F1 / 25841
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_8(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_98(bool bParam0, bool bParam1) //Position: 0x6548 / 25928
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

var Function_99(int iParam0) //Position: 0x656D / 25965
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_100(bool bParam0) //Position: 0x65C3 / 26051
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_101() //Position: 0x65CF / 26063
{
	return;
}

void Function_102(int iParam0, int iParam1) //Position: 0x65D5 / 26069
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_103(bool bParam0) //Position: 0x6614 / 26132
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_117();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_104();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_17(&Global_99144, 1);
		Function_17(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_104() //Position: 0x6669 / 26217
{
	Function_115();
	Function_114();
	Function_114();
	Function_113();
	Function_113();
	Function_112();
	Function_112();
	Function_111(0);
	Function_111(0);
	Function_109();
	Function_108();
	Function_107();
	Function_106();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_105();
	return;
}

void Function_105() //Position: 0x66B4 / 26292
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_106() //Position: 0x67BA / 26554
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_107() //Position: 0x67ED / 26605
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
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_108() //Position: 0x6980 / 27008
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_109() //Position: 0x6B39 / 27449
{
	Function_110(&Global_42918, 1, 0);
	return;
}

void Function_110(struct<2317> Param0) //Position: 0x6B47 / 27463
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_76();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_111(char* cParam0) //Position: 0x6D64 / 28004
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_48((50 + iVar4)) + Function_48((183 + iVar4))) + Function_48((90 + iVar4)));
				}
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
	Function_68(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_112() //Position: 0x6E0B / 28171
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
		iVar2 = ((Function_48((50 + iVar3) + 15) + Function_48((183 + iVar3) + 15)) + Function_48((90 + iVar3) + 15));
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
	Function_68(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_113() //Position: 0x6E94 / 28308
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
			iVar2 = ((Function_48((50 + iVar3) + 8) + Function_48((183 + iVar3) + 8)) + Function_48((90 + iVar3) + 8));
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
	Function_68(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_114() //Position: 0x6F2B / 28459
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
		iVar2 = ((Function_48((50 + iVar3)) + Function_48((183 + iVar3))) + Function_48((90 + iVar3)));
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
	Function_68(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_115() //Position: 0x6FAA / 28586
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_116(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_68(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_116(int iParam0, bool bParam1, int iParam2) //Position: 0x6FE7 / 28647
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_42(iParam0, bParam1, 1);
	Function_41(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_31(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_117() //Position: 0x71F3 / 29171
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_27())
	{
		Function_123(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_123(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_118(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_118(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_88(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_118(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x72AA / 29354
{
	int iVar0;
	
	iVar0 = Function_121(&uParam2, &fParam3);
	if (Function_120(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_81(&Global_99144, 1);
			Function_17(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_81(&Global_99144, 2);
			Function_17(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_81(&Global_99144, 2);
		Function_17(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_119();
	return StackVal, Function_119();
}

struct<8> Function_119() //Position: 0x73A2 / 29602
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_120(int iParam0) //Position: 0x73AC / 29612
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_121(bool bParam0, bool bParam1) //Position: 0x73C2 / 29634
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_122(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_122(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_120(iVar0) && !&bParam1)
	{
		iVar0 = Function_121(&bParam0, 1);
	}
	return iVar0;
}

float Function_122(struct<2> Param0, struct<2> Param2) //Position: 0x748E / 29838
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_123(float fParam0, int iParam1) //Position: 0x74AB / 29867
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_125(&Global_54076, &Var3);
	if (!Function_124(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_124(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_81(&Global_99144, 2);
	Function_17(&Global_99144, 1);
	iParam1 = 0;
	if (Function_88(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_124(int iParam0) //Position: 0x7CD7 / 31959
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_125(var uParam0, int iParam1) //Position: 0x7D12 / 32018
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_126(bool bParam0, int iParam1) //Position: 0x7D21 / 32033
{
	if (!Function_8(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_127(int iParam0) //Position: 0x7D76 / 32118
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7D92 / 32146
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_8(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_131(bParam0))
	{
		if (!Function_132(bParam0))
		{
			Function_129(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_62(457, 1, 0, 0);
		Function_126(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_103(1);
				Function_102(1, 0);
			}
			else
			{
				Function_101();
			}
		}
	}
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7F33 / 32563
{
	char* cVar0[32];
	
	if (!Function_8(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_127(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		Function_62(456, 1, 0, 0);
		Function_126(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_103(1);
				Function_102(1, 5);
			}
			else
			{
				Function_101();
			}
		}
		Function_96(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_134() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_134() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_4(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_27())
		{
			if (!Function_95(Global_119934, 2))
			{
				Function_90(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x809B / 32923
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_131(int iParam0) //Position: 0x814A / 33098
{
	if (!Function_8(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_9(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x819B / 33179
{
	if (!Function_8(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_9(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_133(int iParam0) //Position: 0x81ED / 33261
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_4("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

bool Function_134() //Position: 0x8224 / 33316
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_135(int iParam0) //Position: 0x8251 / 33361
{
	return Function_136(Global_131807.f_1304, iParam0);
}

int Function_136(var uParam0, int iParam1) //Position: 0x8263 / 33379
{
	return (uParam0 && iParam1) == 0;
}

void Function_137(int iParam0) //Position: 0x8270 / 33392
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			SET_WEAPON_GOLD(&Global_54076, bVar0, &iParam0);
		}
		bVar0++;
	}
	return;
}

int Function_138(var uParam0, float fParam1, float fParam2) //Position: 0x829C / 33436
{
	if (UNK_0x062C5047(&uParam0, 1, 0))
	{
		if (fParam1 >= 0.0f)
		{
			fParam1 = GET_CURRENT_GAME_TIME();
		}
		if ((GET_CURRENT_GAME_TIME() - fParam1) <= fParam2)
		{
			return 1;
		}
	}
	fParam1 = -1.0f;
	return 0;
}

void Function_139(int iParam0) //Position: 0x82D6 / 33494
{
	struct<5> Var0;
	
	PRINTSTRING("HACK_RECV_AA_COMPLETE - caught NetScriptMsg_MP_AA_Complete");
	PRINTNL();
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	bVar2 = StackVal;
	if (IS_SLOT_VALID(bVar2))
	{
		if (bVar2 == GET_ACTOR_SLOT(GET_PLAYER_ACTOR(0)))
		{
			iLocal_88 = 1;
			PRINTSTRING("Player was the winner of an AA so we're going to let him have the explosive rifle");
			PRINTNL();
		}
	}
	return;
}

void Function_140(var uParam0) //Position: 0x839F / 33695
{
	if (bLocal_14 >= 0)
	{
		PRINTSTRING("   v");
		PRINTINT(bLocal_14);
		PRINTSTRING(" - ");
	}
	bLocal_14++;
	PRINTSTRING(&uParam0);
	PRINTNL();
	return;
}

