//Decompiled with MagicRDR v1.0
//Function Count : 624
//Statics Count : 1660
//Natives Count : 837
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<3761> Local_4 = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = 0;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 0;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = 0;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 0;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = 0;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 0;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 0;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 0;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 0;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 0;
	var uLocal_14574 = 0;
	var uLocal_14575 = 0;
	var uLocal_14576 = 0;
	var uLocal_14577 = 0;
	var uLocal_14578 = 0;
	var uLocal_14579 = 0;
	var uLocal_14580 = 0;
	var uLocal_14581 = 0;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = 0;
	var uLocal_14617 = 0;
	var uLocal_14618 = 0;
	var uLocal_14619 = 0;
	var uLocal_14620 = 0;
	var uLocal_14621 = 0;
	var uLocal_14622 = 0;
	var uLocal_14623 = 0;
	var uLocal_14624 = 0;
	var uLocal_14625 = 0;
	var uLocal_14626 = 0;
	var uLocal_14627 = 0;
	var uLocal_14628 = 0;
	var uLocal_14629 = 0;
	var uLocal_14630 = 0;
	var uLocal_14631 = 0;
	var uLocal_14632 = 0;
	var uLocal_14633 = 0;
	var uLocal_14634 = 0;
	var uLocal_14635 = 0;
	var uLocal_14636 = 0;
	var uLocal_14637 = 0;
	var uLocal_14638 = 0;
	var uLocal_14639 = 0;
	var uLocal_14640 = 0;
	var uLocal_14641 = 0;
	var uLocal_14642 = 0;
	var uLocal_14643 = 0;
	var uLocal_14644 = 0;
	var uLocal_14645 = 0;
	var uLocal_14646 = 0;
	var uLocal_14647 = 0;
	var uLocal_14648 = 0;
	var uLocal_14649 = 0;
	var uLocal_14650 = 0;
	var uLocal_14651 = 0;
	var uLocal_14652 = 0;
	var uLocal_14653 = 0;
	var uLocal_14654 = 0;
	var uLocal_14655 = 0;
	var uLocal_14656 = 0;
	var uLocal_14657 = 0;
	var uLocal_14658 = 0;
	var uLocal_14659 = 0;
	var uLocal_14660 = 0;
	var uLocal_14661 = 0;
	var uLocal_14662 = 0;
	var uLocal_14663 = 0;
	var uLocal_14664 = 0;
	var uLocal_14665 = 0;
	var uLocal_14666 = 0;
	var uLocal_14667 = 0;
	var uLocal_14668 = 0;
	var uLocal_14669 = 0;
	var uLocal_14670 = 0;
	var uLocal_14671 = 0;
	var uLocal_14672 = 0;
	var uLocal_14673 = 0;
	var uLocal_14674 = 0;
	var uLocal_14675 = 0;
	var uLocal_14676 = 0;
	var uLocal_14677 = 0;
	var uLocal_14678 = 0;
	var uLocal_14679 = 0;
	var uLocal_14680 = 0;
	var uLocal_14681 = 0;
	var uLocal_14682 = 0;
	var uLocal_14683 = 0;
	var uLocal_14684 = 0;
	var uLocal_14685 = 0;
	var uLocal_14686 = 0;
	var uLocal_14687 = 0;
	var uLocal_14688 = 0;
	var uLocal_14689 = 0;
	var uLocal_14690 = 0;
	var uLocal_14691 = 0;
	var uLocal_14692 = 0;
	var uLocal_14693 = 0;
	var uLocal_14694 = 0;
	var uLocal_14695 = 0;
	var uLocal_14696 = 0;
	var uLocal_14697 = 0;
	var uLocal_14698 = 0;
	var uLocal_14699 = 0;
	var uLocal_14700 = 0;
	var uLocal_14701 = 0;
	var uLocal_14702 = 0;
	var uLocal_14703 = 0;
	var uLocal_14704 = 0;
	var uLocal_14705 = 0;
	var uLocal_14706 = 0;
	var uLocal_14707 = 0;
	var uLocal_14708 = 0;
	var uLocal_14709 = 0;
	var uLocal_14710 = 0;
	var uLocal_14711 = 0;
	var uLocal_14712 = 0;
	var uLocal_14713 = 0;
	var uLocal_14714 = 0;
	var uLocal_14715 = 0;
	var uLocal_14716 = 0;
	var uLocal_14717 = 0;
	var uLocal_14718 = 0;
	var uLocal_14719 = 0;
	var uLocal_14720 = 0;
	var uLocal_14721 = 0;
	var uLocal_14722 = 0;
	var uLocal_14723 = 0;
	var uLocal_14724 = 0;
	var uLocal_14725 = 0;
	var uLocal_14726 = 0;
	var uLocal_14727 = 0;
	var uLocal_14728 = 0;
	var uLocal_14729 = 0;
	var uLocal_14730 = 0;
	var uLocal_14731 = 0;
	var uLocal_14732 = 0;
	var uLocal_14733 = 0;
	var uLocal_14734 = 0;
	var uLocal_14735 = 0;
	var uLocal_14736 = 0;
	var uLocal_14737 = 0;
	var uLocal_14738 = 0;
	var uLocal_14739 = 0;
	var uLocal_14740 = 0;
	var uLocal_14741 = 0;
	var uLocal_14742 = 0;
	var uLocal_14743 = 0;
	var uLocal_14744 = 0;
	var uLocal_14745 = 0;
	var uLocal_14746 = 0;
	var uLocal_14747 = 0;
	var uLocal_14748 = 0;
	var uLocal_14749 = 0;
	var uLocal_14750 = 0;
	var uLocal_14751 = 0;
	var uLocal_14752 = 0;
	var uLocal_14753 = 0;
	var uLocal_14754 = 0;
	var uLocal_14755 = 0;
	var uLocal_14756 = 0;
	var uLocal_14757 = 0;
	var uLocal_14758 = 0;
	var uLocal_14759 = 0;
	var uLocal_14760 = 0;
	var uLocal_14761 = 0;
	var uLocal_14762 = 0;
	var uLocal_14763 = 0;
	var uLocal_14764 = 0;
	var uLocal_14765 = 0;
	var uLocal_14766 = 0;
	var uLocal_14767 = 0;
	var uLocal_14768 = 0;
	var uLocal_14769 = 0;
	var uLocal_14770 = 0;
	var uLocal_14771 = 0;
	var uLocal_14772 = 0;
	var uLocal_14773 = 0;
	var uLocal_14774 = 0;
	var uLocal_14775 = 0;
	var uLocal_14776 = 0;
	var uLocal_14777 = 0;
	var uLocal_14778 = 0;
	var uLocal_14779 = 0;
	var uLocal_14780 = 0;
	var uLocal_14781 = 0;
	var uLocal_14782 = 0;
	var uLocal_14783 = 0;
	var uLocal_14784 = 0;
	var uLocal_14785 = 0;
	var uLocal_14786 = 0;
	var uLocal_14787 = 0;
	var uLocal_14788 = 0;
	var uLocal_14789 = 0;
	var uLocal_14790 = 0;
	var uLocal_14791 = 0;
	var uLocal_14792 = 0;
	var uLocal_14793 = 0;
	var uLocal_14794 = 0;
	var uLocal_14795 = 0;
	var uLocal_14796 = 0;
	var uLocal_14797 = 0;
	var uLocal_14798 = 0;
	var uLocal_14799 = 0;
	var uLocal_14800 = 0;
	var uLocal_14801 = 0;
	var uLocal_14802 = 0;
	var uLocal_14803 = 0;
	var uLocal_14804 = 0;
	var uLocal_14805 = 0;
	var uLocal_14806 = 0;
	var uLocal_14807 = 0;
	var uLocal_14808 = 0;
	var uLocal_14809 = 0;
	var uLocal_14810 = 0;
	var uLocal_14811 = 0;
	var uLocal_14812 = 0;
	var uLocal_14813 = 0;
	var uLocal_14814 = 0;
	var uLocal_14815 = 0;
	var uLocal_14816 = 0;
	var uLocal_14817 = 0;
	var uLocal_14818 = 0;
	var uLocal_14819 = 0;
	var uLocal_14820 = 0;
	var uLocal_14821 = 0;
	var uLocal_14822 = 0;
	var uLocal_14823 = 0;
	var uLocal_14824 = 0;
	var uLocal_14825 = 0;
	var uLocal_14826 = 0;
	var uLocal_14827 = 0;
	var uLocal_14828 = 0;
	var uLocal_14829 = 0;
	var uLocal_14830 = 0;
	var uLocal_14831 = 0;
	var uLocal_14832 = 0;
	var uLocal_14833 = 0;
	var uLocal_14834 = 0;
	var uLocal_14835 = 0;
	var uLocal_14836 = 0;
	var uLocal_14837 = 0;
	var uLocal_14838 = 0;
	var uLocal_14839 = 0;
	var uLocal_14840 = 0;
	var uLocal_14841 = 0;
	var uLocal_14842 = 0;
	var uLocal_14843 = 0;
	var uLocal_14844 = 0;
	var uLocal_14845 = 0;
	var uLocal_14846 = 0;
	var uLocal_14847 = 0;
	var uLocal_14848 = 0;
	var uLocal_14849 = 0;
	var uLocal_14850 = 0;
	var uLocal_14851 = 0;
	var uLocal_14852 = 0;
	var uLocal_14853 = 0;
	var uLocal_14854 = 0;
	var uLocal_14855 = 0;
	var uLocal_14856 = 0;
	var uLocal_14857 = 0;
	var uLocal_14858 = 0;
	var uLocal_14859 = 0;
	var uLocal_14860 = 0;
	var uLocal_14861 = 0;
	var uLocal_14862 = 0;
	var uLocal_14863 = 0;
	var uLocal_14864 = 0;
	var uLocal_14865 = 0;
	var uLocal_14866 = 0;
	var uLocal_14867 = 0;
	var uLocal_14868 = 0;
	var uLocal_14869 = 0;
	var uLocal_14870 = 0;
	var uLocal_14871 = 0;
	var uLocal_14872 = 0;
	var uLocal_14873 = 0;
	var uLocal_14874 = 0;
	var uLocal_14875 = 0;
	var uLocal_14876 = 0;
	var uLocal_14877 = 0;
	var uLocal_14878 = 0;
	var uLocal_14879 = 0;
	var uLocal_14880 = 0;
	var uLocal_14881 = 0;
	var uLocal_14882 = 0;
	var uLocal_14883 = 0;
	var uLocal_14884 = 0;
	var uLocal_14885 = 0;
	var uLocal_14886 = 0;
	var uLocal_14887 = 0;
	var uLocal_14888 = 0;
	var uLocal_14889 = 0;
	var uLocal_14890 = 0;
	var uLocal_14891 = 0;
	var uLocal_14892 = 0;
	var uLocal_14893 = 0;
	var uLocal_14894 = 0;
	var uLocal_14895 = 0;
	var uLocal_14896 = 0;
	var uLocal_14897 = 0;
	var uLocal_14898 = 0;
	var uLocal_14899 = 0;
	var uLocal_14900 = 0;
	var uLocal_14901 = 0;
	var uLocal_14902 = 0;
	var uLocal_14903 = 0;
	var uLocal_14904 = 0;
	var uLocal_14905 = 0;
	var uLocal_14906 = 0;
	var uLocal_14907 = 0;
	var uLocal_14908 = 0;
	var uLocal_14909 = 0;
	var uLocal_14910 = 0;
	var uLocal_14911 = 0;
	var uLocal_14912 = 0;
	var uLocal_14913 = 0;
	var uLocal_14914 = 0;
	var uLocal_14915 = 0;
	var uLocal_14916 = 0;
	var uLocal_14917 = 0;
	var uLocal_14918 = 0;
	var uLocal_14919 = 0;
	var uLocal_14920 = 0;
	var uLocal_14921 = 0;
	var uLocal_14922 = 0;
	var uLocal_14923 = 0;
	var uLocal_14924 = 0;
	var uLocal_14925 = 0;
	var uLocal_14926 = 0;
	var uLocal_14927 = 0;
	var uLocal_14928 = 0;
	var uLocal_14929 = 0;
	var uLocal_14930 = 0;
	var uLocal_14931 = 0;
	var uLocal_14932 = 0;
	var uLocal_14933 = 0;
	var uLocal_14934 = 0;
	var uLocal_14935 = 0;
	var uLocal_14936 = 0;
	var uLocal_14937 = 0;
	var uLocal_14938 = 0;
	var uLocal_14939 = 0;
	var uLocal_14940 = 0;
	var uLocal_14941 = 0;
	var uLocal_14942 = 0;
	var uLocal_14943 = 0;
	var uLocal_14944 = 0;
	var uLocal_14945 = 0;
	var uLocal_14946 = 0;
	var uLocal_14947 = 0;
	var uLocal_14948 = 0;
	var uLocal_14949 = 0;
	var uLocal_14950 = 0;
	var uLocal_14951 = 0;
	var uLocal_14952 = 0;
	var uLocal_14953 = 0;
	var uLocal_14954 = 0;
	var uLocal_14955 = 0;
	var uLocal_14956 = 0;
	var uLocal_14957 = 0;
	var uLocal_14958 = 0;
	var uLocal_14959 = 0;
	var uLocal_14960 = 0;
	var uLocal_14961 = 0;
	var uLocal_14962 = 0;
	var uLocal_14963 = 0;
	var uLocal_14964 = 0;
	var uLocal_14965 = 0;
	var uLocal_14966 = 0;
	var uLocal_14967 = 0;
	var uLocal_14968 = 0;
	var uLocal_14969 = 0;
	var uLocal_14970 = 0;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 0;
	var uLocal_14978 = 0;
	var uLocal_14979 = 0;
	var uLocal_14980 = 0;
	var uLocal_14981 = 0;
	var uLocal_14982 = 0;
	var uLocal_14983 = 0;
	var uLocal_14984 = 0;
	var uLocal_14985 = 0;
	var uLocal_14986 = 0;
	var uLocal_14987 = 0;
	var uLocal_14988 = 0;
	var uLocal_14989 = 0;
	var uLocal_14990 = 0;
	var uLocal_14991 = 0;
	var uLocal_14992 = 0;
	var uLocal_14993 = 0;
	var uLocal_14994 = 0;
	var uLocal_14995 = 0;
	var uLocal_14996 = 0;
	var uLocal_14997 = 0;
	var uLocal_14998 = 0;
	var uLocal_14999 = 0;
	var uLocal_15000 = 0;
	var uLocal_15001 = 0;
	var uLocal_15002 = 0;
	var uLocal_15003 = 0;
	var uLocal_15004 = 0;
	var uLocal_15005 = 0;
	var uLocal_15006 = 0;
	var uLocal_15007 = 0;
	var uLocal_15008 = 0;
	var uLocal_15009 = 0;
	var uLocal_15010 = 0;
	var uLocal_15011 = 0;
	var uLocal_15012 = 0;
	var uLocal_15013 = 0;
	var uLocal_15014 = 0;
	var uLocal_15015 = 0;
	var uLocal_15016 = 0;
	var uLocal_15017 = 0;
	var uLocal_15018 = 0;
	var uLocal_15019 = 0;
	var uLocal_15020 = 0;
	var uLocal_15021 = 0;
	var uLocal_15022 = 0;
	var uLocal_15023 = 0;
	var uLocal_15024 = 0;
	var uLocal_15025 = 0;
	var uLocal_15026 = 0;
	var uLocal_15027 = 0;
	var uLocal_15028 = 0;
	var uLocal_15029 = 0;
	var uLocal_15030 = 0;
	var uLocal_15031 = 0;
	var uLocal_15032 = 0;
	var uLocal_15033 = 0;
	var uLocal_15034 = 0;
	var uLocal_15035 = 0;
	var uLocal_15036 = 0;
	var uLocal_15037 = 0;
	var uLocal_15038 = 0;
	var uLocal_15039 = 0;
	var uLocal_15040 = 0;
	var uLocal_15041 = 0;
	var uLocal_15042 = 0;
	var uLocal_15043 = 0;
	var uLocal_15044 = 0;
	var uLocal_15045 = 0;
	var uLocal_15046 = 0;
	var uLocal_15047 = 0;
	var uLocal_15048 = 0;
	var uLocal_15049 = 0;
	var uLocal_15050 = 0;
	var uLocal_15051 = 0;
	var uLocal_15052 = 0;
	var uLocal_15053 = 0;
	var uLocal_15054 = 0;
	var uLocal_15055 = 0;
	var uLocal_15056 = 0;
	var uLocal_15057 = 0;
	var uLocal_15058 = 0;
	var uLocal_15059 = 0;
	var uLocal_15060 = 0;
	var uLocal_15061 = 0;
	var uLocal_15062 = 0;
	var uLocal_15063 = 0;
	var uLocal_15064 = 0;
	var uLocal_15065 = 0;
	var uLocal_15066 = 0;
	var uLocal_15067 = 0;
	var uLocal_15068 = 0;
	var uLocal_15069 = 0;
	var uLocal_15070 = 0;
	var uLocal_15071 = 0;
	var uLocal_15072 = 0;
	var uLocal_15073 = 0;
	var uLocal_15074 = 0;
	var uLocal_15075 = 0;
	var uLocal_15076 = 0;
	var uLocal_15077 = 0;
	var uLocal_15078 = 0;
	var uLocal_15079 = 0;
	var uLocal_15080 = 0;
	var uLocal_15081 = 0;
	var uLocal_15082 = 0;
	var uLocal_15083 = 0;
	var uLocal_15084 = 0;
	var uLocal_15085 = 0;
	var uLocal_15086 = 0;
	var uLocal_15087 = 0;
	var uLocal_15088 = 0;
	var uLocal_15089 = 0;
	var uLocal_15090 = 0;
	var uLocal_15091 = 0;
	var uLocal_15092 = 0;
	var uLocal_15093 = 0;
	var uLocal_15094 = 0;
	var uLocal_15095 = 0;
	var uLocal_15096 = 0;
	var uLocal_15097 = 0;
	var uLocal_15098 = 0;
	var uLocal_15099 = 0;
	var uLocal_15100 = 0;
	var uLocal_15101 = 0;
	var uLocal_15102 = 0;
	var uLocal_15103 = 0;
	var uLocal_15104 = 0;
	var uLocal_15105 = 0;
	var uLocal_15106 = 0;
	var uLocal_15107 = 0;
	var uLocal_15108 = 0;
	var uLocal_15109 = 0;
	var uLocal_15110 = 0;
	var uLocal_15111 = 0;
	var uLocal_15112 = 0;
	var uLocal_15113 = 0;
	var uLocal_15114 = 0;
	var uLocal_15115 = 0;
	var uLocal_15116 = 0;
	var uLocal_15117 = 0;
	var uLocal_15118 = 0;
	var uLocal_15119 = 0;
	var uLocal_15120 = 0;
	var uLocal_15121 = 0;
	var uLocal_15122 = 0;
	var uLocal_15123 = 0;
	var uLocal_15124 = 0;
	var uLocal_15125 = 0;
	var uLocal_15126 = 0;
	var uLocal_15127 = 0;
	var uLocal_15128 = 0;
	var uLocal_15129 = 0;
	var uLocal_15130 = 0;
	var uLocal_15131 = 0;
	var uLocal_15132 = 0;
	var uLocal_15133 = 0;
	var uLocal_15134 = 0;
	var uLocal_15135 = 0;
	var uLocal_15136 = 0;
	var uLocal_15137 = 0;
	var uLocal_15138 = 0;
	var uLocal_15139 = 0;
	var uLocal_15140 = 0;
	var uLocal_15141 = 0;
	var uLocal_15142 = 0;
	var uLocal_15143 = 0;
	var uLocal_15144 = 0;
	var uLocal_15145 = 0;
	var uLocal_15146 = 0;
	var uLocal_15147 = 0;
	var uLocal_15148 = 0;
	var uLocal_15149 = 0;
	var uLocal_15150 = 0;
	var uLocal_15151 = 0;
	var uLocal_15152 = 0;
	var uLocal_15153 = 0;
	var uLocal_15154 = 0;
	var uLocal_15155 = 0;
	var uLocal_15156 = 0;
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 0;
	var uLocal_15160 = 0;
	var uLocal_15161 = 0;
	var uLocal_15162 = 0;
	var uLocal_15163 = 0;
	var uLocal_15164 = 0;
	var uLocal_15165 = 0;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
	var uLocal_15169 = 0;
	var uLocal_15170 = 0;
	var uLocal_15171 = 0;
	var uLocal_15172 = 0;
	var uLocal_15173 = 0;
	var uLocal_15174 = 0;
	var uLocal_15175 = 0;
	var uLocal_15176 = 0;
	var uLocal_15177 = 0;
	var uLocal_15178 = 0;
	var uLocal_15179 = 0;
	var uLocal_15180 = 0;
	var uLocal_15181 = 0;
	var uLocal_15182 = 0;
	var uLocal_15183 = 0;
	var uLocal_15184 = 0;
	var uLocal_15185 = 0;
	var uLocal_15186 = 0;
	var uLocal_15187 = 0;
	var uLocal_15188 = 0;
	var uLocal_15189 = 0;
	var uLocal_15190 = 0;
	var uLocal_15191 = 0;
	var uLocal_15192 = 0;
	var uLocal_15193 = 0;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = 0;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 0;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 0;
	var uLocal_15214 = 0;
	var uLocal_15215 = 0;
	var uLocal_15216 = 0;
	var uLocal_15217 = 0;
	var uLocal_15218 = 0;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 0;
	var uLocal_15229 = 0;
	var uLocal_15230 = 0;
	var uLocal_15231 = 0;
	var uLocal_15232 = 0;
	var uLocal_15233 = 0;
	var uLocal_15234 = 0;
	var uLocal_15235 = 0;
	var uLocal_15236 = 0;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = 0;
	var uLocal_15244 = 0;
	var uLocal_15245 = 0;
	var uLocal_15246 = 0;
	var uLocal_15247 = 0;
	var uLocal_15248 = 0;
	var uLocal_15249 = 0;
	var uLocal_15250 = 0;
	var uLocal_15251 = 0;
	var uLocal_15252 = 0;
	var uLocal_15253 = 0;
	var uLocal_15254 = 0;
	var uLocal_15255 = 0;
	var uLocal_15256 = 0;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 0;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 0;
	var uLocal_15268 = 0;
	var uLocal_15269 = 0;
	var uLocal_15270 = 0;
	var uLocal_15271 = 0;
	var uLocal_15272 = 0;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 0;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 0;
	var uLocal_15286 = 0;
	var uLocal_15287 = 0;
	var uLocal_15288 = 0;
	var uLocal_15289 = 0;
	var uLocal_15290 = 0;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 0;
	var uLocal_15305 = 0;
	var uLocal_15306 = 0;
	var uLocal_15307 = 0;
	var uLocal_15308 = 0;
	var uLocal_15309 = 0;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = 0;
	var uLocal_15323 = 0;
	var uLocal_15324 = 0;
	var uLocal_15325 = 0;
	var uLocal_15326 = 0;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 0;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 0;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 0;
	var uLocal_15341 = 0;
	var uLocal_15342 = 0;
	var uLocal_15343 = 0;
	var uLocal_15344 = 0;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 0;
	var uLocal_15359 = 0;
	var uLocal_15360 = 0;
	var uLocal_15361 = 0;
	var uLocal_15362 = 0;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 0;
	var uLocal_15373 = 0;
	var uLocal_15374 = 0;
	var uLocal_15375 = 0;
	var uLocal_15376 = 0;
	var uLocal_15377 = 0;
	var uLocal_15378 = 0;
	var uLocal_15379 = 0;
	var uLocal_15380 = 0;
	var uLocal_15381 = 0;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 0;
	var uLocal_15395 = 0;
	var uLocal_15396 = 0;
	var uLocal_15397 = 0;
	var uLocal_15398 = 0;
	var uLocal_15399 = 0;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 0;
	var uLocal_15413 = 0;
	var uLocal_15414 = 0;
	var uLocal_15415 = 0;
	var uLocal_15416 = 0;
	var uLocal_15417 = 0;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = 0;
	var uLocal_15427 = 0;
	var uLocal_15428 = 0;
	var uLocal_15429 = 0;
	var uLocal_15430 = 0;
	var uLocal_15431 = 0;
	var uLocal_15432 = 0;
	var uLocal_15433 = 0;
	var uLocal_15434 = 0;
	var uLocal_15435 = 0;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = 0;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 0;
	var uLocal_15445 = 0;
	var uLocal_15446 = 0;
	var uLocal_15447 = 0;
	var uLocal_15448 = 0;
	var uLocal_15449 = 0;
	var uLocal_15450 = 0;
	var uLocal_15451 = 0;
	var uLocal_15452 = 0;
	var uLocal_15453 = 0;
	var uLocal_15454 = 0;
	var uLocal_15455 = 0;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 0;
	var uLocal_15464 = 0;
	var uLocal_15465 = 0;
	var uLocal_15466 = 0;
	var uLocal_15467 = 0;
	var uLocal_15468 = 0;
	var uLocal_15469 = 0;
	var uLocal_15470 = 0;
	var uLocal_15471 = 0;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 0;
	var uLocal_15482 = 0;
	var uLocal_15483 = 0;
	var uLocal_15484 = 0;
	var uLocal_15485 = 0;
	var uLocal_15486 = 0;
	var uLocal_15487 = 0;
	var uLocal_15488 = 0;
	var uLocal_15489 = 0;
	var uLocal_15490 = 0;
	var uLocal_15491 = 0;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 0;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 0;
	var uLocal_15503 = 0;
	var uLocal_15504 = 0;
	var uLocal_15505 = 0;
	var uLocal_15506 = 0;
	var uLocal_15507 = 0;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 0;
	var uLocal_15512 = 0;
	var uLocal_15513 = 0;
	var uLocal_15514 = 0;
	var uLocal_15515 = 0;
	var uLocal_15516 = 0;
	var uLocal_15517 = 0;
	var uLocal_15518 = 0;
	var uLocal_15519 = 0;
	var uLocal_15520 = 0;
	var uLocal_15521 = 0;
	var uLocal_15522 = 0;
	var uLocal_15523 = 0;
	var uLocal_15524 = 0;
	var uLocal_15525 = 0;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = 0;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 0;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 0;
	var uLocal_15539 = 0;
	var uLocal_15540 = 0;
	var uLocal_15541 = 0;
	var uLocal_15542 = 0;
	var uLocal_15543 = 0;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 0;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = 0;
	var uLocal_15557 = 0;
	var uLocal_15558 = 0;
	var uLocal_15559 = 0;
	var uLocal_15560 = 0;
	var uLocal_15561 = 0;
	var uLocal_15562 = 0;
	var uLocal_15563 = 0;
	var uLocal_15564 = 0;
	var uLocal_15565 = 0;
	var uLocal_15566 = 0;
	var uLocal_15567 = 0;
	var uLocal_15568 = 0;
	var uLocal_15569 = 0;
	var uLocal_15570 = 0;
	var uLocal_15571 = 0;
	var uLocal_15572 = 0;
	var uLocal_15573 = 0;
	var uLocal_15574 = 0;
	var uLocal_15575 = 0;
	var uLocal_15576 = 0;
	var uLocal_15577 = 0;
	var uLocal_15578 = 0;
	var uLocal_15579 = 0;
	var uLocal_15580 = 0;
	var uLocal_15581 = 0;
	var uLocal_15582 = 0;
	var uLocal_15583 = 0;
	var uLocal_15584 = 0;
	var uLocal_15585 = 0;
	var uLocal_15586 = 0;
	var uLocal_15587 = 0;
	var uLocal_15588 = 0;
	var uLocal_15589 = 0;
	var uLocal_15590 = 0;
	var uLocal_15591 = 0;
	var uLocal_15592 = 0;
	var uLocal_15593 = 0;
	var uLocal_15594 = 0;
	var uLocal_15595 = 0;
	var uLocal_15596 = 0;
	var uLocal_15597 = 0;
	var uLocal_15598 = 0;
	var uLocal_15599 = 0;
	var uLocal_15600 = 0;
	var uLocal_15601 = 0;
	var uLocal_15602 = 0;
	var uLocal_15603 = 0;
	var uLocal_15604 = 0;
	var uLocal_15605 = 0;
	var uLocal_15606 = 0;
	var uLocal_15607 = 0;
	var uLocal_15608 = 0;
	var uLocal_15609 = 0;
	var uLocal_15610 = 0;
	var uLocal_15611 = 0;
	var uLocal_15612 = 0;
	var uLocal_15613 = 0;
	var uLocal_15614 = 0;
	var uLocal_15615 = 0;
	var uLocal_15616 = 0;
	var uLocal_15617 = 0;
	var uLocal_15618 = 0;
	var uLocal_15619 = 0;
	var uLocal_15620 = 0;
	var uLocal_15621 = 0;
	var uLocal_15622 = 0;
	var uLocal_15623 = 0;
	var uLocal_15624 = 0;
	var uLocal_15625 = 0;
	var uLocal_15626 = 0;
	var uLocal_15627 = 0;
	var uLocal_15628 = 0;
	var uLocal_15629 = 0;
	var uLocal_15630 = 0;
	var uLocal_15631 = 0;
	var uLocal_15632 = 0;
	var uLocal_15633 = 0;
	var uLocal_15634 = 0;
	var uLocal_15635 = 0;
	var uLocal_15636 = 0;
	var uLocal_15637 = 0;
	var uLocal_15638 = 0;
	var uLocal_15639 = 0;
	var uLocal_15640 = 0;
	var uLocal_15641 = 0;
	var uLocal_15642 = 0;
	var uLocal_15643 = 0;
	var uLocal_15644 = 0;
	var uLocal_15645 = 0;
	var uLocal_15646 = 0;
	var uLocal_15647 = 0;
	var uLocal_15648 = 0;
	var uLocal_15649 = 0;
	var uLocal_15650 = 0;
	var uLocal_15651 = 0;
	var uLocal_15652 = 0;
	var uLocal_15653 = 0;
	var uLocal_15654 = 0;
	var uLocal_15655 = 0;
	var uLocal_15656 = 0;
	var uLocal_15657 = 0;
	var uLocal_15658 = 0;
	var uLocal_15659 = 0;
	var uLocal_15660 = 0;
	var uLocal_15661 = 0;
	var uLocal_15662 = 0;
	var uLocal_15663 = 0;
	var uLocal_15664 = 0;
	var uLocal_15665 = 0;
	var uLocal_15666 = 0;
	var uLocal_15667 = 0;
	var uLocal_15668 = 0;
	var uLocal_15669 = 0;
	var uLocal_15670 = 0;
	var uLocal_15671 = 0;
	var uLocal_15672 = 0;
	var uLocal_15673 = 0;
	var uLocal_15674 = 0;
	var uLocal_15675 = 0;
	var uLocal_15676 = 0;
	var uLocal_15677 = 0;
	var uLocal_15678 = 0;
	var uLocal_15679 = 0;
	var uLocal_15680 = 0;
	var uLocal_15681 = 0;
	var uLocal_15682 = 0;
	var uLocal_15683 = 0;
	var uLocal_15684 = 0;
	var uLocal_15685 = 0;
	var uLocal_15686 = 0;
	var uLocal_15687 = 0;
	var uLocal_15688 = 0;
	var uLocal_15689 = 0;
	var uLocal_15690 = 0;
	var uLocal_15691 = 0;
	var uLocal_15692 = 0;
	var uLocal_15693 = 0;
	var uLocal_15694 = 0;
	var uLocal_15695 = 0;
	var uLocal_15696 = 0;
	var uLocal_15697 = 0;
	var uLocal_15698 = 0;
	var uLocal_15699 = 0;
	var uLocal_15700 = 0;
	var uLocal_15701 = 0;
	var uLocal_15702 = 0;
	var uLocal_15703 = 0;
	var uLocal_15704 = 0;
	var uLocal_15705 = 0;
	var uLocal_15706 = 0;
	var uLocal_15707 = 0;
	var uLocal_15708 = 0;
	var uLocal_15709 = 0;
	var uLocal_15710 = 0;
	var uLocal_15711 = 0;
	var uLocal_15712 = 0;
	var uLocal_15713 = 0;
	var uLocal_15714 = 0;
	var uLocal_15715 = 0;
	var uLocal_15716 = 0;
	var uLocal_15717 = 0;
	var uLocal_15718 = 0;
	var uLocal_15719 = 0;
	var uLocal_15720 = 0;
	var uLocal_15721 = 0;
	var uLocal_15722 = 0;
	var uLocal_15723 = 0;
	var uLocal_15724 = 0;
	var uLocal_15725 = 0;
	var uLocal_15726 = 0;
	var uLocal_15727 = 0;
	var uLocal_15728 = 0;
	var uLocal_15729 = 0;
	var uLocal_15730 = 0;
	var uLocal_15731 = 0;
	var uLocal_15732 = 0;
	var uLocal_15733 = 0;
	var uLocal_15734 = 0;
	var uLocal_15735 = 0;
	var uLocal_15736 = 0;
	var uLocal_15737 = 0;
	var uLocal_15738 = 0;
	var uLocal_15739 = 0;
	var uLocal_15740 = 0;
	var uLocal_15741 = 0;
	var uLocal_15742 = 0;
	var uLocal_15743 = 0;
	var uLocal_15744 = 0;
	var uLocal_15745 = 0;
	var uLocal_15746 = 0;
	var uLocal_15747 = 0;
	var uLocal_15748 = 0;
	var uLocal_15749 = 0;
	var uLocal_15750 = 0;
	var uLocal_15751 = 0;
	var uLocal_15752 = 0;
	var uLocal_15753 = 0;
	var uLocal_15754 = 0;
	var uLocal_15755 = 0;
	var uLocal_15756 = 0;
	var uLocal_15757 = 0;
	var uLocal_15758 = 0;
	var uLocal_15759 = 0;
	var uLocal_15760 = 0;
	var uLocal_15761 = 0;
	var uLocal_15762 = 0;
	var uLocal_15763 = 0;
	var uLocal_15764 = 0;
	var uLocal_15765 = 0;
	var uLocal_15766 = 0;
	var uLocal_15767 = 0;
	var uLocal_15768 = 0;
	var uLocal_15769 = 0;
	var uLocal_15770 = 0;
	var uLocal_15771 = 0;
	var uLocal_15772 = 0;
	var uLocal_15773 = 0;
	var uLocal_15774 = 0;
	var uLocal_15775 = 0;
	var uLocal_15776 = 0;
	var uLocal_15777 = 0;
	var uLocal_15778 = 0;
	var uLocal_15779 = 0;
	var uLocal_15780 = 0;
	var uLocal_15781 = 0;
	var uLocal_15782 = 0;
	var uLocal_15783 = 0;
	var uLocal_15784 = 0;
	var uLocal_15785 = 0;
	var uLocal_15786 = 0;
	var uLocal_15787 = 0;
	var uLocal_15788 = 0;
	var uLocal_15789 = 0;
	var uLocal_15790 = 0;
	var uLocal_15791 = 0;
	var uLocal_15792 = 0;
	var uLocal_15793 = 0;
	var uLocal_15794 = 0;
	var uLocal_15795 = 0;
	var uLocal_15796 = 0;
	var uLocal_15797 = 0;
	var uLocal_15798 = 0;
	var uLocal_15799 = 0;
	var uLocal_15800 = 0;
	var uLocal_15801 = 0;
	var uLocal_15802 = 0;
	var uLocal_15803 = 0;
	var uLocal_15804 = 0;
	var uLocal_15805 = 0;
	var uLocal_15806 = 0;
	var uLocal_15807 = 0;
	var uLocal_15808 = 0;
	var uLocal_15809 = 0;
	var uLocal_15810 = 0;
	var uLocal_15811 = 0;
	var uLocal_15812 = 0;
	var uLocal_15813 = 0;
	var uLocal_15814 = 0;
	var uLocal_15815 = 0;
	var uLocal_15816 = 0;
	var uLocal_15817 = 0;
	var uLocal_15818 = 0;
	var uLocal_15819 = 0;
	var uLocal_15820 = 0;
	var uLocal_15821 = 0;
	var uLocal_15822 = 0;
	var uLocal_15823 = 0;
	var uLocal_15824 = 0;
	var uLocal_15825 = 0;
	var uLocal_15826 = 0;
	var uLocal_15827 = 0;
	var uLocal_15828 = 0;
	var uLocal_15829 = 0;
	var uLocal_15830 = 0;
	var uLocal_15831 = 0;
	var uLocal_15832 = 0;
	var uLocal_15833 = 0;
	var uLocal_15834 = 0;
	var uLocal_15835 = 0;
	var uLocal_15836 = 0;
	var uLocal_15837 = 0;
	var uLocal_15838 = 0;
	var uLocal_15839 = 0;
	var uLocal_15840 = 0;
	var uLocal_15841 = 0;
	var uLocal_15842 = 0;
	var uLocal_15843 = 0;
	var uLocal_15844 = 0;
	var uLocal_15845 = 0;
	var uLocal_15846 = 0;
	var uLocal_15847 = 0;
	var uLocal_15848 = 0;
	var uLocal_15849 = 0;
	var uLocal_15850 = 0;
	var uLocal_15851 = 0;
	var uLocal_15852 = 0;
	var uLocal_15853 = 0;
	var uLocal_15854 = 0;
	var uLocal_15855 = 0;
	var uLocal_15856 = 0;
	var uLocal_15857 = 0;
	var uLocal_15858 = 0;
	var uLocal_15859 = 0;
	var uLocal_15860 = 0;
	var uLocal_15861 = 0;
	var uLocal_15862 = 0;
	var uLocal_15863 = 0;
	var uLocal_15864 = 0;
	var uLocal_15865 = 0;
	var uLocal_15866 = 0;
	var uLocal_15867 = 0;
	var uLocal_15868 = 0;
	var uLocal_15869 = 0;
	var uLocal_15870 = 0;
	var uLocal_15871 = 0;
	var uLocal_15872 = 0;
	var uLocal_15873 = 0;
	var uLocal_15874 = 0;
	var uLocal_15875 = 0;
	var uLocal_15876 = 0;
	var uLocal_15877 = 0;
	var uLocal_15878 = 0;
	var uLocal_15879 = 0;
	var uLocal_15880 = 0;
	var uLocal_15881 = 0;
	var uLocal_15882 = 0;
	var uLocal_15883 = 0;
	var uLocal_15884 = 0;
	var uLocal_15885 = 0;
	var uLocal_15886 = 0;
	var uLocal_15887 = 0;
	var uLocal_15888 = 0;
	var uLocal_15889 = 0;
	var uLocal_15890 = 0;
	var uLocal_15891 = 0;
	var uLocal_15892 = 0;
	var uLocal_15893 = 0;
	var uLocal_15894 = 0;
	var uLocal_15895 = 0;
	var uLocal_15896 = 0;
	var uLocal_15897 = 0;
	var uLocal_15898 = 0;
	var uLocal_15899 = 0;
	var uLocal_15900 = 0;
	var uLocal_15901 = 0;
	var uLocal_15902 = 0;
	var uLocal_15903 = 0;
	var uLocal_15904 = 0;
	var uLocal_15905 = 0;
	var uLocal_15906 = 0;
	var uLocal_15907 = 0;
	var uLocal_15908 = 0;
	var uLocal_15909 = 0;
	var uLocal_15910 = 0;
	var uLocal_15911 = 0;
	var uLocal_15912 = 0;
	var uLocal_15913 = 0;
	var uLocal_15914 = 0;
	var uLocal_15915 = 0;
	var uLocal_15916 = 0;
	var uLocal_15917 = 0;
	var uLocal_15918 = 0;
	var uLocal_15919 = 0;
	var uLocal_15920 = 0;
	var uLocal_15921 = 0;
	var uLocal_15922 = 0;
	var uLocal_15923 = 0;
	var uLocal_15924 = 0;
	var uLocal_15925 = 0;
	var uLocal_15926 = 0;
	var uLocal_15927 = 0;
	var uLocal_15928 = 0;
	var uLocal_15929 = 0;
	var uLocal_15930 = 0;
	var uLocal_15931 = 0;
	var uLocal_15932 = 0;
	var uLocal_15933 = 0;
	var uLocal_15934 = 0;
	var uLocal_15935 = 0;
	var uLocal_15936 = 0;
	var uLocal_15937 = 0;
	var uLocal_15938 = 0;
	var uLocal_15939 = 0;
	var uLocal_15940 = 0;
	var uLocal_15941 = 0;
	var uLocal_15942 = 0;
	var uLocal_15943 = 0;
	var uLocal_15944 = 0;
	var uLocal_15945 = 0;
	var uLocal_15946 = 0;
	var uLocal_15947 = 0;
	var uLocal_15948 = 0;
	var uLocal_15949 = 0;
	var uLocal_15950 = 0;
	var uLocal_15951 = 0;
	var uLocal_15952 = 0;
	var uLocal_15953 = 0;
	var uLocal_15954 = 0;
	var uLocal_15955 = 0;
	var uLocal_15956 = 0;
	var uLocal_15957 = 0;
	var uLocal_15958 = 0;
	var uLocal_15959 = 0;
	var uLocal_15960 = 0;
	var uLocal_15961 = 0;
	var uLocal_15962 = 0;
	var uLocal_15963 = 0;
	var uLocal_15964 = 0;
	var uLocal_15965 = 0;
	var uLocal_15966 = 0;
	var uLocal_15967 = 0;
	var uLocal_15968 = 0;
	var uLocal_15969 = 0;
	var uLocal_15970 = 0;
	var uLocal_15971 = 0;
	var uLocal_15972 = 0;
	var uLocal_15973 = 0;
	var uLocal_15974 = 0;
	var uLocal_15975 = 0;
	var uLocal_15976 = 0;
	var uLocal_15977 = 0;
	var uLocal_15978 = 0;
	var uLocal_15979 = 0;
	var uLocal_15980 = 0;
	var uLocal_15981 = 0;
	var uLocal_15982 = 0;
	var uLocal_15983 = 0;
	var uLocal_15984 = 0;
	var uLocal_15985 = 0;
	var uLocal_15986 = 0;
	var uLocal_15987 = 0;
	var uLocal_15988 = 0;
	var uLocal_15989 = 0;
	var uLocal_15990 = 0;
	var uLocal_15991 = 0;
	var uLocal_15992 = 0;
	var uLocal_15993 = 0;
	var uLocal_15994 = 0;
	var uLocal_15995 = 0;
	var uLocal_15996 = 0;
	var uLocal_15997 = 0;
	var uLocal_15998 = 0;
	var uLocal_15999 = 0;
	var uLocal_16000 = 0;
	var uLocal_16001 = 0;
	var uLocal_16002 = 0;
	var uLocal_16003 = 0;
	var uLocal_16004 = 0;
	var uLocal_16005 = 0;
	var uLocal_16006 = 0;
	var uLocal_16007 = 0;
	var uLocal_16008 = 0;
	var uLocal_16009 = 0;
	var uLocal_16010 = 0;
	var uLocal_16011 = 0;
	var uLocal_16012 = 0;
	var uLocal_16013 = 0;
	var uLocal_16014 = 0;
	var uLocal_16015 = 0;
	var uLocal_16016 = 0;
	var uLocal_16017 = 0;
	var uLocal_16018 = 0;
	var uLocal_16019 = 0;
	var uLocal_16020 = 0;
	var uLocal_16021 = 0;
	var uLocal_16022 = 0;
	var uLocal_16023 = 0;
	var uLocal_16024 = 0;
	var uLocal_16025 = 0;
	var uLocal_16026 = 0;
	var uLocal_16027 = 0;
	var uLocal_16028 = 0;
	var uLocal_16029 = 0;
	var uLocal_16030 = 0;
	var uLocal_16031 = 0;
	var uLocal_16032 = 0;
	var uLocal_16033 = 0;
	var uLocal_16034 = 0;
	var uLocal_16035 = 0;
	var uLocal_16036 = 0;
	var uLocal_16037 = 0;
	var uLocal_16038 = 0;
	var uLocal_16039 = 0;
	var uLocal_16040 = 0;
	var uLocal_16041 = 0;
	var uLocal_16042 = 0;
	var uLocal_16043 = 0;
	var uLocal_16044 = 0;
	var uLocal_16045 = 0;
	var uLocal_16046 = 0;
	var uLocal_16047 = 0;
	var uLocal_16048 = 0;
	var uLocal_16049 = 0;
	var uLocal_16050 = 0;
	var uLocal_16051 = 0;
	var uLocal_16052 = 0;
	var uLocal_16053 = 0;
	var uLocal_16054 = 0;
	var uLocal_16055 = 0;
	var uLocal_16056 = 0;
	var uLocal_16057 = 0;
	var uLocal_16058 = 0;
	var uLocal_16059 = 0;
	var uLocal_16060 = 0;
	var uLocal_16061 = 0;
	var uLocal_16062 = 0;
	var uLocal_16063 = 0;
	var uLocal_16064 = 0;
	var uLocal_16065 = 0;
	var uLocal_16066 = 0;
	var uLocal_16067 = 0;
	var uLocal_16068 = 0;
	var uLocal_16069 = 0;
	var uLocal_16070 = 0;
	var uLocal_16071 = 0;
	var uLocal_16072 = 0;
	var uLocal_16073 = 0;
	var uLocal_16074 = 0;
	var uLocal_16075 = 0;
	var uLocal_16076 = 0;
	var uLocal_16077 = 0;
	var uLocal_16078 = 0;
	var uLocal_16079 = 0;
	var uLocal_16080 = 0;
	var uLocal_16081 = 0;
	var uLocal_16082 = 0;
	var uLocal_16083 = 0;
	var uLocal_16084 = 0;
	var uLocal_16085 = 0;
	var uLocal_16086 = 0;
	var uLocal_16087 = 0;
	var uLocal_16088 = 0;
	var uLocal_16089 = 0;
	var uLocal_16090 = 0;
	var uLocal_16091 = 0;
	var uLocal_16092 = 0;
	var uLocal_16093 = 0;
	var uLocal_16094 = 0;
	var uLocal_16095 = 0;
	var uLocal_16096 = 0;
	var uLocal_16097 = 0;
	var uLocal_16098 = 0;
	var uLocal_16099 = 0;
	var uLocal_16100 = 0;
	var uLocal_16101 = 0;
	var uLocal_16102 = 0;
	var uLocal_16103 = 0;
	var uLocal_16104 = 0;
	var uLocal_16105 = 0;
	var uLocal_16106 = 0;
	var uLocal_16107 = 0;
	var uLocal_16108 = 0;
	var uLocal_16109 = 0;
	var uLocal_16110 = 0;
	var uLocal_16111 = 0;
	var uLocal_16112 = 0;
	var uLocal_16113 = 0;
	var uLocal_16114 = 0;
	var uLocal_16115 = 0;
	var uLocal_16116 = 0;
	var uLocal_16117 = 0;
	var uLocal_16118 = 0;
	var uLocal_16119 = 0;
	var uLocal_16120 = 0;
	var uLocal_16121 = 0;
	var uLocal_16122 = 0;
	var uLocal_16123 = 0;
	var uLocal_16124 = 0;
	var uLocal_16125 = 0;
	var uLocal_16126 = 0;
	var uLocal_16127 = 0;
	var uLocal_16128 = 0;
	var uLocal_16129 = 0;
	var uLocal_16130 = 0;
	var uLocal_16131 = 0;
	var uLocal_16132 = 0;
	var uLocal_16133 = 0;
	var uLocal_16134 = 0;
	var uLocal_16135 = 0;
	var uLocal_16136 = 0;
	var uLocal_16137 = 0;
	var uLocal_16138 = 0;
	var uLocal_16139 = 0;
	var uLocal_16140 = 0;
	var uLocal_16141 = 0;
	var uLocal_16142 = 0;
	var uLocal_16143 = 0;
	var uLocal_16144 = 0;
	var uLocal_16145 = 0;
	var uLocal_16146 = 0;
	var uLocal_16147 = 0;
	var uLocal_16148 = 0;
	var uLocal_16149 = 0;
	var uLocal_16150 = 0;
	var uLocal_16151 = 0;
	var uLocal_16152 = 0;
	var uLocal_16153 = 0;
	var uLocal_16154 = 0;
	var uLocal_16155 = 0;
	var uLocal_16156 = 0;
	var uLocal_16157 = 0;
	var uLocal_16158 = 0;
	var uLocal_16159 = 0;
	var uLocal_16160 = 0;
	var uLocal_16161 = 0;
	var uLocal_16162 = 0;
	var uLocal_16163 = 0;
	var uLocal_16164 = 0;
	var uLocal_16165 = 0;
	var uLocal_16166 = 0;
	var uLocal_16167 = 0;
	var uLocal_16168 = 0;
	var uLocal_16169 = 0;
	var uLocal_16170 = 0;
	var uLocal_16171 = 0;
	var uLocal_16172 = 0;
	var uLocal_16173 = 0;
	var uLocal_16174 = 0;
	var uLocal_16175 = 0;
	var uLocal_16176 = 0;
	var uLocal_16177 = 0;
	var uLocal_16178 = 0;
	var uLocal_16179 = 0;
	var uLocal_16180 = 0;
	var uLocal_16181 = 0;
	var uLocal_16182 = 0;
	var uLocal_16183 = 0;
	var uLocal_16184 = 0;
	var uLocal_16185 = 0;
	var uLocal_16186 = 0;
	var uLocal_16187 = 0;
	var uLocal_16188 = 0;
	var uLocal_16189 = 0;
	var uLocal_16190 = 0;
	var uLocal_16191 = 0;
	var uLocal_16192 = 0;
	var uLocal_16193 = 0;
	var uLocal_16194 = 0;
	var uLocal_16195 = 0;
	var uLocal_16196 = 0;
	var uLocal_16197 = 0;
	var uLocal_16198 = 0;
	var uLocal_16199 = 0;
	var uLocal_16200 = 0;
	var uLocal_16201 = 0;
	var uLocal_16202 = 0;
	var uLocal_16203 = 0;
	var uLocal_16204 = 0;
	var uLocal_16205 = 0;
	var uLocal_16206 = 0;
	var uLocal_16207 = 0;
	var uLocal_16208 = 0;
	var uLocal_16209 = 0;
	var uLocal_16210 = 0;
	var uLocal_16211 = 0;
	var uLocal_16212 = 0;
	var uLocal_16213 = 0;
	var uLocal_16214 = 0;
	var uLocal_16215 = 0;
	var uLocal_16216 = 0;
	var uLocal_16217 = 0;
	var uLocal_16218 = 0;
	var uLocal_16219 = 0;
	var uLocal_16220 = 0;
	var uLocal_16221 = 0;
	var uLocal_16222 = 0;
	var uLocal_16223 = 0;
	var uLocal_16224 = 0;
	var uLocal_16225 = 0;
	var uLocal_16226 = 0;
	var uLocal_16227 = 0;
	var uLocal_16228 = 0;
	var uLocal_16229 = 0;
	var uLocal_16230 = 0;
	var uLocal_16231 = 0;
	var uLocal_16232 = 0;
	var uLocal_16233 = 0;
	var uLocal_16234 = 0;
	var uLocal_16235 = 0;
	var uLocal_16236 = 0;
	var uLocal_16237 = 0;
	var uLocal_16238 = 0;
	var uLocal_16239 = 0;
	var uLocal_16240 = 0;
	var uLocal_16241 = 0;
	var uLocal_16242 = 0;
	var uLocal_16243 = 0;
	var uLocal_16244 = 0;
	var uLocal_16245 = 0;
	var uLocal_16246 = 0;
	var uLocal_16247 = 0;
	var uLocal_16248 = 0;
	var uLocal_16249 = 0;
	var uLocal_16250 = 0;
	var uLocal_16251 = 0;
	var uLocal_16252 = 0;
	var uLocal_16253 = 0;
	var uLocal_16254 = 0;
	var uLocal_16255 = 0;
	var uLocal_16256 = 0;
	var uLocal_16257 = 0;
	var uLocal_16258 = 0;
	var uLocal_16259 = 0;
	var uLocal_16260 = 0;
	var uLocal_16261 = 0;
	var uLocal_16262 = 0;
	var uLocal_16263 = 0;
	var uLocal_16264 = 0;
	var uLocal_16265 = 0;
	var uLocal_16266 = 0;
	var uLocal_16267 = 0;
	var uLocal_16268 = 0;
	var uLocal_16269 = 0;
	var uLocal_16270 = 0;
	var uLocal_16271 = 0;
	var uLocal_16272 = 0;
	var uLocal_16273 = 0;
	var uLocal_16274 = 0;
	var uLocal_16275 = 0;
	var uLocal_16276 = 0;
	var uLocal_16277 = 0;
	var uLocal_16278 = 0;
	var uLocal_16279 = 0;
	var uLocal_16280 = 0;
	var uLocal_16281 = 0;
	var uLocal_16282 = 0;
	var uLocal_16283 = 0;
	var uLocal_16284 = 0;
	var uLocal_16285 = 0;
	var uLocal_16286 = 0;
	var uLocal_16287 = 0;
	var uLocal_16288 = 0;
	var uLocal_16289 = 0;
	var uLocal_16290 = 0;
	var uLocal_16291 = 0;
	var uLocal_16292 = 0;
	var uLocal_16293 = 0;
	var uLocal_16294 = 0;
	var uLocal_16295 = 0;
	var uLocal_16296 = 0;
	var uLocal_16297 = 0;
	var uLocal_16298 = 0;
	var uLocal_16299 = 0;
	var uLocal_16300 = 0;
	var uLocal_16301 = 0;
	var uLocal_16302 = 0;
	var uLocal_16303 = 0;
	var uLocal_16304 = 0;
	var uLocal_16305 = 0;
	var uLocal_16306 = 0;
	var uLocal_16307 = 0;
	var uLocal_16308 = 0;
	var uLocal_16309 = 0;
	var uLocal_16310 = 0;
	var uLocal_16311 = 0;
	var uLocal_16312 = 0;
	var uLocal_16313 = 0;
	var uLocal_16314 = 0;
	var uLocal_16315 = 0;
	var uLocal_16316 = 0;
	var uLocal_16317 = 0;
	var uLocal_16318 = 0;
	var uLocal_16319 = 0;
	var uLocal_16320 = 0;
	var uLocal_16321 = 0;
	var uLocal_16322 = 0;
	var uLocal_16323 = 0;
	var uLocal_16324 = 0;
	var uLocal_16325 = 0;
	var uLocal_16326 = 0;
	var uLocal_16327 = 0;
	var uLocal_16328 = 0;
	var uLocal_16329 = 0;
	var uLocal_16330 = 0;
	var uLocal_16331 = 0;
	var uLocal_16332 = 0;
	var uLocal_16333 = 0;
	var uLocal_16334 = 0;
	var uLocal_16335 = 0;
	var uLocal_16336 = 0;
	var uLocal_16337 = 0;
	var uLocal_16338 = 0;
	var uLocal_16339 = 0;
	var uLocal_16340 = 0;
	var uLocal_16341 = 0;
	var uLocal_16342 = 0;
	var uLocal_16343 = 0;
	var uLocal_16344 = 0;
	var uLocal_16345 = 0;
	var uLocal_16346 = 0;
	var uLocal_16347 = 0;
	var uLocal_16348 = 0;
	var uLocal_16349 = 0;
	var uLocal_16350 = 0;
	var uLocal_16351 = 0;
	var uLocal_16352 = 0;
	var uLocal_16353 = 0;
	var uLocal_16354 = 0;
	var uLocal_16355 = 0;
	var uLocal_16356 = 0;
	var uLocal_16357 = 0;
	var uLocal_16358 = 0;
	var uLocal_16359 = 0;
	var uLocal_16360 = 0;
	var uLocal_16361 = 0;
	var uLocal_16362 = 0;
	var uLocal_16363 = 0;
	var uLocal_16364 = 0;
	var uLocal_16365 = 0;
	var uLocal_16366 = 0;
	var uLocal_16367 = 0;
	var uLocal_16368 = 0;
	var uLocal_16369 = 0;
	var uLocal_16370 = 0;
	var uLocal_16371 = 0;
	var uLocal_16372 = 0;
	var uLocal_16373 = 0;
	var uLocal_16374 = 0;
	var uLocal_16375 = 0;
	var uLocal_16376 = 0;
	var uLocal_16377 = 0;
	var uLocal_16378 = 0;
	var uLocal_16379 = 0;
	var uLocal_16380 = 0;
	var uLocal_16381 = 0;
	var uLocal_16382 = 0;
	var uLocal_16383 = 0;
	var uLocal_16384 = 0;
	var uLocal_16385 = 0;
	var uLocal_16386 = 0;
	var uLocal_16387 = 0;
	var uLocal_16388 = 0;
	var uLocal_16389 = 0;
	var uLocal_16390 = 0;
	var uLocal_16391 = 0;
	var uLocal_16392 = 0;
	var uLocal_16393 = 0;
	var uLocal_16394 = 0;
	var uLocal_16395 = 0;
	var uLocal_16396 = 0;
	var uLocal_16397 = 0;
	var uLocal_16398 = 0;
	var uLocal_16399 = 0;
	var uLocal_16400 = 0;
	var uLocal_16401 = 0;
	var uLocal_16402 = 0;
	var uLocal_16403 = 0;
	var uLocal_16404 = 0;
	var uLocal_16405 = 0;
	var uLocal_16406 = 0;
	var uLocal_16407 = 0;
	var uLocal_16408 = 0;
	var uLocal_16409 = 0;
	var uLocal_16410 = 0;
	var uLocal_16411 = 0;
	var uLocal_16412 = 0;
	var uLocal_16413 = 0;
	var uLocal_16414 = 0;
	var uLocal_16415 = 0;
	var uLocal_16416 = 0;
	var uLocal_16417 = 0;
	var uLocal_16418 = 0;
	var uLocal_16419 = 0;
	var uLocal_16420 = 0;
	var uLocal_16421 = 0;
	var uLocal_16422 = 0;
	var uLocal_16423 = 0;
	var uLocal_16424 = 0;
	var uLocal_16425 = 0;
	var uLocal_16426 = 0;
	var uLocal_16427 = 0;
	var uLocal_16428 = 0;
	var uLocal_16429 = 0;
	var uLocal_16430 = 0;
	var uLocal_16431 = 0;
	var uLocal_16432 = 0;
	var uLocal_16433 = 0;
	var uLocal_16434 = 0;
	var uLocal_16435 = 0;
	var uLocal_16436 = 0;
	var uLocal_16437 = 0;
	var uLocal_16438 = 0;
	var uLocal_16439 = 0;
	var uLocal_16440 = 0;
	var uLocal_16441 = 0;
	var uLocal_16442 = 0;
	var uLocal_16443 = 0;
	var uLocal_16444 = 0;
	var uLocal_16445 = 0;
	var uLocal_16446 = 0;
	var uLocal_16447 = 0;
	var uLocal_16448 = 0;
	var uLocal_16449 = 0;
	var uLocal_16450 = 0;
	var uLocal_16451 = 0;
	var uLocal_16452 = 0;
	var uLocal_16453 = 0;
	var uLocal_16454 = 0;
	var uLocal_16455 = 0;
	var uLocal_16456 = 0;
	var uLocal_16457 = 0;
	var uLocal_16458 = 0;
	var uLocal_16459 = 0;
	var uLocal_16460 = 0;
	var uLocal_16461 = 0;
	var uLocal_16462 = 0;
	var uLocal_16463 = 0;
	var uLocal_16464 = 0;
	var uLocal_16465 = 0;
	var uLocal_16466 = 0;
	var uLocal_16467 = 0;
	var uLocal_16468 = 0;
	var uLocal_16469 = 0;
	var uLocal_16470 = 0;
	var uLocal_16471 = 0;
	var uLocal_16472 = 0;
	var uLocal_16473 = 0;
	var uLocal_16474 = 0;
	var uLocal_16475 = 0;
	var uLocal_16476 = 0;
	var uLocal_16477 = 0;
	var uLocal_16478 = 0;
	var uLocal_16479 = 0;
	var uLocal_16480 = 0;
	var uLocal_16481 = 0;
	var uLocal_16482 = 0;
	var uLocal_16483 = 0;
	var uLocal_16484 = 0;
	var uLocal_16485 = 0;
	var uLocal_16486 = 0;
	var uLocal_16487 = 0;
	var uLocal_16488 = 0;
	var uLocal_16489 = 0;
	var uLocal_16490 = 0;
	var uLocal_16491 = 0;
	var uLocal_16492 = 0;
	var uLocal_16493 = 0;
	var uLocal_16494 = 0;
	var uLocal_16495 = 0;
	var uLocal_16496 = 0;
	var uLocal_16497 = 0;
	var uLocal_16498 = 0;
	var uLocal_16499 = 0;
	var uLocal_16500 = 0;
	var uLocal_16501 = 0;
	var uLocal_16502 = 0;
	var uLocal_16503 = 0;
	var uLocal_16504 = 0;
	var uLocal_16505 = 0;
	var uLocal_16506 = 0;
	var uLocal_16507 = 0;
	var uLocal_16508 = 0;
	var uLocal_16509 = 0;
	var uLocal_16510 = 0;
	var uLocal_16511 = 0;
	var uLocal_16512 = 0;
	var uLocal_16513 = 0;
	var uLocal_16514 = 0;
	var uLocal_16515 = 0;
	var uLocal_16516 = 0;
	var uLocal_16517 = 0;
	var uLocal_16518 = 0;
	var uLocal_16519 = 0;
	var uLocal_16520 = 0;
	var uLocal_16521 = 0;
	var uLocal_16522 = 0;
	var uLocal_16523 = 0;
	var uLocal_16524 = 0;
	var uLocal_16525 = 0;
	var uLocal_16526 = 0;
	var uLocal_16527 = 0;
	var uLocal_16528 = 0;
	var uLocal_16529 = 0;
	var uLocal_16530 = 0;
	var uLocal_16531 = 0;
	var uLocal_16532 = 0;
	var uLocal_16533 = 0;
	var uLocal_16534 = 0;
	var uLocal_16535 = 0;
	var uLocal_16536 = 0;
	var uLocal_16537 = 0;
	var uLocal_16538 = 0;
	var uLocal_16539 = 0;
	var uLocal_16540 = 0;
	var uLocal_16541 = 0;
	var uLocal_16542 = 0;
	var uLocal_16543 = 0;
	var uLocal_16544 = 0;
	var uLocal_16545 = 0;
	var uLocal_16546 = 0;
	var uLocal_16547 = 0;
	var uLocal_16548 = 0;
	var uLocal_16549 = 0;
	var uLocal_16550 = 0;
	var uLocal_16551 = 0;
	var uLocal_16552 = 0;
	var uLocal_16553 = 0;
	var uLocal_16554 = 0;
	var uLocal_16555 = 0;
	var uLocal_16556 = 0;
	var uLocal_16557 = 0;
	var uLocal_16558 = 0;
	var uLocal_16559 = 0;
	var uLocal_16560 = 0;
	var uLocal_16561 = 0;
	var uLocal_16562 = 0;
	var uLocal_16563 = 0;
	var uLocal_16564 = 0;
	var uLocal_16565 = 0;
	var uLocal_16566 = 0;
	var uLocal_16567 = 0;
	var uLocal_16568 = 0;
	var uLocal_16569 = 0;
	var uLocal_16570 = 0;
	var uLocal_16571 = 0;
	var uLocal_16572 = 0;
	var uLocal_16573 = 0;
	var uLocal_16574 = 0;
	var uLocal_16575 = 0;
	var uLocal_16576 = 0;
	var uLocal_16577 = 0;
	var uLocal_16578 = 0;
	var uLocal_16579 = 0;
	var uLocal_16580 = 0;
	var uLocal_16581 = 0;
	var uLocal_16582 = 0;
	var uLocal_16583 = 0;
	var uLocal_16584 = 0;
	var uLocal_16585 = 0;
	var uLocal_16586 = 0;
	var uLocal_16587 = 0;
	var uLocal_16588 = 0;
	var uLocal_16589 = 0;
	var uLocal_16590 = 0;
	var uLocal_16591 = 0;
	var uLocal_16592 = 0;
	var uLocal_16593 = 0;
	var uLocal_16594 = 0;
	var uLocal_16595 = 0;
	var uLocal_16596 = 0;
	var uLocal_16597 = 0;
	var uLocal_16598 = 0;
	var uLocal_16599 = 0;
	var uLocal_16600 = 0;
	var uLocal_16601 = 0;
	var uLocal_16602 = 0;
	var uLocal_16603 = 0;
	var uLocal_16604 = 0;
	var uLocal_16605 = 0;
	var uLocal_16606 = 0;
	var uLocal_16607 = 0;
	var uLocal_16608 = 0;
	var uLocal_16609 = 0;
	var uLocal_16610 = 0;
	var uLocal_16611 = 0;
	var uLocal_16612 = 0;
	var uLocal_16613 = 0;
	var uLocal_16614 = 0;
	var uLocal_16615 = 0;
	var uLocal_16616 = 0;
	var uLocal_16617 = 0;
	var uLocal_16618 = 0;
	var uLocal_16619 = 0;
	var uLocal_16620 = 0;
	var uLocal_16621 = 0;
	var uLocal_16622 = 0;
	var uLocal_16623 = 0;
	var uLocal_16624 = 0;
	var uLocal_16625 = 0;
	var uLocal_16626 = 0;
	var uLocal_16627 = 0;
	var uLocal_16628 = 0;
	var uLocal_16629 = 0;
	var uLocal_16630 = 0;
	var uLocal_16631 = 0;
	var uLocal_16632 = 0;
	var uLocal_16633 = 0;
	var uLocal_16634 = 0;
	var uLocal_16635 = 0;
	var uLocal_16636 = 0;
	var uLocal_16637 = 0;
	var uLocal_16638 = 0;
	var uLocal_16639 = 0;
	var uLocal_16640 = 0;
	var uLocal_16641 = 0;
	var uLocal_16642 = 0;
	var uLocal_16643 = 0;
	var uLocal_16644 = 0;
	var uLocal_16645 = 0;
	var uLocal_16646 = 0;
	var uLocal_16647 = 0;
	var uLocal_16648 = 0;
	var uLocal_16649 = 0;
	var uLocal_16650 = 0;
	var uLocal_16651 = 0;
	var uLocal_16652 = 0;
	var uLocal_16653 = 0;
	var uLocal_16654 = 0;
	var uLocal_16655 = 0;
	var uLocal_16656 = 0;
	var uLocal_16657 = 0;
	var uLocal_16658 = 0;
	var uLocal_16659 = 0;
	var uLocal_16660 = 0;
	var uLocal_16661 = 0;
	var uLocal_16662 = 0;
	var uLocal_16663 = 0;
	var uLocal_16664 = 0;
	var uLocal_16665 = 0;
	var uLocal_16666 = 0;
	var uLocal_16667 = 0;
	var uLocal_16668 = 0;
	var uLocal_16669 = 0;
	var uLocal_16670 = 0;
	var uLocal_16671 = 0;
	var uLocal_16672 = 0;
	var uLocal_16673 = 0;
	var uLocal_16674 = 0;
	var uLocal_16675 = 0;
	var uLocal_16676 = 0;
	var uLocal_16677 = 0;
	var uLocal_16678 = 0;
	var uLocal_16679 = 0;
	var uLocal_16680 = 0;
	var uLocal_16681 = 0;
	var uLocal_16682 = 0;
	var uLocal_16683 = 0;
	var uLocal_16684 = 0;
	var uLocal_16685 = 0;
	var uLocal_16686 = 0;
	var uLocal_16687 = 0;
	var uLocal_16688 = 0;
	var uLocal_16689 = 0;
	var uLocal_16690 = 0;
	var uLocal_16691 = 0;
	var uLocal_16692 = 0;
	var uLocal_16693 = 0;
	var uLocal_16694 = 0;
	var uLocal_16695 = 0;
	var uLocal_16696 = 0;
	var uLocal_16697 = 0;
	var uLocal_16698 = 0;
	var uLocal_16699 = 0;
	var uLocal_16700 = 0;
	var uLocal_16701 = 0;
	var uLocal_16702 = 0;
	var uLocal_16703 = 0;
	var uLocal_16704 = 0;
	var uLocal_16705 = 0;
	var uLocal_16706 = 0;
	var uLocal_16707 = 0;
	var uLocal_16708 = 0;
	var uLocal_16709 = 0;
	var uLocal_16710 = 0;
	var uLocal_16711 = 0;
	var uLocal_16712 = 0;
	var uLocal_16713 = 0;
	var uLocal_16714 = 0;
	var uLocal_16715 = 0;
	var uLocal_16716 = 0;
	var uLocal_16717 = 0;
	var uLocal_16718 = 0;
	var uLocal_16719 = 0;
	var uLocal_16720 = 0;
	var uLocal_16721 = 0;
	var uLocal_16722 = 0;
	var uLocal_16723 = 0;
	var uLocal_16724 = 0;
	var uLocal_16725 = 0;
	var uLocal_16726 = 0;
	var uLocal_16727 = 0;
	var uLocal_16728 = 0;
	var uLocal_16729 = 0;
	var uLocal_16730 = 0;
	var uLocal_16731 = 0;
	var uLocal_16732 = 0;
	var uLocal_16733 = 0;
	var uLocal_16734 = 0;
	var uLocal_16735 = 0;
	var uLocal_16736 = 0;
	var uLocal_16737 = 0;
	var uLocal_16738 = 0;
	var uLocal_16739 = 0;
	var uLocal_16740 = 0;
	var uLocal_16741 = 0;
	var uLocal_16742 = 0;
	var uLocal_16743 = 0;
	var uLocal_16744 = 0;
	var uLocal_16745 = 0;
	var uLocal_16746 = 0;
	var uLocal_16747 = 0;
	var uLocal_16748 = 0;
	var uLocal_16749 = 0;
	var uLocal_16750 = 0;
	var uLocal_16751 = 0;
	var uLocal_16752 = 0;
	var uLocal_16753 = 0;
	var uLocal_16754 = 0;
	var uLocal_16755 = 0;
	var uLocal_16756 = 0;
	var uLocal_16757 = 0;
	var uLocal_16758 = 0;
	var uLocal_16759 = 0;
	var uLocal_16760 = 0;
	var uLocal_16761 = 0;
	var uLocal_16762 = 0;
	var uLocal_16763 = 0;
	var uLocal_16764 = 0;
	var uLocal_16765 = 0;
	var uLocal_16766 = 0;
	var uLocal_16767 = 0;
	var uLocal_16768 = 0;
	var uLocal_16769 = 0;
	var uLocal_16770 = 0;
	var uLocal_16771 = 0;
	var uLocal_16772 = 0;
	var uLocal_16773 = 0;
	var uLocal_16774 = 0;
	var uLocal_16775 = 0;
	var uLocal_16776 = 0;
	var uLocal_16777 = 0;
	var uLocal_16778 = 0;
	var uLocal_16779 = 0;
	var uLocal_16780 = 0;
	var uLocal_16781 = 0;
	var uLocal_16782 = 0;
	var uLocal_16783 = 0;
	var uLocal_16784 = 0;
	var uLocal_16785 = 0;
	var uLocal_16786 = 0;
	var uLocal_16787 = 0;
	var uLocal_16788 = 0;
	var uLocal_16789 = 0;
	var uLocal_16790 = 0;
	var uLocal_16791 = 0;
	var uLocal_16792 = 0;
	var uLocal_16793 = 0;
	var uLocal_16794 = 0;
	var uLocal_16795 = 0;
	var uLocal_16796 = 0;
	var uLocal_16797 = 0;
	var uLocal_16798 = 0;
	var uLocal_16799 = 0;
	var uLocal_16800 = 0;
	var uLocal_16801 = 0;
	var uLocal_16802 = 0;
	var uLocal_16803 = 0;
	var uLocal_16804 = 0;
	var uLocal_16805 = 0;
	var uLocal_16806 = 0;
	var uLocal_16807 = 0;
	var uLocal_16808 = 0;
	var uLocal_16809 = 0;
	var uLocal_16810 = 0;
	var uLocal_16811 = 0;
	var uLocal_16812 = 0;
	var uLocal_16813 = 0;
	var uLocal_16814 = 0;
	var uLocal_16815 = 0;
	var uLocal_16816 = 0;
	var uLocal_16817 = 0;
	var uLocal_16818 = 0;
	var uLocal_16819 = 0;
	var uLocal_16820 = 0;
	var uLocal_16821 = 0;
	var uLocal_16822 = 0;
	var uLocal_16823 = 0;
	var uLocal_16824 = 0;
	var uLocal_16825 = 0;
	var uLocal_16826 = 0;
	var uLocal_16827 = 0;
	var uLocal_16828 = 0;
	var uLocal_16829 = 0;
	var uLocal_16830 = 0;
	var uLocal_16831 = 0;
	var uLocal_16832 = 0;
	var uLocal_16833 = 0;
	var uLocal_16834 = 0;
	var uLocal_16835 = 0;
	var uLocal_16836 = 0;
	var uLocal_16837 = 0;
	var uLocal_16838 = 0;
	var uLocal_16839 = 0;
	var uLocal_16840 = 0;
	var uLocal_16841 = 0;
	var uLocal_16842 = 0;
	var uLocal_16843 = 0;
	var uLocal_16844 = 0;
	var uLocal_16845 = 0;
	var uLocal_16846 = 0;
	var uLocal_16847 = 0;
	var uLocal_16848 = 0;
	var uLocal_16849 = 0;
	var uLocal_16850 = 0;
	var uLocal_16851 = 0;
	var uLocal_16852 = 0;
	var uLocal_16853 = 0;
	var uLocal_16854 = 0;
	var uLocal_16855 = 0;
	var uLocal_16856 = 0;
	var uLocal_16857 = 0;
	var uLocal_16858 = 0;
	var uLocal_16859 = 0;
	var uLocal_16860 = 0;
	var uLocal_16861 = 0;
	var uLocal_16862 = 0;
	var uLocal_16863 = 0;
	var uLocal_16864 = 0;
	var uLocal_16865 = 0;
	var uLocal_16866 = 0;
	var uLocal_16867 = 0;
	var uLocal_16868 = 0;
	var uLocal_16869 = 0;
	var uLocal_16870 = 0;
	var uLocal_16871 = 0;
	var uLocal_16872 = 0;
	var uLocal_16873 = 0;
	var uLocal_16874 = 0;
	var uLocal_16875 = 0;
	var uLocal_16876 = 0;
	var uLocal_16877 = 0;
	var uLocal_16878 = 0;
	var uLocal_16879 = 0;
	var uLocal_16880 = 0;
	var uLocal_16881 = 0;
	var uLocal_16882 = 0;
	var uLocal_16883 = 0;
	var uLocal_16884 = 0;
	var uLocal_16885 = 0;
	var uLocal_16886 = 0;
	var uLocal_16887 = 0;
	var uLocal_16888 = 0;
	var uLocal_16889 = 0;
	var uLocal_16890 = 0;
	var uLocal_16891 = 0;
	var uLocal_16892 = 0;
	var uLocal_16893 = 0;
	var uLocal_16894 = 0;
	var uLocal_16895 = 0;
	var uLocal_16896 = 0;
	var uLocal_16897 = 0;
	var uLocal_16898 = 0;
	var uLocal_16899 = 0;
	var uLocal_16900 = 0;
	var uLocal_16901 = 0;
	var uLocal_16902 = 0;
	var uLocal_16903 = 0;
	var uLocal_16904 = 0;
	var uLocal_16905 = 0;
	var uLocal_16906 = 0;
	var uLocal_16907 = 0;
	var uLocal_16908 = 0;
	var uLocal_16909 = 0;
	var uLocal_16910 = 0;
	var uLocal_16911 = 0;
	var uLocal_16912 = 0;
	var uLocal_16913 = 0;
	var uLocal_16914 = 0;
	var uLocal_16915 = 0;
	var uLocal_16916 = 0;
	var uLocal_16917 = 0;
	var uLocal_16918 = 0;
	var uLocal_16919 = 0;
	var uLocal_16920 = 0;
	var uLocal_16921 = 0;
	var uLocal_16922 = 0;
	var uLocal_16923 = 0;
	var uLocal_16924 = 0;
	var uLocal_16925 = 0;
	var uLocal_16926 = 0;
	var uLocal_16927 = 0;
	var uLocal_16928 = 0;
	var uLocal_16929 = 0;
	var uLocal_16930 = 0;
	var uLocal_16931 = 0;
	var uLocal_16932 = 0;
	var uLocal_16933 = 0;
	var uLocal_16934 = 0;
	var uLocal_16935 = 0;
	var uLocal_16936 = 0;
	var uLocal_16937 = 0;
	var uLocal_16938 = 0;
	var uLocal_16939 = 0;
	var uLocal_16940 = 0;
	var uLocal_16941 = 0;
	var uLocal_16942 = 0;
	var uLocal_16943 = 0;
	var uLocal_16944 = 0;
	var uLocal_16945 = 0;
	var uLocal_16946 = 0;
	var uLocal_16947 = 0;
	var uLocal_16948 = 0;
	var uLocal_16949 = 0;
	var uLocal_16950 = 0;
	var uLocal_16951 = 0;
	var uLocal_16952 = 0;
	var uLocal_16953 = 0;
	var uLocal_16954 = 0;
	var uLocal_16955 = 0;
	var uLocal_16956 = 0;
	var uLocal_16957 = 0;
	var uLocal_16958 = 0;
	var uLocal_16959 = 0;
	var uLocal_16960 = 0;
	var uLocal_16961 = 0;
	var uLocal_16962 = 0;
	var uLocal_16963 = 0;
	var uLocal_16964 = 0;
	var uLocal_16965 = 0;
	var uLocal_16966 = 0;
	var uLocal_16967 = 0;
	var uLocal_16968 = 0;
	var uLocal_16969 = 0;
	var uLocal_16970 = 0;
	var uLocal_16971 = 0;
	var uLocal_16972 = 0;
	var uLocal_16973 = 0;
	var uLocal_16974 = 0;
	var uLocal_16975 = 0;
	var uLocal_16976 = 0;
	var uLocal_16977 = 0;
	var uLocal_16978 = 0;
	var uLocal_16979 = 0;
	var uLocal_16980 = 0;
	var uLocal_16981 = 0;
	var uLocal_16982 = 0;
	var uLocal_16983 = 0;
	var uLocal_16984 = 0;
	var uLocal_16985 = 0;
	var uLocal_16986 = 0;
	var uLocal_16987 = 0;
	var uLocal_16988 = 0;
	var uLocal_16989 = 0;
	var uLocal_16990 = 0;
	var uLocal_16991 = 0;
	var uLocal_16992 = 0;
	var uLocal_16993 = 0;
	var uLocal_16994 = 0;
	var uLocal_16995 = 0;
	var uLocal_16996 = 0;
	var uLocal_16997 = 0;
	var uLocal_16998 = 0;
	var uLocal_16999 = 0;
	var uLocal_17000 = 0;
	var uLocal_17001 = 0;
	var uLocal_17002 = 0;
	var uLocal_17003 = 0;
	var uLocal_17004 = 0;
	var uLocal_17005 = 0;
	var uLocal_17006 = 0;
	var uLocal_17007 = 0;
	var uLocal_17008 = 0;
	var uLocal_17009 = 0;
	var uLocal_17010 = 0;
	var uLocal_17011 = 0;
	var uLocal_17012 = 0;
	var uLocal_17013 = 0;
	var uLocal_17014 = 0;
	var uLocal_17015 = 0;
	var uLocal_17016 = 0;
	var uLocal_17017 = 0;
	var uLocal_17018 = 0;
	var uLocal_17019 = 0;
	var uLocal_17020 = 0;
	var uLocal_17021 = 0;
	var uLocal_17022 = 0;
	var uLocal_17023 = 0;
	var uLocal_17024 = 0;
	var uLocal_17025 = 0;
	var uLocal_17026 = 0;
	var uLocal_17027 = 0;
	var uLocal_17028 = 0;
	var uLocal_17029 = 0;
	var uLocal_17030 = 0;
	var uLocal_17031 = 0;
	var uLocal_17032 = 0;
	var uLocal_17033 = 0;
	var uLocal_17034 = 0;
	var uLocal_17035 = 0;
	var uLocal_17036 = 0;
	var uLocal_17037 = 0;
	var uLocal_17038 = 0;
	var uLocal_17039 = 0;
	var uLocal_17040 = 0;
	var uLocal_17041 = 0;
	var uLocal_17042 = 0;
	var uLocal_17043 = 0;
	var uLocal_17044 = 0;
	var uLocal_17045 = 0;
	var uLocal_17046 = 0;
	var uLocal_17047 = 0;
	var uLocal_17048 = 0;
	var uLocal_17049 = 0;
	var uLocal_17050 = 0;
	var uLocal_17051 = 0;
	var uLocal_17052 = 0;
	var uLocal_17053 = 0;
	var uLocal_17054 = 0;
	var uLocal_17055 = 0;
	var uLocal_17056 = 0;
	var uLocal_17057 = 0;
	var uLocal_17058 = 0;
	var uLocal_17059 = 0;
	var uLocal_17060 = 0;
	var uLocal_17061 = 0;
	var uLocal_17062 = 0;
	var uLocal_17063 = 0;
	var uLocal_17064 = 0;
	var uLocal_17065 = 0;
	var uLocal_17066 = 0;
	var uLocal_17067 = 0;
	var uLocal_17068 = 0;
	var uLocal_17069 = 0;
	var uLocal_17070 = 0;
	var uLocal_17071 = 0;
	var uLocal_17072 = 0;
	var uLocal_17073 = 0;
	var uLocal_17074 = 0;
	var uLocal_17075 = 0;
	var uLocal_17076 = 0;
	var uLocal_17077 = 0;
	var uLocal_17078 = 0;
	var uLocal_17079 = 0;
	var uLocal_17080 = 0;
	var uLocal_17081 = 0;
	var uLocal_17082 = 0;
	var uLocal_17083 = 0;
	var uLocal_17084 = 0;
	var uLocal_17085 = 0;
	var uLocal_17086 = 0;
	var uLocal_17087 = 0;
	var uLocal_17088 = 0;
	var uLocal_17089 = 0;
	var uLocal_17090 = 0;
	var uLocal_17091 = 0;
	var uLocal_17092 = 0;
	var uLocal_17093 = 0;
	var uLocal_17094 = 0;
	var uLocal_17095 = 0;
	var uLocal_17096 = 0;
	var uLocal_17097 = 0;
	var uLocal_17098 = 0;
	var uLocal_17099 = 0;
	var uLocal_17100 = 0;
	var uLocal_17101 = 0;
	var uLocal_17102 = 0;
	var uLocal_17103 = 0;
	var uLocal_17104 = 0;
	var uLocal_17105 = 0;
	var uLocal_17106 = 0;
	var uLocal_17107 = 0;
	var uLocal_17108 = 0;
	var uLocal_17109 = 0;
	var uLocal_17110 = 0;
	var uLocal_17111 = 0;
	var uLocal_17112 = 0;
	var uLocal_17113 = 0;
	var uLocal_17114 = 0;
	var uLocal_17115 = 0;
	var uLocal_17116 = 0;
	var uLocal_17117 = 0;
	var uLocal_17118 = 0;
	var uLocal_17119 = 0;
	var uLocal_17120 = 0;
	var uLocal_17121 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	struct<44113> ScriptParam_11 = { 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	uLocal_1642 = Vector(-105,85f, 119,64f, 1368,919f);
	Local_1645 = Vector(-105,85f, 119,64f, 1368,919f);
	Local_1142 = { StackVal, StackVal, StackVal, StackVal, StackVal, Local_1648 };
	bLocal_1154 = 99;
	iLocal_1155 = 6;
	Local_1156 = 1000;
	while (Function_269())
	{
		Function_228();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x68 / 104
{
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1181, 0.0f);
	TASK_CLEAR(&Global_54076);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	DISABLE_CHILD_SECTOR("beh_grave01x");
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_1185);
	Function_227(&(Global_43791[Global_46914[1]]), 256);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
		AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	}
	AUDIO_SET_PLAYER_MOOD(0, 0);
	LIMIT_BLOOD_ON_ACTOR(&bLocal_1179, 0);
	Function_224(11, 1, 0, 1, 1);
	Function_224(12, 1, 0, 1, 1);
	Function_224(13, 1, 0, 1, 1);
	Function_224(14, 1, 0, 1, 1);
	Function_223(&uLocal_1140);
	Function_223(&Local_4);
	CANCEL_TIME_WARP(0);
	Function_222(1);
	HORSE_SET_INFINITE_FRESHNESS_CHEAT(0);
	CLEAR_ALL_CORPSES();
	RESET_GAME_CAMERA_CURVE_OVERRIDES();
	Function_218(&iLocal_1240);
	Function_218(&iLocal_1250);
	Function_214();
	Function_213();
	Function_212();
	Function_211();
	Function_210();
	Function_209();
	if (IS_DOOR_LOCKED(&uLocal_1327))
	{
		Function_208(&uLocal_1327, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1329))
	{
		Function_208(&uLocal_1329, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1331))
	{
		Function_208(&uLocal_1331, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1333))
	{
		Function_208(&uLocal_1333, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1335))
	{
		Function_208(&uLocal_1335, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1337))
	{
		Function_208(&uLocal_1337, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1339))
	{
		Function_208(&uLocal_1339, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1341))
	{
		Function_208(&uLocal_1341, 0);
	}
	if (IS_DOOR_LOCKED(&uLocal_1353))
	{
		Function_208(&uLocal_1353, 0);
	}
	UI_ENABLE("LoadingSpinner");
	Function_207();
	Function_178(iLocal_1169, 1, 0, 1, 1, 1, 1, 1);
	Function_218(&iLocal_1206);
	Function_176();
	if (IS_ACTOR_VALID(&Global_54076))
	{
		STOP_PED_SPEAKING(&Global_54076, 0);
	}
	if (IS_ITERATOR_VALID(&uLocal_1280))
	{
		DESTROY_ITERATOR(&uLocal_1280);
	}
	RELEASE_LAYOUT_REF(&uLocal_1140);
	if (bLocal_1168)
	{
		CLEAR_DECALS();
		REMOVE_ALL_PICKUPS();
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
		Function_174(11);
		Function_164(12);
		if (!Function_163(38))
		{
			Function_161(38, 1);
		}
		if (!Function_163(39))
		{
			Function_161(39, 1);
		}
		if (!Function_163(40))
		{
			Function_161(40, 1);
		}
		if (!Function_163(41))
		{
			Function_161(41, 1);
		}
		if (!Function_163(42))
		{
			Function_161(42, 1);
		}
		Function_160(0, 0);
		Function_26(Local_1142, 1, 0, 1, 0);
	}
	else if (iLocal_1169)
	{
		Function_22(Local_1142);
	}
	else
	{
		Function_2(Local_1142);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2C7 / 711
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2E8 / 744
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x305 / 773
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x328 / 808
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x33F / 831
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x3E1 / 993
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x404 / 1028
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x44E / 1102
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x467 / 1127
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x4BA / 1210
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x5E4 / 1508
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_13() //Position: 0x61E / 1566
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x639 / 1593
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x646 / 1606
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x666 / 1638
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x67D / 1661
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x698 / 1688
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8DF / 2271
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x90B / 2315
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x92F / 2351
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x944 / 2372
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x962 / 2402
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xA08 / 2568
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0xA47 / 2631
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC9D / 3229
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_155(&(Global_6667[iVar228]));
		Function_154(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xD91 / 3473
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xDC3 / 3523
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xE01 / 3585
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xE1B / 3611
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xE31 / 3633
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x112E / 4398
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x11A3 / 4515
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x11DD / 4573
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1259 / 4697
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x126C / 4716
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

int Function_37(int iParam0) //Position: 0x130D / 4877
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x134A / 4938
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1360 / 4960
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
			{
				switch (bVar0)
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_40(int iParam0, struct<41> Param1) //Position: 0x15BE / 5566
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x15FC / 5628
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_42(bool bParam0) //Position: 0x163B / 5691
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x1690 / 5776
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x16DB / 5851
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

void Function_45() //Position: 0x17E1 / 6113
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

void Function_46() //Position: 0x1814 / 6164
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_47() //Position: 0x19A7 / 6567
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_48() //Position: 0x1B60 / 7008
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B6E / 7022
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
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
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

var Function_50() //Position: 0x1D8B / 7563
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1DA0 / 7584
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E47 / 7751
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20E3 / 8419
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x2721 / 10017
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x272A / 10026
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x273B / 10043
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x2832 / 10290
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x284D / 10317
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x28B4 / 10420
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x28C6 / 10438
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28D8 / 10456
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x2A0C / 10764
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2A1B / 10779
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A54 / 10836
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A91 / 10897
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C2B / 11307
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

int Function_67(bool bParam0) //Position: 0x2E6F / 11887
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2EB0 / 11952
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2F39 / 12089
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2FD0 / 12240
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x304F / 12367
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x308C / 12428
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x3298 / 12952
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_74(char* cParam0) //Position: 0x334F / 13135
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3367 / 13159
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x345F / 13407
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3469 / 13417
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x347A / 13434
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3490 / 13456
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x355C / 13660
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3579 / 13689
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3DA5 / 15781
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3DE0 / 15840
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3DEF / 15855
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x42CC / 17100
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x42E2 / 17122
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4301 / 17153
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x431B / 17179
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4385 / 17285
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x45AD / 17837
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

void Function_91() //Position: 0x464B / 17995
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x47AD / 18349
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x482D / 18477
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B84 / 19332
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_95(int iParam0) //Position: 0x4C0C / 19468
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4C26 / 19494
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C51 / 19537
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C7F / 19583
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F1B / 20251
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_100(int iParam0, int iParam1) //Position: 0x50EF / 20719
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1) //Position: 0x5359 / 21337
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_102() //Position: 0x54E9 / 21737
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x558A / 21898
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x5648 / 22088
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

var Function_105(int iParam0) //Position: 0x56AE / 22190
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

int Function_106(int iParam0, bool bParam1) //Position: 0x573D / 22333
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x58E9 / 22761
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

void Function_108() //Position: 0x592E / 22830
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5944 / 22852
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5984 / 22916
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_111(int iParam0) //Position: 0x59C4 / 22980
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59D3 / 22995
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_113(int iParam0) //Position: 0x5B9B / 23451
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_114() //Position: 0x5C30 / 23600
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C55 / 23637
{
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x6124 / 24868
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x644B / 25675
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x64EE / 25838
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x66EB / 26347
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6896 / 26774
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6968 / 26984
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_152(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_149(Global_46760[0]);
			Function_149(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_147(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_149(Global_46816[0]);
			Function_164(0);
			Function_145(2, 1);
			Function_145(0, 1);
			Function_145(1, 1);
			break;
		
		case 0x00000003:
			Function_149(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_149(Global_46816[0]);
			Function_149(Global_46760[0]);
			Function_143(0, 1);
			Function_143(15, 1);
			Function_143(9, 1);
			Function_143(12, 1);
			Function_143(16, 1);
			Function_145(3, 1);
			break;
		
		case 0x00000005:
			Function_149(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_147(21, &bParam2, 4);
			Function_149(Global_46816[0]);
			Function_145(39, 1);
			break;
		
		case 0x00000007:
			Function_149(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_149(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_142())
				{
					if (!Function_141(4))
					{
						Function_131(4, 0, 0, 1, 0);
					}
				}
			}
			Function_149(Global_46760[0]);
			Function_149(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_149(Global_46760[0]);
			Function_149(Global_46816[2]);
			Function_130(&(Global_43791[Global_46816[2]]), 32768);
			Function_227(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_147(9, &bParam2, 4);
			Function_149(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_149(Global_46760[0]);
			Function_149(Global_46796[0]);
			Function_130(&(Global_43791[Global_46796[0]]), 32768);
			Function_227(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_149(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_149(Global_46760[0]);
			Function_149(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_149(Global_46760[1]);
			Function_149(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_149(Global_46838[0]);
			Function_149(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_149(Global_46796[5]);
			Function_149(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_147(21, &bParam2, 4);
			Function_149(Global_46760[4]);
			Function_149(Global_46796[4]);
			Function_129(&Global_119935, 0x2000000);
			Function_129(&Global_119935, 0x4000000);
			Function_129(&Global_119935, 4096);
			Function_129(&Global_119935, 8);
			Function_129(&Global_119935, 8388608);
			Function_129(&Global_119935, 524288);
			Function_129(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_149(Global_46760[4]);
			Function_149(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_227(&(Global_43791[Global_46760[4]]), 256);
			Function_149(Global_46760[4]);
			Function_149(Global_46796[0]);
			Function_130(&(Global_43791[Global_46796[0]]), 32768);
			Function_227(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_149(Global_46760[0]);
			Function_149(Global_46760[5]);
			Function_147(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_149(Global_46796[3]);
			Function_130(&(Global_43791[Global_46796[3]]), 32768);
			Function_227(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_147(9, &bParam2, 4);
			Function_149(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_130(&(Global_43791[Global_46838[1]]), 32768);
			Function_149(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_147(12, &bParam2, 4);
			Function_227(&(Global_43791[Global_46838[1]]), 256);
			Function_149(Global_46816[3]);
			Function_149(Global_46866[0]);
			Function_149(Global_46850[0]);
			Function_164(4);
			Function_143(13, 1);
			Function_143(1, 1);
			Function_143(18, 1);
			Function_145(34, 1);
			Function_145(44, 1);
			Function_145(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_147(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_149(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_149(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_149(Global_46866[0]);
			Function_149(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_149(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_149(Global_46850[0]);
			Function_149(Global_46866[0]);
			Function_149(Global_46866[1]);
			Function_149(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_147(23, &bParam2, 3);
			Function_143(23, 1);
			Function_149(Global_46850[0]);
			Function_149(Global_46850[2]);
			Function_130(&(Global_43791[Global_46850[2]]), 32768);
			Function_227(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_147(19, &bParam2, 4);
			Function_149(Global_46850[0]);
			Function_149(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_147(24, &bParam2, 3);
			Function_143(24, 1);
			Function_149(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_149(Global_46850[0]);
			Function_149(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_149(Global_46866[12]);
			Function_149(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_149(Global_46866[12]);
			Function_149(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_147(25, &bParam2, 10);
			Function_149(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_149(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_149(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_147(13, &bParam2, 4);
			Function_149(Global_46866[2]);
			Function_149(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_141(8))
				{
					Function_131(8, 0, 0, 1, 0);
				}
			}
			Function_149(Global_46850[0]);
			Function_164(9);
			Function_143(7, 1);
			Function_143(11, 1);
			Function_143(3, 1);
			Function_143(20, 1);
			Function_145(57, 1);
			break;
		
		case 0x0000002A:
			Function_147(2, &bParam2, 4);
			Function_149(Global_46914[0]);
			Function_149(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_149(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_149(Global_46914[0]);
			Function_149(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_149(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_149(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_149(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_147(17, &bParam2, 4);
			Function_149(Global_46926[0]);
			Function_149(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_127(15))
				{
					Function_122(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_227(&(Global_43791[Global_46914[1]]), 256);
			Function_164(11);
			Function_149(Global_46914[1]);
			Function_149(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_149(Global_46914[1]);
			Function_149(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_149(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_149(Global_46914[1]);
			Function_174(11);
			Function_164(12);
			Global_26200[1114].f_40 = 0;
			Function_145(56, 1);
			if (!&bParam2)
			{
				if (!Function_141(9))
				{
					Function_131(9, 0, 0, 0, 0);
				}
				if (!Function_141(10))
				{
					Function_131(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7283 / 29315
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_127(bParam0))
	{
		if (!Function_141(bParam0))
		{
			Function_131(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_125(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_123();
			}
		}
	}
	return;
}

void Function_123() //Position: 0x7424 / 29732
{
	return;
}

bool Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x742A / 29738
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

void Function_125(bool bParam0, int iParam1) //Position: 0x74D9 / 29913
{
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_126(int iParam0) //Position: 0x752E / 29998
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x7544 / 30020
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0, int iParam1) //Position: 0x7595 / 30101
{
	int iVar0;
	
	if (!Function_126(iParam0))
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

void Function_129(var uParam0, int iParam1) //Position: 0x75C2 / 30146
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x75D3 / 30163
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x75E4 / 30180
{
	char* cVar0[32];
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_140(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_141(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_123();
			}
		}
		Function_134(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_133() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_133() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_132(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_132(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7740 / 30528
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_133() //Position: 0x77CB / 30667
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x77F8 / 30712
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_137(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_136(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_135(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_135(int iParam0) //Position: 0x79A8 / 31144
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

void Function_136(char* cParam0, int iParam1) //Position: 0x79FF / 31231
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_137(int iParam0) //Position: 0x7A24 / 31268
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_126(iParam0))
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x7A7A / 31354
{
	int iVar0;
	
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_139(bool bParam0) //Position: 0x7AD9 / 31449
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7AE5 / 31461
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_141(int iParam0) //Position: 0x7B01 / 31489
{
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_128(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_142() //Position: 0x7B53 / 31571
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7B83 / 31619
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_144(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7BF8 / 31736
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x7C55 / 31829
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_146(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_146(int iParam0, int iParam1) //Position: 0x7CC8 / 31944
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_147(bool bParam0, bool bParam1, int iParam2) //Position: 0x7D23 / 32035
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_148(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_152(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_148(int iParam0, int iParam1) //Position: 0x7D96 / 32150
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_149(int iParam0) //Position: 0x7DAA / 32170
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_151(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_130(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_150(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_150(int iParam0) //Position: 0x7E9B / 32411
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_151(var uParam0, int iParam1) //Position: 0x7EF3 / 32499
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_152(bool bParam0, bool bParam1, int iParam2) //Position: 0x7F10 / 32528
{
	if (!Function_153(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_153(int iParam0) //Position: 0x7F6A / 32618
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_154(bool bParam0) //Position: 0x7F7C / 32636
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_155(struct<185> Param0) //Position: 0x7FB0 / 32688
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_156(4, 0, 0);
		}
	}
	return;
}

void Function_156(int iParam0, int iParam1, int iParam2) //Position: 0x801C / 32796
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_157(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_157(bool bParam0, int iParam1, bool bParam2) //Position: 0x8106 / 33030
{
	int iVar0;
	
	Function_159(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &iParam1);
	Function_158();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_158() //Position: 0x8285 / 33413
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_159(int iParam0) //Position: 0x8291 / 33425
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

void Function_160(int iParam0, bool bParam1) //Position: 0x82D7 / 33495
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_21369 + 168)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, true);
			}
			else
			{
				(*&Global_21369 + 168)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 9, 200.0f);
				(*&Global_21369 + 168)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, false);
				(*&Global_21369 + 168)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 10, 200.0f);
				(*&Global_21369 + 168)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, false);
				(*&Global_21369 + 168)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, false);
				(*&Global_21369 + 168)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, true);
				(*&Global_21369 + 168)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_21369 + 168)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
			}
			else
			{
				(*&Global_21369 + 168)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, false);
			}
			break;
	}
	return;
}

void Function_161(int iParam0, bool bParam1) //Position: 0x845D / 33885
{
	Global_116927[iParam06] = 0;
	*(&Global_116927[iParam06] + 8) = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_162();
	}
	if (&bParam1)
	{
		if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
		{
			REMOVE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, 0);
		}
	}
	return;
}

void Function_162() //Position: 0x84AF / 33967
{
	bool bVar0;
	
	bVar0 = Function_67(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

bool Function_163(int iParam0) //Position: 0x850D / 34061
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_164(int iParam0) //Position: 0x8522 / 34082
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_208(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_208(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_132("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_170(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_131(14, 1, 0, 0, 0);
				Function_165(14, 1, 0, 0, 0);
			}
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_123();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_132("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x87E2 / 34786
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_126(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_140(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_128(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_125(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_132(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_138(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_125(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_124(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_123();
			}
		}
		Function_134(bParam0);
		if (StackVal && !Function_14(((((!Function_133() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_133() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_167();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_166(3, bParam1);
				break;
			
			case 0x00000005:
				Function_166(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_166(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_166(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_166(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_166(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_166(int iParam0, bool bParam1) //Position: 0x8A81 / 35457
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

void Function_167() //Position: 0x8AF0 / 35568
{
	if (Function_126(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_169(Global_42827);
			*(&Global_42827 + 8) = Function_168(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_169(Global_42827);
			*(&Global_42827 + 8) = Function_168(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_168(int iParam0, int iParam1) //Position: 0x8B70 / 35696
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_163(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_163(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_163(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_163(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_163(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_163(27) && iVar16)
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
					if (Function_163(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_163(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_163(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_163(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_163(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_163(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_163(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_169(int iParam0) //Position: 0x97D3 / 38867
{
	int iVar0;
	int iVar1;
	
	if (!Function_126(iParam0))
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

void Function_170(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9822 / 38946
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_172(Function_173(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_172(Function_173(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_172(StackVal);
				Var1 = Function_172(StackVal);
				if (Function_171(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_171(struct<2> Param0, struct<2> Param2) //Position: 0x992D / 39213
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_172(int iParam0) //Position: 0x9959 / 39257
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_173(vector3 vParam0) //Position: 0x99B0 / 39344
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

void Function_174(int iParam0) //Position: 0x99FE / 39422
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_175(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_175(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_170(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x9B7B / 39803
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_176() //Position: 0x9BD6 / 39894
{
	Function_177();
	return;
}

void Function_177() //Position: 0x9BDF / 39903
{
	Function_218(&Local_4 + 8);
	Function_218(&Local_4 + 128);
	Function_218(&Local_4 + 328);
	Function_218(&Local_4 + 496);
	Function_218(&Local_4 + 632);
	Function_218(&Local_4 + 880);
	RELEASE_LAYOUT_REF(&Local_4);
	return;
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9C19 / 39961
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_206());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_205();
	CLEAR_PRINTED_OBJECTIVE();
	Function_204();
	Function_202(0);
	Function_201();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_200();
	Function_199();
	Function_205();
	ENABLE_JOURNAL_REPLAY(1);
	Function_222(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_198(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_195(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_194();
	Function_193(1178687);
	Function_191(33039);
	Function_190(0x218003f);
	Function_189(4194560);
	Function_188();
	Function_187();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_184(0, 1, 1);
	}
	else
	{
		Function_184(0, 1, 1);
	}
	Function_183();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_179();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_179() //Position: 0x9E25 / 40485
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_182() > 3)
		{
			bVar0 *= 2;
		}
		Function_180(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_180(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E7C / 40572
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_181(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_181(bool bParam0) //Position: 0x9ECC / 40652
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_182() //Position: 0x9EF5 / 40693
{
	return Global_21369.f_248;
}

void Function_183() //Position: 0x9F00 / 40704
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_227(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_184(int iParam0, bool bParam1, int iParam2) //Position: 0x9F2A / 40746
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_85(Global_43789))
		{
			Function_130(&(Global_43791[Global_43789]), 131072);
			Function_227(&(Global_43791[Global_43789]), 2097152);
			Function_185(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_151(&(Global_43791[iVar0]), 4) || Function_151(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_227(&(Global_43791[iVar0]), 2097155);
					Function_130(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_185(int iParam0) //Position: 0xA036 / 41014
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_186())
			{
				return;
			}
		}
		if (!Function_151(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_186() //Position: 0xA0B5 / 41141
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_151(&(Global_43791[iVar0]), 4) || Function_151(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_187() //Position: 0xA11E / 41246
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_188() //Position: 0xA144 / 41284
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_189(int iParam0) //Position: 0xA16A / 41322
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_190(int iParam0) //Position: 0xA187 / 41351
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_191(int iParam0) //Position: 0xA19A / 41370
{
	Function_192(&Global_43580, iParam0);
	return;
}

void Function_192(var uParam0, int iParam1) //Position: 0xA1A8 / 41384
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_193(bool bParam0) //Position: 0xA1C7 / 41415
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_194() //Position: 0xA1F4 / 41460
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_195(int iParam0) //Position: 0xA26C / 41580
{
	int iVar0;
	int iVar1;
	
	if (!Function_126(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_196(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_196(bool bParam0, bool bParam1, int iParam2) //Position: 0xA3A2 / 41890
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_197(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
	return 1;
}

int Function_197(bool bParam0) //Position: 0xA3F0 / 41968
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

void Function_198(var uParam0) //Position: 0xA4E4 / 42212
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&uParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170);
		}
	}
	return;
}

void Function_199() //Position: 0xA567 / 42343
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_200() //Position: 0xA5AB / 42411
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_201() //Position: 0xA5EF / 42479
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_202(int iParam0) //Position: 0xA605 / 42501
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_203())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_203() //Position: 0xA645 / 42565
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_204() //Position: 0xA66A / 42602
{
	Global_15862 = 0.0f;
	return;
}

void Function_205() //Position: 0xA674 / 42612
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_206() //Position: 0xA69F / 42655
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_207() //Position: 0xA6BC / 42684
{
	if (VMAG(*(&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_208(var uParam0, int iParam1) //Position: 0xA7EE / 42990
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_209() //Position: 0xA846 / 43078
{
	Function_218(&Local_4 + 880);
	return;
}

void Function_210() //Position: 0xA854 / 43092
{
	Function_218(&Local_4 + 632);
	return;
}

void Function_211() //Position: 0xA862 / 43106
{
	Function_218(&Local_4 + 496);
	return;
}

void Function_212() //Position: 0xA870 / 43120
{
	Function_218(&Local_4 + 328);
	return;
}

void Function_213() //Position: 0xA87E / 43134
{
	Function_218(&Local_4 + 128);
	return;
}

void Function_214() //Position: 0xA88B / 43147
{
	if (SQUAD_IS_VALID(&Local_4 + 1136))
	{
		Function_217(&Local_4 + 1136);
	}
	if (SQUAD_IS_VALID(&Local_4 + 1296))
	{
		Function_217(&Local_4 + 1296);
	}
	if (SQUAD_IS_VALID(&Local_4 + 1424))
	{
		Function_217(&Local_4 + 1424);
	}
	if (SQUAD_IS_VALID(&Local_4 + 1840))
	{
		Function_216(&Local_4 + 1840, &Local_4 + 1840);
		Function_215(&Local_4 + 1840);
	}
	return;
}

void Function_215(var uParam0) //Position: 0xA8F2 / 43250
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				iVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&iVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				iVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&iVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_216(var uParam0, int iParam1) //Position: 0xA982 / 43394
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
		{
			SQUAD_JOIN(GET_MOUNT(&uVar1), &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_217(int iParam0) //Position: 0xA9C8 / 43464
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_218(int iParam0) //Position: 0xAA13 / 43539
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_219(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_219(struct<2>[] Param0, int iParam1) //Position: 0xAA3B / 43579
{
	if (Function_221(&(Param0[iParam12]), 4))
	{
		if (Function_221(&(Param0[iParam12]), 1))
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
			Function_220(&(Param0[iParam12]), 1);
			Function_220(&(Param0[iParam12]), 2);
			Function_220(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_220(struct<13> Param0) //Position: 0xAB86 / 43910
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_221(struct<13> Param0) //Position: 0xABA3 / 43939
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_222(bool bParam0) //Position: 0xABC1 / 43969
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_223(int iParam0) //Position: 0xAC38 / 44088
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_224(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xACA0 / 44192
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (iParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_226(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_225(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_225(int iParam0) //Position: 0xAFE2 / 45026
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_226(int iParam0) //Position: 0xB015 / 45077
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xB02C / 45100
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_228() //Position: 0xB046 / 45126
{
	var uVar0[11];
	int iVar12;
	
	if (Function_268())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - cut";
		uVar0[4] = "S3 - Defend from porch";
		uVar0[5] = "S4 - Leaving the house";
		uVar0[6] = "S5 - fight to barn";
		uVar0[7] = "S6 - John gets shot";
		uVar0[8] = "S7 - Ride back as Jack";
		uVar0[9] = "S8 - End";
		uVar0[10] = "Last Stage";
		iVar12 = Function_254(&uLocal_1171, &uVar0, &Local_1142 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_253(&iVar12, &bLocal_1154, &iLocal_1155, &Local_1156))
		{
			Function_246();
			Function_245();
		}
		if (iVar12 == 0)
		{
			Function_246();
			Function_245();
			Function_244(&bLocal_1168, 8);
		}
		else if (iVar12 == 1)
		{
			Function_246();
			Function_245();
			Function_240(bLocal_1154);
			Function_236(StackVal, 5, &iLocal_1169, &bLocal_1154, Function_242(bLocal_1154), Function_240(bLocal_1154), 0);
		}
		else if (iVar12 == 2)
		{
			Function_246();
			Function_245();
			Function_231(&iLocal_1170, 4);
		}
		else if (iVar12 == 3)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = true;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 4)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 2;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 5)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 3;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 6)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 4;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 7)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 5;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 8)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 6;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 9)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 7;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
		else if (iVar12 == 10)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_229(&bLocal_1282);
			bLocal_1154 = 101;
			iLocal_1155 = 0;
			Local_1156 = 1000;
		}
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xB371 / 45937
{
	Function_230(&bParam0, 0.0f);
	return;
}

void Function_230(vector3 vParam0) //Position: 0xB37E / 45950
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_231(var uParam0, int iParam1) //Position: 0xB3A3 / 45987
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_232(&iParam1);
	uParam0 = 1;
	return;
}

void Function_232(int iParam0) //Position: 0xB3C8 / 46024
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_235("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_234(2) || Function_234(8)) || Function_234(9)) || Function_234(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_235("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_235("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_235("");
	}
	else if (iParam0 == 8)
	{
		Function_233();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_233();
	}
	return;
}

void Function_233() //Position: 0xB4BF / 46271
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_234(int iParam0) //Position: 0xB4CB / 46283
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_235(char* cParam0) //Position: 0xB501 / 46337
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_236(int iParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB56D / 46445
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_237(StackVal, Param4, uParam3, &iParam6);
		Function_232(iParam0);
		iParam1 = 1;
		iParam2 = 100;
	}
}

void Function_237(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB5AE / 46510
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_239(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_238(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_238(int iParam0) //Position: 0xB630 / 46640
{
	if (!Function_85(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_239(struct<2> Param0, bool bParam2) //Position: 0xBADE / 47838
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_240(int iParam0) //Position: 0xBB4A / 47946
{
	Function_241(iParam0 + 1);
	return StackVal, Function_241(iParam0 + 1);
}

struct<8> Function_241(bool bParam0) //Position: 0xBB57 / 47959
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal, *(&Local_4 + 2240[03]);
			break;
		
		case 0x00000001:
			return StackVal, *(&Local_4 + 2352[03]);
			break;
		
		case 0x00000002:
			return StackVal, *(&Local_4 + 2352[03]);
			break;
		
		case 0x00000003:
			return StackVal, *(&Local_4 + 2512[03]);
			break;
		
		case 0x00000004:
			return StackVal, *(&Local_4 + 2768[03]);
			break;
		
		case 0x00000005:
			return StackVal, *(&Local_4 + 2768[13]);
			break;
		
		case 0x00000006:
			return StackVal, *(&Local_4 + 3000[03]);
			break;
		
		default:
			return StackVal, *(&Local_4 + 2768[23]);
			break;
	}
	return StackVal, *(&Local_4 + 2240[03]);
}

int Function_242(int iParam0) //Position: 0xBC08 / 48136
{
	return Function_243(iParam0 + 1);
}

int Function_243(bool bParam0) //Position: 0xBC15 / 48149
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return StackVal;
			break;
		
		case 0x00000004:
			return StackVal;
			break;
		
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000006:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	return StackVal;
}

void Function_244(var uParam0, int iParam1) //Position: 0xBCD8 / 48344
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_232(&iParam1);
	uParam0 = 1;
	return;
}

void Function_245() //Position: 0xBCFD / 48381
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_246() //Position: 0xBD12 / 48402
{
	Function_248();
	Function_247(10, 3);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xBD21 / 48417
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_248() //Position: 0xBE6E / 48750
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_252())
	{
		Function_251(10, 3);
	}
	else
	{
		Function_249();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_249() //Position: 0xBEB9 / 48825
{
	Function_250(25, 2);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xBEC5 / 48837
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_251(int iParam0, int iParam1) //Position: 0xC0F2 / 49394
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_252() //Position: 0xC23F / 49727
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_253(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC2A7 / 49831
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_235("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_254(struct<17> Param0) //Position: 0xC356 / 50006
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_267(&Var12, &Var0);
	uVar15 = Function_266(uParam1, &Var12);
	Function_265(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_264(&Param0, uVar15);
	Function_262(StackVal, &Param0, Var12.f_12);
	Function_260(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_259(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_256(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_255(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_255(int iParam0, int iParam1, int iParam2) //Position: 0xC44A / 50250
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_256(struct<17> Param0) //Position: 0xC4AA / 50346
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_258(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_258(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_255(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_257(Param1.f_64);
	}
	else
	{
		Function_257(Param1.f_64);
	}
	return 0;
}

void Function_257(bool bParam0) //Position: 0xC63D / 50749
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_258(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC67B / 50811
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_259(int iParam0, struct<21> Param1) //Position: 0xC731 / 50993
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_260(vector3 vParam0) //Position: 0xC758 / 51032
{
	switch (Function_261())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_261() //Position: 0xC804 / 51204
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_262(vector3 vParam0) //Position: 0xC840 / 51264
{
	switch (Function_263(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_263(bool bParam0) //Position: 0xC8E9 / 51433
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_264(struct<21> Param0) //Position: 0xCA09 / 51721
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_265(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCBC3 / 52163
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_266(int iParam0, struct<13> Param1) //Position: 0xCC5F / 52319
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_267(struct<17> Param0) //Position: 0xCC7B / 52347
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_268() //Position: 0xCCD5 / 52437
{
	return Global_47307;
}

bool Function_269() //Position: 0xCCDE / 52446
{
	if (IS_EXITFLAG_SET())
	{
		Function_240(bLocal_1154);
		Function_236(StackVal, 4, &iLocal_1169, &bLocal_1154, Function_242(bLocal_1154), Function_240(bLocal_1154), 0);
		return 0;
	}
	Function_623(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142, bLocal_1154, iLocal_1155, &iLocal_1170, &bLocal_1168, &iLocal_1169);
	if (bLocal_1154 == 99 && bLocal_1154 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_240(bLocal_1154);
			Function_236(StackVal, 1, &iLocal_1169, &bLocal_1154, Function_242(bLocal_1154), Function_240(bLocal_1154), 0);
			return 1;
		}
		if (Function_622(2048))
		{
			Function_240(bLocal_1154);
			Function_236(StackVal, 3, &iLocal_1169, &bLocal_1154, Function_242(bLocal_1154), Function_240(bLocal_1154), 0);
			return 1;
		}
		if (Function_602(&Local_1474, &uLocal_1420, &uLocal_1626, &uLocal_1280, iLocal_1346))
		{
			if (Function_600(&uLocal_1626))
			{
				Function_240(bLocal_1154);
				Function_236(StackVal, 5, &iLocal_1169, &bLocal_1154, Function_242(bLocal_1154), Function_240(bLocal_1154), 0);
				return 1;
			}
		}
	}
	switch (bLocal_1154)
	{
		case 0x00000063:
			Function_557();
			break;
		
		case 0x00000000:
			Function_534();
			break;
		
		case 0x00000001:
			Function_533();
			break;
		
		case 0x00000002:
			Function_493();
			break;
		
		case 0x00000003:
			Function_482();
			break;
		
		case 0x00000004:
			Function_444();
			break;
		
		case 0x00000005:
			Function_396();
			break;
		
		case 0x00000006:
			Function_335();
			break;
		
		case 0x00000007:
			Function_326();
			break;
		
		case 0x00000065:
			Function_275();
			break;
		
		case 0x00000064:
			if (Function_274(&iLocal_1169))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_273(&bLocal_1154, &iLocal_1155, &Local_1156))
			{
				return 0;
			}
			break;
	}
	if (bLocal_1168)
	{
		Function_272(8);
		return 0;
	}
	if (iLocal_1169 && bLocal_1154 == 100)
	{
		Function_271(5);
	}
	if (iLocal_1170)
	{
		Function_270(4);
		return 0;
	}
	return 1;
}

void Function_270(int iParam0) //Position: 0xCE7B / 52859
{
	Function_232(iParam0);
	iLocal_1170 = 1;
	Function_1();
	return;
}

void Function_271(int iParam0) //Position: 0xCE8D / 52877
{
	Function_232(iParam0);
	iLocal_1169 = 1;
	bLocal_1154 = 100;
	return;
}

void Function_272(int iParam0) //Position: 0xCEA1 / 52897
{
	Function_232(iParam0);
	bLocal_1168 = true;
	Function_1();
	return;
}

bool Function_273(var uParam0, var uParam1, int iParam2) //Position: 0xCEB3 / 52915
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_274(int iParam0) //Position: 0xCEFC / 52988
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_275() //Position: 0xCF10 / 53008
{
	switch (iLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			if (!iLocal_1188[7])
			{
				Function_321(&iLocal_1240, 1, 2, 0);
				if (!bLocal_1347)
				{
					Function_321(&iLocal_1240, 989, 2, 0);
				}
				else
				{
					Function_321(&iLocal_1240, 987, 2, 0);
				}
			}
			Function_318();
			Function_184(1, 0, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 3000[03]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2240[13]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1179, -1.0f, 0, 0);
			if (IS_ACTOR_VALID(&bLocal_1634))
			{
				DESTROY_ACTOR(&bLocal_1634);
			}
			iLocal_1187 = Function_317(StackVal, *(&Local_4 + 3000[03]), 0, 1, 1);
			DISABLE_CHILD_SECTOR("beh_grave01x");
			ENABLE_CHILD_SECTOR("beh_grave02x");
			ENABLE_CHILD_SECTOR("beh_grave03x");
			if (iLocal_1188[6])
			{
				Function_229(&bLocal_1282);
				iLocal_1155 = 2;
			}
			else
			{
				Function_229(&bLocal_1282);
				iLocal_1155 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_316(iLocal_1187))
			{
				Function_229(&bLocal_1282);
				iLocal_1155 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_311(&iLocal_1240))
			{
				if (Function_303())
				{
					TOGGLE_COVER_PROPS(0);
					AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					DESTROY_ACTOR(&bLocal_1185);
					if (!bLocal_1347)
					{
						bLocal_1185 = CREATE_ACTOR_IN_LAYOUT(&Local_4, "home03_end_playerhorse", 989, *(&Local_4 + 3000[23]), *(&Local_4 + 3000[23] + 12));
					}
					else
					{
						bLocal_1185 = CREATE_ACTOR_IN_LAYOUT(&Local_4, "home03_end_playerhorse", 987, *(&Local_4 + 3000[23]), *(&Local_4 + 3000[23] + 12));
					}
					*(&Global_21369 + 72) = &bLocal_1185;
					TASK_STAND_STILL(&bLocal_1185, -1.0f, 0, 0);
					ACCESSORIZE_HORSE(&bLocal_1185, 4);
					Function_241(bLocal_1154);
					Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
					Function_229(&bLocal_1282);
					iLocal_1155 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (STREAMING_IS_WORLD_LOADED() && Function_292(&bLocal_1282) < 1,2f)
			{
				if (Function_276())
				{
					Function_160(0, 0);
					Function_229(&bLocal_1282);
					iLocal_1155 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_156(2, 10, 0);
			if (!HUD_IS_FADED())
			{
				bLocal_1168 = true;
			}
			break;
	}
	return;
}

bool Function_276() //Position: 0xD1B8 / 53688
{
	Function_289(&Local_1156, 0);
	switch (Local_1156)
	{
		case 0x000003E8:
			if (bLocal_1154 != 99 && (Function_288(&Local_1142) || Local_1142.f_40 < 1))
			{
				Local_1156 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/JACKS_BEGINNING/JACKS_BEGINNING"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1156 = 1106;
				return 0;
			}
			TELEPORT_ACTOR(&bLocal_1179, &Local_4 + 2240[13], 1, 1, 1);
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 3000[03]), &Local_1156 + 32, 1, 0, 0, 0, 1, 1);
			Function_318();
			Function_184(1, 0, 1);
			Local_1156.f_40 = 0;
			Global_99147 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/JACKS_BEGINNING/JACKS_BEGINNING", 0, 2, 1, 2, 2);
			Function_229(&Local_1156 + 4);
			Local_1156 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&Local_1156 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1156 = 1105;
			}
			HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_280(3, 0, 0, 0, 0);
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(14, 41, 0));
				ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 1);
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_1156 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 5, 0);
				Function_160(0, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 3000[13]), 1, 0, 1);
				SET_CAMERA_FOLLOW_ACTOR(&Global_54076);
				Function_279(3.0f, 1);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				DESTROY_VOLUME(&Local_1156 + 32);
				if (Local_1156.f_40)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 3000[13]), 1, 0, 1);
					SET_CAMERA_FOLLOW_ACTOR(&Global_54076);
					Function_279(3.0f, 1);
				}
				Function_277(2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				Local_1156.f_40 = 0;
				Local_1156 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1156.f_40 = 1;
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_1156 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_277(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xD4F7 / 54519
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_50();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_245();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_278(&iParam9, &iParam10);
}

void Function_278(int iParam0, bool bParam1) //Position: 0xD5C6 / 54726
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_194();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_279(int iParam0, int iParam1) //Position: 0xD695 / 54933
{
	ACTOR_POP_NEXT_GAIT(&Global_54076, &iParam1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, &iParam1, iParam0, 0);
	return;
}

void Function_280(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD6B0 / 54960
{
	int iVar0;
	bool bVar1;
	
	Function_159(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_281(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_157(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_281(int iParam0, bool bParam1) //Position: 0xD72A / 55082
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_159(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_157(iParam0, &uVar0, &bParam1);
	return;
}

void Function_282(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xD753 / 55123
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_283(&uVar1, &uParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_283(var uParam0, float fParam1) //Position: 0xD9F3 / 55795
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xDA75 / 55925
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_245();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_287(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_287(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_286()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_286()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_285(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_154(0x4000000);
	}
	if (Function_285(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_154(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_285(int iParam0) //Position: 0xDD27 / 56615
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_286() //Position: 0xDD43 / 56643
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_287(bool bParam0) //Position: 0xDDD1 / 56785
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_288(struct<37> Param0) //Position: 0xDDE3 / 56803
{
	return Param0.f_36;
}

void Function_289(int iParam0, int iParam1) //Position: 0xDDEE / 56814
{
	Function_290(&iParam0, &iParam1, 0);
	return;
}

void Function_290(var uParam0, bool bParam1, bool bParam2) //Position: 0xDDFE / 56830
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_291(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_291(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_291(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDF76 / 57206
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

float Function_292(vector3 vParam0) //Position: 0xDFA0 / 57248
{
	if (Function_294(&vParam0))
	{
		if (Function_293(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_293(int iParam0) //Position: 0xE06D / 57453
{
	return Function_14(iParam0, 2);
}

bool Function_294(bool bParam0) //Position: 0xE07B / 57467
{
	return Function_14(bParam0, 1);
}

void Function_295(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0xE089 / 57481
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_302())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_301(0);
	Function_300();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_298(bParam2);
	}
	Function_297(uParam3, iVar0, iVar1);
	Function_296();
}

void Function_296() //Position: 0xE132 / 57650
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_297(int iParam0, bool bParam1, bool bParam2) //Position: 0xE173 / 57715
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_298(bool bParam0) //Position: 0xE2DC / 58076
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_299() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_299() //Position: 0xE474 / 58484
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_300() //Position: 0xE4BA / 58554
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_301(bool bParam0) //Position: 0xE4DE / 58590
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_302() //Position: 0xE50D / 58637
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_303() //Position: 0xE528 / 58664
{
	Global_54076 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &Global_54076, "player", 1, *(&Local_4 + 3000[03]), *(&Local_4 + 3000[03] + 12), 0);
	Function_160(0, 0);
	Function_160(1, Function_111(1));
	Function_160(3, Function_111(3));
	Function_160(4, Function_111(4));
	Function_304();
	Global_42825 = 0;
	Global_42826 = 0;
	SET_AMBIENT_VOICE_NAME(&Global_54076, "PLAYER_JACK");
	PRINTSTRING("Made the player into BAMFjack. We're in stage ");
	PRINTINT(bLocal_1154);
	PRINTSTRING(", goal ");
	PRINTINT(iLocal_1155);
	PRINTNL();
	return 1;
	return 0;
}

void Function_304() //Position: 0xE5FC / 58876
{
	Function_305(&Global_42918);
	return;
}

void Function_305(struct<2317> Param0) //Position: 0xE608 / 58888
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	
	bVar4 = false;
	while (bVar4 < (39 - 1))
	{
		SET_WEAPONENUM_LOCKED(bVar4, (*&Param0 + 2320)[bVar4]);
		bVar4++;
	}
	uVar5 = Function_50();
	if (IS_ACTOR_VALID(&uVar5))
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_1060 - 1))
		{
			bVar6 = IS_ITEM_WEAPON_BY_CRC((*&Param0 + 92)[iVar0]);
			if (bVar6)
			{
				iVar7 = GET_WEAPON_ENUM_FROM_CRC((*&Param0 + 92)[iVar0]);
				if (iVar7 == 31)
				{
					if (Function_14(Global_131807.f_1304, 64))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else if (iVar7 == 29)
				{
					if (Function_14(Global_131807.f_1304, 32))
					{
						ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					}
				}
				else
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
				}
			}
			else
			{
				ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
			}
			if (StackVal && bVar6 < 0)
			{
				ACTOR_SET_WEAPON_AMMO_BY_CRC(StackVal, &uVar5, TO_FLOAT((*&Param0 + 92)[iVar0]));
			}
			else
			{
				bVar4 = false;
				while (StackVal < (bVar4 - 2))
				{
					ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar5, 0);
					bVar4++;
				}
			}
			iVar0++;
		}
		iVar1 = (Param0.f_88 - 1);
		while (iVar1 > 0)
		{
			ADD_ACCESSORY_BY_CRC(Param0[iVar1], &uVar5, 0);
			iVar1 = (iVar1 - 1);
		}
		Function_310(1);
		if (Function_13())
		{
			if (StackVal == 10)
			{
				Function_308();
				Function_306();
			}
		}
		bVar2 = false;
		while (bVar2 < (17 - 1))
		{
			_ADD_AMMO_OF_TYPE(&uVar5, bVar2, (*&Param0 + 1064)[bVar2], 0, 0);
			bVar2++;
		}
		iVar3 = 0;
		while (iVar3 < (7 - 1))
		{
			if ((*&Param0 + 1208)[iVar3] != 4294967295)
			{
				if ((*&Param0 + 1208)[iVar3] == 31)
				{
					if (Function_14(Global_131807.f_1304, 64))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else if ((*&Param0 + 1208)[iVar3] == 29)
				{
					if (Function_14(Global_131807.f_1304, 32))
					{
						ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
					}
				}
				else
				{
					ACTOR_SET_NEXT_WEAPON(&uVar5, (*&Param0 + 1208)[iVar3]);
				}
			}
			iVar3++;
		}
		iVar0 = (Param0.f_2316 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
			bVar4 = false;
			while (StackVal < (bVar4 - 2))
			{
				ADD_ITEM_BY_CRC((*&Param0 + 1284)[iVar0], &uVar5, 0);
				bVar4++;
			}
			iVar0 = (iVar0 - 1);
		}
		if (Param0.f_1276 != 4294967295)
		{
			if (Param0.f_1276 == 31)
			{
				if (!Function_14(Global_131807.f_1304, 64))
				{
					Param0.f_1276 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		else if (Param0.f_1280 != 4294967295)
		{
			if (Param0.f_1280 == 31)
			{
				if (!Function_14(Global_131807.f_1304, 64))
				{
					Param0.f_1280 = 8;
				}
			}
			ACTOR_SET_NEXT_WEAPON(&uVar5, Param0.f_1280);
		}
		if (Param0.f_1272 == 4294967295 && Global_53524.f_28)
		{
			ACTOR_PUT_WEAPON_IN_HAND(&uVar5, Param0.f_1272, 0);
		}
	}
	return;
}

void Function_306() //Position: 0xE948 / 59720
{
	Function_307(41, 3.0f);
	Function_307(40, 3.0f);
	Function_307(42, 3.0f);
	Function_307(39, 3.0f);
	Function_307(43, 3.0f);
	Function_307(44, 3.0f);
	Function_307(34, 3.0f);
	return;
}

void Function_307(bool bParam0, float fParam1) //Position: 0xE978 / 59768
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0x00000029:
			iVar0 = 8;
			break;
		
		case 0x00000028:
			iVar0 = 7;
			break;
		
		case 0x0000002A:
			iVar0 = 9;
			break;
		
		case 0x00000027:
			iVar0 = 6;
			break;
		
		case 0x0000002B:
			iVar0 = 10;
			break;
		
		case 0x0000002C:
			iVar0 = 11;
			break;
		
		case 0x00000022:
			iVar0 = 15;
			break;
		
		case 0x00000030:
			iVar0 = 5;
			break;
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, bParam0))
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, iVar0, (_GET_MAX_AMMO_AMOUNT(&Global_54076, iVar0) * fParam1));
	}
	return;
}

void Function_308() //Position: 0xEA0B / 59915
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (Function_309(3) == 10)
	{
		iVar0 = 2;
	}
	iVar1 = Function_197(3);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(6);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(0);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(1);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(8);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(4);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(12);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(5);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(2);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(30);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(31);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(32);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(33);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(34);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(35);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(36);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(37);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(38);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(39);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(40);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(41);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(42);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(43);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(44);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(45);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(46);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(47);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(48);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(49);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(50);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(51);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(7);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	iVar1 = Function_197(9);
	SET_MAX_ITEM_COUNT(&iVar1, (5 * iVar0));
	return;
}

int Function_309(int iParam0) //Position: 0xEC6A / 60522
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_310(int iParam0) //Position: 0xEC92 / 60562
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	uVar0 = Function_50();
	if (!Function_111(1) || iParam0)
	{
		if (HAS_ITEM(Function_197(20), &uVar0))
		{
			Function_160(1, 1);
		}
	}
	bVar2 = GET_WEAPON_EQUIPPED(&uVar0, 5);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 5)
	{
		bVar2 = GET_WEAPON_IN_HAND(&uVar0);
	}
	bVar3 = GET_WEAPON_EQUIPPED(&uVar0, 6);
	if (bVar3 == 4294967295)
	{
		if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 6)
		{
			bVar3 = GET_WEAPON_IN_HAND(&uVar0);
		}
	}
	bVar4 = GET_WEAPON_EQUIPPED(&uVar0, 1);
	if (GET_ITEM_IN_HAND_EQUIPSLOT(&uVar0) == 1)
	{
		bVar4 = GET_WEAPON_IN_HAND(&uVar0);
	}
	bVar5 = GET_AMMOENUM_FOR_WEAPONENUM(bVar2);
	bVar6 = GET_AMMOENUM_FOR_WEAPONENUM(bVar4);
	if (!Function_111(1))
	{
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
			iVar1++;
		}
	}
	else if (bVar2 != 4294967295)
	{
		bVar7 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar5, 0));
		if (bVar7 == Global_21369.f_148 || bVar5 == Global_21369.f_152)
		{
			Global_21369.f_148 = bVar7;
			Global_21369.f_152 = bVar5;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar1 <= (Global_21369.f_148 / 7))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1, false);
				}
				iVar1++;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 7, false);
		iVar1++;
	}
	if (bVar4 != 4294967295)
	{
		bVar8 = CEIL(_GET_AMMO_AMOUNT(&uVar0, bVar6, 0));
		if (bVar8 == Global_21369.f_156 || bVar6 == Global_21369.f_160)
		{
			Global_21369.f_156 = bVar8;
			Global_21369.f_160 = bVar6;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (iVar1 <= (Global_21369.f_156 / 6))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&uVar0, iVar1 + 17, false);
				}
				iVar1++;
			}
		}
	}
	return;
}

bool Function_311(struct<2>[] Param0) //Position: 0xEE42 / 60994
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_315();
	iVar1 = 0;
	if (!Function_221(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_314(&(Param0[iVar02]), 8);
		}
		else if (Function_313())
		{
			iVar1 = 1;
			Function_314(&(Param0[iVar02]), 8);
		}
		Function_314(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_221(&(Param0[iVar02]), 4))
		{
			if (!Function_221(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_221(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_221(&(Param0[02]), 8) || iVar1));
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
				Function_314(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_221(&(Param0[iVar02]), 4))
		{
			if (!Function_221(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_314(&(Param0[iVar02]), 2);
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
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_314(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_314(&(Param0[iVar02]), 2);
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
	Function_312();
	return 1;
}

void Function_312() //Position: 0xF204 / 61956
{
	if (!Function_285(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_313() //Position: 0xF244 / 62020
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

void Function_314(struct<13> Param0) //Position: 0xF272 / 62066
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_315() //Position: 0xF285 / 62085
{
	if (!Function_285(128))
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

bool Function_316(int iParam0) //Position: 0xF2C7 / 62151
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_151(&(Global_43791[iParam0]), 4);
}

int Function_317(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0xF2E3 / 62179
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_318() //Position: 0xF389 / 62345
{
	Function_189(47);
	Function_190(256);
	Function_154(114701);
	Function_154(114700);
	Function_319(1);
	Function_319(9);
	return;
}

void Function_319(int iParam0) //Position: 0xF3B1 / 62385
{
	Function_320(&Global_43580, iParam0);
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0xF3BF / 62399
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

var Function_321(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF3E7 / 62439
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_221(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_314(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_314(&(Param0[iVar02]), 8);
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

void Function_322(bool bParam0) //Position: 0xF4C3 / 62659
{
	Function_323(0, 0x40400000);
	Function_200();
	Function_199();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_323(float fParam0, float fParam1) //Position: 0xF4F9 / 62713
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_325();
	Function_324();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_324() //Position: 0xF60A / 62986
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_325() //Position: 0xF63E / 63038
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_326() //Position: 0xF744 / 63300
{
	Function_329();
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			Function_218(&iLocal_1240);
			Function_321(&iLocal_1240, 1, 2, 0);
			if (!bLocal_1347)
			{
				Function_321(&iLocal_1240, 989, 2, 0);
			}
			else
			{
				Function_321(&iLocal_1240, 987, 2, 0);
			}
			ENABLE_CHILD_SECTOR("beh_grave01x");
			ENABLE_CHILD_SECTOR("beh_grave03x");
			Local_1156 = 1000;
			if (!iLocal_1188[6])
			{
				Function_318();
				Function_184(1, 0, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 3000[03]), 1, 1, 1);
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_1187 = Function_317(StackVal, *(&Local_4 + 3000[03]), 0, 1, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = true;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_316(iLocal_1187))
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 2;
			}
			break;
		
		case 0x00000002:
			TOGGLE_COVER_PROPS(0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, Vector(0.0f, 0.0f, 0.0f), 0.0f, 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
			ENABLE_CHILD_SECTOR("beh_grave01x");
			ENABLE_CHILD_SECTOR("beh_grave03x");
			Function_229(&bLocal_1282);
			bLocal_1155 = 3;
			break;
		
		case 0x00000003:
			Function_311(&iLocal_1240);
			if (Function_327())
			{
				TASK_CLEAR(&Global_54076);
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1188[7] = 1;
			Function_229(&bLocal_1282);
			bLocal_1154 = 101;
			bLocal_1155 = false;
			break;
	}
	return;
}

bool Function_327() //Position: 0xF8E3 / 63715
{
	Function_289(&Local_1156, 0);
	switch (Local_1156)
	{
		case 0x000003E8:
			if (bLocal_1154 != 99 && (Function_288(&Local_1142) || Local_1142.f_40 < 1))
			{
				Local_1156 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME_03_END_SCENE_B/HOME_03_END_SCENE_B"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1156 = 1106;
				return 0;
			}
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			*(&Local_1156 + 32) = &Local_4 + 1928[3];
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 3000[03]), &Local_1156 + 32, 0, 0, 0, 0, 1, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/HOME_03_END_SCENE_B/HOME_03_END_SCENE_B", 0, 2, 1, 1, 2);
				Function_328();
			}
			Function_229(&Local_1156 + 4);
			Local_1156 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&Local_1156 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1156 = 1105;
			}
			if ((!HUD_IS_FADING() && (STREAMING_IS_WORLD_LOADED() || iLocal_1188[6])) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
				TELEPORT_ACTOR(&Global_54076, &Local_4 + 3688, 1, 1, 1);
				TELEPORT_ACTOR(&bLocal_1185, &Local_4 + 2768[63], 1, 1, 1);
				if (IS_OBJECT_VALID(&bLocal_1310))
				{
					SET_CORPSE_PERMANENT(&bLocal_1310, 0);
					DESTROY_OBJECT(&bLocal_1310);
				}
				if (IS_ACTOR_VALID(&bLocal_1634))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&bLocal_1634, 27, true);
					ACTOR_ENABLE_VARIABLE_MESH(&bLocal_1634, 28, true);
					DEEQUIP_ACCESSORY(&bLocal_1634, 0);
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_1634, Vector(0,2f, 1,2f, -0,3f), 0, 1, 0);
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_1634, Vector(-0,3f, 1,5f, -0,3f), 0, 1, 0);
					ADD_BLOOD_TO_ACTOR(StackVal, &bLocal_1634, Vector(-0,1f, 1,6f, -0,3f), 0, 1, 0);
					Function_287(&bLocal_1634);
					CREATE_DECAL(2, Function_287(&bLocal_1634), 1,5f, 1, 1);
				}
				else
				{
					LOG_ERROR("Invalid handle for player on ground");
				}
				Local_1156 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				DESTROY_VOLUME(&Local_1156 + 32);
				Function_277(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				Local_1156 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_1156 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_328() //Position: 0xFCA9 / 64681
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (IS_ACTOR_VALID(&bLocal_1634))
	{
		DESTROY_ACTOR(&bLocal_1634);
	}
	bVar0 = false;
	while (bVar0 < (CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS() - 1))
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			PRINTINT(bVar0);
			PRINTSTRING("n's name: ");
			PRINTSTRING(GET_ACTOR_NAME(&uVar1));
			PRINTNL();
			PRINTINT(bVar0);
			PRINTSTRING("n's enum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0)));
			PRINTNL();
			if (STRINGS_ARE_EQUAL("player", GET_ACTOR_NAME(&uVar1)) || STRINGS_ARE_EQUAL("PLAYER", GET_ACTOR_NAME(&uVar1)))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Global_54076);
				PRINTSTRING("replacing ");
				PRINTINT(bVar0);
				PRINTNL();
			}
			else
			{
				PRINTSTRING("Not replacing ");
				PRINTSTRING(GET_ACTOR_NAME(&uVar1));
				PRINTSTRING(", his name doesn't match.");
				PRINTNL();
			}
		}
		bVar0++;
	}
	return;
}

void Function_329() //Position: 0xFDBA / 64954
{
	if (IS_ACTOR_VALID(&bLocal_1183))
	{
		if (!Function_333(StackVal, &bLocal_1183, *(&Local_4 + 3992), 2.0f))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_1183, 0);
			Function_330();
		}
	}
	return;
}

void Function_330() //Position: 0xFDE8 / 65000
{
	Function_332();
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 3992), 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_1183, 0);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_1183, "uncle_injured", 0);
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/death");
	SET_REACT_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/death_idle");
	if (!IS_MOVER_FROZEN(&bLocal_1183))
	{
		SET_MOVER_FROZEN(&bLocal_1183, 1);
	}
	AI_IGNORE_ACTOR(&bLocal_1183);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_1183, 0);
	SET_ACTOR_INVULNERABILITY(&bLocal_1183, 1);
	Function_331(&bLocal_1183, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1183, false);
	AI_DISABLE_PERCEPTION(&bLocal_1183);
	TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
	return;
}

void Function_331(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFEBE / 65214
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

void Function_332() //Position: 0xFF08 / 65288
{
	struct<2> Var0;
	
	GET_OBJECT_RELATIVE_POSITION(StackVal, &bLocal_1183, Vector(0,1f, 0.0f, 0.0f), &Var0);
	CREATE_DECAL(2, Var0, 0,6f, 0, 0);
	return;
}

bool Function_333(bool bParam0, struct<2> Param1, float fParam3) //Position: 0xFF2F / 65327
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_334(&bParam0);
		if (VDIST(Function_334(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_334(var uParam0) //Position: 0xFFBB / 65467
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_335() //Position: 0x1004E / 65614
{
	if (bLocal_1155 < 4 && bLocal_1155 > 105)
	{
		Function_329();
		if (bLocal_1155 > 9)
		{
			if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 60.0f))
			{
				if (!IS_OBJECT_VALID(&bLocal_1310))
				{
					if (Function_394())
					{
						Function_393(&Local_4 + 3616);
						bLocal_1310 = CREATE_CORPSE_VARIATION_IN_LAYOUT(StackVal, &Local_4, "deadJohn", 0, uLocal_1636, Function_393(&Local_4 + 3616), Vector(0.0f, 0.0f, 0.0f), "marston_dead", "dead");
						SET_CORPSE_PERMANENT(&bLocal_1310, 1);
						Function_393(&bLocal_1310);
						CLEAR_AREA_OF_GRASS(Function_393(&bLocal_1310), 4.0f);
					}
				}
			}
			Function_389();
			Function_386();
			Function_383(&bLocal_1294, 500.0f, 650.0f, &Local_4 + 3616, "Home03_obj10", "Home03_fail_farm", &iLocal_1169, 0, 0, 0, 4294967295, 1, 0);
			if ((!IS_BLIP_VALID(Function_382(11)) && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185))) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 2064)))
			{
				if (bLocal_1155 > 14)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_381("Home03_obj10", 0x40f00000, 1, 2, 0, 0, 0, 0);
					ADD_BLIP_FOR_OBJECT(&Local_4 + 2064, 330, 0f, 2, 0);
					Function_393(&Local_4 + 2064);
					Function_379(StackVal, Function_393(&Local_4 + 2064), 0, 48, 1);
				}
			}
			Function_371(&bLocal_1294, 30.0f, 100.0f, &bLocal_1179, "Wife_return", "Wife_abandoned", &iLocal_1169, 0, 0, 0, 325, 0);
			if (StackVal && !Function_333(!Function_368(&Global_54076, &bLocal_1179, 30.0f), &Global_54076, *(&Local_4 + 2768[13]), 30.0f))
			{
				Function_366(11, 1, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1185));
					Function_205();
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 2064)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_4 + 2064));
					}
				}
			}
			else
			{
				Function_366(11, 0, 1);
				if (!Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 30.0f))
				{
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185)))
						{
							ADD_BLIP_FOR_ACTOR(&bLocal_1185, 334, 0, 2, 0);
							TASK_STAND_STILL(&bLocal_1179, -1.0f, 0, 0);
							Function_205();
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 2064)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_4 + 2064));
							}
							HUD_CLEAR_OBJECTIVE();
							Function_381("Horse_mount", 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
					}
					else
					{
						if (!IS_ACTOR_RIDING(&bLocal_1179))
						{
							TASK_MOUNT(&bLocal_1179, &bLocal_1185, 0, 1, 4, 2147483647);
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1185));
						}
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185)) || IS_BLIP_VALID(Function_382(11)))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1185)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1185));
						}
						if (IS_BLIP_VALID(Function_382(11)))
						{
							Function_366(11, 0, 1);
						}
						HUD_CLEAR_OBJECTIVE();
						Function_381("Home03_obj10", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					TASK_FOLLOW_ACTOR(&bLocal_1179, &Global_54076);
				}
			}
		}
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
			if (SQUAD_IS_VALID(&Local_4 + 1840))
			{
				Function_365(&Local_4 + 1840, 0);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_1307 = 0;
			if (!iLocal_1188[5] == 1)
			{
				Function_318();
				Function_321(&iLocal_1240, 638, 2, 0);
				Function_321(&iLocal_1240, 0, 2, 0);
				iLocal_1187 = Global_46914[1];
				if (!Function_316(iLocal_1187))
				{
					Function_364(&Local_1142);
				}
				Function_330();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2768[53]), 1, 1, 1);
			}
			Function_229(&bLocal_1282);
			bLocal_1155 = true;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() || iLocal_1188[5])
			{
				if (Function_316(iLocal_1187) || iLocal_1187 != 4294967295)
				{
					if (Function_311(&iLocal_1240))
					{
						Function_229(&bLocal_1282);
						bLocal_1155 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			TOGGLE_COVER_PROPS(0);
			SET_ACTOR_HEALTH(&Global_54076, GET_ACTOR_MAX_HEALTH(&Global_54076));
			Function_224(12, 1, 0, 1, 1);
			if (Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142, bLocal_1154))
			{
				STOP_PED_SPEAKING(&bLocal_1179, 0);
				Local_1156 = 1000;
				Function_229(&bLocal_1282);
				bLocal_1155 = 3;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-7,172f, 118,802f, 1779,859f), Vector(0,67f, -0,336f, -0,662f), 1);
			Function_241(bLocal_1154);
			Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
			break;
		
		case 0x00000003:
			if (Function_355())
			{
				Function_207();
				UI_DISABLE("LoadingSpinner");
				if (IS_ACTOR_VALID(&bLocal_1634))
				{
					SET_ACTOR_PERMANENT(&bLocal_1634, 0);
					DESTROY_ACTOR(&bLocal_1634);
				}
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
				Function_215(&Local_4 + 1920);
			}
			break;
		
		case 0x00000004:
			if (SQUAD_IS_VALID(&Local_4 + 1840))
			{
				Function_215(&Local_4 + 1840);
			}
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_354();
			Function_210();
			Function_330();
			LIMIT_BLOOD_ON_ACTOR(&bLocal_1179, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_1179, false);
			Local_1156 = 1000;
			uLocal_1636 = Function_353(Global_42825);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1179);
			RESPAWN_PLAYER_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), &Global_54076, "player", 638, *(&Local_4 + 2768[13]), *(&Local_4 + 2768[13] + 12), 0);
			Global_54076 = GET_PLAYER_ACTOR(0);
			STOP_PED_SPEAKING(&Global_54076, 0);
			SET_ACTOR_FACTION(&Global_54076, 2);
			SET_AMBIENT_VOICE_NAME(&Global_54076, "PLAYER_JACK");
			if (IS_OBJECT_VALID(&bLocal_1310))
			{
				SET_CORPSE_PERMANENT(&bLocal_1310, 0);
				DESTROY_OBJECT(&bLocal_1310);
			}
			fLocal_1349 = GET_ACTOR_MAX_HEALTH(&Global_54076);
			Function_366(13, 0, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Global_54076)))
			{
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&Global_54076), GET_ACTOR_ENUM_STRING_FROM_ENUM(638));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2768[43]), 1, 1, 1);
			Function_352(0, 1);
			Function_330();
			iLocal_1346 = 0;
			Function_351(&bLocal_1298);
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				SET_CAMERA_FOLLOW_ACTOR(&Global_54076);
				CAMERA_RESET(0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_344(&(Local_1474[015]), &bLocal_1179, "Wife", 1, 0x5f5e100, 1);
				Function_344(&(Local_1474[215]), &bLocal_1185, "Horse", 1, 0x5f5e100, 1);
				SET_ACTOR_MAX_HEALTH(&Global_54076, fLocal_1349);
				SET_ACTOR_HEALTH(&Global_54076, GET_ACTOR_MAX_HEALTH(&Global_54076));
				Function_229(&bLocal_1282);
				bLocal_1155 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&bLocal_1185))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 2768[63]), 1, 1, 1);
				ACCESSORIZE_HORSE(&bLocal_1185, 3);
				TASK_CLEAR(&Global_54076);
				TASK_STAND_STILL(&bLocal_1185, -1.0f, 0, 0);
				TASK_CLEAR(&bLocal_1179);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_1179, 0);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1179, "fema_ride_passenger", 0);
				SET_MOUNTS_AS_PASSENGER(&bLocal_1179, 1);
				ACTOR_MOUNT_ACTOR(&bLocal_1179, &bLocal_1185);
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1185);
				Function_229(&bLocal_1282);
				bLocal_1155 = 8;
			}
			else if (!IS_ACTOR_VALID(&Local_4 + 1896[02]))
			{
				Function_343();
				bLocal_1185 = &Local_4 + 1896[02];
			}
			break;
		
		case 0x00000008:
			if (((STREAMING_IS_WORLD_LOADED() && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_1179)) && Function_354())
			{
				TASK_FOLLOW_PATH(&Global_54076, &Local_4 + 4512, 4, 0, 0, 1, 0);
				AI_ACTOR_FORCE_SPEED(&Global_54076, 4);
				UI_ENABLE("LoadingSpinner");
				AUDIO_SET_PLAYER_MOOD(0, 0);
				Function_222(0);
				UNK_0x99AFD2D1(&bLocal_1179, 1, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1179, 60, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_1179, 61, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				HORSE_SET_INFINITE_FRESHNESS_CHEAT(1);
				CAMERA_RESET(0);
				Function_229(&bLocal_1282);
				bLocal_1155 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_342(&Global_54076, 0) <= 2.0f || Function_292(&bLocal_1282) <= 1.0f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(0.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				STREAMING_UNLOAD_SCENE();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "DEATH_MARCH", 0, 4294967295, 4294967295, 3212836864, 0);
				TASK_FOLLOW_PATH(&Global_54076, &Local_4 + 4512, 4, 0, 0, 1, 0);
				Function_366(11, 0, 1);
				Function_366(12, 0, 1);
				iLocal_1419 = 0;
				Function_229(&bLocal_1282);
				bLocal_1155 = 10;
			}
			else
			{
				PRINTSTRING("Player speed = ");
				PRINTFLOAT(Function_342(&Global_54076, 0));
				PRINTNL();
			}
			break;
		
		case 0x0000000A:
			if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) > 0,25f)
			{
				TASK_CLEAR(&Global_54076);
			}
			if (Function_292(&bLocal_1282) <= 1.0f)
			{
				Function_339();
				Function_229(&bLocal_1282);
				bLocal_1155 = 12;
			}
			break;
		
		case 0x0000000C:
			if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) > 0,25f)
			{
				TASK_CLEAR(&Global_54076);
			}
			if (Function_292(&bLocal_1282) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				TASK_CLEAR(&Global_54076);
				SAY_SINGLE_LINE_SCRIPTED(&Global_54076, "PLAYER_ALLY_KEEP_UP_URGENT", 0, 1, 1, 1, 0, 0);
				Local_1156 = 1000;
				Function_229(&bLocal_1290);
				Function_229(&bLocal_1282);
				bLocal_1155 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_338();
			if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) > 0,25f)
			{
				TASK_CLEAR(&Global_54076);
			}
			if (Function_292(&bLocal_1282) <= 3.0f || !IS_ANY_SPEECH_PLAYING(&Global_54076))
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_338();
			if (GET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Global_54076)) > 0,25f)
			{
				TASK_CLEAR(&Global_54076);
			}
			if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 17.0f))
			{
				Function_337();
				Function_229(&bLocal_1282);
				bLocal_1155 = 15;
			}
			else
			{
				PRINTSTRING("Player dist from end = ");
				PRINTFLOAT(Function_336(StackVal, &Global_54076, *(&Local_4 + 2768[13])));
				PRINTNL();
			}
			break;
		
		case 0x0000000F:
			Function_338();
			if (Function_292(&bLocal_1282) <= 0,25f)
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (Function_338())
				{
					iLocal_1188[6] = 1;
					Function_209();
					HORSE_SET_INFINITE_FRESHNESS_CHEAT(0);
					Function_229(&bLocal_1282);
					bLocal_1154 = 7;
					bLocal_1155 = false;
				}
			}
			break;
	}
	return;
}

float Function_336(var uParam0, struct<2> Param1) //Position: 0x10B2D / 68397
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_334(&uParam0);
		Var0 = Function_334(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_337() //Position: 0x10BA4 / 68516
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(&Global_54076, &Var2);
	GET_ACTOR_AXIS(&Global_54076, &Var0, 2);
	VSCALE(&Var0, -7.0f);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var2, StackVal);
	TASK_GO_TO_COORD(&Global_54076, &Var2, 2);
	return;
}

bool Function_338() //Position: 0x10BDE / 68574
{
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME_03_END_SCENE_B/HOME_03_END_SCENE_B"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/HOME_03_END_SCENE_B/HOME_03_END_SCENE_B", 0, 2, 1, 1, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			Function_328();
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_339() //Position: 0x10CE5 / 68837
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home03_GoBakForJon", "Home03_GoBakForJon", 0, 2, 1, 0, 1);
		Function_340(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_340(int iParam0) //Position: 0x10D33 / 68915
{
	Function_341(0, &Global_54076, iParam0, 0);
	Function_341(1, &Local_4 + 1544[02], iParam0, 0);
	Function_341(2, &Local_4 + 1544[12], iParam0, 0);
	Function_341(3, &bLocal_1179, iParam0, 0);
	Function_341(5, &bLocal_1181, iParam0, 0);
	Function_341(6, &bLocal_1183, iParam0, 0);
	return;
}

void Function_341(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x10D85 / 68997
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &bParam1, 0);
	}
}

float Function_342(var uParam0, bool bParam1) //Position: 0x10DAD / 69037
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_343() //Position: 0x10DCE / 69070
{
	*(&Local_4 + 1896[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "escHorse", 980, Vector(-66,55735f, 116,8612f, 1414,876f), Vector(0.0f, -26,16489f, 0.0f));
	return;
}

int Function_344(struct<69> Param0) //Position: 0x10E09 / 69129
{
	if (!Function_350(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_349(&Param0, &bParam2))
	{
		return 0;
	}
	Function_348(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_345(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_345(var uParam0, int iParam1, int iParam2) //Position: 0x10E4F / 69199
{
	if (iParam1 != 100000000)
	{
		Function_347(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_346(&uParam0, &iParam2);
	}
	return;
}

void Function_346(struct<69> Param0) //Position: 0x10E76 / 69238
{
	Param0.f_68 = 0;
	Function_347(&Param0, 2, &bParam1);
	Function_347(&Param0, 4, &bParam1);
	Function_347(&Param0, 8, &bParam1);
	Function_347(&Param0, 16, &bParam1);
	Function_347(&Param0, 32, &bParam1);
	Function_347(&Param0, 64, &bParam1);
	Function_347(&Param0, 128, &bParam1);
	Function_347(&Param0, 256, &bParam1);
	Function_347(&Param0, 512, &bParam1);
	Function_347(&Param0, 1024, &bParam1);
	return;
}

void Function_347(int iParam0, int iParam1, bool bParam2) //Position: 0x10EF1 / 69361
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_348(struct<65> Param0) //Position: 0x10F30 / 69424
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_349(int iParam0, char* cParam1) //Position: 0x10F3D / 69437
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_350(struct<61> Param0) //Position: 0x10FCA / 69578
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_351(bool bParam0) //Position: 0x1117D / 70013
{
	if (!Function_294(&bParam0))
	{
		Function_230(&bParam0, 0.0f);
	}
	return;
}

void Function_352(var uParam0, bool bParam1) //Position: 0x11194 / 70036
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	uVar1 = GET_PLAYER_ACTOR(&uParam0);
	if (IS_ACTOR_VALID(&uVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(&uVar1, GET_WEAPON_EQUIPPED(&uVar1, iVar0));
			iVar0++;
		}
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player weapons");
		PRINTNL();
		if (&bParam1)
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(&uVar1);
			PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player inventory");
			PRINTNL();
		}
	}
	else
	{
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Player actor not valid!");
	}
	return;
}

int Function_353(int iParam0) //Position: 0x1129B / 70299
{
	if (!Function_126(iParam0))
	{
		return 0;
	}
	return Global_42265[iParam09].f_20;
}

int Function_354() //Position: 0x112B5 / 70325
{
	Function_321(&Local_4 + 880, 372, 2, 0);
	Function_321(&Local_4 + 880, 374, 2, 0);
	Function_321(&Local_4 + 880, 373, 2, 0);
	Function_321(&Local_4 + 880, 369, 2, 0);
	Function_321(&Local_4 + 880, 370, 2, 0);
	Function_321(&Local_4 + 880, 371, 2, 0);
	Function_321(&Local_4 + 880, 977, 2, 0);
	if (Function_311(&Local_4 + 880))
	{
		return 1;
	}
	return 0;
}

bool Function_355() //Position: 0x1132B / 70443
{
	Function_289(&Local_1156, 0);
	PRINTSTRING("Cutscene time = ");
	PRINTFLOAT(CUTSCENE_MANAGER_GET_CURRENT_TIME());
	PRINTNL();
	switch (Local_1156)
	{
		case 0x000003E8:
			Function_361();
			if (bLocal_1154 != 99 && (Function_288(&Local_1142) || Local_1142.f_40 < 1))
			{
				Local_1156 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MARSTON_DEATH_SEQ/MARSTON_DEATH_SEQ"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1156 = 1106;
				return 0;
			}
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			fLocal_1351 = 0.0f;
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 2768[13]), &Local_4 + 1928[3], 0, 0, 0, 0, 1, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/MARSTON_DEATH_SEQ/MARSTON_DEATH_SEQ", 0, 2, 1, 1, 2);
			}
			Function_229(&Local_1156 + 4);
			Local_1156 = 1002;
			break;
		
		case 0x000003EA:
			Function_361();
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&Local_1156 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1156 = 1105;
			}
			if ((!HUD_IS_FADING() && (STREAMING_IS_WORLD_LOADED() || iLocal_1188[5])) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_360();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_1634);
				ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1634, true);
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Local_1156 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_361();
			Function_354();
			if (!SQUAD_IS_VALID(&Local_4 + 1920))
			{
				if (IS_ACTOR_VALID(&Local_4 + 1544[172]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[172]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[152]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[152]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[142]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[142]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[122]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[122]);
				}
				if (IS_ACTOR_VALID(GET_MOUNT(&Local_4 + 1544[112])))
				{
					DESTROY_ACTOR(GET_MOUNT(&Local_4 + 1544[112]));
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[112]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[112]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[12]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[12]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[62]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[62]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[132]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[132]);
				}
				if (IS_ACTOR_VALID(GET_MOUNT(&Local_4 + 1544[132])))
				{
					DESTROY_ACTOR(GET_MOUNT(&Local_4 + 1544[132]));
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[72]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[72]);
				}
				if (IS_ACTOR_VALID(&Local_4 + 1544[82]))
				{
					DESTROY_ACTOR(&Local_4 + 1544[82]);
				}
				Function_357();
			}
			if (!iLocal_1345)
			{
				if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 51.0f || STRING_CONTAINS_STRING(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "LoadSoldiers"))
				{
					Function_356(&Local_4 + 1920);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1920, false, 1, 4294967295);
					TASK_GO_TO_COORD(0, &Local_4 + 2768[73], 1);
					iLocal_1345 = 1;
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
				DESTROY_VOLUME(&Local_1156 + 32);
				if (IS_ACTOR_VALID(&bLocal_1634))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_1634, false);
				}
				Function_277(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				Local_1156 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_1156 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_356(bool bParam0) //Position: 0x117F8 / 71672
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_357() //Position: 0x1182D / 71725
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_4 + 1920) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "endWalkGuys"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_1", 373, Vector(-81,54129f, 117,1924f, 1398,462f), Vector(0.0f, 91,25346f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_2", 371, Vector(-80,68703f, 117,1924f, 1395,114f), Vector(0.0f, 91,25346f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_3", 370, Vector(-75,70058f, 117,1924f, 1395,803f), Vector(0.0f, 91,25346f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_4", 370, Vector(-78,3386f, 117,1924f, 1392,926f), Vector(0.0f, 91,25346f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_5", 369, Vector(-77,37476f, 117,1924f, 1398,769f), Vector(0.0f, 91,25346f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_6", 369, Vector(-88,10944f, 117,283f, 1410,924f), Vector(0.0f, 13,67839f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_7", 370, Vector(-91,295f, 117,2823f, 1413,121f), Vector(0.0f, 24,00911f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_8", 370, Vector(-88,53367f, 117,1318f, 1414,025f), Vector(0.0f, 20,07568f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = Function_358(StackVal, StackVal, &Local_4, "eWalkGuy_9", 373, Function_54(), 980, Vector(-89,49445f, 117,1318f, 1417,839f), Vector(0.0f, 20,07568f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_10", 371, Vector(-82,978f, 116,8844f, 1414,978f), Vector(0.0f, 29,20318f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_11", 371, Vector(-92,10517f, 116,8844f, 1418,045f), Vector(0.0f, 3,440536f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "eWalkGuy_12", 373, Vector(-74,65823f, 116,8612f, 1402,012f), Vector(0.0f, 70,03152f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	iVar0 = Function_358(StackVal, StackVal, &Local_4, "eWalkGuy_13", 369, Function_54(), 977, Vector(-71,28846f, 116,8612f, 1396,19f), Vector(0.0f, 82,65996f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 21);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iVar0, 21);
	STOP_PED_SPEAKING(&iVar0, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar0, true);
	return;
}

int Function_358(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x11EEC / 73452
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_359(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_359(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_359(int iParam0) //Position: 0x12024 / 73764
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_360() //Position: 0x1203B / 73787
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar2 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			PRINTSTRING("Found ");
			PRINTSTRING(GET_ACTOR_NAME(&uVar2));
			PRINTSTRING(", his enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&uVar2)));
			PRINTNL();
			iVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[02]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[02]);
			}
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[12]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[12]);
			}
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[22]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[22]);
			}
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[32]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[32]);
			}
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[42]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[42]);
			}
			if (iVar1 == GET_ACTOR_ENUM(&Local_4 + 1544[52]))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Local_4 + 1544[52]);
			}
		}
		bVar0++;
	}
	return;
}

void Function_361() //Position: 0x12171 / 74097
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	if (iLocal_1356 <= 6)
	{
		if (GET_CURRENT_GAME_TIME() < fLocal_1351)
		{
			GET_OBJECT_POSITION(&Local_4 + 4120, &Var2);
			GET_OBJECT_AXIS(&Local_4 + 4120, &Var4, 0);
			VSCALE(&Var4, RAND_FLOAT_RANGE(-0,7f, 0,7f));
			Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var2, StackVal);
			GET_OBJECT_AXIS(&Local_4 + 4120, &Var4, 1);
			VSCALE(&Var4, RAND_FLOAT_RANGE(-0,25f, 0,25f));
			Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var2, StackVal);
			GET_OBJECT_POSITION(&Local_4 + 4128, &Var0);
			GET_OBJECT_AXIS(&Local_4 + 4128, &Var4, 0);
			VSCALE(&Var4, RAND_FLOAT_RANGE(-4.0f, 4.0f));
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var0, StackVal);
			GET_OBJECT_AXIS(&Local_4 + 4128, &Var4, 1);
			VSCALE(&Var4, RAND_FLOAT_RANGE(-0,1f, 0,1f));
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var0, StackVal);
			FIRE_PROJECTILE(&bLocal_1181, "base_sniperrifle", 0,0001f, &Var0, &Var2);
			switch (RAND_INT_RANGE(0, 2))
			{
				case 0x00000000:
					PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_HI_POWER_MASTER", Var0);
					break;
				
				case 0x00000001:
					PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REPEATER_HI_POWER_MASTER", Var0);
					break;
				
				case 0x00000002:
					PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_LO_POWER_MASTER", Var0);
					break;
			}
			iLocal_1356++;
			fLocal_1351 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(0,07f, 0,3f));
		}
	}
	return;
}

bool Function_362(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1232D / 74541
{
	if (Function_363(&iParam0) == iParam6 || Function_302())
	{
		return 1;
	}
	return 0;
}

int Function_363(int iParam0) //Position: 0x1234C / 74572
{
	if (Function_288(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_364(int iParam0) //Position: 0x12365 / 74597
{
	if (!Function_288(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_184(1, 0, 1);
		}
	}
	return;
}

void Function_365(var uParam0, bool bParam1) //Position: 0x12381 / 74625
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_366(int iParam0, bool bParam1, bool bParam2) //Position: 0x123D0 / 74704
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_225(&uVar1);
					}
				}
				Function_367(&uVar0);
			}
		}
	}
	return;
}

void Function_367(bool bParam0) //Position: 0x124DF / 74975
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

bool Function_368(bool bParam0, bool bParam1, float fParam2) //Position: 0x12512 / 75026
{
	float fVar0;
	
	fVar0 = Function_369(&bParam0, &bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_369(var uParam0, int iParam1) //Position: 0x12531 / 75057
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_370(&uVar0, &uVar2);
	return iVar4;
}

var Function_370(struct<2> Param0) //Position: 0x12552 / 75090
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_371(struct<2> Param0, bool bParam2, int iParam3, float fParam4, bool bParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x12571 / 75121
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_378(&Global_54076, &iParam3, bParam2))
	{
		Function_235(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_378(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_377(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_381(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_376(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_375(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_375(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_377(2))
	{
		Function_374(2);
		if (!Function_373())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_372();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_225(&iParam3);
				Function_367(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_375(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_375(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_372() //Position: 0x1272F / 75567
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_373() //Position: 0x1275D / 75613
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_374(int iParam0) //Position: 0x127A4 / 75684
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, iParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_375(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1280B / 75787
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && iParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_376(int iParam0) //Position: 0x128C6 / 75974
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, iParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_377(bool bParam0) //Position: 0x1292D / 76077
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_378(var uParam0, var uParam1, bool bParam2) //Position: 0x12977 / 76151
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

void Function_379(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x12A8C / 76428
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_380(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_380(bool bParam0) //Position: 0x12B4D / 76621
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&bParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &bParam0);
		CLEAN_OBJECTSET(&bParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_381(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x12B96 / 76694
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

var Function_382(bool bParam0) //Position: 0x12C2B / 76843
{
	return &Global_15402[bParam014] + 104;
}

int Function_383(struct<2> Param0, float fParam2, int iParam3, bool bParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x12C3B / 76859
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_384(&Global_54076, &iParam3, fParam2))
	{
		Function_235(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_384(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_377(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381(&bParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_376(1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_375(&uParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_375(&uParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &uParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&uParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &uParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_377(1))
	{
		Function_374(1);
		if (!Function_373())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_372();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_375(&uParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_375(&uParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_384(var uParam0, var uParam1, float fParam2) //Position: 0x12DE4 / 77284
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_334(&uParam0);
			Function_385(&uParam1);
			if (VDIST(Function_334(&uParam0), Function_385(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

struct<8> Function_385(var uParam0) //Position: 0x12F02 / 77570
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_386() //Position: 0x12F70 / 77680
{
	if (bLocal_1155 > 13)
	{
		if (!Function_333(StackVal, &Global_54076, (&Local_4 + 2768[13]), 30.0f))
		{
			if (Function_292(&bLocal_1290) <= 8.0f)
			{
				if (!Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 450.0f))
				{
					if (!Function_388(-0,4f, 10.0f, 1))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_1179, "Home02_w3_WrongWayHome", &Global_54076, 1, 0, 0, 0, 0);
						Function_229(&bLocal_1290);
					}
				}
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_387();
					Function_229(&bLocal_1290);
				}
				else if (Function_342(&Global_54076, 0) > 3.0f)
				{
					Function_387();
					Function_229(&bLocal_1290);
				}
			}
			else
			{
				PRINTSTRING("Timer is at ");
				PRINTFLOAT(Function_292(&bLocal_1290));
				PRINTNL();
			}
		}
	}
	return;
}

void Function_387() //Position: 0x13050 / 77904
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Home03_rideBackSlow", "Home03_rideBackSlow", 0, 1, 0, 0, 1);
		Function_340(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_388(float fParam0, int iParam1, bool bParam2) //Position: 0x130A0 / 77984
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	int iVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	struct<9> Var17;
	
	bVar11 = false;
	bVar15 = 999999,9f;
	iParam1 = &iParam1;
	iVar9 = GET_OBJECTSET_SIZE(&Global_42834 + 16);
	if (iVar9 <= 1)
	{
		if (&bParam2)
		{
			return 1;
		}
		return 0;
	}
	uVar0 = &Global_54076;
	if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
	{
		uVar0 = GET_VEHICLE(&Global_54076);
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		uVar0 = GET_MOUNT(&Global_54076);
	}
	bVar10 = (iVar9 - 1);
	fVar13 = 0.0f;
	bVar11 = false;
	while (bVar11 < (iVar9 - 1))
	{
		uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar11, &Global_42834 + 16));
		GET_CURVE_POINT(&uVar16, 0.0f, &vVar17, 0);
		Var3 = vVar17.x;
		Var3.f_4 = vVar17.y;
		Var3.f_8 = vVar17.z;
		Function_287(&Global_54076);
		bVar14 = VDIST(Function_287(&Global_54076), Var3);
		if (bVar14 > bVar15)
		{
			bVar15 = bVar14;
			bVar10 = bVar11;
		}
		bVar11++;
	}
	uVar16 = GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar10, &Global_42834 + 16));
	fVar13 = 1.0f;
	GET_CURVE_POINT(&uVar16, fVar13, &vVar17, 0);
	Var1 = vVar17.x;
	Var1.f_4 = vVar17.y;
	Var1.f_8 = vVar17.z;
	GET_ACTOR_AXIS(&uVar0, &uVar5, 2);
	GET_POSITION(&uVar0, &Var7);
	Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var1, StackVal);
	VNORMALIZE(&Var1);
	fVar12 = VDOT(&uVar5, &Var1);
	if (fVar12 < &fParam0)
	{
		return 1;
	}
	return 0;
}

void Function_389() //Position: 0x131DB / 78299
{
	if (!SQUAD_IS_VALID(&Local_4 + 1880))
	{
		if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 170.0f))
		{
			Function_392();
			Function_391(&Local_4 + 1880);
		}
	}
	if (!SQUAD_IS_VALID(&Local_4 + 1888))
	{
		if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 250.0f))
		{
			Function_390();
			Function_391(&Local_4 + 1888);
		}
	}
	return;
}

void Function_390() //Position: 0x13245 / 78405
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_4 + 1888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "endCorpses_2"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_10", 372, Vector(-132,8032f, 118,2963f, 1506,583f), Vector(0.0f, 32,00784f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_11", 374, Vector(-120,6999f, 118,3514f, 1495,693f), Vector(0.0f, 226,4425f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_12", 372, Vector(-118,9542f, 118,3337f, 1481,163f), Vector(0.0f, 226,4425f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_13", 374, Vector(-98,521f, 118,3053f, 1456,449f), Vector(0.0f, 226,4425f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	return;
}

void Function_391(bool bParam0) //Position: 0x133FC / 78844
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_PERMANENT_DEAD(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_392() //Position: 0x1343E / 78910
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_4 + 1880) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "endCorpses"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_4", 372, Vector(-110,844f, 118,0617f, 1439,71f), Vector(0.0f, 25,29916f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_5", 374, Vector(-118,1249f, 118,0374f, 1424,981f), Vector(0.0f, 52,4245f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 13, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_6", 373, Vector(-118,6859f, 118,204f, 1411,854f), Vector(0.0f, -25,34945f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_7", 369, Vector(-86,95481f, 117,4802f, 1402,153f), Vector(0.0f, 32,00784f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_8", 370, Vector(-94,78658f, 117,6631f, 1405,209f), Vector(0.0f, -133,5575f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endCorpse_9", 371, Vector(-89,28181f, 117,3631f, 1407,94f), Vector(0.0f, 226,4425f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_4 + 1880);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iVar0, 15, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SET_ACTOR_PERMANENT(&iVar0, 1);
	return;
}

struct<8> Function_393(bool bParam0) //Position: 0x136D0 / 79568
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_394() //Position: 0x136F9 / 79609
{
	if (Function_395(&Local_4 + 3536, &iLocal_1307, 2, 0,4f, 0,6f, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_395(vector3[] vParam0, var uParam1, int iParam2, float fParam3, float fParam4, var uParam5) //Position: 0x1371C / 79644
{
	if (uParam1 <= vParam0)
	{
		CREATE_DECAL(iParam2, vParam0[uParam13], RAND_FLOAT_RANGE(fParam3, fParam4), &uParam5, 0);
		uParam1++;
	}
	else
	{
		return 1;
	}
	return 0;
}

void Function_396() //Position: 0x1375C / 79708
{
	if (bLocal_1155 <= 8 && bLocal_1155 > 105)
	{
		bLocal_1637 = GET_WEAPON_EQUIPPED(&Global_54076, 1);
		Function_329();
		if (bLocal_1155 <= 95)
		{
			if (!Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 3.0f))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_229(&bLocal_1282);
				bLocal_1155 = 95;
			}
		}
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
			Function_214();
			if (IS_OBJECT_VALID(&bLocal_1308))
			{
				DESTROY_OBJECT(&bLocal_1308);
			}
			Function_366(12, 0, 1);
			Function_366(11, 0, 1);
			Function_442(&bLocal_1316, 0, 0, 0);
			Function_321(&iLocal_1240, 638, 2, 0);
			Function_321(&iLocal_1240, 0, 2, 0);
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			SET_ACTOR_HEALTH(&bLocal_1181, GET_ACTOR_MAX_HEALTH(&bLocal_1181));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (iLocal_1188[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_330();
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
				Function_184(1, 0, 1);
				iLocal_1187 = Global_46914[1];
				Function_366(13, 0, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2768[03]), 1, 0, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2768[53]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2768[33]), 1, 1, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = true;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 2;
			}
			ACTOR_SET_NEXT_WEAPON(&Global_54076, Function_441(&Global_54076, 40));
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_316(iLocal_1187) || iLocal_1187 != 4294967295)
				{
					if (Function_438())
					{
						if (Function_437())
						{
							Function_229(&bLocal_1282);
							bLocal_1155 = 2;
							STOP_PED_SPEAKING(&bLocal_1179, 0);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			TOGGLE_COVER_PROPS(0);
			SET_GAME_CAMERA_CURVE_OVERRIDE(false, "interior");
			SET_GAME_CAMERA_CURVE_OVERRIDE(true, "ARC_Pistol_Zoom_Interior");
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1181);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1179);
			CLOSE_DOOR_FAST(&uLocal_1333);
			CLOSE_DOOR_FAST(&uLocal_1335);
			OPEN_DOOR_DIRECTION_FAST(&uLocal_1337, 0);
			OPEN_DOOR_DIRECTION_FAST(&uLocal_1339, 1);
			if (!SQUAD_IS_VALID(&Local_4 + 1840))
			{
				Function_435();
				Function_216(&Local_4 + 1840, &Local_4 + 1840);
				Function_434(&Local_4 + 1840, 0);
				Function_433(StackVal, &Local_4 + 1840, *(&Local_4 + 4072), -1.0f, 1);
			}
			Function_432(&Local_4 + 1840);
			if (Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142, bLocal_1154))
			{
				Local_1156 = 1000;
				Function_229(&bLocal_1282);
				bLocal_1155 = 3;
				Local_1156 = 1000;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			iLocal_1346 = 0;
			Function_241(bLocal_1154);
			Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
			break;
		
		case 0x00000003:
			if (Function_412())
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			break;
		
		case 0x00000004:
			Function_411();
			Local_1156 = 1000;
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_409();
			SET_WEAPONENUM_LOCKED(2, 0);
			uLocal_1636 = Function_353(Global_42825);
			Function_344(&(Local_1474[015]), &bLocal_1179, "Wife", 1, 0x5f5e100, 1);
			Function_344(&(Local_1474[115]), &bLocal_1181, "Son", 1, 0x5f5e100, 1);
			Function_408(&(Local_1474[315]));
			Function_408(&(Local_1474[415]));
			Function_407(&Local_4 + 1544[02], &Local_4 + 1840, 0);
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			if (Function_411())
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&Global_54076, true);
				Function_229(&bLocal_1282);
				bLocal_1155 = 8;
			}
			break;
		
		case 0x00000007:
			SET_PLAYER_DEADEYE_MODE(0, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_229(&bLocal_1282);
			bLocal_1155 = 8;
			break;
		
		case 0x00000008:
			Function_406();
			Function_311(&iLocal_1240);
			if ((Function_292(&bLocal_1282) <= 0,5f && IS_PLAYER_DEADEYE(0)) || (Function_292(&bLocal_1282) <= 2.0f && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)))
			{
				AI_IGNORE_ACTOR(&Global_54076);
				Function_405(&Local_4 + 1840);
				Function_404(StackVal, &Local_4 + 1840, *(&Local_4 + 4072), 1, 3212836864);
				Function_365(&Local_4 + 1840, 1);
				Function_403(&Local_4 + 1840, 0.0f);
				Function_402(&Local_4 + 1840, 13, 1);
				SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1840, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_403(&Local_4 + 1840, 0.0f);
				Function_229(&bLocal_1282);
				bLocal_1155 = 9;
			}
			break;
		
		case 0x00000009:
			Function_406();
			Function_311(&iLocal_1240);
			if ((Function_292(&bLocal_1282) <= 0,5f || ACTOR_GET_WEAPON_AMMO(&Global_54076, GET_WEAPON_IN_HAND(&Global_54076)) != 0.0f) || !IS_PLAYER_DEADEYE(0))
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 95;
			}
			else
			{
				PRINTSTRING("time = ");
				PRINTFLOAT(Function_292(&bLocal_1282));
				PRINTNL();
			}
			break;
		
		case 0x0000005F:
			Function_406();
			Function_311(&iLocal_1240);
			CANCEL_TIME_WARP(0);
			STOP_PED_SPEAKING(&Global_54076, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 3824), 1, 1, 1);
			SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
			CANCEL_DEADEYE();
			Function_400(&Local_4, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			Function_398(StackVal, StackVal, StackVal, StackVal, Vector(-71,96f, 118,138f, 1403,604f), Vector(-0,963f, -0,064f, 0,262f), Vector(-72,105f, 118,119f, 1404,2f), Vector(-0,976f, -0,065f, 0,209f), 2,4f, 0, 1, 1, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_397(&Local_4 + 1840, &Global_54076, 0);
			Function_397(&Local_4 + 1840, &bLocal_1634, 4);
			Function_229(&bLocal_1282);
			bLocal_1155 = 97;
			break;
		
		case 0x00000061:
			Function_406();
			Function_311(&iLocal_1240);
			if (Function_292(&bLocal_1282) <= 2,35f)
			{
				CANCEL_TIME_WARP(1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_292(&bLocal_1282) <= 0.0f)
			{
				SET_ENABLE_NAV_STICK_INPUT(0, 1);
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1188[5] = 1;
				Function_229(&bLocal_1282);
				bLocal_1154 = 6;
				bLocal_1155 = false;
			}
			break;
	}
	return;
}

void Function_397(var uParam0, bool bParam1, bool bParam2) //Position: 0x13D99 / 81305
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_398(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, float fParam8, var uParam9, var uParam10, var uParam11, int iParam12) //Position: 0x13DE5 / 81381
{
	Function_399(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	Function_399(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (fParam8 >= 0.0f)
	{
		fParam8 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &uParam10);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param4);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), Param6, &uParam11);
	Global_99148.f_8 = StackVal + 1;
	switch (&iParam12)
	{
		case 0x00000002:
		case 0x00000003:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000004:
		case 0x00000005:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000006:
		case 0x00000007:
			CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
		
		case 0x00000000:
		case 0x00000001:
			CUTSCENEOBJECT_ADD_TRANSITION_LERP(StackVal, &Global_99148, 0, 1,401298E-45f, fParam8, 0);
			break;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 1);
	Global_99148.f_12 = 1;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam9))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam9, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_399(float fParam0) //Position: 0x13FA7 / 81831
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_400(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x13FBA / 81850
{
	Function_401(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &uParam3;
	Global_99148.f_20 = &uParam4;
	Global_99148.f_24 = &uParam5;
	Global_99148.f_28 = &uParam6;
	Global_99148.f_32 = &uParam7;
	Global_99148.f_36 = &uParam8;
	Global_99148.f_40 = &uParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &uParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &uParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_401(bool bParam0, bool bParam1) //Position: 0x140C4 / 82116
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_402(var uParam0, int iParam1, bool bParam2) //Position: 0x1411A / 82202
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_403(var uParam0, bool bParam1) //Position: 0x1416B / 82283
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_404(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x141BA / 82362
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			GET_POSITION(&uVar1, &uVar2);
			TASK_SHOOT_AT_COORD_FROM_POSITION(&uVar1, &uParam1, &uVar2, &bParam4);
			TASK_PRIORITY_SET(&uVar1, bParam3);
		}
		bVar0++;
	}
}

void Function_405(bool bParam0) //Position: 0x14219 / 82457
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_AIM_CLEAR(&uVar1);
		}
		bVar0++;
	}
	return;
}

int Function_406() //Position: 0x14260 / 82528
{
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MARSTON_DEATH_SEQ/MARSTON_DEATH_SEQ"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/MARSTON_DEATH_SEQ/MARSTON_DEATH_SEQ", 0, 2, 1, 1, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			Function_360();
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
					CUTSCENE_MANAGER_SHOW_ACTOR(&Global_54076);
				}
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_407(var uParam0, var uParam1, bool bParam2) //Position: 0x1437E / 82814
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_408(struct<69> Param0) //Position: 0x143D0 / 82896
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_409() //Position: 0x14490 / 83088
{
	Function_356(&Local_4 + 1840);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1840, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_410(StackVal, &Local_4 + 1840, (&Local_4 + 4072));
	return;
}

void Function_410(var uParam0, struct<2> Param1) //Position: 0x144C3 / 83139
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (Function_74(StackVal, Param1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_AIM_AT_COORD(&uVar1, &Param1, 1);
		}
		bVar0++;
	}
	return;
}

bool Function_411() //Position: 0x14518 / 83224
{
	if (IS_ACTION_NODE_PLAYING(&Global_54076, "home03_cs_push_open/push_open"))
	{
	}
	switch (iLocal_1355)
	{
		case 0x00000000:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			HUD_ENABLE(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uLocal_1333));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uLocal_1335));
			Function_208(&uLocal_1333, 1);
			Function_208(&uLocal_1335, 1);
			CLOSE_DOOR_FAST(&uLocal_1333);
			CLOSE_DOOR_FAST(&uLocal_1335);
			Function_175(&uLocal_1333, 0);
			Function_175(&uLocal_1335, 0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2768[03]), 0, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2768[43]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2768[23]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 2768[63]), 1, 1, 1);
			if (IS_ACTOR_VALID(&Local_4 + 1848[02]))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 1848[02], *(&Local_4 + 4040), 1, 1, 1);
			}
			ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
			SET_PLAYER_DEADEYE_POINTS(0, 30.0f, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			bLocal_1637 = GET_WEAPON_EQUIPPED(&Global_54076, 1);
			if (!IS_ACTION_NODE_PLAYING(&Global_54076, "home03_cs_push_open/push_open"))
			{
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "home03_cs_push_open", 1);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "home03_cs_push_open/push_open");
			}
			iLocal_1355 = 1;
			break;
		
		case 0x00000001:
			if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[83]), 2,5f))
			{
				iLocal_1355 = 2;
			}
			break;
		
		case 0x00000002:
			if (DECOR_CHECK_EXIST(&Global_54076, "bOpenDoors"))
			{
				Function_208(&uLocal_1333, 0);
				Function_208(&uLocal_1335, 0);
				OPEN_DOOR_DIRECTION(&uLocal_1333, 0);
				OPEN_DOOR_DIRECTION(&uLocal_1335, 1);
				SET_DOOR_CURRENT_SPEED(&uLocal_1333, 3.0f, 0.0f);
				SET_DOOR_CURRENT_SPEED(&uLocal_1335, 3.0f, 0.0f);
				DECOR_REMOVE(&Global_54076, "bOpenDoors");
				iLocal_1355 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_333(StackVal, &Global_54076, *(&Local_4 + 2768[13]), 1.0f) || DECOR_CHECK_EXIST(&Global_54076, "nbGoForGun"))
			{
				DECOR_REMOVE(&Global_54076, "nbGoForGun");
				SET_TIME_WARP(0,1f, 1000.0f, 1000.0f);
				bLocal_1637 = GET_WEAPON_EQUIPPED(&Global_54076, 1);
				PRINTSTRING("Player should pull his ");
				PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bLocal_1637));
				PRINTNL();
				if (bLocal_1637 == 4294967295)
				{
					bLocal_1637 = Function_441(&Global_54076, 40);
					ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, bLocal_1637, 1);
					LOG_ERROR("got invalid last stage gun, resorting to best revolver");
				}
				if (ACTOR_GET_WEAPON_AMMO(&Global_54076, bLocal_1637) > GET_WEAPON_MAX_AMMO(bLocal_1637))
				{
					_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(bLocal_1637), (GET_WEAPON_MAX_AMMO(bLocal_1637) * 2.0f), 1, 1);
					ACTOR_ADD_WEAPON_AMMO(&Global_54076, bLocal_1637, GET_WEAPON_MAX_AMMO(bLocal_1637));
				}
				else
				{
					PRINTSTRING("ammo = ");
					PRINTFLOAT(ACTOR_GET_WEAPON_AMMO(&Global_54076, bLocal_1637));
					PRINTNL();
					PRINTSTRING("max ammo = ");
					PRINTFLOAT(GET_WEAPON_MAX_AMMO(bLocal_1637));
					PRINTNL();
					PRINTSTRING("last gun = ");
					PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bLocal_1637));
					PRINTNL();
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				iLocal_1355 = 4;
			}
			break;
		
		case 0x00000004:
			SET_FORCE_PLAYER_AIM_MODE(0, 1);
			SET_PLAYER_DEADEYE_MODE(0, 1);
			SET_ENABLE_NAV_STICK_INPUT(0, 0);
			iLocal_1355 = 5;
			break;
		
		case 0x00000005:
			if (IS_WEAPON_DRAWN(&Global_54076))
			{
				SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
				UI_POP("nCutscenes");
				HUD_ENABLE(1);
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_412() //Position: 0x14979 / 84345
{
	return Function_413("$/cutscene/HOME_03_END_SCENE_A/HOME_03_END_SCENE_A", &Local_1156, &Local_1142, &bLocal_1154, 88896, 88458, 87778, 86876, 86655, 86648, 0, 1, 1, 2, 2, 0, 0);
}

float Function_413(var uParam0, int iParam1, struct<41> Param2) //Position: 0x149DF / 84447
{
	if (!&bParam15)
	{
		Function_289(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_288(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_229(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_420())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_419(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_229(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_419(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_292(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_417(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_419(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_229(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_416(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_414();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_278(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_288(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_414() //Position: 0x15041 / 86081
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_415();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_415() //Position: 0x15086 / 86150
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_416(bool bParam0) //Position: 0x15098 / 86168
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_417(var uParam0, int iParam1) //Position: 0x150B5 / 86197
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_418(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_418(int iParam0) //Position: 0x15147 / 86343
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_419(bool bParam0) //Position: 0x15178 / 86392
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_420() //Position: 0x1523B / 86587
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

int Function_421() //Position: 0x15278 / 86648
{
	return 1;
}

int Function_422() //Position: 0x1527F / 86655
{
	switch (bLocal_1154)
	{
		case 0x00000063:
			Function_277(1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			ACTOR_SET_GRABBED_BY_CUTSCENE(&Global_54076, true);
			if (bLocal_1155 <= 6)
			{
				Function_277(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			}
			else
			{
				Function_277(0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000003:
			Function_277(1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1181, 5, 0);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1179, 5, 0);
			return 1;
			break;
		
		case 0x00000005:
			Function_277(2, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1);
			UI_PUSH("nCutscenes");
			HUD_ENABLE(0);
			return 1;
			break;
		
		default:
			Function_277(2, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1181, 5, 0);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1179, 5, 0);
			return 1;
			break;
	}
	return 0;
}

int Function_423() //Position: 0x1535C / 86876
{
	switch (bLocal_1154)
	{
		case 0x00000002:
			if (bLocal_1155 <= 6)
			{
				TELEPORT_ACTOR(&bLocal_1185, &Local_4 + 2768[63], 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2352[03]), 0, 1, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2352[13]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2352[23]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2352[33]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 1848[02], *(&Local_4 + 2352[53]), 1, 1, 1);
				SET_CAMERA_DIRECTION(StackVal, GET_GAME_CAMERA(), Vector(-0,102f, -0,084f, 0,991f), 1);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, 5), 0);
				RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0,5f);
			}
			if (bLocal_1155 == 9)
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 3992), 1, 1, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_1183, "uncle_injured", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/idle");
				SET_REACT_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/idle");
				SET_MOVER_FROZEN(&bLocal_1183, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0.0f);
				Function_397(&Local_4 + 1296, &bLocal_1183, 2);
				Function_397(&Local_4 + 1424, &bLocal_1183, 2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2512[73]), 1, 1, 1);
				if (DECOR_CHECK_EXIST(&Global_54076, "bWasInCover"))
				{
					if (!IS_ACTOR_USING_COVER(&Global_54076))
					{
						SET_PLAYER_POSTURE(0, 1, 0);
						ATTACH_PLAYER_TO_COVER(0, 1, 1);
						ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
						DECOR_REMOVE(&Global_54076, "bWasInCover");
					}
				}
				TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
			}
			UI_POP("nCutscenes");
			return 1;
			break;
		
		case 0x00000003:
			Function_424();
			UI_POP("nCutscenes");
			return 1;
			break;
		
		case 0x00000005:
			Function_411();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_424() //Position: 0x155C8 / 87496
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2512[13]), 0, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2512[43]), 0, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2512[23]), 0, 1, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
	bLocal_1306 = TASK_SEQUENCE_OPEN();
	TASK_SHOOT_ENEMIES_FROM_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4360), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	AI_ACTOR_FORCE_SPEED(&bLocal_1181, 2);
	TASK_SEQUENCE_PERFORM(&bLocal_1181, bLocal_1306);
	TASK_SEQUENCE_RELEASE(bLocal_1306, 1);
	bLocal_1306 = TASK_SEQUENCE_OPEN();
	TASK_SHOOT_ENEMIES_FROM_COVER(0, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4368), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	AI_ACTOR_FORCE_SPEED(&bLocal_1179, 2);
	TASK_SEQUENCE_PERFORM(&bLocal_1179, bLocal_1306);
	TASK_SEQUENCE_RELEASE(bLocal_1306, 1);
	ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 5, 0);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, GET_WEAPON_EQUIPPED(&Global_54076, 5), 0);
	RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
	Function_279(2.0f, 3);
	return;
}

int Function_425() //Position: 0x156E2 / 87778
{
	switch (bLocal_1154)
	{
		case 0x00000002:
			if (bLocal_1155 <= 6)
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 5, 0);
				if (Function_429())
				{
					Function_428(StackVal, StackVal, Vector(-110,405f, 121,391f, 1368,163f), Vector(-0,102f, -0,084f, 0,991f));
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_427())
			{
				return 1;
			}
			break;
		
		case 0x00000005:
			if (!iLocal_1348)
			{
				ACTOR_HOLSTER_WEAPON(&Global_54076, 0);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1181);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1179);
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uLocal_1333));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uLocal_1335));
				Function_208(&uLocal_1333, 1);
				OPEN_DOOR_DIRECTION(&uLocal_1333, 0);
				Function_208(&uLocal_1335, 1);
				OPEN_DOOR_DIRECTION(&uLocal_1335, 1);
				iLocal_1348 = 1;
			}
			if (Function_437())
			{
				if (!SQUAD_IS_VALID(&Local_4 + 1840))
				{
					Function_435();
					Function_216(&Local_4 + 1840, &Local_4 + 1840);
					Function_426(&Local_4 + 1840, 0);
					Function_433(StackVal, &Local_4 + 1840, *(&Local_4 + 4072), -1.0f, 1);
				}
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_426(var uParam0, bool bParam1) //Position: 0x157ED / 88045
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ACTOR_DRAW_ANY_WEAPON(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_427() //Position: 0x1583C / 88124
{
	Function_321(&Local_4 + 496, 376, 2, 0);
	Function_321(&Local_4 + 496, 976, 2, 0);
	Function_321(&Local_4 + 496, 373, 2, 0);
	Function_321(&Local_4 + 496, 977, 2, 0);
	Function_321(&Local_4 + 496, 372, 2, 0);
	Function_321(&Local_4 + 496, 983, 2, 0);
	Function_321(&Local_4 + 496, 374, 2, 0);
	Function_321(&Local_4 + 496, 987, 2, 0);
	if (Function_311(&Local_4 + 496))
	{
		return 1;
	}
	return 0;
}

void Function_428(struct<2> Param0, struct<2> Param2) //Position: 0x158C0 / 88256
{
	struct<2> Var0;
	
	Var0 = Param2;
	VSCALE(&Var0, 5.0f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Var0, 0, 0);
}

bool Function_429() //Position: 0x158EA / 88298
{
	Function_321(&Local_4 + 328, 376, 2, 0);
	Function_321(&Local_4 + 328, 976, 2, 0);
	Function_321(&Local_4 + 328, 373, 2, 0);
	Function_321(&Local_4 + 328, 977, 2, 0);
	Function_321(&Local_4 + 328, 372, 2, 0);
	Function_321(&Local_4 + 328, 983, 2, 0);
	Function_321(&Local_4 + 328, 374, 2, 0);
	Function_321(&Local_4 + 328, 987, 2, 0);
	Function_321(&Local_4 + 328, 980, 2, 0);
	Function_321(&Local_4 + 328, 1041, 2, 0);
	if (Function_311(&Local_4 + 328))
	{
		return 1;
	}
	return 0;
}

int Function_430() //Position: 0x1598A / 88458
{
	switch (bLocal_1154)
	{
		case 0x00000001:
		case 0x00000002:
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			if (bLocal_1155 == 9)
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&Global_54076, true);
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2224) || DECOR_CHECK_EXIST(&Global_54076, "bWasInCover"))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2224))
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2352[43]), 1, 1, 1);
					}
					CUTSCENE_MANAGER_SHOW_ACTOR(&Global_54076);
					DECOR_SET_BOOL(&Global_54076, "bWasInCover", 1);
					SET_PLAYER_POSTURE(0, 1, 0);
					ATTACH_PLAYER_TO_COVER(0, 1, 1);
					ACTOR_POP_NEXT_GAIT(&Global_54076, 0, 0);
				}
			}
			if (bLocal_1154 != 2 && bLocal_1155 > 6)
			{
				Function_428(StackVal, StackVal, Vector(-111,848f, 121,332f, 1368,798f), Vector(-0,185f, -0,068f, 0,98f));
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			}
			return 1;
			break;
		
		case 0x00000003:
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 5, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-117,252f, 120,616f, 1376,728f), Vector(-2,98f, -147,041f, 0.0f));
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1181, 5, 1);
			ACTOR_DISABLE_WEAPON_RENDER(&bLocal_1179, 5, 1);
			return 1;
			break;
		
		case 0x00000005:
			iLocal_1348 = 0;
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0.0f, 1);
			return 1;
			break;
	}
	return 1;
}

int Function_431() //Position: 0x15B40 / 88896
{
	switch (bLocal_1154)
	{
		case 0x00000002:
			if (bLocal_1155 < 6)
			{
				Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			}
			else
			{
				if (IS_ACTOR_USING_COVER(&Global_54076))
				{
					DECOR_SET_BOOL(&Global_54076, "bWasInCover", 1);
				}
				Function_284(0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			}
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 2352[03]), &Local_4 + 1928[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 2352[03]), &Local_4 + 1928[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000005:
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0.0f, 1);
			Function_282(StackVal, &uLocal_1140, *(&Local_4 + 2768[03]), &Local_4 + 1928[3], 0, 0, 0, 0, 1, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_432(int iParam0) //Position: 0x15C89 / 89225
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		bVar2 = GET_WEAPON_IN_HAND(&uVar1);
		ACTOR_PUT_WEAPON_IN_HAND(&uVar1, bVar2, 0);
		bVar0++;
	}
	return;
}

void Function_433(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4) //Position: 0x15CC8 / 89288
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_POINT_GUN_AT_COORD(&uVar1, &uParam1, fParam3);
				TASK_PRIORITY_SET(&uVar1, &bParam4);
			}
		}
		bVar0++;
	}
}

void Function_434(var uParam0, int iParam1) //Position: 0x15D26 / 89382
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_435() //Position: 0x15D60 / 89440
{
	*(&Local_4 + 1840) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "EndGuys"));
	*(&Local_4 + 1544[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "FBI_1", 559, Vector(-82,77647f, 117,4243f, 1407,227f), Vector(0.0f, 247,2428f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[02], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[02], 2, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1544[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[02], 20);
	SET_ACTOR_HEALTH(&Local_4 + 1544[02], 10.0f);
	SET_ALLOW_DEADEYE_LOCKS(&Local_4 + 1544[02], false);
	TASK_STAND_STILL(&Local_4 + 1544[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[02], 1);
	Function_436(&Local_4 + 1544[02], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[02], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[02], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[02], true);
	*(&Local_4 + 1544[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "FBI_2", 641, Vector(-80,43641f, 117,414f, 1404,486f), Vector(0.0f, 238,5823f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[12], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[12], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[12], 21);
	SET_ACTOR_HEALTH(&Local_4 + 1544[12], 10.0f);
	TASK_STAND_STILL(&Local_4 + 1544[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[12], 1);
	Function_436(&Local_4 + 1544[12], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[12], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[12], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[12], true);
	*(&Local_4 + 1544[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nmarshal_1", 595, Vector(-84,27747f, 117,3599f, 1408,569f), Vector(0.0f, 257,6053f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[22], &Local_4 + 1840);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[22], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[22], 21);
	TASK_STAND_STILL(&Local_4 + 1544[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[22], 1);
	Function_436(&Local_4 + 1544[22], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[22], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[22], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[22], true);
	*(&Local_4 + 1544[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nmarshal_2", 594, Vector(-83,89847f, 117,3636f, 1407,68f), Vector(0.0f, 250,7832f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[32], &Local_4 + 1840);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[32], 43, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[32], 21);
	TASK_STAND_STILL(&Local_4 + 1544[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[32], 1);
	Function_436(&Local_4 + 1544[32], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[32], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[32], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[32], true);
	*(&Local_4 + 1544[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nmarshal_3", 597, Vector(-82,98147f, 117,4483f, 1405,913f), Vector(0.0f, 237,4963f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[42], &Local_4 + 1840);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[42], 39, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[42], 21);
	TASK_STAND_STILL(&Local_4 + 1544[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[42], 1);
	Function_436(&Local_4 + 1544[42], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[42], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[42], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[42], true);
	*(&Local_4 + 1544[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nmarshal_4", 596, Vector(-81,90646f, 117,6628f, 1405,114f), Vector(0.0f, 240,3975f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[52], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[52], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[52], 21);
	TASK_STAND_STILL(&Local_4 + 1544[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[52], 1);
	Function_436(&Local_4 + 1544[52], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[52], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[52], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[52], true);
	*(&Local_4 + 1544[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_3", 375, Vector(-80.0f, 116,8612f, 1412,628f), Vector(0.0f, -77,92809f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[62], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[62], 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[62], 21);
	TASK_STAND_STILL(&Local_4 + 1544[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[62], 1);
	Function_436(&Local_4 + 1544[62], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[62], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[62], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[62], true);
	*(&Local_4 + 1544[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_4", 374, Vector(-81,17784f, 116,9325f, 1410,346f), Vector(0.0f, 262,7684f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[72], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[72], 9, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[72], 21);
	TASK_STAND_STILL(&Local_4 + 1544[72], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[72], 1);
	Function_436(&Local_4 + 1544[72], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[72], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[72], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[72], true);
	*(&Local_4 + 1544[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_5", 373, Vector(-74,50228f, 116,8612f, 1403,745f), Vector(0.0f, 205,2348f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[82], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[82]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[82], 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[82], 21);
	TASK_STAND_STILL(&Local_4 + 1544[82], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[82], 1);
	Function_436(&Local_4 + 1544[82], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[82], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[82], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[82], true);
	*(&Local_4 + 1544[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_6", 370, Vector(-77,18968f, 116,8932f, 1404f), Vector(0.0f, 208,142f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[92], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[92]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[92], 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[92], 21);
	TASK_STAND_STILL(&Local_4 + 1544[92], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[92], 1);
	Function_436(&Local_4 + 1544[92], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[92], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[92], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[92], true);
	*(&Local_4 + 1544[102]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_7", 374, Vector(-75,70999f, 116,8612f, 1402,953f), Vector(0.0f, 211,1804f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[102], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[102]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[102], 13, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[102], 21);
	TASK_STAND_STILL(&Local_4 + 1544[102], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[102], 1);
	Function_436(&Local_4 + 1544[102], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[102], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[102], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[102], true);
	*(&Local_4 + 1544[112]) = Function_358(StackVal, StackVal, &Local_4, "endguy_8", 369, Function_54(), 977, Vector(-77,51901f, 116,902f, 1401,519f), Vector(0.0f, 208,3862f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[112], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[112]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[112], 2, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[112], 21);
	TASK_STAND_STILL(&Local_4 + 1544[112], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[112], 1);
	Function_436(&Local_4 + 1544[112], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[112], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[112], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[112], true);
	*(&Local_4 + 1544[122]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "endguy_9", 378, Vector(-78,90622f, 116,9296f, 1404,233f), Vector(0.0f, 212,8234f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[122], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[122]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[122], 2, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[122], 21);
	TASK_STAND_STILL(&Local_4 + 1544[122], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[122], 1);
	Function_436(&Local_4 + 1544[122], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[122], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[122], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[122], true);
	*(&Local_4 + 1544[132]) = Function_358(StackVal, StackVal, &Local_4, "nendguy_11", 373, Function_54(), 980, Vector(-82,38034f, 116,9219f, 1412f), Vector(0.0f, -73,10981f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[132], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[132]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[132], 2, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[132], 21);
	TASK_STAND_STILL(&Local_4 + 1544[132], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[132], 1);
	Function_436(&Local_4 + 1544[132], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[132], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[132], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[132], true);
	*(&Local_4 + 1544[142]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendguy_12", 375, Vector(-79,47904f, 116,9921f, 1405,836f), Vector(0.0f, 221,6184f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[142], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[142]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[142], 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[142], 21);
	TASK_STAND_STILL(&Local_4 + 1544[142], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[142], 1);
	Function_436(&Local_4 + 1544[142], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[142], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[142], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[142], true);
	*(&Local_4 + 1544[152]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendguy_13", 372, Vector(-80.0f, 116,9194f, 1406,993f), Vector(0.0f, -116,6752f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[152], &Local_4 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1544[152]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[152], 17, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[152], 21);
	TASK_STAND_STILL(&Local_4 + 1544[152], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[152], 1);
	Function_436(&Local_4 + 1544[152], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[152], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[152], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[152], true);
	*(&Local_4 + 1544[162]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendguy_14", 373, Vector(-82,08817f, 116,9148f, 1408,206f), Vector(0.0f, 261,0154f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[162], &Local_4 + 1840);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[162], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[162], 21);
	TASK_STAND_STILL(&Local_4 + 1544[162], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[162], 1);
	Function_436(&Local_4 + 1544[162], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[162], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[162], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[162], true);
	*(&Local_4 + 1544[172]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nendguy_16", 372, Vector(-82,13368f, 117,4228f, 1407,294f), Vector(0.0f, 247,4445f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1544[172], &Local_4 + 1840);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1544[172], 43, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_4 + 1544[172], 21);
	TASK_STAND_STILL(&Local_4 + 1544[172], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1544[172], 1);
	Function_436(&Local_4 + 1544[172], 0);
	SET_ACTOR_PERMANENT(&Local_4 + 1544[172], 1);
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1544[172], 1);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&Local_4 + 1544[172], true);
	return;
}

void Function_436(var uParam0, bool bParam1) //Position: 0x16BE2 / 93154
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

bool Function_437() //Position: 0x16C04 / 93188
{
	Function_321(&Local_4 + 632, 559, 2, 0);
	Function_321(&Local_4 + 632, 641, 2, 0);
	Function_321(&Local_4 + 632, 595, 2, 0);
	Function_321(&Local_4 + 632, 594, 2, 0);
	Function_321(&Local_4 + 632, 597, 2, 0);
	Function_321(&Local_4 + 632, 596, 2, 0);
	Function_321(&Local_4 + 632, 375, 2, 0);
	Function_321(&Local_4 + 632, 374, 2, 0);
	Function_321(&Local_4 + 632, 373, 2, 0);
	Function_321(&Local_4 + 632, 370, 2, 0);
	Function_321(&Local_4 + 632, 369, 2, 0);
	Function_321(&Local_4 + 632, 977, 2, 0);
	Function_321(&Local_4 + 632, 378, 2, 0);
	Function_321(&Local_4 + 632, 980, 2, 0);
	Function_321(&Local_4 + 632, 372, 2, 0);
	if (Function_311(&Local_4 + 632))
	{
		return 1;
	}
	return 0;
}

bool Function_438() //Position: 0x16CEA / 93418
{
	if (!IS_DOOR_VALID(&uLocal_1327))
	{
		uLocal_1327 = Function_439("beechersHope", "house01", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(&uLocal_1329))
	{
		uLocal_1329 = Function_439("beechersHope", "house01", 2);
		return 0;
	}
	if (!IS_DOOR_VALID(&uLocal_1331))
	{
		uLocal_1331 = Function_439("beechersHope", "house01", 3);
		return 0;
	}
	if (!IS_DOOR_VALID(&uLocal_1353))
	{
		uLocal_1353 = Function_439("beechersHope", "house01", 5);
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1353);
	Function_175(&uLocal_1353, 1);
	uLocal_1341 = Function_439("beechersHope", "stable01props", 3);
	if (!IS_DOOR_VALID(&uLocal_1341))
	{
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1341);
	Function_175(&uLocal_1341, 1);
	if (!IS_DOOR_VALID(&uLocal_1333))
	{
		uLocal_1333 = Function_439("beechersHope", "stable", 1);
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1333);
	Function_175(&uLocal_1333, 1);
	if (!IS_DOOR_VALID(&uLocal_1335))
	{
		uLocal_1335 = Function_439("beechersHope", "stable", 2);
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1335);
	Function_175(&uLocal_1335, 1);
	if (!IS_DOOR_VALID(&uLocal_1337))
	{
		uLocal_1337 = Function_439("beechersHope", "stable", 96);
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1337);
	if (!IS_DOOR_VALID(&uLocal_1339))
	{
		uLocal_1339 = Function_439("beechersHope", "stable", 97);
		return 0;
	}
	CLOSE_DOOR_FAST(&uLocal_1339);
	return 1;
}

int Function_439(var uParam0, int iParam1, int iParam2) //Position: 0x16EEF / 93935
{
	return Function_440(Global_43789, &uParam0, &iParam1, iParam2);
}

int Function_440(int iParam0, char* cParam1, bool bParam3) //Position: 0x16F03 / 93955
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

bool Function_441(var uParam0, int iParam1) //Position: 0x16FA8 / 94120
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_442(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16FBA / 94138
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			SQUAD_LEAVE(&bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&bVar1))
			{
				bVar2 = GET_VEHICLE(&bVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&bVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_443(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
					if (!Function_443(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&bVar1))
			{
				bVar2 = GET_MOUNT(&bVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&bVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_443(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
					if (!Function_443(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&bVar1);
				}
				else if (&bParam2)
				{
					if (!Function_443(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_443(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x171F3 / 94707
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_444() //Position: 0x17213 / 94739
{
	if (bLocal_1155 < 4 && bLocal_1155 > 105)
	{
		Function_481(StackVal, &iLocal_1314, (&Local_4 + 3736), 250.0f, 0);
		if (bLocal_1155 > 13 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1316) < 0)
		{
			Function_478();
		}
		Function_477(&bLocal_1316);
		Function_476(&bLocal_1316, 25.0f);
		Function_329();
		if (bLocal_1155 > 8 && bLocal_1155 < 6)
		{
			Function_371(&bLocal_1294, 55.0f, 120.0f, &bLocal_1181, "Home03_obj_return_farm", "Home03_too_far", &iLocal_1169, 0, 0, 0, 325, 0);
			if (!Function_368(&Global_54076, &bLocal_1181, 55.0f))
			{
				Function_366(12, 1, 1);
				Function_366(11, 1, 1);
				if (IS_OBJECT_VALID(&bLocal_1308))
				{
					Function_475(&bLocal_1308);
				}
				if (IS_OBJECT_VALID(&bLocal_1310))
				{
					Function_475(&bLocal_1310);
				}
			}
			else
			{
				Function_366(12, 0, 1);
				Function_366(11, 0, 1);
				if (!IS_OBJECT_VALID(&bLocal_1308))
				{
					Function_381("Home03_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
					bLocal_1308 = Function_474(StackVal, StackVal, &Local_4, "GateInTheSilo", *(&Local_4 + 3824), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
				if (!IS_OBJECT_VALID(&bLocal_1310))
				{
					bLocal_1310 = Function_474(StackVal, StackVal, &Local_4, "GateOnFoot", *(&Local_4 + 3856), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
			}
		}
		else
		{
			Function_371(&bLocal_1294, 60.0f, 200.0f, &bLocal_1181, "Home03_obj_return_farm", "Home03_too_far", &iLocal_1169, 0, 0, 0, 325, 1);
			if (!Function_368(&Global_54076, &bLocal_1181, 60.0f))
			{
				if (!IS_BLIP_VALID(Function_382(12)))
				{
					Function_366(12, 1, 1);
					Function_366(11, 1, 1);
				}
			}
		}
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
			Function_214();
			if (IS_OBJECT_VALID(&bLocal_1308))
			{
				DESTROY_OBJECT(&bLocal_1308);
			}
			Function_472();
			Function_366(12, 0, 1);
			Function_366(11, 0, 1);
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			SET_ACTOR_HEALTH(&bLocal_1181, GET_ACTOR_MAX_HEALTH(&bLocal_1181));
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1181, 0,5f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1179, 0,5f);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (iLocal_1188[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				AUDIO_SET_PLAYER_MOOD(2, 0);
				Function_330();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2512[63]), 1, 1, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_184(1, 0, 1);
				Function_318();
			}
			iLocal_1187 = Global_46914[1];
			Function_366(13, 0, 1);
			if (!SQUAD_IS_VALID(&iLocal_1314))
			{
				iLocal_1314 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "ncavHorses"));
			}
			iLocal_1307 = 1;
			if (!iLocal_1188[3])
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = true;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_316(iLocal_1187) || iLocal_1187 != 4294967295))
			{
				if (Function_311(&iLocal_1250))
				{
					if (Function_438())
					{
						Function_208(&uLocal_1327, 1);
						Function_208(&uLocal_1329, 1);
						Function_208(&uLocal_1331, 1);
						STOP_PED_SPEAKING(&bLocal_1179, 0);
						OPEN_DOOR_DIRECTION(&uLocal_1329, 1);
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2512[83]), 1, 1, 1);
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2512[93]), 1, 1, 1);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1179, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4368), -1.0f, 1086324736);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1181, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4360), -1.0f, 1086324736);
						Function_330();
						DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1181);
						GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 22, 1.0f, 1, 1);
						GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 13, 1.0f, 1, 1);
						GIVE_WEAPON_TO_ACTOR(&bLocal_1179, 4, 1.0f, 1, 1);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1181, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1179, 0);
						Function_366(12, 0, 1);
						Function_366(11, 0, 1);
						Function_229(&bLocal_1282);
						bLocal_1155 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_311(&iLocal_1250))
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				CLOSE_DOOR_FAST(&uLocal_1335);
				CLOSE_DOOR_FAST(&uLocal_1333);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_1337, 0);
				OPEN_DOOR_DIRECTION_FAST(&uLocal_1339, 1);
				Function_344(&(Local_1474[015]), &bLocal_1179, "Wife", 1, 0x5f5e100, 1);
				Function_344(&(Local_1474[115]), &bLocal_1181, "Son", 1, 0x5f5e100, 1);
				Function_344(&(Local_1474[215]), &bLocal_1185, "Horse", 1, 0x5f5e100, 1);
				Function_408(&(Local_1474[415]));
				Function_241(bLocal_1154);
				Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				bLocal_1316 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "cavS4"));
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&bLocal_1316, 0, &Local_4 + 2208, 4, 1);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1316, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1316) | 2048);
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			break;
		
		case 0x00000004:
			Local_1156 = 1000;
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			iLocal_1346 = 0;
			SET_ACTOR_IS_COMPANION(&bLocal_1181, 0);
			SET_ACTOR_IS_COMPANION(&bLocal_1179, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1181, 0,65f);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1179, 0,65f);
			SET_ACTOR_MAX_HEALTH(&bLocal_1181, 90.0f);
			SET_ACTOR_HEALTH(&bLocal_1181, 90.0f);
			SET_ACTOR_MAX_HEALTH(&bLocal_1179, 90.0f);
			SET_ACTOR_HEALTH(&bLocal_1179, 90.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1181, 10.0f);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1179, 10.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1181, 53, 10.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1179, 53, 10.0f);
			Function_229(&bLocal_1282);
			bLocal_1155 = 7;
			if (!Function_333(StackVal, &Global_54076, *(&Local_4 + 3688), 35.0f))
			{
				Function_381("Home03_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_1308 = Function_474(StackVal, StackVal, &Local_4, "GateInTheSilo", *(&Local_4 + 3824), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_287(&Global_54076);
				if (VDIST(Function_287(&Global_54076), *(&Local_4 + 3856)) > (2,5f + 1.0f))
				{
					bLocal_1310 = Function_474(StackVal, StackVal, &Local_4, "GateOnFoot", *(&Local_4 + 3224[03]), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
				else
				{
					bLocal_1310 = Function_474(StackVal, StackVal, &Local_4, "GateOnFoot", *(&Local_4 + 3856), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				}
			}
			else
			{
				Function_471();
				Function_229(&bLocal_1282);
				bLocal_1155 = 8;
			}
			break;
		
		case 0x00000007:
			if (IS_OBJECT_VALID(&bLocal_1308) && IS_OBJECT_VALID(&bLocal_1310))
			{
				if (GATEWAY_UPDATE(&bLocal_1308))
				{
					Function_475(&bLocal_1308);
					Function_475(&bLocal_1310);
					Function_470();
					Function_229(&bLocal_1282);
					bLocal_1155 = 8;
				}
				else if (GATEWAY_UPDATE(&bLocal_1310) || Function_292(&bLocal_1282) <= 10.0f)
				{
					Function_475(&bLocal_1308);
					Function_475(&bLocal_1310);
					Function_471();
					Function_229(&bLocal_1282);
					bLocal_1155 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_292(&bLocal_1282) <= 2.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1181, 10.0f);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1179, 10.0f);
				TASK_OVERRIDE_CLEAR_POSTURE(&bLocal_1181);
				TASK_OVERRIDE_CLEAR_POSTURE(&bLocal_1179);
				iLocal_1344 = 0;
				Function_469(iLocal_1307);
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "GUNFIGHT_3", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_229(&bLocal_1282);
				bLocal_1155 = 11;
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1316) >= 0 || (Function_468(&bLocal_1316) != 0 && !Function_467(&bLocal_1316, &bLocal_1179, 25.0f)))
			{
				if (iLocal_1307 > (Local_4.f_3224 - 1))
				{
					Function_465();
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1179, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1181, 1);
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
					Function_229(&bLocal_1282);
					bLocal_1155 = 13;
				}
				else
				{
					if (iLocal_1307 <= 3)
					{
						Function_461(2, &bLocal_1316);
						Function_461(1, &bLocal_1316);
					}
					else if (iLocal_1307 > 3)
					{
						Function_461(2, &bLocal_1316);
						Function_461(2, &bLocal_1316);
					}
					Function_460(&bLocal_1316, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_456(&bLocal_1316, &bLocal_1179);
					Function_455();
					Function_453(&bLocal_1316, &bLocal_1181, 1);
					Function_453(&bLocal_1316, &bLocal_1179, 1);
					Function_229(&bLocal_1282);
					bLocal_1155 = 12;
				}
			}
			if (!iLocal_1344)
			{
				if (Function_292(&bLocal_1282) <= 3.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_366(11, 1, 1);
					Function_366(12, 1, 1);
					Function_381("Home03_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1344 = 1;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_292(&bLocal_1282) <= 3,5f)
			{
				Function_469(iLocal_1307);
				Function_452();
				Function_229(&bLocal_1282);
				bLocal_1155 = 11;
			}
			break;
		
		case 0x0000000D:
			Function_437();
			if (Function_292(&bLocal_1282) <= 3.0f)
			{
				Function_381("Home03_obj07", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_451(&bLocal_1316);
				Function_366(12, 1, 1);
				Function_366(11, 1, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_450();
			Function_447();
			Function_446(&bLocal_1316, 0, 60.0f);
			Function_287(&Global_54076);
			Function_287(&bLocal_1181);
			if (StackVal || (StackVal && Function_445(StackVal, ((StackVal && Function_333((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2056) && Function_333((Function_368(&Global_54076, &bLocal_1181, 8.0f) && Function_368(&Global_54076, &bLocal_1179, 8.0f)), &bLocal_1181, *(&Local_4 + 3224[(Local_4.f_3224 - 1)3]), 2.0f)), &bLocal_1179, *(&Local_4 + 3224[(Local_4.f_3224 - 1)3]), 2.0f)) && Function_443(&bLocal_1181, 0x3f800000, 0x42960000, 1, 1, 0)), Function_287(&Global_54076), Function_287(&bLocal_1181)) > 1.0f))
			{
				Function_475(&bLocal_1308);
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_450())
			{
				Local_1156 = 1000;
				Function_218(&iLocal_1250);
				iLocal_1188[4] = 1;
				Function_229(&bLocal_1282);
				bLocal_1154 = 5;
				bLocal_1155 = false;
			}
			break;
	}
	return;
}

float Function_445(struct<5> Param0) //Position: 0x17D26 / 97574
{
	return FABS((StackVal - StackVal));
}

var Function_446(bool bParam0, bool bParam1, float fParam2) //Position: 0x17D3A / 97594
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 4294967295;
	}
	bVar0 = false;
	fVar2 = 0;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (!Function_368(&Global_54076, &bVar1, &fParam2))
			{
				if (!Function_443(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(&bVar1);
					DESTROY_ACTOR(&bVar1);
					if (&bParam1)
					{
						if (IS_ACTOR_RIDING(&bVar1))
						{
							DESTROY_ACTOR(GET_MOUNT(&bVar1));
						}
					}
					fVar2++;
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return fVar2;
}

void Function_447() //Position: 0x17DE3 / 97763
{
	if (Function_449(GET_GRINGO_FROM_OBJECT(&Local_4 + 4136), "UseCase1") != GET_OBJECT_FROM_ACTOR(&bLocal_1179))
	{
		if (!Function_443(&bLocal_1179, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			if (Function_448(&bLocal_1179, &Local_4 + 4136) > 4.0f)
			{
				SNAP_ACTOR_TO_GRINGO(&bLocal_1179, &Local_4 + 4136, "useCase1", true, 0, 0);
			}
		}
	}
	else if (Function_449(GET_GRINGO_FROM_OBJECT(&Local_4 + 4136), "Support") != GET_OBJECT_FROM_ACTOR(&bLocal_1181))
	{
		if (!Function_443(&bLocal_1181, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			if (Function_448(&bLocal_1181, &Local_4 + 4136) > 4.0f)
			{
				SNAP_ACTOR_TO_GRINGO(&bLocal_1181, &Local_4 + 4136, "Support", true, 0, 0);
			}
		}
	}
	return;
}

float Function_448(bool bParam0, var uParam1) //Position: 0x17EB8 / 97976
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_334(&bParam0);
			Var0 = Function_334(&bParam0);
			Function_385(&uParam1);
			Var2 = Function_385(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

int Function_449(var uParam0, bool bParam1) //Position: 0x17F5A / 98138
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &bParam1);
}

bool Function_450() //Position: 0x17F69 / 98153
{
	var uVar0;
	var uVar2;
	bool bVar4;
	int iVar5;
	
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME_03_END_SCENE_A/HOME_03_END_SCENE_A"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/HOME_03_END_SCENE_A/HOME_03_END_SCENE_A", 0, 2, 1, 2, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_359(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (iVar5 == GET_ACTOR_ENUM(&bLocal_1179))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1179);
						}
						if (iVar5 != GET_ACTOR_ENUM(&bLocal_1181) || (iVar5 != 638 && GET_ACTOR_ENUM(&bLocal_1181) != 640))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1181);
						}
						if (STRINGS_ARE_EQUAL("RIDEABLE_ANIMAL_Horse05", CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4)))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Local_4 + 1896[02]);
							PRINTSTRING("replacing ");
							PRINTINT(bVar4);
							PRINTNL();
						}
						else
						{
							PRINTSTRING("Not replacing ");
							PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4));
							PRINTSTRING(", his name doesn't match.");
							PRINTNL();
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_451(bool bParam0) //Position: 0x181B2 / 98738
{
	SQUAD_GOALS_CLEAR(&bParam0);
	Function_356(&bParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bParam0, false, 1, 4294967295);
	TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_452() //Position: 0x181DB / 98779
{
	switch (iLocal_1307)
	{
		case 0x00000001:
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1181, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4432), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1179, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4424), -1.0f, 1086324736);
			break;
		
		case 0x00000002:
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1181, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4144), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1179, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4264), -1.0f, 1086324736);
			break;
		
		case 0x00000003:
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1181, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4272), -1.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1181, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4240), -1.0f, 1086324736);
			break;
	}
	SET_ACTOR_HEALTH(&bLocal_1181, (GET_ACTOR_HEALTH(&bLocal_1181) + 80.0f));
	SET_ACTOR_HEALTH(&bLocal_1179, (GET_ACTOR_HEALTH(&bLocal_1181) + 80.0f));
	iLocal_1307++;
	return;
}

void Function_453(bool bParam0, bool bParam1, int iParam2) //Position: 0x182B8 / 99000
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_454(&uVar1, &bParam1, &iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_454(bool bParam0, var uParam1, bool bParam2) //Position: 0x18304 / 99076
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			MEMORY_IDENTIFY(&bParam0, &uParam1);
			Function_334(&uParam1);
			uVar0 = Function_334(&uParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&bParam0, &uParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&bParam0, &uParam1, &uVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

void Function_455() //Position: 0x18415 / 99349
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = false;
	SQUAD_GOALS_CLEAR(&bLocal_1316);
	Function_356(&bLocal_1316);
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&bLocal_1316) - 1))
	{
		TASK_GO_NEAR_COORD(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1316, bVar1), &Local_4 + 3224[iLocal_13073], 35.0f, 3);
		bVar1++;
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_DISMOUNT(0, 1);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1316, false, 0, 2);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1316, true, 0, 4294967295);
	if (iLocal_1307 <= 2)
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 4496, 2, 0, 0, 1, false);
	}
	else
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &Local_4 + 4504, 2, 0, 0, 1, false);
	}
	return;
}

void Function_456(var uParam0, int iParam1) //Position: 0x184BE / 99518
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_457(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1);
		bVar0++;
	}
	return;
}

void Function_457(bool bParam0, int iParam1) //Position: 0x184EE / 99566
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_458(StackVal, &bParam0, Var0);
	return;
}

void Function_458(int iParam0, struct<2> Param1) //Position: 0x1850A / 99594
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_459(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_459(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_459(int iParam0, struct<2> Param1) //Position: 0x18545 / 99653
{
	struct<2> Var0;
	
	Function_287(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_287(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_460(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x185C6 / 99782
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_461(int iParam0, bool bParam1) //Position: 0x186D6 / 100054
{
	int iVar0;
	struct<2> Var1;
	struct<9> Var3;
	
	iVar0 = 0;
	Function_464(&Local_4 + 3352);
	Var1 = Function_464(&Local_4 + 3352);
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_76();
		uVar5 = CREATE_ACTOR_IN_LAYOUT(&Local_4, Function_54(), Function_463(), Var1, Function_76());
		Function_76();
		uVar6 = CREATE_ACTOR_IN_LAYOUT(&Local_4, Function_54(), Function_462(), Var1, Function_76());
		ACCESSORIZE_HORSE(&uVar6, false);
		SET_ACTOR_FACTION(&uVar5, 19);
		ACTOR_MOUNT_ACTOR(&uVar5, &uVar6);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar5);
		if (RAND_INT_RANGE(0, true) == 0)
		{
			GIVE_WEAPON_TO_ACTOR(&uVar5, 41, 1.0f, 1, 1);
		}
		else
		{
			GIVE_WEAPON_TO_ACTOR(&uVar5, 13, 0,5f, 1, 1);
		}
		SQUAD_JOIN(&uVar5, &bParam1);
		ADD_BLIP_FOR_ACTOR(&uVar5, 322, 0, 2, 0);
		if (SQUAD_IS_VALID(&iLocal_1314))
		{
			SQUAD_JOIN(&uVar6, &iLocal_1314);
		}
		AI_SET_WEAPON_MAX_RANGE(&uVar5, 40.0f);
		AI_SET_WEAPON_MIN_RANGE(&uVar5, 0.0f);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar5, 0);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar5, 28, 0.0f);
		SET_ACTOR_UPDATE_PRIORITY(&uVar5, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar5, 35.0f);
		Function_454(&bLocal_1179, &uVar5, 1);
		Function_454(&bLocal_1181, &uVar5, 1);
		AI_ACTOR_FORCE_SPEED(&uVar5, 3);
		vVar3 = Var1;
		vVar3 = (vVar3.x + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		vVar3.f_8 = (vVar3.z + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		TELEPORT_ACTOR(&uVar6, &vVar3, 1, 1, 1);
		iVar0++;
	}
	return;
}

int Function_462() //Position: 0x1881C / 100380
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(0, 3);
	switch (bVar0)
	{
		case 0x00000000:
			return 976;
			break;
		
		case 0x00000001:
			return 977;
			break;
		
		case 0x00000002:
			return 983;
			break;
		
		case 0x00000003:
			return 980;
			break;
	}
	return 976;
}

int Function_463() //Position: 0x1886A / 100458
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = RAND_INT_RANGE(0, 2);
	switch (bVar0)
	{
		case 0x00000000:
			return 372;
			break;
		
		case 0x00000001:
			return 373;
			break;
		
		case 0x00000002:
			return 374;
			break;
	}
	return 372;
}

struct<8> Function_464(vector3[] vParam0) //Position: 0x188AB / 100523
{
	struct<2> Var0;
	
	Var0 = vParam0[RAND_INT_RANGE(0, (vParam0 - 1))3];
	while (WOULD_ACTOR_BE_VISIBLE(976, &Var0, 3212836864))
	{
		Var0 = vParam0[RAND_INT_RANGE(0, (vParam0 - 1))3];
	}
	return StackVal, Var0;
}

void Function_465() //Position: 0x188F0 / 100592
{
	Function_466(&bLocal_1179);
	Function_466(&bLocal_1181);
	return;
}

void Function_466(bool bParam0) //Position: 0x18904 / 100612
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &Local_4 + 4528, 4, 1, 0, 1, 0);
	TASK_GO_TO_OBJECT(0, &Local_4 + 4064, 4, 1, 0);
	if (&bParam0 == &bLocal_1179)
	{
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_4 + 4136), "UseCase1", 4294967295, 4);
	}
	else
	{
		TASK_GO_NEAR_OBJECT(0, &Local_4 + 4136, 2.0f, 4, 1, 1);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&Local_4 + 4136), "Support", 4294967295, 4);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

bool Function_467(var uParam0, var uParam1, int iParam2) //Position: 0x1898A / 100746
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (Function_384(&uVar1, &uParam1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_468(int iParam0) //Position: 0x189EF / 100847
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_469(int iParam0) //Position: 0x18A2A / 100906
{
	iParam0 = iParam0;
	Function_470();
	return;
}

void Function_470() //Position: 0x18A37 / 100919
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_Covered", "Home03_Covered", 5, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_471() //Position: 0x18A7D / 100989
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_RunToBarn", "Home03_RunToBarn", 5, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472() //Position: 0x18AC7 / 101063
{
	if (SQUAD_IS_VALID(&uLocal_1322))
	{
		if (Function_473(&bLocal_1181, &uLocal_1322, 1))
		{
			SQUAD_LEAVE(&bLocal_1181);
		}
		SQUAD_GOALS_CLEAR(&uLocal_1322);
		DESTROY_OBJECT(&uLocal_1322);
	}
	return;
}

bool Function_473(int iParam0, int iParam1, bool bParam2) //Position: 0x18AFB / 101115
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

var Function_474(int iParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x18B43 / 101187
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&iParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &iParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_475(bool bParam0) //Position: 0x18C2E / 101422
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

void Function_476(var uParam0, float fParam1) //Position: 0x18CC4 / 101572
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_RIDING(&bVar1))
		{
			if (Function_368(&bVar1, &Global_54076, fParam1))
			{
				MEMORY_PREFER_WALKING(&bVar1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_477(var uParam0) //Position: 0x18D10 / 101648
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if ((GET_WEAPON_EQUIPPED(&bVar1, 5) != 4294967295 && GET_WEAPON_EQUIPPED(&bVar1, 1) != 4294967295) && GET_WEAPON_EQUIPPED(&bVar1, 6) != 4294967295)
		{
			if (Function_368(&bVar1, &Global_54076, 30.0f))
			{
				SQUAD_LEAVE(&bVar1);
				Function_464(&Local_4 + 3352);
				uVar2 = Function_464(&Local_4 + 3352);
				TASK_GO_TO_COORD(&bVar1, &uVar2, 3);
				RELEASE_ACTOR(&bVar1);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(&bVar1, 40, 0,5f, 1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_478() //Position: 0x18DA1 / 101793
{
	bool bVar0;
	
	if (Global_99146)
	{
		return;
	}
	if (fLocal_1350 >= 0.0f)
	{
		fLocal_1350 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(5.0f, 7.0f));
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && GET_CURRENT_GAME_TIME() < fLocal_1350)
	{
		switch (bLocal_1154)
		{
			case 0x00000000:
				bVar0 = RAND_INT_RANGE(0, 12);
				if (!Function_368(&Global_54076, &bLocal_1183, 25.0f))
				{
					bVar0 = 3;
				}
				PRINTSTRING("taunt num: ");
				PRINTINT(bVar0);
				PRINTNL();
				if (Function_479(&Local_4 + 1136, &Global_54076, 60.0f, 1))
				{
					if ((bVar0 % 3) == 0)
					{
						SAY_SINGLE_LINE_CONTEXT(&Global_54076, 368, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(&bLocal_1183, 100, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					fLocal_1350 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(5.0f, 7.0f));
				}
				break;
			
			case 0x00000002:
				bVar0 = RAND_INT_RANGE(0, 4);
				if (!Function_368(&Global_54076, &bLocal_1181, 20.0f))
				{
					bVar0 = RAND_INT_RANGE(2, 4);
				}
				if (Function_479(&Local_4 + 1296, &Global_54076, 55.0f, 1) || Function_479(&Local_4 + 1424, &Global_54076, 55.0f, 1))
				{
					switch (bVar0)
					{
						case 0x00000000:
						case 0x00000001:
							if (Function_479(&Local_4 + 1296, &Global_54076, 25.0f, 1) || Function_479(&Local_4 + 1424, &Global_54076, 25.0f, 1))
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1181, 95, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1181, 100, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							break;
						
						case 0x00000002:
						case 0x00000003:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 368, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000004:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 372, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
					}
					fLocal_1350 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(5.0f, 7.0f));
				}
				break;
			
			case 0x00000003:
			case 0x00000004:
				bVar0 = RAND_INT_RANGE(0, 6);
				if (!Function_368(&Global_54076, &bLocal_1181, 25.0f))
				{
					bVar0 = RAND_INT_RANGE(2, 4);
				}
				if (Function_479(&bLocal_1316, &Global_54076, 60.0f, 1) || Function_479(&Local_4 + 1536, &Global_54076, 60.0f, 1))
				{
					switch (bVar0)
					{
						case 0x00000000:
						case 0x00000001:
							if (Function_479(&bLocal_1316, &bLocal_1181, 25.0f, 1) || Function_479(&Local_4 + 1536, &bLocal_1181, 25.0f, 1))
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1181, 95, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1181, 100, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							break;
						
						case 0x00000002:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 368, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000003:
						case 0x00000004:
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 372, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							break;
						
						case 0x00000005:
						case 0x00000006:
							if (Function_479(&bLocal_1316, &bLocal_1179, 25.0f, 1) || Function_479(&Local_4 + 1536, &bLocal_1179, 25.0f, 1))
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1179, 95, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (RAND_INT_RANGE(0, 10) >= 5)
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1179, 101, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(&bLocal_1179, 100, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							break;
					}
					fLocal_1350 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(5.0f, 7.0f));
				}
				break;
			}
	}
	return;
}

bool Function_479(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x190EB / 102635
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_480(&uVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_480(int iParam0, int iParam1) //Position: 0x19190 / 102800
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

void Function_481(int iParam0, struct<2> Param1, bool bParam3, bool bParam4) //Position: 0x191E2 / 102882
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (!IS_ACTOR_MOUNTED(&uVar1))
				{
					if (&bParam4)
					{
						SET_ACTOR_FACTION(&uVar1, 21);
					}
					if (Function_74(StackVal, Param1))
					{
						TASK_FLEE_ACTOR(&uVar1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(&uVar1, &Param1, 3);
					}
					if (!Function_378(&uVar1, &Global_54076, &bParam3))
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

void Function_482() //Position: 0x19277 / 103031
{
	if (bLocal_1155 < 4 && bLocal_1155 > 105)
	{
		Function_371(&bLocal_1294, 55.0f, 120.0f, &bLocal_1181, "Home03_obj_return_farm", "Home03_too_far", &iLocal_1169, 0, 0, 0, 325, 0);
		if (!Function_368(&bLocal_1181, &Global_54076, 55.0f))
		{
			if (!IS_BLIP_VALID(Function_382(12)))
			{
				Function_366(12, 1, 1);
				Function_366(11, 1, 1);
			}
		}
		else if (IS_BLIP_VALID(Function_382(12)))
		{
			Function_366(12, 0, 1);
			Function_366(11, 0, 1);
		}
		Function_481(StackVal, &iLocal_1314, *(&Local_4 + 3736), 0x43160000, 0);
		Function_478();
		Function_329();
		Function_490();
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0,65f);
			Function_214();
			if (IS_OBJECT_VALID(&bLocal_1308))
			{
				DESTROY_OBJECT(&bLocal_1308);
			}
			Function_366(12, 0, 1);
			Function_366(11, 0, 1);
			Function_472();
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			SET_ACTOR_HEALTH(&bLocal_1181, GET_ACTOR_MAX_HEALTH(&bLocal_1181));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (iLocal_1188[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				AUDIO_SET_PLAYER_MOOD(2, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2512[13]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2512[43]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2512[23]), 1, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1181);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 22, 1.0f, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 13, 1.0f, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1179, 4, 1.0f, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1181, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1179, 0);
				Function_184(1, 0, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_318();
			}
			iLocal_1187 = Global_46914[1];
			Function_366(13, 0, 1);
			TASK_STAND_STILL(&bLocal_1179, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1181, -1.0f, 0, 0);
			Function_229(&bLocal_1282);
			bLocal_1155 = true;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_316(iLocal_1187) || iLocal_1187 != 4294967295))
			{
				if (Function_438())
				{
					if (Function_427())
					{
						Function_208(&uLocal_1327, 1);
						Function_208(&uLocal_1329, 1);
						Function_208(&uLocal_1331, 1);
						STOP_PED_SPEAKING(&bLocal_1179, 0);
						OPEN_DOOR_DIRECTION(&uLocal_1329, 1);
						Function_229(&bLocal_1282);
						bLocal_1155 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!SQUAD_IS_VALID(&iLocal_1314))
			{
				iLocal_1314 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "ncavHorses"));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
			if (Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142, bLocal_1154))
			{
				Local_1156 = 1000;
				Function_229(&bLocal_1282);
				bLocal_1155 = 3;
			}
			else
			{
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
				Function_424();
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			Function_241(bLocal_1154);
			Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
			break;
		
		case 0x00000003:
			if (Function_489())
			{
				Function_330();
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_279(2.0f, 3);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!iLocal_1188[2])
			{
				Function_330();
			}
			iLocal_1346 = 0;
			Function_344(&(Local_1474[015]), &bLocal_1179, "Wife", 1, 0x5f5e100, 1);
			Function_344(&(Local_1474[115]), &bLocal_1181, "Son", 1, 0x5f5e100, 1);
			Function_408(&(Local_1474[415]));
			Function_488();
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1536, 0, &Local_4 + 2136, 2);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1536, 1, &Local_4 + 2136, 4294967295);
			Function_216(&Local_4 + 1536, &iLocal_1314);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1536, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1536) | 2048);
			Function_487();
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_SMALL_TEXT();
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_486();
				Function_229(&bLocal_1282);
				bLocal_1155 = 7;
			}
			break;
		
		case 0x00000007:
			if ((Function_292(&bLocal_1282) <= 7.0f || iLocal_1346) || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_229(&bLocal_1282);
				Function_229(&bLocal_1290);
				Function_229(&bLocal_1294);
				bLocal_1155 = 8;
			}
			break;
		
		case 0x00000008:
			if (iLocal_1346)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_485();
				Function_229(&bLocal_1282);
				bLocal_1155 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_292(&bLocal_1282) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_484();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "GUNFIGHT_3", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_229(&bLocal_1282);
				bLocal_1155 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_292(&bLocal_1282) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Home03_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_366(12, 0, 1);
				Function_366(11, 0, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 11;
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1536) < 0)
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_451(&Local_4 + 1536);
				Function_229(&bLocal_1282);
				bLocal_1155 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_311(&iLocal_1250);
			if (Function_292(&bLocal_1282) <= 2.0f)
			{
				Function_483();
				TASK_OVERRIDE_SET_POSTURE(&bLocal_1181, 1);
				TASK_OVERRIDE_SET_POSTURE(&bLocal_1179, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_311(&iLocal_1250);
			if (Function_292(&bLocal_1282) <= 5,5f)
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1188[3] = 1;
			Function_211();
			Function_229(&bLocal_1282);
			bLocal_1154 = 4;
			bLocal_1155 = false;
			break;
	}
	return;
}

void Function_483() //Position: 0x19895 / 104597
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_NoMoveUntilCovered", "Home03_NoMoveUntilCovered", 5, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x198F1 / 104689
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_SpottedEnemyHills", "Home03_SpottedEnemyHills", 5, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x1994B / 104779
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home03_MoreTopOfHill", "Home03_MoreTopOfHill", 0, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x1999D / 104861
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_RunForBarn", "Home03_RunForBarn", 5, 2, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x199E9 / 104937
{
	AUDIO_ADD_ALTERNATE_CONTEXT(&Global_54076, "PLAYER_GUNFIGHT_ARMY", "Home03_JonTauntsAttkrs");
	AUDIO_ADD_ALTERNATE_CONTEXT(&Global_54076, "PLAYER_GUNFIGHT_MULTIPLE_ENEMIES_SHOUT", "Home03_EncoToFams");
	AUDIO_ADD_ALTERNATE_CONTEXT(&bLocal_1181, "TAUNT_FIGHT_MANY_ENEMIES", "Home03_JakYellsAttakrs");
	AUDIO_ADD_ALTERNATE_CONTEXT(&bLocal_1181, "SURROUNDED_BY_ENEMIES", "Home03_PanicDesper");
	return;
}

void Function_488() //Position: 0x19AD9 / 105177
{
	*(&Local_4 + 1536) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "cav_4"));
	*(&Local_4 + 1432[02]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_1", 376, Function_54(), 976, Vector(33,11152f, 127,6979f, 1418,544f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[02], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[02], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[02], 19);
	Function_454(&Local_4 + 1432[02], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[02], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[02], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[02], 0);
	*(&Local_4 + 1432[12]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_2", 373, Function_54(), 977, Vector(31,39193f, 128,0622f, 1424,608f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[12], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[12], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[12], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[12], 19);
	Function_454(&Local_4 + 1432[12], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[12], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[12], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[12], 0);
	*(&Local_4 + 1432[22]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_3", 372, Function_54(), 983, Vector(33,57235f, 126,4941f, 1412f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[22], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[22], 13, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[22], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[22], 19);
	Function_454(&Local_4 + 1432[22], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[22], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[22], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[22], 0);
	*(&Local_4 + 1432[32]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_4", 372, Function_54(), 976, Vector(34,12048f, 126,5576f, 1404.0f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[32], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[32], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[32], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[32], 19);
	Function_454(&Local_4 + 1432[32], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[32], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[32], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[32], 0);
	*(&Local_4 + 1432[42]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_5", 373, Function_54(), 977, Vector(33,62958f, 127,089f, 1396f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[42], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[42], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[42], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[42], 19);
	Function_454(&Local_4 + 1432[42], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[42], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[42], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[42], 0);
	*(&Local_4 + 1432[52]) = Function_358(StackVal, StackVal, &Local_4, "cav_4_6", 374, Function_54(), 987, Vector(34,30543f, 126,4361f, 1388,016f), Vector(0.0f, 68,94843f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1432[52], &Local_4 + 1536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1432[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1432[52], 13, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1432[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1432[52], 1);
	SET_ACTOR_FACTION(&Local_4 + 1432[52], 19);
	Function_454(&Local_4 + 1432[52], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1432[52], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1432[52], 160.0f, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1432[52], 0);
	return;
}

bool Function_489() //Position: 0x1A006 / 106502
{
	return Function_413("$/cutscene/HOME03_CS04_SEQ/HOME03_CS04_SEQ", &Local_1156, &Local_1142, &bLocal_1154, 88896, 88458, 87778, 86876, 86655, 86648, 0, 1, 1, 2, 2, 0, 1);
}

void Function_490() //Position: 0x1A064 / 106596
{
	var uVar0;
	struct<2> Var1;
	
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1536) >= 0)
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 1536, false);
		if (!iLocal_1346)
		{
			if ((((!IS_ACTOR_ALIVE(&uVar0) || !IS_ACTOR_RIDING(&uVar0)) || GET_TASK_STATUS(&uVar0, 6) == 1) || Function_492(&Local_4 + 1536) < 0) || !IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2200))
			{
				if (bLocal_1155 >= 7)
				{
					iLocal_1346 = 1;
					GET_VOLUME_CENTER(&Local_4 + 2144, &Var1);
					Function_491(StackVal, &Local_4 + 1536, Var1, 3, 5.0f, 22.0f);
					Function_460(&Local_4 + 1536, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
			}
		}
	}
	return;
}

void Function_491(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0x1A108 / 106760
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar6;
	
	bVar0 = false;
	FIND_GROUND_INTERSECTION(&uParam1, 10.0f, &uVar4, &uVar6);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		fVar2 = RAND_FLOAT_RANGE(&uParam4, &uParam5);
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &uVar4, fVar2, iParam3);
		TASK_DISMOUNT(0, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar3, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		bVar0++;
	}
}

int Function_492(int iParam0) //Position: 0x1A176 / 106870
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (Function_443(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_493() //Position: 0x1A1C6 / 106950
{
	if (bLocal_1155 < 4 && bLocal_1155 > 105)
	{
		Function_481(StackVal, &iLocal_1314, *(&Local_4 + 3736), 200.0f, 0);
		Function_504();
		if (IS_ACTOR_VALID(&Local_4 + 1848[02]))
		{
			Function_502(&Local_4 + 1848[02]);
		}
		if (IS_ACTOR_ALIVE(&bLocal_1181))
		{
			Function_371(&bLocal_1294, 60.0f, 200.0f, &bLocal_1181, "Son_return", "Son_abandoned", &iLocal_1169, 0, 0, 0, 325, 1);
			if (!Function_368(&bLocal_1181, &Global_54076, 60.0f))
			{
				if (bLocal_1155 > 10)
				{
					if (IS_BLIP_VALID(Function_382(13)))
					{
						Function_366(13, 0, 1);
					}
				}
				Function_366(12, 1, 1);
			}
			else
			{
				if (bLocal_1155 > 10)
				{
					if (!IS_BLIP_VALID(Function_382(13)))
					{
						Function_366(13, 1, 1);
					}
				}
				Function_366(12, 0, 1);
			}
		}
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			Function_366(12, 1, 1);
			Function_366(11, 1, 1);
			SET_ACTOR_ONE_SHOT_DEATH(&bLocal_1179, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_214();
			if (IS_OBJECT_VALID(&bLocal_1308))
			{
				DESTROY_OBJECT(&bLocal_1308);
			}
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			SET_ACTOR_HEALTH(&bLocal_1181, GET_ACTOR_MAX_HEALTH(&bLocal_1181));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			Function_318();
			if (!SQUAD_IS_VALID(&iLocal_1314))
			{
				iLocal_1314 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "ncavHorses"));
			}
			iLocal_1187 = Global_46914[1];
			TASK_STAND_STILL(&bLocal_1179, -1.0f, 0, 0);
			TASK_STAND_STILL(&bLocal_1181, -1.0f, 0, 0);
			Function_366(13, 0, 1);
			if (iLocal_1188[1] != 0 || iLocal_1188[0] != 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				TELEPORT_ACTOR(&bLocal_1185, &Local_4 + 2768[63], 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2352[03]), 0, 1, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2352[13]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2352[23]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2352[33]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_4 + 1848[02], *(&Local_4 + 2352[53]), 1, 1, 1);
				TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
				Function_184(1, 0, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_229(&bLocal_1282);
				bLocal_1155 = true;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_429()) && (Function_316(iLocal_1187) || iLocal_1187 != 4294967295))
			{
				if (Function_438())
				{
					Function_229(&bLocal_1282);
					bLocal_1155 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_208(&uLocal_1327, 1);
			Function_208(&uLocal_1329, 1);
			Function_208(&uLocal_1331, 1);
			if (Function_362(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142, bLocal_1154))
			{
				Local_1156 = 1000;
				Function_229(&bLocal_1282);
				bLocal_1155 = 3;
			}
			else
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			Function_241(bLocal_1154);
			Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
			break;
		
		case 0x00000003:
			if (Function_501())
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_DOOR_VALID(&uLocal_1329))
			{
				if (IS_DOOR_OPENED(&uLocal_1329))
				{
					AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
					GIVE_WEAPON_TO_ACTOR(&bLocal_1179, 4, 0,25f, 1, 1);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1181);
					GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 22, 1.0f, 1, 1);
					GIVE_WEAPON_TO_ACTOR(&bLocal_1181, 13, 1.0f, 1, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1181, 0);
					TASK_STAND_STILL(&bLocal_1181, -1.0f, 0, 0);
					UNK_0x2E84E682(&bLocal_1181, 0);
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1181, 25.0f);
					if (!ACTOR_HAS_WEAPON(&bLocal_1183, 9))
					{
						DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1183);
						GIVE_WEAPON_TO_ACTOR(&bLocal_1183, 9, 1.0f, 1, 1);
					}
					TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1183, 0);
					UNK_0x2E84E682(&bLocal_1183, 0);
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_366(12, 0, 1);
					Function_366(11, 0, 1);
					Function_366(13, 0, 1);
					TASK_CROUCH(&bLocal_1179, -1.0f);
					STOP_PED_SPEAKING(&bLocal_1179, 1);
					Function_500();
					Function_216(&Local_4 + 1296, &iLocal_1314);
					Function_460(&Local_4 + 1296, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_453(&Local_4 + 1296, &Global_54076, 1);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1296, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1296) | 2048);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_4 + 1296, 0);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
					iLocal_1307 = 0;
					Function_344(&(Local_1474[015]), &bLocal_1183, "Uncle", 0, 0x5f5e100, 1);
					Function_344(&(Local_1474[115]), &bLocal_1179, "Wife", 0, 0x5f5e100, 1);
					Function_344(&(Local_1474[215]), &bLocal_1181, "Son", 0, 0x5f5e100, 1);
					Function_344(&(Local_1474[415]), &Local_4 + 1848[02], "Dog", 0, 0x5f5e100, 1);
					iLocal_1346 = 0;
					uLocal_1318 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "intoHouseSquad"));
					uLocal_1324 = Vector(0.0f, 0.0f, -3.0f);
					bLocal_1306 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 3944, 3.0f, 3);
					TASK_KILL_CHAR(false, &Global_54076);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1318, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_1306);
					TASK_SEQUENCE_RELEASE(bLocal_1306, 1);
					bLocal_1306 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 3968, 3.0f, 3);
					TASK_KILL_CHAR(false, &Global_54076);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1318, false, 1, 2);
					TASK_SEQUENCE_PERFORM(false, bLocal_1306);
					TASK_SEQUENCE_RELEASE(bLocal_1306, 1);
					uLocal_1320 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "intoPorchSquad"));
					bLocal_1306 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_4 + 3792, 2.0f, 3);
					TASK_KILL_CHAR(false, &Global_54076);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1320, false, 1, 3);
					TASK_SEQUENCE_PERFORM(false, bLocal_1306);
					TASK_SEQUENCE_RELEASE(bLocal_1306, 1);
					uLocal_1640 = CREATE_EVENT_TRAP("etShotImpact", 5, &Local_4);
					EVENT_TRAP_ON_SPHERE(&uLocal_1640, *(&Local_4 + 2352[03]), 5.0f);
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
					uLocal_1322 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "SonDefendSquad"));
					Function_499();
					Function_229(&bLocal_1282);
					bLocal_1155 = 5;
				}
				else
				{
					OPEN_DOOR_DIRECTION_FAST(&uLocal_1329, 1);
				}
			}
			else
			{
				uLocal_1329 = Function_439("beechersHope", "house01", 2);
			}
			break;
		
		case 0x00000005:
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_498();
				Function_229(&bLocal_1282);
				bLocal_1155 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_496())
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_292(&bLocal_1282) <= 6.0f)
			{
				Function_366(12, 0, 1);
				Function_366(13, 0, 1);
				Function_381("Home03_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&bLocal_1282);
				Function_229(&bLocal_1290);
				Function_229(&bLocal_1294);
				bLocal_1155 = 9;
			}
			break;
		
		case 0x00000009:
			Function_478();
			if (iLocal_1307 > 10)
			{
				if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1318)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1320)) < 0)
				{
					Function_208(&uLocal_1353, 1);
					STOP_PED_SPEAKING(&bLocal_1179, 0);
					AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_451(&Local_4 + 1296);
					Function_451(&Local_4 + 1424);
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
					Function_229(&bLocal_1282);
					bLocal_1155 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_495();
			if (Function_292(&bLocal_1282) <= 2.0f)
			{
				Function_366(13, 1, 1);
				Function_366(12, 0, 1);
				iLocal_1346 = 0;
				Function_381("Home03_obj04_done_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SQUAD_LEAVE(&bLocal_1181);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1181, &Local_4 + 2512[73], 2);
				DESTROY_OBJECT(&uLocal_1322);
				Function_229(&bLocal_1282);
				bLocal_1155 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_495();
			Function_366(13, 1, 1);
			if (Function_368(&bLocal_1183, &Global_54076, 4.0f) && IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2208))
			{
				Function_366(13, 0, 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000000C:
			Function_495();
			if (IntToFloat(iLocal_1419) <= 5.0f)
			{
				if (!DECOR_CHECK_EXIST(&bLocal_1183, "nbFakeDead"))
				{
					SET_ANIM_SET_FOR_ACTOR(&bLocal_1183, "uncle_injured", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/death");
					SET_REACT_NODE_FOR_ACTOR(&bLocal_1183, "uncle_injured/death_idle");
					DECOR_SET_BOOL(&bLocal_1183, "nbFakeDead", 1);
					Function_408(&(Local_1474[015]));
				}
			}
			if (Function_494(&uLocal_1357))
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_495();
			if (Function_292(&bLocal_1282) <= 2.0f)
			{
				Function_381("Home03_obj04_done_2", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_366(13, 0, 1);
				Function_366(11, 1, 1);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1181, &Local_4 + 2512[33], 1);
				Function_229(&bLocal_1282);
				bLocal_1155 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_495();
			if (Function_368(&bLocal_1179, &Global_54076, 6.0f))
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_495())
			{
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1181, 1.0f);
				STOP_PED_SPEAKING(&bLocal_1179, 0);
				Function_212();
				iLocal_1188[2] = 1;
				Function_229(&bLocal_1282);
				bLocal_1154 = 3;
				bLocal_1155 = false;
			}
			break;
	}
	return;
}

bool Function_494(struct<5>[] Param0) //Position: 0x1AC18 / 109592
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Param0[iVar05].f_28 == 1)
		{
			if ((((Param0[iVar05].f_12 != 0 && HUD_IS_SHOWING_SMALL_TEXT()) || (Param0[iVar05].f_12 != 2 && HUD_IS_SHOWING_OBJECTIVE())) || (Param0[iVar05].f_12 != 1 && HUD_IS_SHOWING_HELP_TEXT())) || (Param0[iVar05].f_12 != 3 && HUD_IS_SHOWING_BIG_TEXT()))
			{
				iVar1 = 0;
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_495() //Position: 0x1AC95 / 109717
{
	var uVar0;
	var uVar2;
	bool bVar4;
	int iVar5;
	
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME03_CS04_SEQ/HOME03_CS04_SEQ"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/HOME03_CS04_SEQ/HOME03_CS04_SEQ", 0, 2, 1, 2, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_359(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (iVar5 != GET_ACTOR_ENUM(&bLocal_1181) || (iVar5 != 638 && GET_ACTOR_ENUM(&bLocal_1181) != 640))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1181);
						}
						if (iVar5 == GET_ACTOR_ENUM(&bLocal_1179))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1179);
						}
						if (iVar5 == GET_ACTOR_ENUM(&bLocal_1183))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1183);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

bool Function_496() //Position: 0x1AE2C / 110124
{
	if (IS_ACTOR_SHOOTING(&Global_54076) || !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		Function_497(&Local_4 + 1296, 150.0f, 270.0f);
		return 1;
	}
	return 0;
}

void Function_497(var uParam0, bool bParam1, bool bParam2) //Position: 0x1AE5C / 110172
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (bParam1 <= 0.0f)
			{
				SET_ACTOR_VISION_MAX_RANGE(&uVar1, bParam1, 1);
			}
			if (bParam2 <= 0.0f)
			{
				SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_498() //Position: 0x1AEBE / 110270
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Home03_ArmyBant_v1_AA", "Home03_ArmyBant_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home03_ArmyBant_v1_AB", "Home03_ArmyBant_v1_AB", 5, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Home03_ArmyBant_v1_AC", "Home03_ArmyBant_v1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home03_ArmyBant_v1_AD", "Home03_ArmyBant_v1_AD", 5, 1, 1, 0, 1);
		Function_340(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x1AFBD / 110525
{
	AUDIO_ADD_ALTERNATE_CONTEXT(&Global_54076, "PLAYER_GUNFIGHT_ARMY", "Home03_JonTauntsAttkrs");
	AUDIO_ADD_ALTERNATE_CONTEXT(&Global_54076, "PLAYER_GUNFIGHT_MULTIPLE_ENEMIES_SHOUT", "Home03_EncoToFams");
	AUDIO_ADD_ALTERNATE_CONTEXT(&bLocal_1181, "TAUNT_FIGHT_MANY_ENEMIES", "Home03_JakYellsAttakrs");
	AUDIO_ADD_ALTERNATE_CONTEXT(&bLocal_1181, "SURROUNDED_BY_ENEMIES", "Home03_PanicDesper");
	return;
}

void Function_500() //Position: 0x1B0AD / 110765
{
	*(&Local_4 + 1296) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "cav_2"));
	*(&Local_4 + 1144[02]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_1", 376, Function_54(), 976, Vector(-93,89668f, 119,7488f, 1551,819f), Vector(0.0f, 76,63326f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[02], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[02], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[02], 19);
	Function_454(&Local_4 + 1144[02], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[02], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[02], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[02], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[02], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[02], 28, 0.0f);
	*(&Local_4 + 1144[12]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_2", 373, Function_54(), 977, Vector(-86,27238f, 118,3042f, 1552f), Vector(0.0f, 69,60204f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[12], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[12], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[12], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[12], 19);
	Function_454(&Local_4 + 1144[12], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[12], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[12], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[12], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[12], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[12], 28, 0.0f);
	*(&Local_4 + 1144[22]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_3", 372, Function_54(), 983, Vector(-79,8556f, 118,9456f, 1548f), Vector(0.0f, 89,55114f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[22], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[22], 13, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[22], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[22], 19);
	Function_454(&Local_4 + 1144[22], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[22], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[22], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[22], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[22], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[22], 28, 0.0f);
	*(&Local_4 + 1144[32]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_4", 372, Function_54(), 976, Vector(-76,73651f, 119,0452f, 1552f), Vector(0.0f, 82,80673f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[32], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[32], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[32], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[32], 19);
	Function_454(&Local_4 + 1144[32], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[32], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[32], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[32], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[32], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[32], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[32], 28, 0.0f);
	*(&Local_4 + 1144[42]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_5", 373, Function_54(), 977, Vector(-72,22192f, 119,944f, 1547,778f), Vector(0.0f, 84,87484f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[42], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[42], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[42], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[42], 19);
	Function_454(&Local_4 + 1144[42], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[42], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[42], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[42], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[42], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[42], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[42], 28, 0.0f);
	*(&Local_4 + 1144[52]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_6", 374, Function_54(), 987, Vector(-68,46457f, 119,8221f, 1552f), Vector(0.0f, 76,00668f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[52], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[52], 13, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[52], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[52], 19);
	Function_454(&Local_4 + 1144[52], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[52], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[52], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[52], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[52], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[52], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[52], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[52], 28, 0.0f);
	*(&Local_4 + 1144[62]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_7", 373, Function_54(), 976, Vector(-64,00024f, 120,6455f, 1548.0f), Vector(0.0f, 59,02731f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[62], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[62], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[62], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[62], 19);
	Function_454(&Local_4 + 1144[62], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[62], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[62], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[62], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[62], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[62], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[62], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[62], 28, 0.0f);
	*(&Local_4 + 1144[72]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_8", 372, Function_54(), 976, Vector(-60,11501f, 120,4434f, 1551,885f), Vector(0.0f, 63,1383f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[72], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[72], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[72], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[72], 19);
	Function_454(&Local_4 + 1144[72], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[72], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[72], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[72], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[72], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[72], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[72], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[72], 28, 0.0f);
	*(&Local_4 + 1144[82]) = Function_358(StackVal, StackVal, &Local_4, "cav_2_9", 373, Function_54(), 977, Vector(-56,32329f, 121,037f, 1548f), Vector(0.0f, 84,87484f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1144[82], &Local_4 + 1296);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1144[82]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1144[82], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1144[82], 1);
	SET_ACTOR_FACTION(&Local_4 + 1144[82], 19);
	Function_454(&Local_4 + 1144[82], &Global_54076, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1144[82], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_4 + 1144[82], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[82], 53, 30.0f);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1144[82], 105.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1144[82], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1144[82], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1144[82], 28, 0.0f);
	return;
}

bool Function_501() //Position: 0x1BA20 / 113184
{
	return Function_413("$/cutscene/HOME03_CS03/HOME03_CS03", &Local_1156, &Local_1142, &bLocal_1154, 88896, 88458, 87778, 86876, 86655, 86648, 0, 1, 1, 2, 2, 0, 1);
}

void Function_502(bool bParam0) //Position: 0x1BA76 / 113270
{
	switch (iLocal_1307)
	{
		case 0x00000000:
		case 0x00000001:
			if (!DECOR_CHECK_EXIST(&bParam0, "niDogState"))
			{
				DECOR_SET_INT(&bParam0, "niDogState", false);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bParam0, 0, "BARK");
				fLocal_1352 = GET_CURRENT_GAME_TIME();
				fLocal_1352 = fLocal_1352;
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bParam0, &Local_4 + 3456[03], 4);
			}
			if (DECOR_GET_INT(&bParam0, "niDogState") == 0)
			{
				if (((Function_479(&Local_4 + 1296, &bParam0, 80.0f, 1) || !IS_OBJECT_VALID(&uLocal_1640)) || Function_503(&Local_4 + 1296) < 0.0f) || bLocal_1155 <= 9)
				{
					SET_ACTOR_USE_COARSE_BOUNDS(&bParam0, 0);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &bParam0, &Local_4 + 3456[13], 4);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bParam0);
					DECOR_SET_INT(&bParam0, "niDogState", true);
				}
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (IS_ACTOR_VALID(&bParam0))
			{
				if (Function_333(StackVal, &bParam0, *(&Local_4 + 3456[13]), 5.0f))
				{
					if (!Function_443(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_408(&(Local_1474[415]));
						DESTROY_ACTOR(&bParam0);
					}
				}
			}
			break;
	}
	return;
}

float Function_503(void fParam0) //Position: 0x1BBE0 / 113632
{
	bool bVar0;
	var uVar1;
	void fVar2;
	
	bVar0 = false;
	fVar2 = -1.0f;
	if (SQUAD_IS_VALID(&fParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&fParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&fParam0, bVar0);
			if (GET_LAST_ATTACK_TIME(&uVar1) < fVar2)
			{
				fVar2 = GET_LAST_ATTACK_TIME(&uVar1);
			}
			bVar0++;
		}
	}
	return fVar2;
}

void Function_504() //Position: 0x1BC2F / 113711
{
	var uVar0;
	
	if (SQUAD_IS_VALID(&Local_4 + 1296))
	{
		if (DECOR_CHECK_EXIST(&Local_4 + 1296, "fLastGrenade"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_4 + 1296, "fLastGrenade")) < 35.0f)
			{
				Function_528(&Local_4 + 1296, &Global_54076, 23, 6.0f, 4.0f, 90.0f);
				DECOR_SET_FLOAT(&Local_4 + 1296, "fLastGrenade", GET_CURRENT_GAME_TIME());
			}
		}
		switch (iLocal_1307)
		{
			case 0x00000000:
				Function_526(&Local_4 + 1296);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2200, 4, 0);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2208, 4, 0);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2120, 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2096, 4294967295);
				iLocal_1307 = 1;
				Function_229(&bLocal_1286);
				break;
			
			case 0x00000001:
				Function_525(&Local_4 + 1296, 60.0f);
				Function_523(&Local_4 + 1296, &Local_4 + 4440, 10.0f);
				Function_523(&Local_4 + 1296, &Local_4 + 4456, 10.0f);
				if (Function_503(&Local_4 + 1296) < 0.0f)
				{
					TASK_CROUCH(&bLocal_1181, -1.0f);
					TASK_CROUCH(&bLocal_1183, -1.0f);
				}
				if (Function_521(&Local_4 + 1296, &Global_54076, 0, 0))
				{
					Function_520(&Local_4 + 1296, 3);
				}
				if (Function_518(&Local_4 + 1296, &Local_4 + 4488, 1))
				{
					DESTROY_OBJECT(&uLocal_1640);
					DECOR_SET_FLOAT(&bLocal_1183, "fStartUninjured", GET_CURRENT_GAME_TIME());
					AI_SET_WEAPON_MAX_RANGE(&bLocal_1183, 100.0f);
					GET_OBJECT_POSITION(&Local_4 + 3624, &uVar0);
					iLocal_1307 = TASK_SEQUENCE_OPEN();
					TASK_SHOOT_AT_COORD_FROM_POSITION(0, &uVar0, &Local_4 + 2352[33], 15.0f);
					Function_517(&bLocal_1183, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_1183, iLocal_1307);
					TASK_SEQUENCE_RELEASE(bLocal_1307, 1);
					Function_516(&Local_4 + 1296);
					Function_515(&bLocal_1183, &Local_4 + 1296, 1);
					SAY_SINGLE_LINE_SCRIPTED(&bLocal_1183, "Home03_YellsAtSoldiers", 0, 1, 1, 0, 0, 0);
					AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "GUNFIGHT_2", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_514(&Local_4 + 1296, &bLocal_1183);
					Function_356(&Local_4 + 1296);
					Local_1156 = 1000;
					bLocal_1307 = 2;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000002:
				Function_513();
				if (Function_292(&bLocal_1286) <= 8.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) >= 4)
				{
					SQUAD_GOALS_CLEAR(&Local_4 + 1296);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1296, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					Local_1156 = 1000;
					bLocal_1307 = 3;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000003:
				Function_512();
				if (Function_511())
				{
					SQUAD_JOIN(&bLocal_1181, &uLocal_1322);
					SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&uLocal_1322, 0, &Local_4 + 2208, 4, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_1322, true, 1, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					Function_356(&uLocal_1322);
					iLocal_1346 = 1;
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					AUDIO_SET_PLAYER_MOOD(2, 0);
					Function_332();
					SQUAD_GOALS_CLEAR(&Local_4 + 1296);
					Function_356(&Local_4 + 1296);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2200, 4, 0);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2208, 4, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2120, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2088, 4294967295);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2096, 3);
					DECOR_SET_FLOAT(&Local_4 + 1296, "fLastGrenade", GET_CURRENT_GAME_TIME());
					Local_1156 = 1000;
					bLocal_1307 = 4;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000004:
				Function_508(&Local_4 + 2200, 6.0f, "fIntoHouse", &uLocal_1318, 4);
				if (Function_292(&bLocal_1286) <= 10.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) >= 0)
				{
					SQUAD_GOALS_CLEAR(&Local_4 + 1296);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2200, 4, 0);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2208, 4, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2112, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2080, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2120, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2184, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2192, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 4, &Local_4 + 2088, 4294967295);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 4, &Local_4 + 2096, 4294967295);
					bLocal_1307 = 5;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000005:
				Function_508(&Local_4 + 2200, 6.0f, "fIntoHouse", &uLocal_1318, 4);
				if (!SQUAD_IS_VALID(&Local_4 + 1424))
				{
					DECOR_SET_BOOL(&uLocal_1638, "bVerifyUncleShot", 1);
					Function_507();
					Function_216(&Local_4 + 1424, &iLocal_1314);
					Function_506(&Local_4 + 1424, 0);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1424, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1424) | 2048);
					Function_453(&Local_4 + 1424, &Global_54076, 1);
					bLocal_1307 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &Local_4 + 4464, 3, 1, 0, 1, -1,5f);
					TASK_FOLLOW_PATH(0, &Local_4 + 4472, 4, 1, 0, 1, 0);
					TASK_DISMOUNT(0, 1);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1424, false, 0, (Function_505(&Local_4 + 1424) / 2));
					TASK_SEQUENCE_PERFORM(false, bLocal_1307);
					bLocal_1307 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(0, &Local_4 + 4464, 3, 1, 0, 1, 1,5f);
					TASK_FOLLOW_PATH(0, &Local_4 + 4480, 4, 1, 0, 1, 0);
					TASK_DISMOUNT(0, 1);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1424, true, 0, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_1307);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1424, 0, &Local_4 + 2200, 4, 0);
					TASK_SEQUENCE_RELEASE(bLocal_1307, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1424, 2, &Local_4 + 2120, 4294967295);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1424, 2, &Local_4 + 2136, 4294967295);
					bLocal_1307 = 6;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000006:
				Function_508(&Local_4 + 2200, 6.0f, "fIntoHouse", &uLocal_1318, 4);
				Function_508(&Local_4 + 2208, 35.0f, "fIntoPorch", &uLocal_1320, 3);
				Function_525(&Local_4 + 1424, 60.0f);
				if (Function_468(&Local_4 + 1424) < 0)
				{
					Function_506(&Local_4 + 1424, 1);
					SQUAD_GOALS_CLEAR(&Local_4 + 1296);
					Function_356(&Local_4 + 1424);
					SQUADS_MERGE(&Local_4 + 1424, &Local_4 + 1296);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2200, 4, 0);
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 1296, 0, &Local_4 + 2208, 4, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2120, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2128, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 2, &Local_4 + 2104, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2112, 1);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2080, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 3, &Local_4 + 2184, 2);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1296, 4, &Local_4 + 2192, 4294967295);
					bLocal_1307 = 7;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000007:
				Function_508(&Local_4 + 2200, 6.0f, "fIntoHouse", &uLocal_1318, 4);
				Function_508(&Local_4 + 2208, 35.0f, "fIntoPorch", &uLocal_1320, 3);
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) < 6)
				{
					bLocal_1307 = 8;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000008:
				Function_508(&Local_4 + 2200, 6.0f, "fIntoHouse", &uLocal_1318, 4);
				Function_508(&Local_4 + 2208, 35.0f, "fIntoPorch", &uLocal_1320, 3);
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) < 3)
				{
					SQUADS_MERGE(&uLocal_1318, &Local_4 + 1296);
					SQUADS_MERGE(&uLocal_1320, &Local_4 + 1296);
					SQUADS_MERGE(&Local_4 + 1424, &Local_4 + 1296);
					SQUAD_GOALS_CLEAR(&Local_4 + 1296);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1296, false, 0, 4294967295);
					TASK_GO_TO_COORD(0, &Local_4 + 3736, 4);
					bLocal_1307 = 9;
					Function_229(&bLocal_1286);
				}
				break;
			
			case 0x00000009:
				bLocal_1307 = 10;
				Function_229(&bLocal_1286);
				break;
			
			case 0x0000000A:
				Function_446(&Local_4 + 1296, 0, 60.0f);
				break;
			}
	}
	return;
}

int Function_505(int iParam0) //Position: 0x1C4C5 / 115909
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_506(var uParam0, bool bParam1) //Position: 0x1C51B / 115995
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_507() //Position: 0x1C562 / 116066
{
	*(&Local_4 + 1424) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "cav_3"));
	*(&Local_4 + 1304[02]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_1", 372, Function_54(), 976, Vector(-113,146f, 113,3387f, 1170,715f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[02], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[02], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[02], 19);
	Function_454(&Local_4 + 1304[02], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[02], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[02], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[02], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[02], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[02], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[02], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[02], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[02], 28, 0.0f);
	*(&Local_4 + 1304[12]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_2", 373, Function_54(), 977, Vector(-111,7772f, 113,4431f, 1168,227f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[12], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[12], 13, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[12], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[12], 19);
	Function_454(&Local_4 + 1304[12], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[12], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[12], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[12], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[12], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[12], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[12], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[12], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[12], 28, 0.0f);
	*(&Local_4 + 1304[22]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_3", 374, Function_54(), 987, Vector(-115,3383f, 113,4431f, 1166,898f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[22], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[22], 13, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[22], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[22], 19);
	Function_454(&Local_4 + 1304[22], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[22], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[22], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[22], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[22], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[22], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[22], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[22], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[22], 28, 0.0f);
	*(&Local_4 + 1304[32]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_4", 372, Function_54(), 976, Vector(-113,1702f, 113,4431f, 1165,189f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[32], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[32], 17, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[32], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[32], 19);
	Function_454(&Local_4 + 1304[32], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[32], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[32], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[32], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[32], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[32], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[32], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[32], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[32], 28, 0.0f);
	*(&Local_4 + 1304[42]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_5", 373, Function_54(), 977, Vector(-117,1702f, 112,7351f, 1164,097f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[42], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[42], 41, 0,999f, 1, 1);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Local_4 + 1304[42], 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[42], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[42], 19);
	Function_454(&Local_4 + 1304[42], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[42], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[42], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[42], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[42], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[42], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[42], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[42], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[42], 28, 0.0f);
	*(&Local_4 + 1304[52]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_6", 374, Function_54(), 977, Vector(-115,3267f, 113,0649f, 1161,685f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[52], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[52], 17, 0,999f, 1, 1);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Local_4 + 1304[52], 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[52], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[52], 19);
	Function_454(&Local_4 + 1304[52], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[52], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[52], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[52], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[52], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[52], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[52], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[52], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[52], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[52], 28, 0.0f);
	*(&Local_4 + 1304[62]) = Function_358(StackVal, StackVal, &Local_4, "cav_3_7", 372, Function_54(), 980, Vector(-119,1989f, 113,4431f, 1160,801f), Vector(0.0f, 198,5056f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1304[62], &Local_4 + 1424);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1304[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1304[62], 41, 0,999f, 1, 1);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Local_4 + 1304[62], 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1304[62], 1);
	SET_ACTOR_FACTION(&Local_4 + 1304[62], 19);
	Function_454(&Local_4 + 1304[62], &Global_54076, 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1304[62], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1304[62], 160.0f, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_4 + 1304[62], true);
	ADD_BLIP_FOR_ACTOR(&Local_4 + 1304[62], 322, 0, 2, 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1304[62], 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_4 + 1304[62], 359.0f);
	AI_RIDING_SET_ENABLED(&Local_4 + 1304[62], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[62], 53, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_4 + 1304[62], 28, 0.0f);
	return;
}

void Function_508(var uParam0, float fParam1, float fParam2, var uParam3, int iParam4) //Position: 0x1CDCC / 118220
{
	int iVar0;
	
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &uParam0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= fParam1)
		{
			if (DECOR_CHECK_EXIST(&uParam0, &fParam2))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uParam0, &fParam2)) <= fParam1)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1296) >= 0)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1320) <= iParam4)
						{
							iVar0 = Function_509(&Local_4 + 1296, &Global_54076, 1, 0);
							SQUAD_LEAVE(&iVar0);
							SQUAD_JOIN(&iVar0, &uParam3);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 28, 0.0f);
							MEMORY_ALLOW_TAKE_COVER(&iVar0, 0);
						}
						else
						{
							DECOR_SET_FLOAT(&uParam0, &fParam2, GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			else
			{
				DECOR_SET_FLOAT(&uParam0, &fParam2, (GET_CURRENT_GAME_TIME() - fParam1));
			}
		}
	}
}

var Function_509(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1CE7E / 118398
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		fVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&fVar4), iVar5))
			{
				fVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&fVar4))
			{
				fVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&fVar4) && IS_ACTOR_ALIVE(&fVar4))
		{
			fVar3 = Function_510(&fVar4, &bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

var Function_510(float fParam0, bool bParam1) //Position: 0x1CF49 / 118601
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_511() //Position: 0x1D03E / 118846
{
	return Function_413("$/cutscene/HOME03_CS04_C/HOME03_CS04_C", &Local_1156, &Local_1142, &bLocal_1154, 88896, 88458, 87778, 86876, 86655, 86648, 0, 1, 1, 2, 2, 0, 1);
}

void Function_512() //Position: 0x1D098 / 118936
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	if (GET_CURRENT_GAME_TIME() < fLocal_1351)
	{
		GET_OBJECT_POSITION(&Local_4 + 3632, &Var2);
		GET_OBJECT_AXIS(&Local_4 + 3632, &Var4, 0);
		VSCALE(&Var4, RAND_FLOAT_RANGE(-3.0f, 3.0f));
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var2, StackVal);
		GET_OBJECT_AXIS(&Local_4 + 3632, &Var4, 1);
		VSCALE(&Var4, RAND_FLOAT_RANGE(-0,5f, 1,1f));
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var2, StackVal);
		GET_OBJECT_POSITION(&Local_4 + 3624, &Var0);
		GET_OBJECT_AXIS(&Local_4 + 3624, &Var4, 0);
		VSCALE(&Var4, RAND_FLOAT_RANGE(-7.0f, 7.0f));
		Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var0, StackVal);
		GET_OBJECT_AXIS(&Local_4 + 3624, &Var4, 1);
		VSCALE(&Var4, RAND_FLOAT_RANGE(-0,5f, 0,7f));
		Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var4, Var0, StackVal);
		FIRE_PROJECTILE(&bLocal_1181, "base_sniperrifle", 0,0001f, &Var0, &Var2);
		switch (RAND_INT_RANGE(0, 2))
		{
			case 0x00000000:
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_HI_POWER_MASTER", Var0);
				break;
			
			case 0x00000001:
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REPEATER_HI_POWER_MASTER", Var0);
				break;
			
			case 0x00000002:
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_LO_POWER_MASTER", Var0);
				break;
		}
		fLocal_1351 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(0,1f, 0,7f));
	}
	return;
}

int Function_513() //Position: 0x1D241 / 119361
{
	var uVar0;
	var uVar2;
	bool bVar4;
	int iVar5;
	
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME03_CS04_C/HOME03_CS04_C"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/HOME03_CS04_C/HOME03_CS04_C", 0, 2, 1, 2, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_359(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (iVar5 != GET_ACTOR_ENUM(&bLocal_1181) || (iVar5 != 638 && GET_ACTOR_ENUM(&bLocal_1181) != 640))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1181);
						}
						if (iVar5 == GET_ACTOR_ENUM(&bLocal_1183))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1183);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_514(var uParam0, int iParam1) //Position: 0x1D3B8 / 119736
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_SHOOT_AT_OBJECT(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_515(var uParam0, var uParam1, bool bParam2) //Position: 0x1D40D / 119821
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_454(&uParam0, &uVar1, &bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_516(int iParam0) //Position: 0x1D45F / 119903
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_517(var uParam0, int iParam1) //Position: 0x1D4AC / 119980
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&uParam0, &uVar0, GET_HEADING(&uParam0), &iParam1);
	return;
}

bool Function_518(var uParam0, var uParam1, bool bParam2) //Position: 0x1D4CB / 120011
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<2> Var4;
	var uVar6;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (GET_TASK_STATUS(&uVar6, 33) == 1)
		{
			iVar3++;
		}
		else if ((IS_ACTOR_ALIVE(&uVar6) && !IS_ACTOR_RIDING(&uVar6)) && !DECOR_CHECK_EXIST(&uVar6, "nbGetInPos"))
		{
			DECOR_SET_BOOL(&uVar6, "nbGetInPos", 1);
			bVar1 = Function_519(&uVar6, &uParam1);
			GET_PATH_POINT(&uParam1, bVar1, &Var4);
			PRINTSTRING("found dest point - ");
			PRINTVECTOR(Var4);
			PRINTNL();
			if (VDIST(StackVal, Var4, Vector(0.0f, 0.0f, 0.0f)) >= 1.0f)
			{
				TASK_CROUCH(&uVar6, -1.0f);
			}
			else
			{
				PRINTSTRING("OK GO TO SPOT!");
				PRINTNL();
				if (bParam2 && !Function_443(&uVar6, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					TELEPORT_ACTOR(&uVar6, &Var4, 1, 1, 1);
					Function_457(&uVar6, &Global_54076);
				}
				bVar2 = TASK_SEQUENCE_OPEN();
				if (!&bParam2)
				{
					TASK_GO_TO_COORD(0, &Var4, 3);
				}
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&uVar6, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
			}
			SET_POINT_IN_PATH(StackVal, &uParam1, bVar1, Vector(0.0f, 0.0f, 0.0f));
		}
		bVar0++;
	}
	if (Function_505(&uParam0) < iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_519(int iParam0, int iParam1) //Position: 0x1D623 / 120355
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar3 = 4294967295;
	bVar4 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(&iParam1) - 1))
	{
		GET_PATH_POINT(&iParam1, bVar0, &Var1);
		Function_287(&iParam0);
		bVar5 = VDIST(Function_287(&iParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

void Function_520(var uParam0, bool bParam1) //Position: 0x1D67A / 120442
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_521(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D6C9 / 120521
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		iVar2 = GET_MOUNT(&uVar1);
		if (Function_522(&uVar1, &iParam1, bParam2, &bParam3) || Function_522(&iVar2, &iParam1, bParam2, &bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_522(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D726 / 120614
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(&iParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (&bParam3)
		{
			if (GET_LASSO_TARGET(&iParam1) == &iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_523(var uParam0, var uParam1, int iParam2) //Position: 0x1D774 / 120692
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_RIDING(&uVar1))
		{
			if (Function_524(&uVar1, &uParam1, iParam2))
			{
				TASK_DISMOUNT(&uVar1, 1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_524(var uParam0, var uParam1, float fParam2) //Position: 0x1D7BF / 120767
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = (GET_PATH_NUM_POINTS(&uParam1) - 1);
	GET_PATH_POINT(&uParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (Function_336(StackVal, &uParam0, Var0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

void Function_525(var uParam0, bool bParam1) //Position: 0x1D856 / 120918
{
	struct<2> Var0;
	
	if (!Function_479(&uParam0, &Global_54076, bParam1, 1))
	{
		DECOR_SET_BOOL(&uParam0, "bStreamedPos", 1);
		SQUAD_COMPUTE_CENTROID(&uParam0, &Var0);
		STREAMING_LOAD_BOUNDS(Var0, 40.0f, 1);
		Function_506(&uParam0, 0);
	}
	else if (DECOR_CHECK_EXIST(&uParam0, "bStreamedPos"))
	{
		DECOR_REMOVE(&uParam0, "bStreamedPos");
		STREAMING_UNLOAD_BOUNDS();
		Function_506(&uParam0, 1);
	}
	return;
}

void Function_526(int iParam0) //Position: 0x1D8DC / 121052
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (bVar0 <= 2)
		{
			Function_527(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), &Local_4 + 4456, 3);
		}
		else if ((bVar0 % 2) == 0)
		{
			Function_527(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), &Local_4 + 4440, 3);
		}
		else
		{
			Function_527(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), &Local_4 + 4448, 3);
		}
		bVar0++;
	}
	return;
}

void Function_527(bool bParam0, var uParam1, bool bParam2) //Position: 0x1D948 / 121160
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	GET_PATH_POINT(&uParam1, (GET_NUM_PATH_POINTS(&uParam1) - 1), &Var3);
	GET_PATH_POINT(&uParam1, (GET_NUM_PATH_POINTS(&uParam1) - 2), &Var1);
	Var5 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Var3, StackVal);
	VNORMALIZE(&Var5);
	VSCALE(&Var5, 15.0f);
	Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var5, StackVal);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &uParam1, &bParam2, 1, 0, 1, false);
	TASK_GO_NEAR_COORD(false, &Var5, 10.0f, 2);
	TASK_DISMOUNT(0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, true);
	return;
}

void Function_528(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1D9D8 / 121304
{
	var uVar0;
	
	if (SQUAD_GET_SIZE(&uParam0) >= 0)
	{
		uVar0 = Function_532(&uParam0, &uParam1, 10.0f, 35.0f, 0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			Function_529(&uVar0, &uParam1, iParam2, &fParam3, &fParam4, &iParam5);
		}
	}
}

void Function_529(int iParam0, var uParam1, bool bParam2, float fParam3, float fParam4, float fParam5) //Position: 0x1DA1E / 121374
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	GET_POSITION(&uParam1, &Var2);
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var0);
	Var0.f_4 = 0.0f;
	VNORMALIZE(&Var0);
	VSCALE(&Var0, RAND_FLOAT_RANGE(fParam4, fParam3));
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
	Function_531(StackVal, StackVal, Var4, Var2, RAND_FLOAT_RANGE(((&fParam5 / 2.0f) * -1.0f), (&fParam5 / 2.0f)));
	Var4 = Function_531(StackVal, StackVal, Var4, Var2, RAND_FLOAT_RANGE(((&fParam5 / 2.0f) * -1.0f), (&fParam5 / 2.0f)));
	if (!IS_WEAPONENUM_LOCKED(bParam2))
	{
		GIVE_WEAPON_TO_ACTOR(&iParam0, bParam2, false, 1, 1);
		_SET_ACTOR_INFINITE_AMMO_FLAG(&iParam0, GET_AMMO_ENUM(bParam2), 0);
		_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(bParam2), 1.0f, 0);
		ACTOR_PUT_WEAPON_IN_HAND(&iParam0, bParam2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 15, false);
		Function_530(StackVal, &iParam0, Var4, 10.0f);
		Function_287(&iParam0);
		AI_SET_WEAPON_MAX_RANGE(&iParam0, (VDIST(Function_287(&iParam0), Var4) + 5.0f));
		TASK_PRIORITY_SET(&iParam0, true);
	}
}

void Function_530(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1DAE3 / 121571
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_AT_COORD_FROM_POSITION(&uParam0, &uParam1, &uVar0, &uParam3);
}

struct<8> Function_531(vector3 vParam0) //Position: 0x1DB00 / 121600
{
	struct<2> Var0;
	
	vParam0 = (vParam0.x - vParam2.x);
	vParam0.f_4 = (vParam0.y - vParam2.y);
	vParam0.f_8 = (vParam0.z - vParam2.z);
	Var0 = ((COS_DEGREE(bParam4) * vParam0.x) - (SIN_DEGREE(bParam4) * vParam0.z));
	Var0.f_8 = ((COS_DEGREE(bParam4) * vParam0.z) + (SIN_DEGREE(bParam4) * vParam0.x));
	Var0 = (Var0 + vParam2.x);
	Var0.f_4 = (StackVal + vParam2.y);
	Var0.f_8 = (StackVal + vParam2.z);
	return StackVal, Var0;
}

var Function_532(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x1DB7A / 121722
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam4)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_510(&uVar4, &uParam1);
			if (fVar3 > fVar2)
			{
				if (fVar3 < fParam2 && fVar3 > fParam3)
				{
					fVar2 = fVar3;
					bVar1 = bVar0;
				}
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

void Function_533() //Position: 0x1DC3F / 121919
{
	iLocal_1188[1] = 1;
	Function_229(&bLocal_1282);
	bLocal_1154 = 2;
	bLocal_1155 = false;
	return;
}

void Function_534() //Position: 0x1DC5A / 121946
{
	if (bLocal_1155 < 4 && bLocal_1155 > 105)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1136) < 1 && bLocal_1155 < 7)
		{
			Function_478();
		}
		if (IS_ACTOR_ALIVE(&bLocal_1183))
		{
			Function_371(&bLocal_1294, 60.0f, 200.0f, &bLocal_1183, "Uncle_return", "Uncle_abandoned", &iLocal_1169, 0, 0, 0, 325, 1);
			if (!Function_368(&bLocal_1183, &Global_54076, 60.0f))
			{
				Function_366(13, 1, 1);
				if (bLocal_1155 == 13)
				{
					if (IS_OBJECT_VALID(&bLocal_1308))
					{
						Function_475(&bLocal_1308);
					}
				}
			}
			else
			{
				if (bLocal_1155 == 13)
				{
					if (!IS_OBJECT_VALID(&bLocal_1308))
					{
						Function_381("Home03_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
						bLocal_1308 = Function_474(StackVal, StackVal, &Local_4, "GateToYourHouse", (&Local_4 + 3792), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					}
				}
				Function_366(13, 0, 1);
			}
		}
		Function_554();
	}
	switch (bLocal_1155)
	{
		case 0x00000000:
			Function_322(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0,75f);
			Function_366(12, 0, 1);
			Function_366(11, 0, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_318();
			iLocal_1187 = Global_46914[1];
			if (!Function_316(iLocal_1187) && Function_288(&Local_1142))
			{
				Function_364(&Local_1142);
			}
			if (!SQUAD_IS_VALID(&iLocal_1314))
			{
				iLocal_1314 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "ncavHorses"));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2240[03]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1179, *(&Local_4 + 2240[13]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1181, *(&Local_4 + 2240[23]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2512[33]), 1, 1, 1);
			TASK_STAND_STILL(&bLocal_1183, -1.0f, 0, 0);
			Function_229(&bLocal_1282);
			bLocal_1155 = true;
			break;
		
		case 0x00000001:
			Function_549();
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_548())
				{
					if (Function_316(Global_46914[1]) || iLocal_1187 != 4294967295)
					{
						if (Function_438())
						{
							Function_175(&uLocal_1327, 1);
							Function_175(&uLocal_1329, 1);
							Function_175(&uLocal_1331, 1);
							Function_229(&bLocal_1282);
							bLocal_1155 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, *(&Local_4 + 3760), 1, 1, 1);
			Function_241(bLocal_1154);
			Function_295(StackVal, Function_241(bLocal_1154), bLocal_1154, Global_46914[1], Function_243(bLocal_1154), 0);
			TOGGLE_COVER_PROPS(0);
			if (IS_ACTOR_VALID(&bLocal_1183))
			{
				Function_344(&(Local_1474[015]), &bLocal_1183, "Uncle", 0, 0x5f5e100, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1179))
			{
				Function_344(&(Local_1474[115]), &bLocal_1179, "Wife", 0, 0x5f5e100, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_1181))
			{
				Function_344(&(Local_1474[215]), &bLocal_1181, "Son", 0, 0x5f5e100, 1);
			}
			if (IS_ACTOR_VALID(&Local_4 + 1848[02]))
			{
				Function_344(&(Local_1474[415]), &Local_4 + 1848[02], "Dog", 0, 0x5f5e100, 1);
			}
			Function_229(&bLocal_1282);
			bLocal_1155 = 3;
			break;
		
		case 0x00000003:
			if (Function_549())
			{
				Function_229(&bLocal_1282);
				bLocal_1155 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_288(&Local_1142))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2240[33]), 0, 1, 1);
			}
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_543();
			Function_460(&Local_4 + 1136, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_453(&Local_4 + 1136, &Global_54076, 1);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1136, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1136) | 2048);
			Function_457(&bLocal_1179, &Global_54076);
			TASK_CROUCH(&bLocal_1179, -1.0f);
			TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1183, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4256), -1.0f, 1086324736);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1183, 20, 1.0f);
			Function_542(&bLocal_1183, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1183, 0);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_1183, 10.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1183, 53, 1.0f);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_1183, &Local_4 + 2216);
			Function_402(&Local_4 + 1136, 13, 1);
			Function_520(&Local_4 + 1136, 3);
			Function_397(&Local_4 + 1136, &bLocal_1183, 2);
			bLocal_1307 = false;
			Function_541();
			Function_229(&bLocal_1282);
			bLocal_1155 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_540();
				ACTOR_FORCE_WEAPON_RENDER(&bLocal_1183, 5, 0);
				Function_229(&bLocal_1282);
				bLocal_1155 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_292(&bLocal_1282) <= 2,5f)
			{
				Function_402(&Local_4 + 1136, 13, 0);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0.0f);
				Function_516(&Local_4 + 1136);
				Function_397(&Local_4 + 1136, &bLocal_1183, 4);
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "GUNFIGHT_1", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1346 = 1;
				bLocal_1155 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_292(&bLocal_1282) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Home03_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229(&bLocal_1282);
				Function_229(&bLocal_1290);
				Function_229(&bLocal_1294);
				bLocal_1155 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_292(&bLocal_1282) <= 7.0f)
			{
				if (Function_368(&bLocal_1183, &Global_54076, 18.0f))
				{
					Function_537(&bLocal_1302, &uLocal_1357, &iLocal_1419, 4294967295, 0x3f800000, 1);
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1136) < 0)
			{
				iLocal_1346 = 0;
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_451(&Local_4 + 1136);
				Function_229(&bLocal_1282);
				bLocal_1155 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_292(&bLocal_1282) <= 3.0f)
			{
				Function_536();
				Function_229(&bLocal_1282);
				bLocal_1155 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_535();
			if (Function_292(&bLocal_1282) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Home03_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_208(&uLocal_1329, 1);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1183, &Local_4 + 2352[23], 4);
				bLocal_1308 = Function_474(StackVal, StackVal, &Local_4, "GateToYourHouse", *(&Local_4 + 3792), Vector(0.0f, 0.0f, 0.0f), &Global_54076, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_229(&bLocal_1290);
				Function_229(&bLocal_1282);
				bLocal_1155 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_535();
			if (Function_292(&bLocal_1290) <= 9.0f)
			{
				if (Function_368(&Global_54076, &bLocal_1183, 25.0f))
				{
					Function_536();
					Function_229(&bLocal_1290);
				}
			}
			if (IS_OBJECT_VALID(&bLocal_1308))
			{
				if (GATEWAY_UPDATE(&bLocal_1308))
				{
					DESTROY_OBJECT(&bLocal_1308);
					Function_229(&bLocal_1282);
					bLocal_1155 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (Function_535())
			{
				RESET_FACTIONS();
				Function_213();
				iLocal_1188[0] = 1;
				iLocal_1188[1] = 1;
				Function_229(&bLocal_1282);
				bLocal_1154 = true;
				bLocal_1155 = false;
			}
			break;
	}
	return;
}

bool Function_535() //Position: 0x1E41B / 123931
{
	var uVar0;
	var uVar2;
	bool bVar4;
	int iVar5;
	
	switch (Local_1156)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/HOME03_CS03/HOME03_CS03"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/HOME03_CS03/HOME03_CS03", 0, 2, 1, 2, 2);
				Local_1156 = 1004;
			}
			else
			{
				Local_1156 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1156 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar4 = false;
			while (bVar4 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar4, &uVar0, &uVar2))
				{
					iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar4);
					if (Function_359(iVar5))
					{
						if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &Global_54076);
						}
						if (iVar5 != GET_ACTOR_ENUM(&bLocal_1181) || (iVar5 != 638 && GET_ACTOR_ENUM(&bLocal_1181) != 640))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1181);
						}
						if (iVar5 == GET_ACTOR_ENUM(&bLocal_1179))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar4), &bLocal_1179);
						}
					}
				}
				bVar4++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1156 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_536() //Position: 0x1E58A / 124298
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Home03_GoInsideFoo", "Home03_GoInsideFoo", 0, 2, 1, 0, 1);
		Function_340(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537(bool bParam0, struct<5>[] Param1, var uParam2, int iParam3, float fParam4, bool bParam5) //Position: 0x1E5D8 / 124376
{
	float fVar0;
	
	if (!Function_294(&bParam0))
	{
		Function_351(&bParam0);
	}
	if (&iParam3 <= 0)
	{
		iParam3 = Param1;
	}
	if (uParam2 <= &iParam3)
	{
		if (uParam2 == 0)
		{
			fVar0 = 0.0f;
		}
		else
		{
			fVar0 = (StackVal + &fParam4);
		}
		if (Function_292(&bParam0) <= fVar0)
		{
			if (!Function_133() || Param1[uParam25].f_32)
			{
				while (Param1[uParam25].f_28)
				{
					uParam2++;
					if (uParam2 > Param1)
					{
						return;
					}
					PRINTSTRING(&(Param1[uParam25]));
					PRINTSTRING(" has been turned off, so we're not going to show it");
					PRINTNL();
				}
				if (IS_ACTOR_VALID(&Param1[uParam25] + 16))
				{
					if (Function_368(&Global_54076, &Param1[uParam25] + 16, Param1[uParam25].f_24))
					{
						Function_538(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
					}
					else
					{
						PRINTSTRING("Player is ");
						Function_287(&Global_54076);
						Function_287(&Param1[uParam25] + 16);
						PRINTFLOAT(VDIST(Function_287(&Global_54076), Function_287(&Param1[uParam25] + 16)));
						PRINTSTRING("m away from sepaker. It's too far. Don't print the line: ");
						PRINTSTRING(&(Param1[uParam25]));
						PRINTNL();
					}
				}
				else
				{
					Function_538(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
				}
				Function_229(&bParam0);
				if (&bParam5)
				{
					Param1[uParam25].f_28 = 1;
				}
				uParam2++;
			}
		}
	}
}

void Function_538(var uParam0, int iParam1, bool bParam2) //Position: 0x1E7D6 / 124886
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_539(&uParam0, iParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_132(&uParam0, iParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_381(&uParam0, iParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&uParam0, iParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_539(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1E83A / 124986
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_540() //Position: 0x1E8BF / 125119
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home03_JonSpotsArmyDist", "Home03_JonSpotsArmyDist", 6, 1, 1, 0, 1);
		Function_340(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_541() //Position: 0x1E917 / 125207
{
	AUDIO_ADD_ALTERNATE_CONTEXT(&Global_54076, "PLAYER_GUNFIGHT_ARMY", "Home03_JonTauntsAttkrs");
	return;
}

void Function_542(var uParam0, bool bParam1) //Position: 0x1E954 / 125268
{
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 1, bParam1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 2, bParam1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uParam0, 3, bParam1);
	return;
}

void Function_543() //Position: 0x1E975 / 125301
{
	(&Local_4 + 1136) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "army_1"));
	*(&Local_4 + 1000[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nofficer_1", 375, Vector(-73,45565f, 120,389f, 1497,456f), Vector(0.0f, 3,21169f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[02], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[02], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[02], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[02], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[02], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[02], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[02], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[02], 160.0f, 1);
	Function_544(&Local_4 + 1000[02]);
	*(&Local_4 + 1000[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_1", 374, Vector(-86,26345f, 119,5323f, 1504.0f), Vector(0.0f, 3,21169f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[12], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[12], 17, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[12], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[12], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[12], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[12], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[12], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[12], 160.0f, 1);
	Function_544(&Local_4 + 1000[12]);
	*(&Local_4 + 1000[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_2", 373, Vector(-98,37563f, 118,811f, 1488f), Vector(0.0f, 3,21169f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[22], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[22], 13, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_4 + 1000[22], 15, true);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[22], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[22], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[22], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[22], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[22], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[22], 160.0f, 1);
	Function_544(&Local_4 + 1000[22]);
	*(&Local_4 + 1000[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_4", 372, Vector(-64,75311f, 121,0681f, 1492,753f), Vector(0.0f, 25,29916f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[32], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[32], 13, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_4 + 1000[32], 15, true);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[32], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[32], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[32], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[32], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[32], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[32], 160.0f, 1);
	Function_544(&Local_4 + 1000[32]);
	*(&Local_4 + 1000[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_5", 374, Vector(-31,03609f, 125,5211f, 1467,036f), Vector(0.0f, 52,4245f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[42], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[42], 13, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_4 + 1000[42], 15, true);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[42], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[42], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[42], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[42], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[42], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[42], 160.0f, 1);
	Function_544(&Local_4 + 1000[42]);
	*(&Local_4 + 1000[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_6", 373, Vector(-120,1954f, 118,4365f, 1499,382f), Vector(0.0f, -25,34945f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[52], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[52], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[52], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[52], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[52], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[52], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[52], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[52], 160.0f, 1);
	Function_544(&Local_4 + 1000[52]);
	*(&Local_4 + 1000[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_7", 372, Vector(-107,3439f, 118,5396f, 1503,344f), Vector(0.0f, 3,21169f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[62], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[62], 41, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[62], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[62], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[62], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[62], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[62], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[62], 160.0f, 1);
	Function_544(&Local_4 + 1000[62]);
	*(&Local_4 + 1000[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "soldier_1_8", 374, Vector(-134,9846f, 119,1957f, 1488,86f), Vector(0.0f, 3,21169f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1000[72], &Local_4 + 1136);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1000[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1000[72], 42, 0,999f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_4 + 1000[72], 15, true);
	MEMORY_ATTACK_ON_SIGHT(&Local_4 + 1000[72], 1);
	SET_ACTOR_FACTION(&Local_4 + 1000[72], 19);
	SET_ACTOR_FACE_STYLE(&Local_4 + 1000[72], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1000[72], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_4 + 1000[72], 160.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_4 + 1000[72], 160.0f, 1);
	Function_544(&Local_4 + 1000[72]);
	return;
}

void Function_544(int iParam0) //Position: 0x1F04D / 127053
{
	Function_546(&iParam0);
	Function_545(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	return;
}

void Function_545(var uParam0, int iParam1) //Position: 0x1F1FD / 127485
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(&iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &iVar0, iParam1);
	}
	return;
}

void Function_546(int iParam0) //Position: 0x1F236 / 127542
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
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
	Function_547(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_547(var uParam0, bool bParam1) //Position: 0x1F5F4 / 128500
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_548() //Position: 0x1F617 / 128535
{
	Function_321(&Local_4 + 128, 375, 2, 0);
	Function_321(&Local_4 + 128, 374, 2, 0);
	Function_321(&Local_4 + 128, 373, 2, 0);
	Function_321(&Local_4 + 128, 372, 2, 0);
	Function_321(&Local_4 + 128, 976, 2, 0);
	Function_321(&Local_4 + 128, 977, 2, 0);
	Function_321(&Local_4 + 128, 980, 2, 0);
	Function_321(&Local_4 + 128, 981, 2, 0);
	Function_321(&Local_4 + 128, 989, 2, 0);
	Function_321(&Local_4 + 128, 983, 2, 0);
	Function_321(&Local_4 + 128, 984, 2, 0);
	Function_321(&Local_4 + 128, 986, 2, 0);
	if (Function_311(&Local_4 + 128))
	{
		return 1;
	}
	return 0;
}

bool Function_549() //Position: 0x1F6C6 / 128710
{
	Function_289(&Local_1156, 0);
	switch (Local_1156)
	{
		case 0x000003E8:
			if (Function_288(&Local_1142) || Local_1142.f_40 < 1)
			{
				Local_1156 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/home_03/home_03"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1156 = 1106;
				return 0;
			}
			if (IS_ACTOR_VALID(&bLocal_1183))
			{
				SET_ACTOR_FACTION(&bLocal_1183, 20);
				Function_331(&bLocal_1183, 0, 0, 0, 1, 0, 1);
				ACTOR_ENABLE_VARIABLE_MESH(&bLocal_1183, 19, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1183);
				GIVE_WEAPON_TO_ACTOR(&bLocal_1183, 9, 1.0f, 1, 1);
				ACTOR_SET_NEXT_WEAPON(&bLocal_1183, 9);
				ACTOR_FORCE_WEAPON_RENDER(&bLocal_1183, 5, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1183, 9, 0);
				Function_284(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				Local_1156.f_40 = 0;
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				*(&Local_1156 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_1140, "openCutsceneVol", 2,802597E-45f, *(&Global_6667[5728] + 88), Vector(0.0f, 0.0f, 0.0f), Vector(40.0f, 40.0f, 40.0f));
				Function_282(StackVal, &uLocal_1140, *(&Global_6667[5728] + 88), &Local_1156 + 32, 1, 0, 0, 0, 1, 1);
				Function_318();
				Function_184(1, 0, 1);
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/home_03/home_03", 0, 2, 1, 2, 2);
				Function_229(&Local_1156 + 4);
				Local_1156 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&Local_1156 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1156 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_553();
				Function_229(&Local_1156 + 4);
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_1156 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (((Function_548() && Function_550()) && Function_311(&iLocal_1206)) && bLocal_1154 != 0)
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_1183, 5, 0);
				if (IS_ACTOR_VALID(&bLocal_1179))
				{
					if (!IS_WEAPON_DRAWN(&bLocal_1179))
					{
						DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1179);
						GIVE_WEAPON_TO_ACTOR(&bLocal_1179, 8, false, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1179, 8, 1);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_1179, 0);
					}
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1156 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_4 + 2240[03]), 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2240[33]), 1, 1, 1);
				ACTOR_POP_NEXT_GAIT(&bLocal_1183, 3, 0,5f);
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1183, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4256), -1.0f, 1086324736);
				AI_ACTOR_FORCE_SPEED(&bLocal_1183, 4);
				Function_414();
				HUD_ENABLE(1);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (bLocal_1155 != 3 && bLocal_1154 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1156 + 32);
					DESTROY_VOLUME(&Local_1156 + 32);
					if (SQUAD_IS_VALID(&Local_4 + 1872))
					{
						Function_215(&Local_4 + 1872);
						DESTROY_OBJECT(&Local_4 + 1872);
					}
					if (Local_1156.f_40)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1183, *(&Local_4 + 2240[33]), 1, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(&bLocal_1183, 9, 0);
						RESET_ACTIONTREE_FOR_ACTOR(&bLocal_1183);
						ACTOR_POP_NEXT_GAIT(&bLocal_1183, 3, 0,5f);
						TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_1183, GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4256), -1.0f, 1086324736);
						AI_ACTOR_FORCE_SPEED(&bLocal_1183, 4);
					}
					Local_1156.f_40 = 0;
					DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_1179);
					ACTOR_FORCE_WEAPON_RENDER(&bLocal_1183, 5, 0);
					Function_277(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Local_1156 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1156.f_40 = 1;
				Local_1156 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_1156 = 1000;
			return 1;
			break;
	}
	return 0;
}

bool Function_550() //Position: 0x1FB63 / 129891
{
	Function_321(&Local_4 + 8, 980, 2, 0);
	Function_551(&Local_4 + 8, "p_gen_barrel01x", 0, 0);
	Function_551(&Local_4 + 8, "p_uti_cover1x1x", 0, 0);
	Function_551(&Local_4 + 8, "p_gen_sackCorn01x", 0, 0);
	Function_551(&Local_4 + 8, "p_gen_wheelbarrow01x", 0, 0);
	Function_551(&Local_4 + 8, "p_bat_flourSack02x", 0, 0);
	Function_551(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/crying_linked", 1, 0);
	if (Function_311(&Local_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_551(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1FC5B / 130139
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_552(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_314(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_552(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1FC99 / 130201
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_221(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_314(&(Param0[iVar02]), 4);
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

void Function_553() //Position: 0x1FD68 / 130408
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
		{
			iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (Function_359(iVar5))
			{
				if (iVar5 == GET_ACTOR_ENUM(&Global_54076))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &Global_54076);
				}
				if (iVar5 == GET_ACTOR_ENUM(&bLocal_1183))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &bLocal_1183);
				}
			}
		}
		bVar0++;
	}
	CUTSCENE_MANAGER_RESUME_LOADING();
	return;
}

void Function_554() //Position: 0x1FDD3 / 130515
{
	if (SQUAD_IS_VALID(&Local_4 + 1136))
	{
		if (!DECOR_CHECK_EXIST(&Local_4 + 1136, "bPursue"))
		{
			switch (bLocal_1307)
			{
				case 0x00000000:
					TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1000[22], GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4376), -1.0f, 1086324736);
					TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1000[02], GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4400), -1.0f, 1086324736);
					TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1000[12], GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4384), -1.0f, 1086324736);
					TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1000[42], GET_COVER_LOCATION_FROM_OBJECT(&Local_4 + 4392), -1.0f, 1086324736);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 0, &Local_4 + 2160, 4);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 2, &Local_4 + 2152, 4294967295);
					bLocal_1307 = true;
					Function_229(&bLocal_1286);
					break;
				
				case 0x00000001:
					if (Function_292(&bLocal_1286) <= 6.0f)
					{
						SQUAD_GOALS_CLEAR(&Local_4 + 1136);
						Function_356(&Local_4 + 1136);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2168, 1);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2176, 2);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2160, 3);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 2, &Local_4 + 2152, 4294967295);
						bLocal_1307 = 2;
						Function_229(&bLocal_1286);
					}
					break;
				
				case 0x00000002:
					if (Function_292(&bLocal_1286) <= 10.0f)
					{
						SQUAD_GOALS_CLEAR(&Local_4 + 1136);
						Function_528(&Local_4 + 1136, &Global_54076, 23, 6.0f, 2.0f, 0x42f00000);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2168, 2);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2176, 2);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 2, &Local_4 + 2160, 4294967295);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 3, &Local_4 + 2152, 1);
						bLocal_1307 = 3;
						Function_229(&bLocal_1286);
					}
					break;
				
				case 0x00000003:
					if (Function_292(&bLocal_1286) <= 9.0f)
					{
						SQUAD_GOALS_CLEAR(&Local_4 + 1136);
						Function_528(&Local_4 + 1136, &Global_54076, 23, 6.0f, 2.0f, 0x42f00000);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2168, 2);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2176, 2);
						SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 1, &Local_4 + 2160, 4294967295);
						DECOR_SET_FLOAT(&Local_4 + 1136, "fLastFlank", (GET_CURRENT_GAME_TIME() - 999.0f));
						DECOR_SET_FLOAT(&Local_4 + 1136, "fLastGrenade", (GET_CURRENT_GAME_TIME() - 999.0f));
						bLocal_1307 = 4;
						Function_229(&bLocal_1286);
					}
					break;
				
				case 0x00000004:
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_4 + 1136, "fLastGrenade")) < 12.0f)
					{
						Function_528(&Local_4 + 1136, &Global_54076, 23, 6.0f, 2.0f, 0x42f00000);
						DECOR_SET_FLOAT(&Local_4 + 1136, "fLastGrenade", GET_CURRENT_GAME_TIME());
					}
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_4 + 1136, "fLastFlank")) < 10.0f)
					{
						Function_555(Function_556(&Local_4 + 1136), &Global_54076, RAND_FLOAT_RANGE(70.0f, 290.0f), 10.0f, 10.0f);
						DECOR_SET_FLOAT(&Local_4 + 1136, "fLastFlank", GET_CURRENT_GAME_TIME());
					}
					break;
			}
			if (!Function_333(StackVal, &Global_54076, *(&Local_4 + 2240[03]), 30.0f))
			{
				SQUAD_GOALS_CLEAR(&Local_4 + 1136);
				uLocal_1324 = Vector(0.0f, 0.0f, 15.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1136, false, 0, 1);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &uLocal_1324, 0, 0, 0, 0, 0, 0, 1);
				uLocal_1324 = Vector(15.0f, 0.0f, 0.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1136, true, 0, 1);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &uLocal_1324, 0, 0, 0, 0, 0, 0, 1);
				uLocal_1324 = Vector(-15.0f, 0.0f, 0.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1136, 2, 0, 1);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &uLocal_1324, 0, 0, 0, 0, 0, 0, 1);
				uLocal_1324 = Vector(0.0f, 0.0f, -15.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1136, 3, 0, 1);
				TASK_FOLLOW_OBJECT(0, &Global_54076, &uLocal_1324, 0, 0, 0, 0, 0, 0, 1);
				DECOR_SET_BOOL(&Local_4 + 1136, "bPursue", 1);
			}
			if (!iLocal_1343)
			{
				if (Function_333(StackVal, &Global_54076, *(&Local_4 + 3792), 45.0f))
				{
					SQUAD_GOALS_CLEAR(&Local_4 + 1136);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1136, 0, &Local_4 + 2072, 4294967295);
					iLocal_1343 = 1;
				}
			}
		}
	}
	return;
}

void Function_555(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x20246 / 131654
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	
	GET_OBJECT_AXIS(&bParam1, &Var1, 2);
	VSCALE(&Var1, bParam3);
	Function_393(&bParam1);
	Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var1, Function_393(&bParam1), StackVal);
	Function_393(&bParam1);
	Function_531(StackVal, StackVal, Var3, Function_393(&bParam1), (360.0f - bParam2));
	Var3 = Function_531(StackVal, StackVal, Var3, Function_393(&bParam1), (360.0f - bParam2));
	PRINTSTRING("look for cover at ");
	PRINTVECTOR(Var3);
	PRINTNL();
	uVar5 = FIND_NEAREST_COVER_LOCATION(&Var3, 8.0f, bParam2, 90.0f, 7);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &Var3, 15.0f, 3);
	if (IS_COVER_LOCATION_VALID(&uVar5))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar5, -1.0f, 1086324736);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(&uParam0, &Var3, bParam2, bParam4);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
}

var Function_556(bool bParam0) //Position: 0x20303 / 131843
{
	if (SQUAD_GET_SIZE(&bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&bParam0, RAND_INT_RANGE(0, (SQUAD_GET_SIZE(&bParam0) - 1)));
	}
	return "";
}

void Function_557() //Position: 0x20328 / 131880
{
	switch (bLocal_1155)
	{
		case 0x00000006:
			Function_130(&(Global_43791[Global_46914[1]]), 256);
			Function_591(&Local_1142, 1);
			uLocal_1140 = CREATE_LAYOUT(Function_54());
			Function_590();
			SET_AMBIENT_FORCE_WAIT_STATE(0);
			Local_1156 = 1000;
			bLocal_1155 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&bLocal_1183))
			{
				if (Local_1156 != 1004 || Function_549())
				{
					bLocal_1155 = 8;
				}
			}
			else
			{
				bLocal_1183 = Function_583(13, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 0x00000008:
			Function_549();
			Unknown_Function();
			if (StackVal)
			{
				àDÁ Âÿº©BìlDÀZÃj¢BìmD¾´ÃlBìnD½=]Ã Ô¥BìkD»\Âù·ÏBìgÄDºyÂúÚ
BíòìD¸ë Ã+pëBôôðD³`,Ç:BX°:¯oattackFarm3_2    p   xÂ¤?qBí,®DÁ3ÂÎÈ-BëUDÁÒ^ÂçÎBëèDÁ"ÂøÚBìu^D¿²zÂÿj÷BìiÐD¾}ßÃ ¤ÅBì_CD½!ÓÂúoBìPêD»\ Âò%¶BìQDºmÀÂówhBíù¦D¸IÃ(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
				bLocal_1155 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&Local_4))
			{
				uLocal_1280 = CREATE_OBJECT_ITERATOR(&Local_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_366(12, 1, 1);
			RESET_ACTOR_GAITS(&bLocal_1181, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1181, 0);
			SET_ACTOR_FACTION(&bLocal_1181, 20);
			TASK_PRIORITY_SET(&bLocal_1181, true);
			TASK_STAND_STILL(&bLocal_1181, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1181, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1181, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1181, GET_ACTOR_MAX_HEALTH(&bLocal_1181));
			Function_331(&bLocal_1181, 0, 0, 0, 1, 0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1181, 10, 2.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1181, 11, 0,5f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1181, 20, 1.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_1181, 54, 0.0f);
			Function_366(11, 1, 1);
			RESET_ACTOR_GAITS(&bLocal_1179, 0);
			SET_CRIPPLE_ENABLE(&bLocal_1179, 0);
			SET_ACTOR_FACTION(&bLocal_1179, 20);
			TASK_PRIORITY_SET(&bLocal_1179, true);
			TASK_STAND_STILL(&bLocal_1179, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_1179, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1179, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1179, GET_ACTOR_MAX_HEALTH(&bLocal_1179));
			Function_331(&bLocal_1179, 0, 0, 0, 1, 0, 1);
			if (GET_ACTOR_ENUM(&bLocal_1185) == 989)
			{
				bLocal_1347 = true;
			}
			Function_343();
			Function_222(0);
			DESTROY_ACTOR(&bLocal_1185);
			bLocal_1185 = &Local_4 + 1896[02];
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_1185, 0.0f);
			TASK_GO_TO_COORD_AND_STAY(àDÁ Âÿº©BìlDÀZÃj¢BìmD¾´ÃlBìnD½=]Ã Ô¥BìkD»\Âù·ÏBìgÄDºyÂúÚ
BíòìD¸ë Ã+pëBôôðD³`,Ç:BX°:¯oattackFarm3_2    p   xÂ¤?qBí,®DÁ3ÂÎÈ-BëUDÁÒ^ÂçÎBëèDÁ"ÂøÚBìu^D¿²zÂÿj÷BìiÐD¾}ßÃ ¤ÅBì_CD½!ÓÂúoBìPêD»\ Âò%¶BìQDºmÀÂówhBíù¦D¸IÃ(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal), &bLocal_1185, &Local_4 + 3760, 2);
			RESET_ACTOR_GAITS(&bLocal_1185, 0);
			TASK_PRIORITY_SET(&bLocal_1185, true);
			TASK_STAND_STILL(&bLocal_1185, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_1185, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_1185, GET_ACTOR_MAX_HEALTH(&bLocal_1185));
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_1185, (&Local_4 + 4096), 1, 1, 1);
			if (Function_316(Global_46914[1]) && !Function_288(&Local_1142))
			{
				Function_184(1, 0, 1);
				Function_565(&Global_12482, &Global_14968);
			}
			SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0,75f);
			SET_WEAPONENUM_LOCKED(2, 0);
			SET_WEAPONENUM_LOCKED(13, 0);
			SET_WEAPONENUM_LOCKED(17, 0);
			UNK_0x2E84E682(&bLocal_1181, 0);
			UNK_0x2E84E682(&bLocal_1179, 0);
			UNK_0x2E84E682(&bLocal_1183, 0);
			Function_563(&Local_4 + 4280);
			Function_563(&Local_4 + 4200);
			Function_351(&bLocal_1282);
			Function_351(&bLocal_1286);
			Function_351(&bLocal_1290);
			Function_351(&bLocal_1294);
			Function_351(&bLocal_1302);
			Function_561(&uLocal_1420, &uLocal_1140);
			bLocal_1154 = false;
			bLocal_1155 = false;
			Function_559(&Local_1142, &bLocal_1154, &bLocal_1155);
			Function_558(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1142);
			break;
	}
	return;
}

void Function_558(struct<41> Param0) //Position: 0x20632 / 132658
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_1154 = false;
			break;
		
		case 0x00000002:
			bLocal_1154 = true;
			break;
		
		case 0x00000003:
			bLocal_1154 = 2;
			break;
		
		case 0x00000004:
			bLocal_1154 = 3;
			break;
		
		case 0x00000005:
			bLocal_1154 = 4;
			break;
		
		case 0x00000006:
			bLocal_1154 = 5;
			break;
		
		case 0x00000007:
			bLocal_1154 = 6;
			break;
		
		case 0x00000008:
			bLocal_1154 = 7;
			break;
		
		case 0x00000009:
			bLocal_1154 = 8;
			break;
		
		case 0x0000000A:
			bLocal_1154 = 101;
			break;
	}
}

void Function_559(int iParam0, var uParam1, int iParam2) //Position: 0x206C7 / 132807
{
	if (Function_288(&iParam0))
	{
		uParam1 = Function_363(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_560();
	}
	return;
}

void Function_560() //Position: 0x20703 / 132867
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

int Function_561(struct<2>[] Param0) //Position: 0x20754 / 132948
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_562(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_562(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_562(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_562(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_562(struct<13> Param0) //Position: 0x20E2D / 134701
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_563(bool bParam0) //Position: 0x20EFC / 134908
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_393(&bParam0);
	Var0 = Function_393(&bParam0);
	Function_564(&bParam0);
	Var2 = Function_564(&bParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&bParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&bParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&bParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&bParam0);
	bParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

struct<8> Function_564(int iParam0) //Position: 0x20FD0 / 135120
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_565(var uParam0, int iParam1) //Position: 0x20FF9 / 135161
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		Function_566(&uParam0, &iParam1, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_566(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x21025 / 135205
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_573(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_573(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_573(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_572(&(Param0[iVar02]), 8);
	}
	Function_572(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_571(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_567(&Param0, &vParam1, uParam2, 0);
	}
}

void Function_567(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x210CD / 135373
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_570(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_569(Global_43790), Function_568(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_573(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_573(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_570(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_569(Global_43790), Function_568(Global_43790), false, 0);
	}
}

int Function_568(int iParam0) //Position: 0x21233 / 135731
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

int Function_569(int iParam0) //Position: 0x2125E / 135774
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

void Function_570(var uParam0, int iParam1) //Position: 0x21292 / 135826
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_571(int iParam0) //Position: 0x212A3 / 135843
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_572(var uParam0, int iParam1) //Position: 0x2134C / 136012
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_573(int iParam0, int iParam1) //Position: 0x21366 / 136038
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 àDÁ Âÿº©BìlDÀZÃj¢BìmD¾´ÃlBìnD½=]Ã Ô¥BìkD»\Âù·ÏBìgÄDºyÂúÚ
BíòìD¸ë Ã+pëBôôðD³`,Ç:BX°:¯oattackFarm3_2    p   xÂ¤?qBí,®DÁ3ÂÎÈ-BëUDÁÒ^ÂçÎBëèDÁ"ÂøÚBìu^D¿²zÂÿj÷BìiÐD¾}ßÃ ¤ÅBì_CD½!ÓÂúoBìPêD»\ Âò%¶BìQDºmÀÂówhBíù¦D¸IÃ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, int iParam162, var uParam163, int iParam164) //Position: 0x244BA / 148666
{
	PatchTrap9();
	(StackVal < 2614444789)->f_45816 = StackVal;
	uParam44 = StackVal;
	*(&Local_4 + 4448) = -StackVal;
	PushArrayP();
	*(&Local_4 + 4456) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "attackFarm3_3");
	PushArrayP();
	*(&Local_4 + 4464) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "S4_cavApproach");
	PushArrayP();
	*(&Local_4 + 4472) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "S4_cavAttack_1");
	PushArrayP();
	*(&Local_4 + 4480) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "S4_cavAttack_2");
}

void òhD°\»Ã*"BööðD°ÿÃ( BööðD°ÇÃ"îZBööðD²"4Ã!#·BööðD²[ÃBöÎ_D²µ©Ã  BõéD³LÃj%BôôðD³mC,Ç:B°:¯oattack_WifeSon_1 p   ðÂë-RBí¼øD­ÿÂÞåBír¨D­ÞfÂÔçqBëábD­ùÂÀéÑBë°D­ª÷Â®3wBë5?D¬È¨Â§ÀBBë.D«Ý©Â©¤ÊBë.D«WñÂ®KBë°*D«×Â²»Bì2(Dªÿ)Âº0fBí D«!(int iParam0, int iParam1, int iParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60) //Position: 0x248FD / 149757
{
	(StackVal - 4676)->f_43881 = StackVal;
}

var Function_576(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x25203 / 152067
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_581(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_580())
		{
			return "";
		}
	}
	if (!Function_578())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_194();
	if ((bVar1 && iParam6) && uParam0)
	{
		Function_393(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_393(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_393(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_393(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_577(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_577(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_74(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_331(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_577(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x25560 / 152928
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_578() //Position: 0x25600 / 153088
{
	if (Function_579() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_579() //Position: 0x25616 / 153110
{
	return Global_21369.f_244;
}

bool Function_580() //Position: 0x25621 / 153121
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_581(var uParam0, bool bParam1, bool bParam2) //Position: 0x25641 / 153153
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_582(bool bParam0) //Position: 0x25670 / 153200
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

var Function_583(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x256A0 / 153248
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_151(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_366(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_589(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_585(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &iParam3;
			Var3.f_4 = &iParam4;
			Var3.f_8 = &iParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_584(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_436(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_584(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x25BE0 / 154592
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_585(int iParam0, int iParam1) //Position: 0x25C41 / 154689
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_359(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_586(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_586(var uParam0, int iParam1) //Position: 0x25CCF / 154831
{
	Function_588(&uParam0);
	Function_587(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_587(int iParam0) //Position: 0x25CFB / 154875
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_588(int iParam0) //Position: 0x25D21 / 154913
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

var Function_589(int iParam0, var uParam1) //Position: 0x25DF7 / 155127
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (GET_ACTOR_ENUM(&uVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&uVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &uVar2;
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_590() //Position: 0x25E9D / 155293
{
	Function_551(&iLocal_1206, "marston_dead", 5, 0);
	Function_551(&iLocal_1206, "custom/marston_dead", 8, 0);
	Function_551(&iLocal_1206, "uncle_injured", 5, 0);
	Function_551(&iLocal_1206, "custom/uncle_injured", 8, 0);
	Function_551(&iLocal_1206, "home03_cs_push_open", 5, 0);
	Function_551(&iLocal_1206, "custom/home03_cs_push_open", 8, 0);
	Function_551(&iLocal_1206, "home03", 10, 0);
	Function_321(&iLocal_1206, 1, 2, 0);
	Function_321(&iLocal_1250, 372, 2, 0);
	Function_321(&iLocal_1250, 373, 2, 0);
	Function_321(&iLocal_1250, 374, 2, 0);
	Function_321(&iLocal_1250, 976, 2, 0);
	Function_321(&iLocal_1250, 977, 2, 0);
	Function_321(&iLocal_1250, 983, 2, 0);
	Function_321(&iLocal_1250, 980, 2, 0);
	return;
}

void Function_591(int iParam0, bool bParam1) //Position: 0x25FCC / 155596
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_598(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_288(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_288(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_597();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245();
	Function_415();
	Function_235("");
	Function_596(0);
	Function_595();
	Function_200();
	Function_199();
	ENABLE_JOURNAL_REPLAY(0);
	Function_594();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_576(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_323(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_593(13);
	Function_593(14);
	Function_593(25);
	Function_593(24);
	Function_593(12);
	Function_593(27);
	Function_593(26);
	Function_593(15);
	Function_592();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_592() //Position: 0x2640C / 156684
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_593(int iParam0) //Position: 0x26491 / 156817
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_594() //Position: 0x264B1 / 156849
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_595() //Position: 0x264F7 / 156919
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_596(int iParam0) //Position: 0x2650D / 156941
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_203())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_597() //Position: 0x26546 / 156998
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_598(int iParam0, int iParam1) //Position: 0x2654F / 157007
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
			Function_599(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_599(struct<113> Param0) //Position: 0x265D6 / 157142
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

bool Function_600(struct<25> Param0) //Position: 0x26634 / 157236
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_601(&Param0, 1);
			return 1;
		}
	}
	Function_601(&Param0, 0);
	return 0;
}

void Function_601(struct<25> Param0) //Position: 0x266C0 / 157376
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_602(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x266EB / 157419
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_601(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_621(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_620(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_620(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_606(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_601(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_605(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_604(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_605(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_603(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_235(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_604(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_601(&Param2, 0);
	return 0;
}

void Function_603(char* cParam0) //Position: 0x26B01 / 158465
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_604(struct<25> Param0) //Position: 0x26BF5 / 158709
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_605(bool bParam0) //Position: 0x26C6D / 158829
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_606(struct<57> Param0) //Position: 0x26C91 / 158865
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_617(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_610(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_617(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_607(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_617(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_607(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_607(int iParam0, bool bParam1) //Position: 0x26E02 / 159234
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_609(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_608(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_609(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_608(256);
			}
		}
	}
	return bParam1;
}

bool Function_608(int iParam0) //Position: 0x26F3E / 159550
{
	return 2 | iParam0;
}

int Function_609(int iParam0) //Position: 0x26F48 / 159560
{
	return 4 | iParam0;
}

int Function_610(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x26F52 / 159570
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_616(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_608(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_611(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_608(16);
		}
	}
	return 0;
}

int Function_611(int iParam0, vector3 vParam1) //Position: 0x2700D / 159757
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_615(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_614(iVar0, 3, 1, bParam3))
			{
				if (!Function_620(&iParam0, 8, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam3))
			{
				if (!Function_620(&iParam0, 32, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(&iParam0, 64, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_614(iVar0, 3, 1, bParam3))
			{
				if (!Function_620(&iParam0, 128, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(&iParam0, 1024, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam3))
			{
				if (!Function_620(&iParam0, 1024, 1))
				{
					return Function_613(64, 1024, bParam2);
				}
			}
			return Function_612(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_612(int iParam0, int iParam1, bool bParam2) //Position: 0x271D5 / 160213
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_613(int iParam0, int iParam1, bool bParam2) //Position: 0x271EA / 160234
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_614(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x271FF / 160255
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_615(int iParam0) //Position: 0x2721C / 160284
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_616(var uParam0, vector3 vParam1) //Position: 0x2728F / 160399
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_615(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(&uParam0, 8, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000009:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(&uParam0, 8, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000006E:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(&uParam0, 16, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(&uParam0, 32, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000031:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&uParam0, 64, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000007:
			if (Function_614(iVar0, 3, 1, bParam2))
			{
				if (!Function_620(&uParam0, 128, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000008:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(&uParam0, 256, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000014:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&uParam0, 512, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000018:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&uParam0, 512, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&uParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&uParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_617(struct<65> Param0) //Position: 0x274B8 / 160952
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_616(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_620(&Param0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_620(&Param0, 4, 1))
					{
						return Function_609(16);
					}
					return Function_608(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_611(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_620(&Param0, 2, 1))
						{
							return Function_609(128);
						}
						return Function_608(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_620(&Param0, 4, 1))
						{
							return Function_609(256);
						}
						return Function_608(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_611(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_620(&Param0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_620(&Param0, 4, 1))
					{
						return Function_609(16);
					}
					return Function_608(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_619(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_620(&Param0, 2, 1))
					{
						return Function_609(8);
					}
					return Function_608(8);
				}
				if (!Function_620(&Param0, 4, 1))
				{
					return Function_609(16);
				}
				return Function_608(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_611(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_618(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_608(128);
							}
							if (!Function_620(&Param0, 2, 1))
							{
								return Function_609(8);
							}
							return Function_608(8);
						}
						if (iParam4 == 2)
						{
							if (Function_618(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_608(256);
							}
							if (!Function_620(&Param0, 4, 1))
							{
								return Function_609(16);
							}
							return Function_608(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_618(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2779E / 161694
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_619(int iParam0, vector3 vParam1) //Position: 0x2786C / 161900
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_615(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(&iParam0, 16, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x0000005B:
			if (Function_614(iVar0, 2, 1, bParam2))
			{
				if (!Function_620(&iParam0, 32, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000057:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&iParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		case 0x00000058:
			if (Function_614(iVar0, 1, 1, bParam2))
			{
				if (!Function_620(&iParam0, 1024, 1))
				{
					return Function_609(64);
				}
			}
			return Function_608(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_620(struct<69> Param0) //Position: 0x2798E / 162190
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_621(int iParam0) //Position: 0x279B8 / 162232
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_622(bool bParam0) //Position: 0x279EE / 162286
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_623(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x27A0C / 162316
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

