//Decompiled with MagicRDR v1.0
//Function Count : 293
//Statics Count : 1103
//Natives Count : 459
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 8;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 1;
	var uLocal_59 = 13;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	struct<49> Local_108 = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_157 = 4;
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
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 3;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	struct<477> Local_303 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	bool bScriptParam_0 = false;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_739 = 0;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_292(&Var0, 3);
	Function_290();
	if (StackVal && (((((!Global_3421 && bScriptParam_0 == Global_30679[1]) && bScriptParam_0 == Global_30707[1]) && bScriptParam_0 == Global_30707[2]) && bScriptParam_0 == Global_30717[1]) && bScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Function_283(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_282(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000001:
				if (Function_280())
				{
					Function_279();
					iLocal_5 = 2;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_277())
				{
					Function_276();
					Function_275(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_6 = 500;
				if (Function_272())
				{
					Function_270(bScriptParam_0);
					if (bLocal_107)
					{
						Function_268(&iLocal_11, Function_269(), bScriptParam_0);
						Function_267(&iLocal_11, Function_269());
					}
					Function_275(&(Global_29008[bScriptParam_0]), 16);
					iLocal_5 = 4;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					bLocal_6 = false;
				}
				break;
			
			case 0x00000005:
				Function_266(&uLocal_8);
				Function_264();
				Function_261(bScriptParam_0);
				iLocal_5 = 6;
				bLocal_6 = false;
				break;
			
			case 0x00000006:
				if ((Function_259() && Function_258(Global_29155[bScriptParam_010])) && Function_257(&iLocal_11))
				{
					Function_256();
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				else
				{
					bLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_246(&iLocal_11, bScriptParam_0, Function_269());
				}
				Function_233(bScriptParam_0);
				Function_232();
				Function_231();
				Function_275(&(Global_29008[bScriptParam_0]), 8);
				if (Function_230(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_229(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				bLocal_6 = false;
				break;
			
			case 0x00000008:
				Function_228(bScriptParam_0);
				Function_227();
				Function_226(bScriptParam_0);
				iLocal_5 = 9;
				bLocal_6 = false;
				break;
			
			case 0x00000009:
				Function_221(bScriptParam_0);
				Function_220(64);
				Function_275(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				bLocal_6 = false;
				break;
			
			case 0x0000000A:
				Function_219(Function_269(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_218(&Var0, 5.0f);
				Function_275(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				bLocal_6 = false;
				break;
			
			case 0x0000000B:
				Function_213(bScriptParam_0);
				if (Function_230(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					bLocal_6 = false;
				}
				if (bLocal_107)
				{
					Function_97(&iLocal_11, bScriptParam_0);
				}
				Function_61(&uLocal_8, &iLocal_423, Function_96(), bScriptParam_0);
				Function_57(&bLocal_487, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(bLocal_6);
	}
	if (bLocal_107)
	{
		Function_41(&iLocal_11, bScriptParam_0);
	}
	Function_38(bScriptParam_0);
	Function_36();
	Function_35();
	Function_29();
	Function_21(&uLocal_8, &iLocal_423);
	Function_20(&bLocal_487);
	Function_18();
	Function_15(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_220(64);
	Function_229(&(Global_29008[bScriptParam_0]), 32);
	Function_229(&(Global_29008[bScriptParam_0]), 64);
	Function_229(&(Global_29008[bScriptParam_0]), 8);
	Function_229(&(Global_29008[bScriptParam_0]), 512);
	Function_229(&(Global_29008[bScriptParam_0]), 16);
	Function_229(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_218(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3CC / 972
{
	ALLOW_TUMBLEWEEDS(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	Function_2(&Global_6667, &Global_7735, Global_30679[1], 1);
	return;
}

void Function_2(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x3EB / 1003
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	
	if (StackVal != 5 && Function_14())
	{
		return;
	}
	strcpy(&cVar0, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_230(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_229(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_9(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_9(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_8(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_9(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_8(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_230(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_7(2) || Function_230(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_9(uParam0[iVar162], 2) && !Function_9(uParam0[iVar162], 4))
		{
			Function_3(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_9(uParam0[iVar162], 2) && !Function_9(uParam0[iVar162], 4))
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
			Function_275(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_3(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x5EB / 1515
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_6(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_5(Global_29007), Function_4(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_9(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_9(uParam0[iParam22], 1) && !bParam3)
	{
		Function_6(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_5(Global_29007), Function_4(Global_29007), false, 0);
	}
}

int Function_4(int iParam0) //Position: 0x73A / 1850
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

int Function_5(int iParam0) //Position: 0x765 / 1893
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

void Function_6(var uParam0, int iParam1) //Position: 0x799 / 1945
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_7(int iParam0) //Position: 0x7A8 / 1960
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0, int iParam1) //Position: 0x7C4 / 1988
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x7DB / 2011
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_10() //Position: 0x7F7 / 2039
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(var uParam0, bool bParam1) //Position: 0x812 / 2066
{
	return (uParam0 && bParam1) == 0;
}

var Function_12(int iParam0) //Position: 0x81F / 2079
{
	if (!Function_13(iParam0))
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

bool Function_13(int iParam0) //Position: 0xCCD / 3277
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_14() //Position: 0xCE3 / 3299
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_15(int iParam0) //Position: 0xCEC / 3308
{
	int iVar0;
	
	if (!Function_13(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_16(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_16(int iParam0) //Position: 0xD22 / 3362
{
	if (!Function_17(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_17(int iParam0) //Position: 0xD44 / 3396
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

void Function_18() //Position: 0xD5A / 3418
{
	Function_19();
	return;
}

void Function_19() //Position: 0xD63 / 3427
{
	RELEASE_LAYOUT_REF(Local_121);
	return;
}

void Function_20(int iParam0) //Position: 0xD6E / 3438
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

void Function_21(var uParam0, int iParam1) //Position: 0xDC8 / 3528
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_28(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_27(iParam1[iVar03], 4);
		}
		if (Function_28(iParam1[iVar03], 8))
		{
			Function_22(0, 0, 30);
			Function_27(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_22(int iParam0, int iParam1, int iParam2) //Position: 0xE20 / 3616
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
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_23(Global_16524, bVar0, 1);
	}
	return;
}

void Function_23(int iParam0, bool bParam1, bool bParam2) //Position: 0xF06 / 3846
{
	int iVar0;
	
	Function_26(iParam0);
	Function_25(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_24();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_24() //Position: 0x107F / 4223
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_25(bool bParam0) //Position: 0x108B / 4235
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

void Function_26(int iParam0) //Position: 0x10D1 / 4305
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

void Function_27(int iParam0, int iParam1) //Position: 0x1117 / 4375
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_28(int iParam0, int iParam1) //Position: 0x1131 / 4401
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_29() //Position: 0x114E / 4430
{
	Function_30();
	return;
}

void Function_30() //Position: 0x1157 / 4439
{
	Function_31(&Local_303 + 4);
	RELEASE_LAYOUT_REF(Local_303);
	return;
}

void Function_31(int iParam0) //Position: 0x116B / 4459
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_32(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0x1191 / 4497
{
	if (Function_34(uParam0[iParam13], 4))
	{
		if (Function_34(uParam0[iParam13], 1))
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
			Function_33(uParam0[iParam13], 1);
			Function_33(uParam0[iParam13], 2);
			Function_33(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0x12BF / 4799
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_34(int iParam0, int iParam1) //Position: 0x12D9 / 4825
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_35() //Position: 0x12F6 / 4854
{
	SET_FACTIONS_STATUS_ONE_WAY(8, 32, 4);
	SET_FACTIONS_STATUS_ONE_WAY(4, 32, 4);
	SET_FACTIONS_STATUS_ONE_WAY(13, 32, 4);
	RESET_FACTIONS_STATUS_TWO_WAY(13, 8);
	RESET_FACTIONS_STATUS_TWO_WAY(13, 4);
	return;
}

void Function_36() //Position: 0x131D / 4893
{
	Function_37();
	return;
}

void Function_37() //Position: 0x1326 / 4902
{
	Function_31(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_38(bool bParam0) //Position: 0x1338 / 4920
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_230(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_229(&(Global_29008[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			START_OBJECT_ITERATOR(bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_39(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_7(1));
		}
	}
	return;
}

bool Function_39(bool bParam0) //Position: 0x13DF / 5087
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_30707[2] || bParam0 != Global_30707[1]) || bParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[bParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || Function_40(bParam0));
}

bool Function_40(int iParam0) //Position: 0x1452 / 5202
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_41(int iParam0, int iParam1) //Position: 0x146F / 5231
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_13(iParam1) || Function_11(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_44(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_44(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_44(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_44(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_44(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_44(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_44(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_44(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_44(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_44(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_44(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_44(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_44(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_44(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_44(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_44(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_44(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_44(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_44(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_44(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_44(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_44(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_44(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_44(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_44(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_44(iParam0, &Global_7032, iParam1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_38(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_42(iParam1);
	}
	return;
}

void Function_42(int iParam0) //Position: 0x17B5 / 6069
{
	char* cVar0;
	
	if (Global_3380 || Function_7(0x8000000))
	{
		return;
	}
	cVar0 = Function_43(iParam0);
	if (Function_39(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

var Function_43(int iParam0) //Position: 0x1819 / 6169
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_44(int iParam0, var uParam1, int iParam2) //Position: 0x1B46 / 6982
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(bVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(bVar1))
		{
		}
		else
		{
			Function_8(uParam1[iVar02], 4);
		}
		if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
		{
			DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
		}
		iVar0++;
	}
	if (!Function_39(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_56(Global_76846, 0x4000000))
		{
			Function_50(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_11(iParam0->f_356, 32))
	{
		if (!Function_56(Global_76846, 8388608))
		{
			Function_50(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_56(Global_76846, 4194304))
	{
		Function_50(Global_34573, 4194304, 1, 0);
	}
	Function_48(iParam0, 0, 0);
	DESTROY_OBJECT(*iParam0);
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRifles"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumPistols"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	Function_31(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_45(iParam2, Function_39(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_7(1));
	return;
}

void Function_45(int iParam0, bool bParam1) //Position: 0x1E00 / 7680
{
	if (!Function_13(iParam0))
	{
		return;
	}
	if (bParam1 && Function_47("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[4])
	{
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_46(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30679[1])
	{
	}
	else if (iParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[1])
	{
	}
	else if (iParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[0])
	{
	}
	else if (iParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[1])
	{
	}
	return;
}

bool Function_46(int iParam0) //Position: 0x2556 / 9558
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_47(bool bParam0) //Position: 0x256B / 9579
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_48(var uParam0, bool bParam1, bool bParam2) //Position: 0x258A / 9610
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
				if (!Function_49(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_49(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2606 / 9734
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_50(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2620 / 9760
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_52(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_51(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_51(char* cParam0, int iParam1) //Position: 0x268C / 9868
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

bool Function_52(bool bParam0, var uParam1, int iParam2) //Position: 0x26C3 / 9923
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
		if (Function_54(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_53(uVar0))
		{
			case 0x00000002:
				if (!Function_56(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_53(char* cParam0) //Position: 0x273B / 10043
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

int Function_54(int iParam0) //Position: 0x27DC / 10204
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_55(&iVar1, 2147483648);
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

void Function_55(int iParam0, int iParam1) //Position: 0x2819 / 10265
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x282C / 10284
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x283F / 10303
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
	
	bVar6 = Function_14();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_60((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_59(uParam0[iVar05], 16384);
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
								Function_58(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_59(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_96(), uParam0[iVar05]->f_12))
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
								Function_58(uParam0[iVar05], 1);
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
							Function_58(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_59(uParam0[iVar05], 1);
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
					Function_58(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_58(uParam0[iVar05], 1);
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
					Function_59(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_59(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_96(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_96(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_59(uParam0[iVar05], 32768);
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

void Function_58(var uParam0, int iParam1) //Position: 0x2C0B / 11275
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_59(var uParam0, int iParam1) //Position: 0x2C1C / 11292
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_60(int iParam0, bool bParam1) //Position: 0x2C36 / 11318
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2C48 / 11336
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_7(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_62(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_62(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2CC9 / 11465
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_95(iParam0))
	{
		return 0;
	}
	Function_229(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
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
					if (!Function_28(iParam0, 2))
					{
						if (!Function_28(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_93(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_92(iParam0, 8);
							}
						}
					}
				}
				else if (Function_28(iParam0, 2))
				{
					if (Function_28(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_22(0, 0, 0);
						}
						else
						{
							Function_22(0, 0, 30);
						}
						Function_27(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_28(iParam0, 2))
					{
						if (!Function_28(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_92(iParam0, 4);
							}
						}
					}
				}
				else if (Function_28(iParam0, 2))
				{
					if (Function_28(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_27(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_13(iParam2)) && !Function_91(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_90(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_28(iParam0, 2))
					{
						if (!Function_28(iParam0, 16))
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
							if (Function_14())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_92(iParam0, 16);
								Function_82(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_28(iParam0, 2))
				{
					if (Function_28(iParam0, 16))
					{
						Function_27(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_28(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_28(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_92(iParam0, 2);
			}
			else
			{
				Function_27(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_13(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_230(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_28(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_81(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_92(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_13(iParam2))
					{
						Function_80(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_63(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_63(int iParam0) //Position: 0x30E2 / 12514
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_230(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_275(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_68(473, 1, 0, 0);
		iVar0 = Function_67(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_68(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_68(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_68(476, 1, 0, 0);
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
		Function_66(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_66(7, 30);
	}
	if (Function_65(473) <= Function_64(473))
	{
		if (!Function_14())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_64(int iParam0) //Position: 0x31E1 / 12769
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_65(int iParam0) //Position: 0x321E / 12830
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x3257 / 12887
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

var Function_67(int iParam0) //Position: 0x32BE / 12990
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_13(iParam0))
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

int Function_68(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3316 / 13078
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
	Function_79(iParam0, TO_FLOAT(bParam1), 1);
	Function_78(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_69(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_69(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3536 / 13622
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_76(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_74(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_71(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_70(), &Var9);
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

var Function_70() //Position: 0x3B63 / 15203
{
	int iVar0;
	
	return iVar0;
}

var Function_71(int iParam0) //Position: 0x3B6B / 15211
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_72(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3B7C / 15228
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_73(char* cParam0, bool bParam1) //Position: 0x3C71 / 15473
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_74(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3C8A / 15498
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_60(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_75(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_75(int iParam0, int iParam1) //Position: 0x3CEF / 15599
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_76(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3D01 / 15617
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
	if (((Function_77(iParam0) != 19 || Function_77(iParam0) != 17) || Function_77(iParam0) != 10) || Function_77(iParam0) != 9)
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

int Function_77(int iParam0) //Position: 0x3E31 / 15921
{
	return Global_35278[iParam020].f_48;
}

void Function_78(int iParam0) //Position: 0x3E40 / 15936
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

int Function_79(int iParam0, bool bParam1, bool bParam2) //Position: 0x3FDA / 16346
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

void Function_80(var uParam0, int iParam1) //Position: 0x4233 / 16947
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_81(struct<5> Param0) //Position: 0x4240 / 16960
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_82(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4266 / 16998
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_89(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_88(iParam1))
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
	if (!Function_85(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_83();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_83() //Position: 0x44F6 / 17654
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_84(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_84(bool bParam0, bool bParam1) //Position: 0x4559 / 17753
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

bool Function_85(bool bParam0) //Position: 0x4588 / 17800
{
	if (Function_90(256))
	{
		return 0;
	}
	if (Function_90(262144))
	{
		return 0;
	}
	if (Function_87())
	{
		return 0;
	}
	if (!Function_90(1))
	{
		return 0;
	}
	if (!Function_90(4096))
	{
		return 0;
	}
	if (bParam0 && Function_86(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_90(2048))
	{
		return 0;
	}
	if (Function_14() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x45FE / 17918
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_87() //Position: 0x460F / 17935
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

bool Function_88(int iParam0) //Position: 0x4628 / 17960
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x463E / 17982
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_90(int iParam0) //Position: 0x4653 / 18003
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4671 / 18033
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

void Function_92(int iParam0, int iParam1) //Position: 0x4715 / 18197
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_93(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x4726 / 18214
{
	int iVar0;
	bool bVar1;
	
	Function_26(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_94(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_23(StackVal, bVar1, bParam4);
		}
	}
}

void Function_94(int iParam0, int iParam1) //Position: 0x4798 / 18328
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_26(iParam0);
	Function_25(iVar0);
	PRINTNL();
	Function_23(iParam0, iVar0, iParam1);
	return;
}

bool Function_95(int iParam0) //Position: 0x47BD / 18365
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

var Function_96() //Position: 0x47DA / 18394
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_97(int iParam0, bool bParam1) //Position: 0x47EF / 18415
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	
	if (DECOR_CHECK_EXIST(Global_34573, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(Global_34573, "QM_TriggerAttack");
		Function_55(iParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (iParam0->f_364 == 4294967295)
		{
			iParam0->f_364 = Function_208(0, bParam1, 3);
		}
		if (!Function_11(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_11(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_206(1, 0));
			Function_205(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_11(iParam0->f_356, 16))
	{
		Function_204(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_11(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_11(iParam0->f_356, 4))
	{
		Function_205(iParam0 + 356, 4);
		Function_41(iParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_203(0, 4294967295);
		Function_202();
		Function_38(bParam1);
		return;
	}
	fVar0 = Function_200(Function_201(bParam1));
	fVar1 = Function_199(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_208(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			bVar4 = (*iParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(bVar4))
			{
				Function_198(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_197(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_196(Function_201(bParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_11(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_11(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_193(iParam0, 0);
				Function_198(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_198(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_205(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_204(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_192(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_190();
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(Global_34573, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(Global_34573, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (iParam0->f_188 <= 1 && iParam0->f_188 >= 6)
		{
			if (iParam0->f_188 >= 1)
			{
				Function_185(iParam0, bParam1, fVar2);
			}
			if (!Function_11(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_11(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_205(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_199(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_11(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_197(iParam0);
					}
				}
			}
		}
	}
	Function_183(iParam0, bParam1);
	if (Function_11(iParam0->f_356, 1024))
	{
		Function_182(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_11(iParam0->f_356, 16384))
		{
			Function_205(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_11(iParam0->f_356, 16384))
	{
		Function_55(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_11(iParam0->f_356, 262144))
	{
		if (Function_257(iParam0))
		{
			Function_55(iParam0 + 356, 262144);
			Function_180(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *iParam0);
			if (!Function_39(bParam1))
			{
				if (!Function_11(iParam0->f_356, 8))
				{
					Function_205(iParam0 + 356, 8);
					Function_179();
				}
			}
		}
	}
	if (Function_11(iParam0->f_356, 524288))
	{
		if (Function_179())
		{
			Function_205(iParam0 + 356, 8);
			Function_55(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_56(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_171(iParam0);
				Function_205(iParam0 + 356, 262144);
				if (Function_39(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_282(bParam1, 1);
					Function_165(bParam1);
					Function_203(0, 4294967295);
					Function_204(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_11(iParam0->f_356, 1))
					{
						Function_164(iParam0, bParam1);
						Function_163("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_161("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_282(bParam1, 0);
					Function_165(bParam1);
					Function_205(iParam0 + 356, 2);
					Function_203(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_155(iParam0 + 168, 1, iParam0 + 356))
			{
				SET_ANIM_SET_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo", 0);
				iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(iParam0->f_168));
				if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_123(iParam0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(iParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				iParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			bVar11 = false;
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				bVar12 = (*iParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_11((iParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_155(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_112(iParam0 + 4[iVar95], iVar13);
							Function_55(iParam0 + 4[iVar95] + 16, 2);
							Function_205(iParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_11((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_55(iParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(StackVal, &vVar14);
						GET_OBJECT_ORIENTATION(StackVal, &Var17);
						TASK_PRIORITY_SET(bVar12, 1);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar12, &vVar14, -1f);
						strcpy(&cVar20, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(bVar12))
						{
							stradd(&cVar20, "M", 64);
						}
						else
						{
							stradd(&cVar20, "F", 64);
						}
						if (Function_111(bVar12))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "THANKS_FOR_AMMO_P", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "nTHANK_YOU", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						iParam0->f_372 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(bVar12))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
					{
						DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
					}
				}
				iVar9++;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar11);
				PRINTNL();
			}
			if (bVar11 == 0)
			{
				iParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				bVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (bVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (bVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (bVar36 == 1)
				{
					DECOR_REMOVE(Global_34573, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_192(1);
			if (Function_106(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_105(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_204(bParam1, 300.0f);
			}
			else
			{
				Function_204(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_11(iParam0->f_356, 8))
			{
				Function_205(iParam0 + 356, 8);
				Function_179();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_104(bParam1);
			Function_103(iParam0);
			Function_193(iParam0, 1);
			Function_38(Global_29006);
			iParam0->f_364 = Function_208(0, bParam1, 3);
			Function_205(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_205(iParam0 + 356, 512);
			if (!Function_11(Global_13172[iParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_100(Function_201(bParam1));
				Function_68(660, bVar37, 0, 0);
				Function_205(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_283(iParam0, bParam1, 1);
			Function_268(iParam0, Global_30616, bParam1);
			Function_267(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_257(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_246(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_246(iParam0, bParam1, Global_30616);
					DECOR_SET_FLOAT(Global_34573, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(Global_34573, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns");
					iParam0->f_188 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(Global_34573, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(Global_34573, "Special_BLK_Ready");
				Function_123(iParam0, bParam1);
				Function_171(iParam0);
				Function_205(iParam0 + 356, 262144);
				Function_282(bParam1, 1);
				Function_205(&Global_13172[Function_208(111, 111, 5)11] + 20, 4);
				Function_165(bParam1);
				Function_203(0, 4294967295);
				Function_204(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], 0);
				iParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (StackVal < (iVar9 - 1))
	{
		bVar38 = (*iParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", true);
					Global_13172[iParam0->f_36411].f_28 = (Global_13172[iParam0->f_36411].f_28 + 1.0f);
					if (Function_11(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_99(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (DECOR_CHECK_EXIST((*iParam0 + 4)[iVar95], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT((*iParam0 + 4)[iVar95], "nUC_NoAmmo"));
				}
				if (bVar38 == iParam0->f_168)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (iParam0->f_188 <= 7)
					{
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_11(iParam0->f_356, 8192))
						{
							Function_205(iParam0 + 356, 8192);
							Function_161("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_198(iParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar395], true);
								iVar39++;
							}
							if (iParam0->f_188 <= 4)
							{
								iParam0->f_188 = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
				}
			}
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_11(iParam0->f_356, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				iVar40 = 0;
				while (StackVal < (iVar40 - 1))
				{
					Function_198(iParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar405], true);
					MEMORY_CONSIDER_AS_ENEMY((*iParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (iParam0->f_188 <= 7)
				{
					if (iParam0->f_188 <= 5)
					{
						iParam0->f_188 = 4;
					}
					Function_161("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_205(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_208(0, bParam1, 3);
				Function_205(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	bVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar41)), "footlock"))
		{
			Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *iParam0);
		}
	}
	return;
}

void Function_98(bool bParam0, struct<365> Param1) //Position: 0x5B09 / 23305
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	bVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(bVar1, "_");
	bVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(bVar3));
	Function_205(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_99(int iParam0, bool bParam1, int iParam2) //Position: 0x5B58 / 23384
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
	Function_78(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_69(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_100(int iParam0) //Position: 0x5D53 / 23891
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_102(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_101(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_11(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_101(int iParam0, int iParam1) //Position: 0x5F3D / 24381
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_102(int iParam0) //Position: 0x6319 / 25369
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_103(int iParam0) //Position: 0x649F / 25759
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x64EE / 25838
{
	char* cVar0;
	
	if (Global_3380 || Function_7(0x8000000))
	{
		return;
	}
	cVar0 = Function_43(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_105(int iParam0) //Position: 0x6526 / 25894
{
	int iVar0;
	
	if (Function_11(iParam0, 1) && Function_11(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_106(int iParam0) //Position: 0x655A / 25946
{
	return Function_107(iParam0 + 352);
}

int Function_107(int iParam0) //Position: 0x6568 / 25960
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_70()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_70()));
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(StackVal, bVar1);
	START_OBJECT_ITERATOR(bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			bVar4 = GET_ACTOR_ENUM(bVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				iVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_11(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_109(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_49(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar9 = true;
						}
					}
				}
				if (bVar9)
				{
					SQUAD_JOIN(bVar3, bVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_108(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_275(&(Global_29008[Global_29006]), 0x20000000);
		Function_163("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar11 = false;
		while (bVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			bVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(bVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_108(int iParam0) //Position: 0x678E / 26510
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_109(bool bParam0, vector3 vParam1) //Position: 0x67DD / 26589
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_110(bParam0);
		vVar0 = { StackVal, StackVal, Function_110(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_110(bool bParam0) //Position: 0x6857 / 26711
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

bool Function_111(bool bParam0) //Position: 0x68C1 / 26817
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_112(int iParam0, bool bParam1) //Position: 0x6A30 / 27184
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;
	
	Function_122();
	Function_121();
	GET_POSITION(*iParam0, &vVar0);
	bVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar3, 8);
	ITERATE_ON_PARTIAL_NAME(bVar3, "Ammo");
	ITERATE_IN_SPHERE(bVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(bVar3);
	Function_68(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_120(bParam1, 5.0f, 1);
		Function_198(iParam0);
		Function_119(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	fVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, fVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_118(StackVal, StackVal, *iParam0, vVar7))
	{
		iVar11 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar11 != 41 || iVar11 != 42) || iVar11 != 43) || iVar11 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar12 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar12 != 41 || iVar12 != 42) || iVar12 != 43) || iVar12 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(*iParam0, 1);
	TASK_STAND_STILL(*iParam0, 3.0f, 0, 0);
	Function_113(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_120(bParam1, 5.0f, 1);
	Function_198(iParam0);
	Function_119(Global_29006, 10.0f);
	return;
}

var Function_113(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6CFE / 27902
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_70(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_114(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_114(var uParam0, int iParam1) //Position: 0x6D7D / 28029
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_117(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_116(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_115(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_115(var uParam0, bool bParam1) //Position: 0x6DDA / 28122
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_116(var uParam0, bool bParam1) //Position: 0x6E5A / 28250
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_117(var uParam0, bool bParam1) //Position: 0x6EDA / 28378
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_118(bool bParam0, vector3 vParam1) //Position: 0x6F5E / 28510
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_119(int iParam0, float fParam1) //Position: 0x6F9C / 28572
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bVar0);
	return;
}

void Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6FDE / 28638
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_70(), 2, 4294967295, 0, 1, 0, 0, false, false, 0);
	}
	return;
}

void Function_121() //Position: 0x7115 / 28949
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_122() //Position: 0x7127 / 28967
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_123(int iParam0, bool bParam1) //Position: 0x713C / 28988
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_126(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], false, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_163("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_11(iParam0->f_356, 8))
	{
		if (Function_179())
		{
			Function_205(iParam0 + 356, 8);
		}
		else
		{
			Function_205(iParam0 + 356, 524288);
		}
	}
	Function_205(iParam0 + 356, 32);
	iParam0->f_364 = Function_208(0, bParam1, 3);
	Function_205(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_124(iParam0);
	return;
}

void Function_124(int iParam0) //Position: 0x741E / 29726
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (!DECOR_CHECK_EXIST(bVar1, "PreSaved") || (DECOR_CHECK_EXIST(bVar1, "PreSaved") && DECOR_CHECK_EXIST(bVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(bVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar2, 1);
				if (Global_29006 == Global_30717[0])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 2.5f);
				}
				else if (Global_29006 == Global_30668[1])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 1.75f);
				}
				UNK_0x1E98AFEC(bVar2, 1);
				if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
				}
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_70(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_70(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_125(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_205(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_70(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_70(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_119(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_125(bool bParam0) //Position: 0x768F / 30351
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_126(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7752 / 30546
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_154(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_153(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_153(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_152(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_151(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_147(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_151(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_145(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_13(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_147(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_144(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_127();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_127() //Position: 0x7B59 / 31577
{
	Function_140();
	Function_139();
	Function_139();
	Function_138();
	Function_138();
	Function_137();
	Function_137();
	Function_134(0);
	Function_134(0);
	if (!Function_14())
	{
		Function_132();
		Function_131();
		Function_130();
		Function_129();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_128();
	return;
}

void Function_128() //Position: 0x7BAB / 31659
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

void Function_129() //Position: 0x7CB1 / 31921
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

void Function_130() //Position: 0x7CE4 / 31972
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_131() //Position: 0x7E72 / 32370
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_132() //Position: 0x8027 / 32807
{
	Function_133(&Global_28260, 1, 0);
	return;
}

void Function_133(int iParam0, bool bParam1, int iParam2) //Position: 0x8035 / 32821
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_96();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
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
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
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

struct<8> Function_134(int iParam0) //Position: 0x8226 / 33318
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
					iVar2 = ((Function_136((50 + iVar4)) + Function_136((183 + iVar4))) + Function_136((90 + iVar4)));
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
	Function_135(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_135(int iParam0, bool bParam1, bool bParam2) //Position: 0x82CC / 33484
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
		Function_79(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_78(iParam0);
	if (bParam2)
	{
		Function_69(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_136(bool bParam0) //Position: 0x8567 / 34151
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_137() //Position: 0x85A8 / 34216
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
		iVar2 = ((Function_136((50 + iVar3) + 15) + Function_136((183 + iVar3) + 15)) + Function_136((90 + iVar3) + 15));
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
	Function_135(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_138() //Position: 0x8631 / 34353
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
			iVar2 = ((Function_136((50 + iVar3) + 8) + Function_136((183 + iVar3) + 8)) + Function_136((90 + iVar3) + 8));
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
	Function_135(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_139() //Position: 0x86C8 / 34504
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
		iVar2 = ((Function_136((50 + iVar3)) + Function_136((183 + iVar3))) + Function_136((90 + iVar3)));
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
	Function_135(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_140() //Position: 0x8747 / 34631
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_141(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_135(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_141(int iParam0, bool bParam1, int iParam2) //Position: 0x8780 / 34688
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
	Function_79(iParam0, bParam1, 1);
	Function_78(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_69(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_142(int iParam0) //Position: 0x898A / 35210
{
	if (!Function_143(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_143(int iParam0) //Position: 0x89A4 / 35236
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_144(vector3 vParam0, bool bParam3) //Position: 0x89BA / 35258
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
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_145(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8A25 / 35365
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_154(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_146(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_230(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_13(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_146(int iParam0) //Position: 0x8B1F / 35615
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_13(iParam0))
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

bool Function_147(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x8B77 / 35703
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_154(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_150(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		UNK_0xDF93BD7C(bVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(bVar0, bVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, bVar1);
			bVar13 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(bVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_149(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_148(&uVar20);
		vVar32 = { StackVal, StackVal, Function_148(&uVar20) };
		Function_148(&iVar26);
		vVar35 = { StackVal, StackVal, Function_148(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_148(int iParam0) //Position: 0x8D21 / 36129
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_149(vector3 vParam0) //Position: 0x8D40 / 36160
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_150(int iParam0, int iParam1) //Position: 0x8D60 / 36192
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_151(var uParam0, var uParam1, int iParam2) //Position: 0x8D73 / 36211
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_230(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_230(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_230(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_230(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_230(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_152(bool bParam0) //Position: 0x8FA7 / 36775
{
	return GET_HEADING(bParam0);
}

vector3 Function_153(bool bParam0) //Position: 0x8FB2 / 36786
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_154(vector3 vParam0) //Position: 0x8FC3 / 36803
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_155(var uParam0, bool bParam1, int iParam2) //Position: 0x8FDB / 36827
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_157(Global_34573, 0, 0))
		{
			DECOR_REMOVE(*uParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_157(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_11(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_156(Global_34573, *uParam0) > 3.0f)
				{
					Function_205(iParam2, 65536);
					Function_161("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_125(*uParam0);
				bVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_11(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_156(Global_34573, *uParam0) > 3.0f)
			{
				Function_205(iParam2, 65536);
				Function_161("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_125(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_157(Global_34573, 0, 0))
	{
		if (bParam1)
		{
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", uParam0->f_12, 10, 4, "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(*uParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(*uParam0, "nUC_NoAmmo");
			}
			iVar6 = Function_125(*uParam0);
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", uParam0->f_12, 10, 4, iVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal);
	}
	return 0;
}

float Function_156(bool bParam0, bool bParam1) //Position: 0x936B / 37739
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

bool Function_157(bool bParam0, bool bParam1, bool bParam2) //Position: 0x945C / 37980
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_160(bParam0))
	{
		return 1;
	}
	if (Function_159(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_158())
	{
		return 1;
	}
	return 0;
}

bool Function_158() //Position: 0x9512 / 38162
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_159(bool bParam0) //Position: 0x9529 / 38185
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_160(bool bParam0) //Position: 0x9534 / 38196
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9542 / 38210
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_162(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_162(int iParam0) //Position: 0x95BD / 38333
{
	char* cVar0[16];
	
	if (!Function_10())
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

void Function_163(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x95FC / 38396
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_162(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_164(int iParam0, bool bParam1) //Position: 0x9681 / 38529
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_70(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_70(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_208(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_165(bool bParam0) //Position: 0x9739 / 38713
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_40(bParam0))
	{
		if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			bVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(bVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[bParam0];
			Function_205(&uVar7, 0x8000000);
			Function_205(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_170(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_201(bParam0);
			uVar16 = Function_208(111, 111, 5);
			Function_169(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_168(uVar15, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_166(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_205(&uVar17, 0x1000000);
			Function_205(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_166(int iParam0) //Position: 0x98EC / 39148
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_208(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(1))
	{
		iVar0 = 1;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(2))
	{
		iVar0 = 2;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(3))
	{
		iVar0 = 3;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(4))
	{
		iVar0 = 4;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(5))
	{
		iVar0 = 5;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(8))
	{
		iVar0 = 8;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(9))
	{
		iVar0 = 9;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(11))
	{
		iVar0 = 11;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(12))
	{
		iVar0 = 12;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(13))
	{
		iVar0 = 13;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(14))
	{
		iVar0 = 14;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(15))
	{
		iVar0 = 15;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(16))
	{
		iVar0 = 16;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(17))
	{
		iVar0 = 17;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(18))
	{
		iVar0 = 18;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(19))
	{
		iVar0 = 19;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(21))
	{
		iVar0 = 21;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(22))
	{
		iVar0 = 22;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(23))
	{
		iVar0 = 23;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_167(24))
	{
		iVar0 = 24;
		iVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = iVar1;
	return;
}

bool Function_167(int iParam0) //Position: 0x9C00 / 39936
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_102(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9C24 / 39972
{
	while (iParam4 > 60)
	{
		iParam4 = (iParam4 - 60);
		iParam3++;
	}
	while (iParam3 > 60)
	{
		iParam3 = (iParam3 - 60);
		iParam2++;
	}
	while (iParam2 > 24)
	{
		iParam2 = (iParam2 - 24);
		iParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
	}
}

void Function_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9EE4 / 40676
{
	switch (iParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
	}
}

var Function_170(bool bParam0, int iParam1, float fParam2) //Position: 0xA123 / 41251
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == iParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_171(int iParam0) //Position: 0xA170 / 41328
{
	Function_177(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_177(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_177(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_172(iParam0 + 192);
	return;
}

bool Function_172(int iParam0) //Position: 0xA1DC / 41436
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_176();
	iVar1 = 0;
	if (!Function_34(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_175(iParam0[iVar03], 8);
		}
		else if (Function_174())
		{
			iVar1 = 1;
			Function_175(iParam0[iVar03], 8);
		}
		Function_175(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_34(iParam0[iVar03], 4))
		{
			if (!Function_34(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_34(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_34(iParam0[03], 8) || iVar1));
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
				Function_175(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_34(iParam0[iVar03], 4))
		{
			if (!Function_34(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
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
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
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
	Function_173();
	return 1;
}

void Function_173() //Position: 0xA557 / 42327
{
	if (!Function_7(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_174() //Position: 0xA597 / 42391
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

void Function_175(var uParam0, int iParam1) //Position: 0xA5C2 / 42434
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_176() //Position: 0xA5D3 / 42451
{
	if (!Function_7(128))
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

var Function_177(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA615 / 42517
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_178(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_175(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_178(var uParam0, int iParam1, int iParam2) //Position: 0xA64D / 42573
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_34(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_175(uParam0[iVar03], 4);
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

bool Function_179() //Position: 0xA711 / 42769
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar3, "Chest_BlipName");
			DECOR_SET_INT(bVar2, "ChestBlip_AsInt", bVar3);
			SET_BLIP_PRIORITY(bVar3, 1);
			if (Global_29006 == Global_30717[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 2.3f);
			}
			else if (Global_29006 == Global_30723[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 1.5f);
			}
		}
		bVar0 = true;
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_180(bool bParam0, var uParam1, struct<365> Param2) //Position: 0xA7F6 / 42998
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = Function_181(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			bVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(bVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, bVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				bVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(bVar17));
				if (!Function_11(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, bVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(bVar3);
}

var Function_181(struct<365> Param0) //Position: 0xA964 / 43364
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_182(int iParam0) //Position: 0xA978 / 43384
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_11((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_49((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_55(iParam0 + 4[iVar15] + 16, 1);
						SET_OBJECT_POSITION((*iParam0 + 4)[iVar15], vVar2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_55(iParam0 + 356, 1024);
	}
	return;
}

void Function_183(int iParam0, int iParam1) //Position: 0xAA2F / 43567
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (Function_184(&bVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(bVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_11(iParam0->f_356, 0x40000000))
			{
				bVar5 = GET_ACTOR_ENUM(bVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_156(bVar3, Global_34573) > 3.5f)
					{
						Function_205(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_11(iParam0->f_356, 2))
		{
			fVar6 = Function_156(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_11((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_205(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_11(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_156(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_11((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_205(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_11((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_205(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_11((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
					iParam0->f_372 = fVar4;
					iParam0->f_380 = fVar4;
				}
			}
			else if (fVar4 - iParam0->f_380) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
		}
	}
	return;
}

bool Function_184(var uParam0, float fParam1, bool bParam2) //Position: 0xAE6E / 44654
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_SPHERE(bVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(bVar3))
		{
			if (bParam2)
			{
				*uParam0 = bVar3;
			}
		}
		else
		{
			*uParam0 = bVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return bVar1;
}

void Function_185(int iParam0, int iParam1, float fParam2) //Position: 0xAEEB / 44779
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_7(0x8000000))
	{
		return;
	}
	cVar0 = Function_43(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_11(iParam0->f_356, 0x2000000))
				{
					Function_55(iParam0 + 356, 4194304);
					Function_55(iParam0 + 356, 8388608);
					Function_55(iParam0 + 356, 0x1000000);
					Function_55(iParam0 + 356, 1048576);
					Function_55(iParam0 + 356, 2097152);
					Function_205(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_55(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_11(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_205(iParam0 + 356, 1048576);
			Function_205(iParam0 + 356, 2097152);
			Function_205(iParam0 + 356, 4194304);
			Function_205(iParam0 + 356, 8388608);
			Function_205(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_11(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_205(iParam0 + 356, 1048576);
			Function_205(iParam0 + 356, 4194304);
			Function_205(iParam0 + 356, 8388608);
			Function_205(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_186(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_11(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_205(iParam0 + 356, 4194304);
		Function_205(iParam0 + 356, 8388608);
		Function_205(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_11(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_205(iParam0 + 356, 8388608);
		Function_205(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_11(iParam0->f_356, 0x1000000))
	{
		Function_205(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_186(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xB1C7 / 45511
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_70(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_187(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_187(bool bParam0, var uParam1, bool bParam2) //Position: 0xB1FA / 45562
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_188(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_49(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return iVar1;
}

bool Function_188(bool bParam0) //Position: 0xB2C4 / 45764
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_189(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_189(bool bParam0, int iParam1) //Position: 0xB30F / 45839
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_190() //Position: 0xB351 / 45905
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_201(Global_29006);
	fVar1 = Function_199(Global_29006);
	fVar2 = Function_200(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	fVar3 = Function_191(0.33f, Function_150(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_192(1);
	return;
}

float Function_191(int iParam0, int iParam1) //Position: 0xB39F / 45983
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_192(int iParam0) //Position: 0xB3B2 / 46002
{
	if (Function_11(iParam0, 1) && !Function_11(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_193(int iParam0, bool bParam1) //Position: 0xB3DF / 46047
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			SET_MOVER_FROZEN(bVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar1, 4);
			if (!Function_11(iParam0->f_356, 0x4000000))
			{
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(bVar1);
			vVar2 = { 0.0f, 0.0f, 0.0f };
			Var5 = { 0.0f, 0.0f, 0.0f };
			GET_OBJECT_POSITION(StackVal, &vVar2);
			GET_OBJECT_ORIENTATION(StackVal, &Var5);
			if (!bParam1)
			{
				TASK_PRIORITY_SET(bVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar1, &vVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, true);
				if (!Function_11(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_194(*iParam0, *iParam0, 0);
	return;
}

void Function_194(bool bParam0, bool bParam1, int iParam2) //Position: 0xB4C3 / 46275
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_195(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_195(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB512 / 46354
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_196(int iParam0) //Position: 0xB55C / 46428
{
	int iVar0;
	
	iVar0 = Function_102(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_39(iVar0) || Function_167(iParam0));
}

void Function_197(int iParam0) //Position: 0xB59B / 46491
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_11(iParam0->f_356, 512))
	{
		fVar0 = Function_199(Global_29006);
		iVar1 = Function_201(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_200(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_198(int iParam0) //Position: 0xB65C / 46684
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(bVar0) == 325)
	{
		REMOVE_BLIP(bVar0);
	}
	bVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(bVar1))
	{
		REMOVE_BLIP(bVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		bVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_199(bool bParam0) //Position: 0xB71F / 46879
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_200(int iParam0) //Position: 0xB779 / 46969
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_201(bool bParam0) //Position: 0xB8BC / 47292
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_202() //Position: 0xBA42 / 47682
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(bVar2))
		{
			REMOVE_BLIP(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_203(bool bParam0, int iParam1) //Position: 0xBAA0 / 47776
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_204(bool bParam0, bool bParam1) //Position: 0xBBC1 / 48065
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bParam1);
	return;
}

void Function_205(var uParam0, bool bParam1) //Position: 0xBBE4 / 48100
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_206(int iParam0, bool bParam1) //Position: 0xBBF3 / 48115
{
	int iVar0;
	
	iVar0 = Function_142(iParam0);
	if (!Function_207(iVar0))
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

bool Function_207(int iParam0) //Position: 0xBC30 / 48176
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_208(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBC47 / 48199
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_212(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_209(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_209(bParam0, bParam1, bParam2, 4294967295);
}

int Function_209(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBCA5 / 48293
{
	var uVar0;
	
	if (!Function_211(bParam2))
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
	uVar0 = Function_212(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_210(uVar0);
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

int Function_210(int iParam0) //Position: 0xBDFA / 48634
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

bool Function_211(int iParam0) //Position: 0xBE38 / 48696
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_212(int iParam0, int iParam1, int iParam2) //Position: 0xBE4D / 48717
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_213(int iParam0) //Position: 0xBE6D / 48749
{
	iParam0 = iParam0;
	if (!Function_56(Global_76846, 131072))
	{
		if (Function_46(8))
		{
			Function_50(Global_34573, 131072, 1, 0);
		}
	}
	if (Function_214())
	{
		if (!IS_SCRIPT_VALID(bLocal_738))
		{
			bLocal_738 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/MissingPersons/event_wanted_poster_z", 0);
		}
	}
	if (!iLocal_739)
	{
		iLocal_739 = 1;
		Function_282(iParam0, 0);
		Function_165(iParam0);
		Function_205(&iLocal_11 + 356, 2);
		Function_203(1, 4294967295);
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
	}
	return;
}

bool Function_214() //Position: 0xBF1A / 48922
{
	int iVar0;
	
	if (!Function_46(21))
	{
		return 0;
	}
	if (Function_217())
	{
		return 0;
	}
	if (Function_14())
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Function_91(1, 2, 1, 24))
	{
		return 0;
	}
	if (Global_29006 == Global_30679[1])
	{
		iVar0 = Function_216(Global_29006);
		if (Function_215(iVar0) >= 8)
		{
			return 0;
		}
	}
	if (Global_29006 == Global_30707[1])
	{
		iVar0 = Function_216(Global_29006);
		if (Function_215(iVar0) >= 5)
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

int Function_215(int iParam0) //Position: 0xBF98 / 49048
{
	if (!Function_207(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_216(bool bParam0) //Position: 0xBFB2 / 49074
{
	if (Function_13(bParam0))
	{
		return Function_208(bParam0, 0, 2);
	}
	return 4294967295;
}

bool Function_217() //Position: 0xBFCC / 49100
{
	return Function_11(StackVal, 1);
}

void Function_218(bool bParam0, float fParam1) //Position: 0xBFDB / 49115
{
	if (!Function_7(128))
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

void Function_219(bool bParam0, bool bParam1) //Position: 0xC01B / 49179
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
		Function_80(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_14())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_220(int iParam0) //Position: 0xC115 / 49429
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_221(bool bParam0) //Position: 0xC128 / 49448
{
	Function_222(StackVal, 0, 0.0f, 4, Local_108, 1);
	return;
}

void Function_222(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xC140 / 49472
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
		Function_225();
	}
	if (bParam5)
	{
		Function_223(1048576);
	}
}

void Function_223(int iParam0) //Position: 0xC253 / 49747
{
	Function_224(&Global_28842, iParam0);
	return;
}

void Function_224(var uParam0, var uParam1) //Position: 0xC261 / 49761
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_225() //Position: 0xC27C / 49788
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_223(16384);
	}
	return;
}

void Function_226(var uParam0) //Position: 0xC298 / 49816
{
	uParam0 = uParam0;
	return;
}

void Function_227() //Position: 0xC2A2 / 49826
{
	return;
}

void Function_228(int iParam0) //Position: 0xC2A8 / 49832
{
	iParam0 = iParam0;
	return;
}

void Function_229(var uParam0, int iParam1) //Position: 0xC2B2 / 49842
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_230(int iParam0, int iParam1) //Position: 0xC2C9 / 49865
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_231() //Position: 0xC2E5 / 49893
{
	return;
}

void Function_232() //Position: 0xC2EB / 49899
{
	return;
}

void Function_233(int iParam0) //Position: 0xC2F1 / 49905
{
	int iVar0;
	
	Function_245(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_244(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_243(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_242(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_241(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_239(0, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_238(0, &uLocal_740, Local_303);
	Function_245(1, &uLocal_740, -2664.0f, 67.26273f, 3436.0f);
	Function_244(1, &uLocal_740, -2664.0f, 67.26273f, 3436.0f);
	Function_243(1, &uLocal_740, -2664.0f, 67.26273f, 3436.0f);
	Function_242(1, &uLocal_740, -2664.0f, 67.26273f, 3436.0f);
	Function_241(1, &uLocal_740, -2664.0f, 67.26273f, 3436.0f);
	Function_239(1, &uLocal_740, -2668.083f, 71.69662f, 3468.72f);
	Function_238(1, &uLocal_740, Local_303);
	Function_245(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_244(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_243(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_242(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_241(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_239(2, &uLocal_740, -2662.679f, 67.263f, 3426.626f);
	Function_238(2, &uLocal_740, Local_303);
	Function_245(3, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_244(3, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_243(3, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_242(3, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_241(3, &uLocal_740, -2653.663f, 67.263f, 3431.632f);
	Function_239(3, &uLocal_740, -2671.787f, 71.663f, 3467.257f);
	Function_238(3, &uLocal_740, Local_303);
	Function_245(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_244(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_243(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_242(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_241(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_239(4, &uLocal_740, -2653.531f, 67.263f, 3437.866f);
	Function_238(4, &uLocal_740, Local_303);
	Function_245(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_244(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_243(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_242(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_241(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_239(5, &uLocal_740, -2661.686f, 67.26273f, 3450.588f);
	Function_238(5, &uLocal_740, Local_303);
	Function_245(6, &uLocal_740, -2674.545f, 67.26276f, 3446.025f);
	Function_244(6, &uLocal_740, -2674.545f, 67.26276f, 3446.025f);
	Function_243(6, &uLocal_740, -2674.545f, 67.26276f, 3446.025f);
	Function_242(6, &uLocal_740, -2674.545f, 67.26276f, 3446.025f);
	Function_241(6, &uLocal_740, -2674.545f, 67.26276f, 3446.025f);
	Function_239(6, &uLocal_740, -2671.912f, 71.66479f, 3461.807f);
	Function_238(6, &uLocal_740, Local_303);
	Function_245(7, &uLocal_740, -2676.572f, 67.263f, 3448.813f);
	Function_244(7, &uLocal_740, -2676.572f, 67.263f, 3448.813f);
	Function_243(7, &uLocal_740, -2676.572f, 67.263f, 3448.813f);
	Function_242(7, &uLocal_740, -2676.572f, 67.263f, 3448.813f);
	Function_241(7, &uLocal_740, -2676.572f, 67.263f, 3448.813f);
	Function_239(7, &uLocal_740, -2667.886f, 71.65486f, 3464.235f);
	Function_238(7, &uLocal_740, Local_303);
	Function_245(8, &uLocal_740, -2677.383f, 67.263f, 3445.655f);
	Function_244(8, &uLocal_740, -2677.383f, 67.263f, 3445.655f);
	Function_243(8, &uLocal_740, -2677.383f, 67.263f, 3445.655f);
	Function_242(8, &uLocal_740, -2677.383f, 67.263f, 3445.655f);
	Function_241(8, &uLocal_740, -2677.383f, 67.263f, 3445.655f);
	Function_239(8, &uLocal_740, -2671.848f, 71.663f, 3467.36f);
	Function_238(8, &uLocal_740, Local_303);
	Function_245(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_244(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_243(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_242(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_241(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_239(9, &uLocal_740, -2682.823f, 71.67903f, 3443.064f);
	Function_238(9, &uLocal_740, Local_303);
	Function_245(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_244(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_243(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_242(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_241(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_239(10, &uLocal_740, -2652.231f, 71.63991f, 3469.509f);
	Function_238(10, &uLocal_740, Local_303);
	Function_245(11, &uLocal_740, -2701.85f, 75.67541f, 3428.543f);
	Function_244(11, &uLocal_740, -2701.997f, 75.67541f, 3428.403f);
	Function_243(11, &uLocal_740, -2701.997f, 75.67541f, 3428.403f);
	Function_242(11, &uLocal_740, -2701.997f, 75.67541f, 3428.403f);
	Function_241(11, &uLocal_740, -2701.997f, 75.67541f, 3428.403f);
	Function_239(11, &uLocal_740, -2701.997f, 75.67541f, 3428.403f);
	Function_238(11, &uLocal_740, Local_303);
	Function_245(12, &uLocal_740, -2699.74f, 75.69822f, 3424.397f);
	Function_244(12, &uLocal_740, -2699.73f, 75.69822f, 3424.099f);
	Function_243(12, &uLocal_740, -2699.73f, 75.69822f, 3424.099f);
	Function_242(12, &uLocal_740, -2699.73f, 75.69822f, 3424.099f);
	Function_241(12, &uLocal_740, -2699.73f, 75.69822f, 3424.099f);
	Function_239(12, &uLocal_740, -2699.73f, 75.69822f, 3424.099f);
	Function_238(12, &uLocal_740, Local_303);
	Function_245(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_244(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_243(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_242(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_241(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_239(13, &uLocal_740, -2650.981f, 71.68264f, 3446.718f);
	Function_238(13, &uLocal_740, Local_303);
	Function_245(14, &uLocal_740, -2633.324f, 72.65486f, 3425.283f);
	Function_244(14, &uLocal_740, -2633.842f, 72.65486f, 3425.084f);
	Function_243(14, &uLocal_740, -2633.842f, 72.65486f, 3425.084f);
	Function_242(14, &uLocal_740, -2633.842f, 72.65486f, 3425.084f);
	Function_241(14, &uLocal_740, -2633.842f, 72.65486f, 3425.084f);
	Function_239(14, &uLocal_740, -2633.842f, 72.65486f, 3425.084f);
	Function_238(14, &uLocal_740, Local_303);
	Function_245(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_244(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_243(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_242(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_241(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_239(15, &uLocal_740, -2657.131f, 71.67947f, 3411.926f);
	Function_238(15, &uLocal_740, Local_303);
	Function_234(&Global_6667, &Global_7735, &uLocal_740, Global_6289, iParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!DECOR_CHECK_EXIST(StackVal, "zombie_gossip"))
			{
				DECOR_SET_BOOL(StackVal, "zombie_gossip", true);
			}
		}
		iVar0++;
	}
	return;
}

void Function_234(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0xCC83 / 52355
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_7(2))
	{
		return;
	}
	if (Function_230(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_9(uParam0[iVar02], 2))
		{
			if (Function_235(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
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
		Function_229(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_275(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_235(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0xCD35 / 52533
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_230(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_9(iParam0, 2))
	{
		return 1;
	}
	if (Function_9(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
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
		uParam1->f_8 = Function_237(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_154(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_8(iParam0, 4);
	}
	Function_236(StackVal, uParam3[iVar020]);
	return 1;
}

int Function_236(bool bParam0, bool bParam1) //Position: 0xCEA0 / 52896
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_154(StackVal, StackVal, *bParam1))
		{
			vVar0 = { StackVal, StackVal, *bParam1 };
		}
		if (!Function_154(StackVal, StackVal, *(bParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(bParam1 + 12) };
		}
		if (!Function_154(StackVal, StackVal, *(bParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(bParam1 + 24) };
		}
		if (!Function_154(StackVal, StackVal, *(bParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(bParam1 + 36) };
		}
		if (!Function_154(StackVal, StackVal, *(bParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(bParam1 + 48) };
		}
		if (!Function_154(StackVal, StackVal, *(bParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(bParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

var Function_237(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0xCFDC / 53212
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
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_70(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_238(int iParam0, var uParam1, bool bParam2) //Position: 0xD0F5 / 53493
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

void Function_239(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD150 / 53584
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_240(vector3 vParam0, vector3 vParam3) //Position: 0xD1B6 / 53686
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_241(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD1E3 / 53731
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_242(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD24B / 53835
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_243(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD2B5 / 53941
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_244(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD31A / 54042
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_245(int iParam0, var uParam1, vector3 vParam2) //Position: 0xD382 / 54146
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_240(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

void Function_246(int iParam0, bool bParam1, bool bParam2) //Position: 0xD3E5 / 54245
{
	if ((!Function_13(bParam1) || Global_3380) || Function_11(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_247(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_247(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_247(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_247(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_247(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_247(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_247(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_247(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_247(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_247(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_247(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_247(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_247(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_247(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_247(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_247(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_247(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_247(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_247(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_247(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_247(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_247(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_247(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_247(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_247(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_247(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_205(iParam0 + 356, 64);
	return;
}

void Function_247(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xD6B2 / 54962
{
	struct<8> Var0;
	bool bVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_55(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_254("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_253(bParam3, iParam1);
	iVar18 = Function_101(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_39(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_9(uParam2[bVar222], 4))
			{
				(iParam0 + 4[bVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, bVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(StackVal, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(StackVal, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					vVar24 = { 0.0f, 0.0f, 0.0f };
					vVar27 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(StackVal, &vVar24);
					GET_OBJECT_ORIENTATION(StackVal, &vVar27);
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_254("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_248(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_205(iParam0 + 4[bVar225] + 16, 1);
						Function_205(iParam0 + 356, 1024);
					}
					Function_205(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_6(uParam2[bVar222], 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_194(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_248(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xD89E / 55454
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	bool bVar13;
	bool bVar14;
	char* cVar15[32];
	bool bVar23;
	bool bVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	bVar1 = StackVal;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SQUAD_JOIN(bVar0, *iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(bVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(bVar0);
	SET_ACTOR_MAX_HEALTH(bVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(bVar0, 0);
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Var7 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_POSITION(StackVal, &vVar4);
	GET_OBJECT_ORIENTATION(StackVal, &Var7);
	bVar10 = true;
	if (DECOR_CHECK_EXIST(bVar1, "GiveWeapon"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, bVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(bVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRevolvers"));
			DECOR_SET_INT(StackVal, "ZP_NumRevolvers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 7);
		}
		else if (iVar12 == 39)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumPistols"));
			DECOR_SET_INT(StackVal, "ZP_NumPistols", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 6);
		}
		else if (iVar12 == 41)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
			DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 8);
		}
		else if (iVar12 == 42)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRifles"));
			DECOR_SET_INT(StackVal, "ZP_NumRifles", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 9);
		}
		else if (iVar12 == 43)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumShotguns"));
			DECOR_SET_INT(StackVal, "ZP_NumShotguns", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 10);
		}
		else if (iVar12 == 44)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumSnipers"));
			DECOR_SET_INT(StackVal, "ZP_NumSnipers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0, 1, 1);
		bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
		DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
		DECOR_SET_INT(bVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, false);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_252(bVar0, 0);
	Function_251(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_250(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_250(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		bVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(bVar14), 32);
		bVar23 = FIND_VOLUME_IN_LAYOUT(bParam2, &cVar15);
		if (IS_VOLUME_VALID(bVar23))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, bVar23, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(bVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_OVERRIDE_SET_POSTURE(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(bVar1, "Gringo") || !bParam3)
	{
		bVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(bVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_249(bVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(bVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, bVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 2);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	Function_250(bVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.75f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(bVar1, "Core"))
		{
			iParam1->f_168 = bVar0;
		}
		else if (Global_13172[iParam1->f_36411].f_32 < 0.0f)
		{
			Global_13172[iParam1->f_36411].f_32 = (Global_13172[iParam1->f_36411].f_32 - 1.0f);
			DECOR_SET_BOOL(bVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_249(bool bParam0, bool bParam1) //Position: 0xDF10 / 57104
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_250(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xDF1D / 57117
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

void Function_251(bool bParam0, bool bParam1) //Position: 0xDF64 / 57188
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_252(bool bParam0, bool bParam1) //Position: 0xDFAA / 57258
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

var Function_253(bool bParam0, int iParam1) //Position: 0xDFD9 / 57305
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3[4];
	bool bVar8;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_39(iParam1))
		{
			if (STRING_CONTAINS_STRING(bVar8, "_def"))
			{
				iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(bVar8, "_safe"))
		{
			iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return iVar3[(RAND_INT_RANGE(0, 100000) % iVar2)];
}

struct<32> Function_254(bool bParam0) //Position: 0xE07D / 57469
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("0", &cVar8, ""), 4);
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

struct<32> Function_255(char* cParam0, char* cParam1, char* cParam2) //Position: 0xE0E7 / 57575
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_256() //Position: 0xE106 / 57606
{
	Function_165(Global_30679[1]);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
	return;
}

bool Function_257(int iParam0) //Position: 0xE119 / 57625
{
	if (Function_11(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_172(iParam0 + 192);
}

int Function_258(bool bParam0) //Position: 0xE138 / 57656
{
	if (!Function_13(bParam0))
	{
		return 1;
	}
	return Function_230(&(Global_29008[bParam0]), 4);
}

int Function_259() //Position: 0xE154 / 57684
{
	return Function_260(&Global_6667, &Global_7735, Global_30679[1]);
}

int Function_260(var uParam0, var uParam1, int iParam2) //Position: 0xE169 / 57705
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_14())
	{
		return 1;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_230(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_9(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_9(uParam0[iVar02], 8))
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

void Function_261(bool bParam0) //Position: 0xE24A / 57930
{
	Function_262(&bLocal_487, bLocal_7, "corral", 1, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 2, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 6, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "corral", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps01", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps01", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps01", 7, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps01", 8, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps02", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps02", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps02", 10, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps02", 11, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "guardTowerProps02", 12, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 1, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 2, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 3, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 4, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 10, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 11, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 12, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 14, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 16, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 17, &Global_29155[bParam010] + 20, 1, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 18, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 21, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "leftWing", 23, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 6, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 10, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 12, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 13, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 14, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 15, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 16, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 17, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 21, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 22, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_262(&bLocal_487, bLocal_7, "nrightWing", 23, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_262(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xE964 / 59748
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_263(uParam0);
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
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_58(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_58(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_58(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_58(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_263(int iParam0) //Position: 0xEA50 / 59984
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_264() //Position: 0xEA7E / 60030
{
	Function_265(&uLocal_8, &iLocal_423, 4, Local_121.f_92, 4294967295, 4);
	Function_265(StackVal, &uLocal_8, &iLocal_423, 5, 4294967295, 258);
	Function_265(StackVal, &uLocal_8, &iLocal_423, 5, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_12, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_16, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_20, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_24, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_28, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_32, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_36, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_40, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_44, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_48, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_52, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_56, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_60, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_64, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_68, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_128, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_72, 4294967295, 258);
	Function_265(&uLocal_8, &iLocal_423, 5, Local_121.f_76, 4294967295, 258);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_121.f_188);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_121.f_192);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_121.f_196);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_121.f_200);
	return;
}

void Function_265(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xEC03 / 60419
{
	if (*uParam0 >= (*iParam1 - 1))
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
	iParam1[*uParam03]->f_4 = bParam3;
	(*iParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_266(int iParam0) //Position: 0xECDE / 60638
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_267(int iParam0, bool bParam1) //Position: 0xECED / 60653
{
	bool bVar0;
	bool bVar1;
	
	if (Function_11(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_268(int iParam0, bool bParam1, bool bParam2) //Position: 0xED55 / 60757
{
	bool bVar0;
	bool bVar1;
	
	if (Function_11(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	if (!Function_39(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_269() //Position: 0xEDE3 / 60899
{
	return Local_108;
}

void Function_270(int iParam0) //Position: 0xEDEB / 60907
{
	bLocal_7 = Function_271(Local_108, "fortmercer", iParam0);
	return;
}

var Function_271(bool bParam0, bool bParam1, int iParam2) //Position: 0xEE07 / 60935
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_272() //Position: 0xEE26 / 60966
{
	return Function_273();
}

int Function_273() //Position: 0xEE2F / 60975
{
	var uVar0;
	
	Function_274(3, 3);
	uVar0 = uVar0;
	Local_121 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(Local_121))
	{
		Local_121 = CREATE_LAYOUT("FortMercer_layout");
	}
	Local_121.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_mhall", 2, -2649.517f, 68.55588f, 3450.906f, 0.0f, -29.97373f, 0.0f, 15.42691f, 3.008064f, 14.71695f);
	Local_121.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_bhouse", 2, -2670.565f, 72.8721f, 3465.248f, 0.0f, -29.36548f, 0.0f, 14.3416f, 2.864084f, 6.356913f);
	Local_121.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_ktch", 2, -2658.49f, 69.06083f, 3471.515f, 0.0f, -29.84722f, 0.0f, 11.50963f, 3.909573f, 12.71703f);
	Local_121.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_wcht", 2, -2698.669f, 77.20699f, 3427.093f, 0.0f, -24.34862f, 0.0f, 8.574005f, 3.649508f, 7.303839f);
	Local_121.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_lout", 2, -2697.9f, 77.20728f, 3444.638f, 0.0f, -24.73473f, 0.0f, 9.835356f, 6.825248f, 4.801512f);
	Local_121.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_strg", 2, -2694.25f, 72.97475f, 3423.115f, 0.0f, -25.02649f, 0.0f, 11.39772f, 2.584774f, 10.54916f);
	Local_121.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_stbl", 2, -2680.295f, 68.96297f, 3472.791f, 0.0f, -29.9394f, 0.0f, 27.98677f, 3.861176f, 10.56342f);
	Local_121.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_bgate", 2, -2679.312f, 69.70753f, 3502.79f, 0.0f, -60.10372f, 0.0f, 6.129364f, 5.072798f, 6.811599f);
	Local_121.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_lroom", 2, -2701.603f, 68.53193f, 3462.322f, 0.0f, 45.24875f, 0.0f, 9.925068f, 2.772244f, 12.03804f);
	Local_121.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_poker", 2, -2667.538f, 72.52653f, 3406.434f, 0.0f, -43.31699f, 0.0f, 5.963757f, 2.00437f, 7.587271f);
	Local_121.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_gallows", 2, -2667.276f, 70.2331f, 3443.413f, 0.0f, -30.76227f, 0.0f, 5.510205f, 6.036074f, 6.225192f);
	Local_121.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_capt", 2, -2653.127f, 72.62975f, 3451.886f, 0.0f, -29.74869f, 0.0f, 10.56437f, 2.346262f, 9.636632f);
	Local_121.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_guard", 2, -2698.687f, 72.90523f, 3427.09f, 0.0f, -24.35601f, 0.0f, 7.558179f, 2.687525f, 6.487865f);
	Local_121.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_junk", 2, -2650.381f, 69.06666f, 3463.822f, 0.0f, -29.56781f, 0.0f, 5.085761f, 4.033856f, 8.193235f);
	Local_121.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_cell01", 2, -2678.403f, 72.50082f, 3422.269f, 0.0f, -45.95888f, 0.0f, 6.149725f, 1.818786f, 8.262666f);
	Local_121.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_cell02", 2, -2672.24f, 72.38272f, 3420.312f, 0.0f, -44.93504f, 0.0f, 6.112944f, 1.889683f, 9.011908f);
	Local_121.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_qmstrL", 2, -2664.269f, 68.51096f, 3411.767f, 0.0f, -44.49215f, 0.0f, 17.62775f, 2.767096f, 10.77704f);
	Local_121.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_ltrn", 2, -2691.816f, 68.63033f, 3436.343f, 0.0f, 64.46426f, 0.0f, 9.340141f, 2.999645f, 7.448772f);
	Local_121.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_121, "nfomv_lrdr", 2, -2635.13f, 69.04331f, 3427.818f, 0.0f, 34.60624f, 0.0f, 8.3489f, 3.784436f, 13.11563f);
	Local_121.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_crty01", 2, -2663.123f, 68.3531f, 3459.644f, 0.0f, -27.9743f, 0.0f, 21.20863f, 2.807564f, 9.780213f);
	Local_121.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_crty02", 2, -2679.247f, 68.65075f, 3436.596f, 0.0f, -27.7466f, 0.0f, 11.18532f, 4.303538f, 31.32902f);
	Local_121.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_crty03", 2, -2646.567f, 68.54951f, 3437.918f, 0.0f, -35.80642f, 0.0f, 15.03917f, 3.238213f, 12.27297f);
	Local_121.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_region", 3, -2677.159f, 69.3575f, 3453.067f, 0.0f, 20.0f, 0.0f, 148.6315f, 68.99423f, 148.6315f);
	Local_121.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside1", 2, -2693.05f, 68.17274f, 3492.392f, 0.0f, 44.77333f, 0.0f, 27.16319f, 7.566692f, 26.91148f);
	Local_121.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside2", 2, -2690.459f, 73.34067f, 3429.775f, 0.0f, -25.89381f, 0.0f, 24.83562f, 3.808626f, 21.42042f);
	Local_121.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside3", 2, -2669.117f, 74.32137f, 3466.158f, 0.0f, 60.40723f, 0.0f, 13.38915f, 5.58506f, 22.17075f);
	Local_121.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside4", 2, -2649.296f, 74.47092f, 3456.1f, 0.0f, -30.38955f, 0.0f, 12.0132f, 5.939147f, 22.85616f);
	Local_121.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside5", 2, -2637.179f, 73.41586f, 3429.597f, 0.0f, 36.70274f, 0.0f, 8.396272f, 2.759163f, 8.219356f);
	Local_121.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_volInside6", 2, -2667.409f, 67.26273f, 3440.0f, 0.0f, -30.07065f, 0.0f, 19.12296f, 3.782212f, 26.45642f);
	Local_121.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_escortOut", 2, -2679.441f, 71.63278f, 3452.902f, 0.0f, 44.89903f, 0.0f, 109.5825f, 35.35309f, 79.18626f);
	Local_121.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_millTopInside", 2, -2707.801f, 72.73019f, 3461.011f, 0.0f, 44.91544f, 0.0f, 16.88742f, 2.364186f, 21.9827f);
	Local_121.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_qmstrR", 2, -2645.53f, 68.26025f, 3427.128f, 0.0f, 45.44781f, 0.0f, 5.622883f, 1.709828f, 10.27026f);
	Local_121.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_towerTop", 2, -2679.213f, 73.6018f, 3503.276f, 0.0f, 30.71208f, 0.0f, 4.555361f, 1.412669f, 5.897355f);
	Local_121.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_backNearSteps", 2, -2711.947f, 67.26276f, 3472.885f, 0.0f, -44.90123f, 0.0f, 12.08167f, 3.72745f, 9.820806f);
	Local_121.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_fte_stayOut", 2, -2680.111f, 67.26273f, 3459.408f, 0.0f, -43.83292f, 0.0f, 61.10632f, 27.03403f, 90.70605f);
	Local_121.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_121, "fomv_SpawnAnimal_set");
	(*&Local_121 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_121, "animal1", 2, -2736.0f, 77.89381f, 3404.192f, 0.0f, -44.73434f, 0.0f, 57.21432f, 40.97836f, 157.852f);
	ADD_TO_VOLUME_SET(Local_121.f_164, (*&Local_121 + 144)[0]);
	(*&Local_121 + 144)[1] = CREATE_VOLUME_IN_LAYOUT(Local_121, "animal2", 2, -2736.135f, 66.07565f, 3511.928f, 0.0f, -44.31988f, 0.0f, 139.3303f, 36.16797f, 36.16797f);
	ADD_TO_VOLUME_SET(Local_121.f_164, (*&Local_121 + 144)[1]);
	(*&Local_121 + 144)[2] = CREATE_VOLUME_IN_LAYOUT(Local_121, "animal3", 2, -2635.602f, 67.26273f, 3500.634f, 0.0f, -44.80806f, 0.0f, 36.2158f, 36.2158f, 140.8952f);
	ADD_TO_VOLUME_SET(Local_121.f_164, (*&Local_121 + 144)[2]);
	(*&Local_121 + 144)[3] = CREATE_VOLUME_IN_LAYOUT(Local_121, "animal4", 2, -2637.467f, 67.26273f, 3384.581f, 0.0f, -45.29849f, 0.0f, 185.4813f, 39.39309f, 39.39309f);
	ADD_TO_VOLUME_SET(Local_121.f_164, (*&Local_121 + 144)[3]);
	Local_121.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombies_01", 2, -2736.75f, 70.077f, 3425.954f, 0.0f, -38.68778f, 0.0f, 24.12453f, 12.56856f, 61.33868f);
	Local_121.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombies_03", 2, -2641.215f, 70.077f, 3500.764f, 0.0f, -44.14563f, 0.0f, 25.54531f, 12.56856f, 61.33868f);
	Local_121.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombies_04", 2, -2607.137f, 70.077f, 3469.413f, 0.0f, 7.262249f, 0.0f, 25.54531f, 12.56856f, 61.33868f);
	Local_121.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombies_05", 2, -2709.639f, 70.077f, 3397.488f, 0.0f, -73.69435f, 0.0f, 25.54531f, 12.56856f, 61.33868f);
	Local_121.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombieRestrict", 2, -2679.846f, 67.26273f, 3454.958f, 0.0f, 141.9808f, 0.0f, 81.68234f, 36.40017f, 126.0139f);
	Local_121.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombieRestrict1", 2, -2642.228f, 67.26273f, 3451.161f, 0.0f, -24.62269f, 0.0f, 14.98081f, 10.6108f, 65.15099f);
	Local_121.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombieRestrict2", 2, -2700.708f, 67.26273f, 3426.017f, 0.0f, -44.75581f, 0.0f, 19.50917f, 10.6108f, 105.7535f);
	Local_121.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombieRestrict3", 2, -2712.445f, 67.26273f, 3499.079f, 0.0f, 42.7628f, 0.0f, 14.98081f, 10.6108f, 81.13966f);
	Local_121.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_121, "fomv_zombieRestrict4", 2, -2672.955f, 67.26273f, 3501.636f, 0.0f, 141.9808f, 0.0f, 14.98081f, 10.6108f, 69.86515f);
	Local_121.f_220 = CREATE_VOLUME_SET_IN_LAYOUT(Local_121, "fomv_courtyard_set");
	(*&Local_121 + 204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_121, "courtyard3", 2, -2655.164f, 72.33649f, 3430.243f, 0.0f, -47.66368f, 0.0f, 33.9564f, 14.52212f, 23.62618f);
	ADD_TO_VOLUME_SET(Local_121.f_220, (*&Local_121 + 204)[0]);
	(*&Local_121 + 204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_121, "courtyard2", 2, -2658.206f, 67.26273f, 3450.209f, 0.0f, -27.68414f, 0.0f, 21.38556f, 21.38556f, 30.3321f);
	ADD_TO_VOLUME_SET(Local_121.f_220, (*&Local_121 + 204)[1]);
	(*&Local_121 + 204)[2] = CREATE_VOLUME_IN_LAYOUT(Local_121, "courtyard1", 2, -2675.349f, 67.26273f, 3440.657f, 0.0f, -29.12703f, 0.0f, 21.38556f, 21.38556f, 31.30858f);
	ADD_TO_VOLUME_SET(Local_121.f_220, (*&Local_121 + 204)[2]);
	*(&Local_121 + 224) = { -2668.029f, 70.19038f, 3442.759f };
	*(&Local_121 + 224 + 12) = { 0.0f, 152.5669f, 0.0f };
	Local_121.f_248 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_AreaTreasure1", -2668.029f, 70.19038f, 3442.759f, 0.0f, 152.5669f, 0.0f);
	*(&Local_121 + 252) = { -2692.353f, 67.25689f, 3468.803f };
	*(&Local_121 + 252 + 12) = { 0.0f, -205.9882f, 0.0f };
	Local_121.f_276 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_AreaTreasure2", -2692.353f, 67.25689f, 3468.803f, 0.0f, -205.9882f, 0.0f);
	*(&Local_121 + 280) = { -2709.715f, 71.6468f, 3463.659f };
	*(&Local_121 + 280 + 12) = { 0.0f, -134.914f, 0.0f };
	Local_121.f_304 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_AreaTreasure3", -2709.715f, 71.6468f, 3463.659f, 0.0f, -134.914f, 0.0f);
	*(&Local_121 + 308) = { -2664.348f, 71.64236f, 3404.95f };
	*(&Local_121 + 308 + 12) = { 0.0f, 130.431f, 0.0f };
	Local_121.f_332 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_AreaTreasure4", -2664.348f, 71.64236f, 3404.95f, 0.0f, 130.431f, 0.0f);
	*(&Local_121 + 336) = { -2640.856f, 72.63904f, 3431.684f };
	*(&Local_121 + 336 + 12) = { 0.0f, -55.02145f, 0.0f };
	Local_121.f_360 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_AreaTreasure5", -2640.856f, 72.63904f, 3431.684f, 0.0f, -55.02145f, 0.0f);
	*(&Local_121 + 364) = { -2646.402f, 67.434f, 3424.368f };
	*(&Local_121 + 364 + 12) = { 0.0f, 135.8928f, 0.0f };
	Local_121.f_388 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_01", -2646.402f, 67.434f, 3424.368f, 0.0f, 135.8928f, 0.0f);
	*(&Local_121 + 392) = { -2664.424f, 67.3814f, 3411.926f };
	*(&Local_121 + 392 + 12) = { 0.0f, 194.3702f, 0.0f };
	Local_121.f_416 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_02", -2664.424f, 67.3814f, 3411.926f, 0.0f, 194.3702f, 0.0f);
	*(&Local_121 + 420) = { -2686.93f, 67.47489f, 3430.025f };
	*(&Local_121 + 420 + 12) = { 0.0f, 223.9042f, 0.0f };
	Local_121.f_444 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_03", -2686.93f, 67.47489f, 3430.025f, 0.0f, 223.9042f, 0.0f);
	*(&Local_121 + 448) = { -2701.783f, 67.47336f, 3463.878f };
	*(&Local_121 + 448 + 12) = { 0.0f, 223.9042f, 0.0f };
	Local_121.f_472 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_04", -2701.783f, 67.47336f, 3463.878f, 0.0f, 223.9042f, 0.0f);
	*(&Local_121 + 476) = { -2682.912f, 67.63786f, 3457.769f };
	*(&Local_121 + 476 + 12) = { 0.0f, 332.0082f, 0.0f };
	Local_121.f_500 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_05", -2682.912f, 67.63786f, 3457.769f, 0.0f, 332.0082f, 0.0f);
	*(&Local_121 + 504) = { -2653.028f, 67.63373f, 3454.612f };
	*(&Local_121 + 504 + 12) = { 0.0f, 420.3056f, 0.0f };
	Local_121.f_528 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_06", -2653.028f, 67.63373f, 3454.612f, 0.0f, 420.3056f, 0.0f);
	*(&Local_121 + 532) = { -2656.889f, 66.86784f, 3469.668f };
	*(&Local_121 + 532 + 12) = { 0.0f, 361.7412f, 0.0f };
	Local_121.f_556 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_07", -2656.889f, 66.86784f, 3469.668f, 0.0f, 361.7412f, 0.0f);
	*(&Local_121 + 560) = { -2653.633f, 71.81962f, 3449.391f };
	*(&Local_121 + 560 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_121.f_584 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_08", -2653.633f, 71.81962f, 3449.391f, 0.0f, 334.7802f, 0.0f);
	*(&Local_121 + 588) = { -2669.916f, 71.82719f, 3464.239f };
	*(&Local_121 + 588 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_121.f_612 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_09", -2669.916f, 71.82719f, 3464.239f, 0.0f, 334.7802f, 0.0f);
	*(&Local_121 + 616) = { -2683.083f, 71.65487f, 3461.135f };
	*(&Local_121 + 616 + 12) = { 0.0f, 334.7802f, 0.0f };
	Local_121.f_640 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_010", -2683.083f, 71.65487f, 3461.135f, 0.0f, 334.7802f, 0.0f);
	*(&Local_121 + 644) = { -2666.96f, 71.65486f, 3407.694f };
	*(&Local_121 + 644 + 12) = { 0.0f, 223.939f, 0.0f };
	Local_121.f_668 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_011", -2666.96f, 71.65486f, 3407.694f, 0.0f, 223.939f, 0.0f);
	*(&Local_121 + 672) = { -2682.528f, 70.97542f, 3419.109f };
	*(&Local_121 + 672 + 12) = { 0.0f, 133.667f, 0.0f };
	Local_121.f_696 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_012", -2682.528f, 70.97542f, 3419.109f, 0.0f, 133.667f, 0.0f);
	*(&Local_121 + 700) = { -2699.713f, 71.65486f, 3427.596f };
	*(&Local_121 + 700 + 12) = { -6.708309f, -16.8552f, -6.746848f };
	Local_121.f_724 = CREATE_POINT_IN_LAYOUT(Local_121, "fomf_interiorPoint_013", -2699.713f, 71.65486f, 3427.596f, -6.708309f, -16.8552f, -6.746848f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos1", -2558.059f, 78.327f, 3364.936f, -3.151f, 115.049f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos2", -2647.692f, 78.935f, 3335.974f, -2.463f, 178.762f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos3", -2741.691f, 76.29f, 3474.818f, -7.276f, -70.072f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos4", -2752.739f, 79.729f, 3449.356f, -7.563f, -95.397f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos5", -2675.687f, 87.945f, 3616.577f, -7.161f, 12.089f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos6", -2700.544f, 77.72f, 3425.59f, 0.343f, -121.065f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos7", -2669.246f, 68.491f, 3418.768f, 3.093f, 169.194f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos8", -2664.349f, 68.567f, 3464.262f, 5.557f, 19.423f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos9", -2681.334f, 73.68f, 3509.738f, 5.156f, 22.345f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_121, "fom_vista_cam_pos10", -2719.429f, 69.114f, 3471.881f, 0.057f, -103.533f, 0.0f);
	return 1;
}

void Function_274(int iParam0, int iParam1) //Position: 0x1044B / 66635
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

void Function_275(var uParam0, int iParam1) //Position: 0x10494 / 66708
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_276() //Position: 0x104A3 / 66723
{
	return;
}

bool Function_277() //Position: 0x104A9 / 66729
{
	return Function_278();
}

int Function_278() //Position: 0x104B2 / 66738
{
	bool bVar0;
	
	Function_274(3, 3);
	bVar0 = bVar0;
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_footlocker", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_low_wall_rfl", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_177(&Local_303 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	if (!Function_172(&Local_303 + 4))
	{
		return 0;
	}
	Local_303 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(Local_303))
	{
		Local_303 = CREATE_LAYOUT("FortMercer_layout");
	}
	Local_303.f_152 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_wall01", "look_out_window_L", -2665.907f, 71.64018f, 3403.63f, 0.0f, -401.1821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_152), 0);
	Local_303.f_156 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_wall02", "Rand_Idle_Sit_Ground", -2664.901f, 71.66741f, 3404.394f, 0.0f, -220.89f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_156), 0);
	Local_303.f_160 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_wall03", "Rand_Idle_Sit_Ground", -2663.846f, 71.6609f, 3406.573f, 0.0f, -309.0667f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_160), 0);
	Local_303.f_164 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking01", "Rand_Idle_Sit_Ground", -2677.343f, 71.64853f, 3424.686f, 0.0f, 43.50084f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_164), 0);
	Local_303.f_168 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking02", "Rand_Idle_Sit_Ground", -2678.645f, 71.673f, 3419.76f, 0.0f, -183.8617f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_168), 0);
	Local_303.f_172 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_stand01", "Rand_Idle_Sit_Ground", -2652.218f, 67.44727f, 3463.009f, 0.0f, -303.463f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_172), 0);
	Local_303.f_176 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking03", "Rand_Idle_Sit_Ground", -2669.836f, 67.46977f, 3413.344f, 0.0f, -44.40336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_176), 0);
	Local_303.f_180 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking04", "Rand_Idle_Sit_Ground", -2666.87f, 67.46695f, 3416.499f, 0.0f, -44.40336f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_180), 0);
	Local_303.f_184 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking05", "Rand_Idle_Sit_Ground", -2690.7f, 71.66615f, 3440.958f, 0.0f, 20.88004f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_184), 0);
	Local_303.f_188 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking06", "Rand_Idle_Sit_Ground", -2686.097f, 71.64673f, 3456.186f, 0.0f, -26.10706f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_188), 0);
	Local_303.f_192 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking07", "Rand_Idle_Sit_Ground", -2700.747f, 75.77688f, 3443.135f, 0.0f, -116.9844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_192), 0);
	Local_303.f_196 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking08", "Rand_Idle_Sit_Ground", -2675.682f, 71.65533f, 3458.85f, 0.0f, 59.55045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_196), 0);
	Local_303.f_200 = CREATE_GRINGO_IN_LAYOUT(Local_303, "peeing03", "Pee_nospawn", -2656.566f, 67.5366f, 3457.382f, 0.0f, -302.9175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_200), 0);
	Local_303.f_204 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground01", "Rand_Idle_Sit_Ground_nospawn", -2675.851f, 67.2496f, 3445.115f, 0.0f, -166.1453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_204), 0);
	Local_303.f_208 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground02", "Rand_Idle_Sit_Ground_nospawn", -2669.284f, 67.26254f, 3442.474f, 0.0f, -213.6721f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_208), 0);
	Local_303.f_212 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground03", "Rand_Idle_Sit_Ground_nospawn", -2667.1f, 67.26273f, 3447.146f, 0.0f, -243.0467f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_212), 0);
	Local_303.f_216 = CREATE_GRINGO_IN_LAYOUT(Local_303, "look_distance04", "stand_lookdistance_w_any", -2635.913f, 72.71568f, 3421.03f, 0.0f, -16.01797f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_216), 0);
	Local_303.f_220 = CREATE_GRINGO_IN_LAYOUT(Local_303, "look_distance05", "stand_lookdistance_w_any", -2628.921f, 72.66003f, 3430.926f, 0.0f, -102.8346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_220), 0);
	Local_303.f_224 = CREATE_GRINGO_IN_LAYOUT(Local_303, "look_distance08", "stand_lookdistance_w_any", -2696.563f, 71.64793f, 3417.732f, 0.0f, -339.6927f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_224), 0);
	Local_303.f_228 = CREATE_GRINGO_IN_LAYOUT(Local_303, "look_distance10", "stand_lookdistance_w_any", -2693.644f, 75.77552f, 3445.083f, 0.0f, -387.2234f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_228), 0);
	Local_303.f_232 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking11", "Rand_Idle_Sit_Ground", -2685.345f, 71.67052f, 3422.633f, 0.0f, 89.51358f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_232), 0);
	Local_303.f_236 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking12", "Rand_Idle_Sit_Ground", -2654.864f, 67.4707f, 3445.845f, 0.0f, 239.8689f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_236), 0);
	Local_303.f_240 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking13", "Rand_Idle_Sit_Ground", -2655.883f, 67.46286f, 3444.473f, 0.0f, 307.6628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_240), 0);
	Local_303.f_244 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking14", "Rand_Idle_Sit_Ground", -2657.019f, 67.46426f, 3454.149f, 0.0f, 326.7446f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_244), 0);
	Local_303.f_248 = CREATE_GRINGO_IN_LAYOUT(Local_303, "look_distance11", "stand_lookdistance_w_any", -2656.346f, 67.47937f, 3447.885f, 0.0f, -300.1348f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_248), 0);
	Local_303.f_252 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground09", "Rand_Idle_Sit_Ground_nospawn", -2688.473f, 67.26274f, 3445.767f, 0.0f, -111.1309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_252), 0);
	Local_303.f_256 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking15", "Rand_Idle_Sit_Ground", -2654.661f, 67.4388f, 3456.158f, 0.0f, 326.7446f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_256), 0);
	Local_303.f_260 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking16", "Rand_Idle_Sit_Ground", -2652.387f, 67.45412f, 3461.44f, 0.0f, 109.4792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_260), 0);
	Local_303.f_264 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking17", "Rand_Idle_Sit_Ground", -2654.029f, 67.4543f, 3463.558f, 0.0f, 61.15176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_264), 0);
	Local_303.f_268 = CREATE_GRINGO_IN_LAYOUT(Local_303, "nsmoking18", "Rand_Idle_Sit_Ground", -2646.844f, 71.64709f, 3449.165f, 0.0f, -29.70947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_268), 0);
	Local_303.f_272 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_nearwall01", "Rand_Idle_Sit_Ground", -2650.985f, 71.65274f, 3446.726f, 0.0f, -29.70947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_272), 0);
	Local_303.f_276 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground012", "Rand_Idle_Sit_Ground_nospawn", -2674.549f, 67.24675f, 3446.019f, 0.0f, -259.4083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_276), 0);
	Local_303.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground013", "Rand_Idle_Sit_Ground_nospawn", -2676.646f, 67.25671f, 3446.429f, 0.0f, -78.35222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_280), 0);
	Local_303.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground014", "Rand_Idle_Sit_Ground_nospawn", -2670.24f, 67.28008f, 3443.984f, 0.0f, -390.5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_284), 0);
	Local_303.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_303, "sit_ground015", "Rand_Idle_Sit_Ground_nospawn", -2667.804f, 67.26273f, 3446.287f, 0.0f, -211.189f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_288), 0);
	Local_303.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_wall04", "Rand_Idle_Sit_Ground", -2665.842f, 67.48122f, 3473.932f, 0.0f, -94.12594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_292), 0);
	Local_303.f_296 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_wall05", "look_out_window_L", -2659.557f, 67.44946f, 3464.311f, 0.0f, -31.5282f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_296), 0);
	Local_303.f_300 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lean_smoke01", "Rand_Idle_Sit_Ground", -2657.443f, 67.45677f, 3477.083f, 0.0f, 188.4175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_300), 0);
	Local_303.f_304 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_stand02", "Rand_Idle_Sit_Ground", -2653.214f, 67.45596f, 3456.719f, 0.0f, -20.08036f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_304), 0);
	Local_303.f_308 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_stand03", "Rand_Idle_Sit_Ground", -2654.914f, 67.45504f, 3442.158f, 0.0f, -117.673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_308), 0);
	Local_303.f_312 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_stand04", "Rand_Idle_Sit_Ground", -2655.428f, 71.64399f, 3443.928f, 0.0f, -65.58479f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_312), 0);
	Local_303.f_316 = CREATE_GRINGO_IN_LAYOUT(Local_303, "stand_peeing01", "stand_peeing_b_any", -2647.779f, 71.6308f, 3462.686f, 0.0f, -180.7515f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_316), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_303, "ZombiePack_Footlocker", "ZombiePack_Footlocker", -2670.355f, 71.66841f, 3468.587f, 0.0f, -29.0251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	DECOR_SET_BOOL(bVar0, "ActionAreaRewardChest", true);
	Local_303.f_320 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", -2633.33f, 72.6592f, 3425.272f, 0.0f, -54.81543f, 0.0f);
	Local_303.f_324 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl1", "DLC_survivor_roof_rfl", -2634.042f, 72.65697f, 3424.235f, 0.0f, -54.75466f, 0.0f);
	Local_303.f_328 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl2", "DLC_survivor_roof_rfl", -2655.912f, 71.64996f, 3412.999f, 0.0f, -44.03092f, 0.0f);
	Local_303.f_332 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl3", "DLC_survivor_roof_rfl", -2657.132f, 71.64799f, 3411.931f, 0.0f, -45.0f, 0.0f);
	Local_303.f_336 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl4", "DLC_survivor_roof_rfl", -2644.968f, 71.65189f, 3458.128f, 0.0f, -119.7593f, 0.0f);
	Local_303.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl5", "DLC_survivor_roof_rfl", -2644.444f, 71.66096f, 3457.196f, 0.0f, -119.4679f, 0.0f);
	Local_303.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl6", "DLC_survivor_roof_rfl", -2701.855f, 75.65486f, 3428.544f, 0.0f, -294.4221f, 0.0f);
	Local_303.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_roof_rfl7", "DLC_survivor_roof_rfl", -2699.768f, 75.66821f, 3424.396f, 0.0f, -385.1082f, 0.0f);
	Local_303.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand", "Rand_Idle_Sit_Ground", -2664.0f, 67.27133f, 3436.0f, 0.0f, 31.23199f, 0.0f);
	Local_303.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand1", "Rand_Idle_Sit_Ground", -2664.0f, 67.26274f, 3434.339f, 0.0f, 145.7594f, 0.0f);
	Local_303.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2668.0f, 67.30368f, 3436.0f, 0.0f, 0.0f, 0.0f);
	Local_303.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -2667.44f, 67.28098f, 3434.608f, 0.0f, 151.7762f, 0.0f);
	Local_303.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_low_wall_rfl", "DLC_survivor_low_wall_rfl", -2632.15f, 72.65486f, 3426.912f, 0.0f, -55.98843f, 0.0f);
	Local_303.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_low_wall_rfl1", "DLC_survivor_low_wall_rfl", -2634.887f, 72.65486f, 3423.02f, 0.0f, -54.00683f, 0.0f);
	Local_303.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", -2638.9f, 72.64423f, 3424.005f, 0.0f, 27.27901f, 0.0f);
	Local_303.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_stand_rfl1", "DLC_survivor_stand_rfl", -2652.651f, 71.65486f, 3471.307f, 0.0f, -123.8643f, 0.0f);
	Local_303.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_stand_rfl2", "DLC_survivor_stand_rfl", -2653.639f, 71.67105f, 3472.958f, 0.0f, -123.187f, 0.0f);
	Local_303.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_low_wall_rfl2", "DLC_survivor_low_wall_rfl", -2658.735f, 71.65784f, 3466.494f, 0.0f, 151.0003f, 0.0f);
	Local_303.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand2", "Rand_Idle_Sit_Ground", -2665.131f, 71.63969f, 3418.876f, 0.0f, -12.3965f, 0.0f);
	Local_303.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand3", "Rand_Idle_Sit_Ground", -2652.748f, 72.66403f, 3423.116f, 0.0f, 313.3295f, 0.0f);
	Local_303.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_stand_rfl3", "DLC_survivor_stand_rfl", -2650.321f, 72.68628f, 3418.49f, 0.0f, -49.47885f, 0.0f);
	Local_303.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -2652.0f, 67.26274f, 3430.322f, 0.0f, 111.7418f, 0.0f);
	Local_303.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -2668.435f, 71.69662f, 3469.33f, 0.0f, -209.9721f, 0.0f);
	Local_303.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", -2671.848f, 71.663f, 3467.36f, 0.0f, 149.5762f, 0.0f);
	Local_303.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -2671.783f, 71.66479f, 3461.891f, 0.0f, -122.9929f, 0.0f);
	Local_303.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", -2667.69f, 71.65486f, 3464.354f, 0.0f, -121.3699f, 0.0f);
	Local_303.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand4", "Rand_Idle_Sit_Ground", -2682.828f, 71.66589f, 3443.063f, 0.0f, 64.23396f, 0.0f);
	Local_303.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand5", "Rand_Idle_Sit_Ground", -2645.37f, 71.65486f, 3458.983f, 0.0f, -293.1378f, 0.0f);
	Local_303.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -2648.535f, 71.65486f, 3457.99f, 0.0f, -95.32245f, 0.0f);
	Local_303.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_303, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2700.516f, 75.65486f, 3427.566f, 0.0f, 67.58453f, 0.0f);
	Local_303.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -2676.0f, 67.28488f, 3448.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_440), 0);
	Local_303.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand9", "Rand_Idle_Sit_Ground", -2674.364f, 67.28266f, 3448.0f, 0.0f, -59.32608f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_444), 0);
	Local_303.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand10", "Rand_Idle_Sit_Ground", -2672.395f, 67.28324f, 3447.812f, 0.0f, 64.54951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_448), 0);
	Local_303.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_303, "Rand_Idle_Sit_Ground6", "Rand_Idle_Sit_Ground", -2656.061f, 71.6728f, 3464.07f, 0.0f, -16.7641f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_452), 0);
	Local_303.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_303, "rand_idle_stand11", "Rand_Idle_Sit_Ground", -2655.594f, 71.67953f, 3462.486f, 0.0f, -200.7833f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_303.f_456), 0);
	Local_303.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_303, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", -2666.782f, 71.663f, 3470.334f, 0.0f, 239.2479f, 0.0f);
	Local_303.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_low_wall_rfl3", "DLC_survivor_low_wall_rfl", -2651.797f, 71.67572f, 3469.908f, 0.0f, -119.2935f, 0.0f);
	Local_303.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_303, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -2699.472f, 75.65486f, 3425.036f, 0.0f, 67.58453f, 0.0f);
	Local_303.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_303, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -2654.745f, 71.68948f, 3470.796f, 0.0f, 246.6953f, 0.0f);
	Local_303.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_303, "DLC_survivor_stand_rfl4", "DLC_survivor_stand_rfl", -2654.235f, 72.68628f, 3420.949f, 0.0f, -230.4917f, 0.0f);
	return 1;
}

void Function_279() //Position: 0x1240D / 74765
{
	SET_FACTIONS_STATUS_TWO_WAY(13, 8, 1);
	SET_FACTIONS_STATUS_TWO_WAY(13, 4, 1);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(13, Global_34573, 2);
	SET_FACTIONS_STATUS_ONE_WAY(8, 32, 2);
	SET_FACTIONS_STATUS_ONE_WAY(4, 32, 2);
	SET_FACTIONS_STATUS_ONE_WAY(13, 32, 2);
	return;
}

bool Function_280() //Position: 0x1243F / 74815
{
	return Function_281();
}

int Function_281() //Position: 0x12448 / 74824
{
	var uVar0;
	
	Function_274(3, 3);
	uVar0 = uVar0;
	Function_177(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_172(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("FortMercer_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("FortMercer_layout");
	}
	*(&Local_108 + 20) = { -2679.319f, 71.65485f, 3424.564f };
	*(&Local_108 + 20 + 12) = { 0.0f, -134.7838f, 0.0f };
	Local_108.f_44 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", -2679.319f, 71.65485f, 3424.564f, 0.0f, -134.7838f, 0.0f);
	Local_108.f_48 = CREATE_GRINGO_IN_LAYOUT(Local_108, "player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", -2680.997f, 71.65323f, 3423.375f, 0.0f, 44.55763f, 0.0f);
	return 1;
}

void Function_282(bool bParam0, bool bParam1) //Position: 0x1259A / 75162
{
	char* cVar0;
	
	if (Global_3380 || Function_7(0x8000000))
	{
		return;
	}
	cVar0 = Function_43(bParam0);
	if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30717[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_283(int iParam0, bool bParam1, bool bParam2) //Position: 0x12630 / 75312
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_55(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_285(bParam1))
		{
			Function_205(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_208(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_101(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_284(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_177(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_177(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_172(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_45(bParam1, Function_39(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_284(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1272B / 75563
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_34(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_175(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_175(uParam0[iVar03], 8);
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

bool Function_285(int iParam0) //Position: 0x127FB / 75771
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_289(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_206(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_287(0))
		{
			return 0;
		}
		if ((!Function_46(24) || Function_286(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_286(int iParam0) //Position: 0x12876 / 75894
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_287(int iParam0) //Position: 0x1288B / 75915
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_288(iParam0)11].f_12 < 0;
}

int Function_288(int iParam0) //Position: 0x128F1 / 76017
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_289(int iParam0, int iParam1) //Position: 0x129B3 / 76211
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_290() //Position: 0x129CF / 76239
{
	ALLOW_TUMBLEWEEDS(1);
	Function_291(&Global_6667, &Global_7735, Global_30679[1]);
	return;
}

void Function_291(var uParam0, var uParam1, int iParam2) //Position: 0x129E8 / 76264
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_13(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_14())
	{
		return;
	}
	strcpy(&cVar1, Function_12(iParam2), 64);
	if (Function_10())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_230(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_275(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_6(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_6(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_292(bool bParam0, var uParam1) //Position: 0x12AD0 / 76496
{
	if (!Function_7(128))
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

