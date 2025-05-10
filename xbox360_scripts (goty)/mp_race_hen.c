//Decompiled with MagicRDR v1.0
//Function Count : 70
//Statics Count : 1144
//Natives Count : 82
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
	int iLocal_11 = 0;
	var uLocal_12 = 0;
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
	var uLocal_27 = 11;
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
	var uLocal_49 = 11;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
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
	int iLocal_67 = 0;
	float fLocal_68 = 0.0f;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 4;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
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
	var uLocal_948 = 1;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 31;
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
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	if (Function_68())
	{
		Function_67();
	}
	else
	{
		Function_64();
		Local_134.f_500 = 6;
		ENABLE_CHILD_SECTOR("hen_flags01x");
		Function_63(0, 1);
		Function_63(1, 2);
		Function_62(0, TO_FLOAT(26));
		Function_61(1, 1);
		Function_60(Local_264);
		Function_58(1);
		Function_57(8);
		Function_55(0, 0);
		while (!IS_EXITFLAG_SET())
		{
			Function_11();
			WAIT(false);
		}
		Function_6(1, 0, 0);
	}
	DISABLE_CHILD_SECTOR("hen_flags01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x91 / 145
{
	Function_2(&Local_264 + 4);
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0) //Position: 0xA5 / 165
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xCB / 203
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1F9 / 505
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x213 / 531
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0, int iParam1, int iParam2) //Position: 0x230 / 560
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
		Function_7(Global_16524, bVar0, 1);
	}
	return;
}

void Function_7(int iParam0, bool bParam1, bool bParam2) //Position: 0x316 / 790
{
	int iVar0;
	
	Function_10(iParam0);
	Function_9(bParam1);
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
	Function_8();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_8() //Position: 0x48F / 1167
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_9(bool bParam0) //Position: 0x49B / 1179
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

void Function_10(int iParam0) //Position: 0x4E1 / 1249
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

void Function_11() //Position: 0x527 / 1319
{
	if (!Function_54(1, 1))
	{
		if (Function_52())
		{
			Function_40(6640, 6028);
		}
		else
		{
			Function_40(4150, 1365);
		}
	}
	return;
}

int Function_12(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x555 / 1365
{
	int iVar0;
	bool bVar1;
	char* cVar2[24];
	bool bVar8;
	
	Function_28(bParam1, uParam2, uParam3);
	iVar0 = Function_27(bParam0);
	if (!bParam1)
	{
		if (Function_25(4) && !Function_23(bParam0, 16, 1))
		{
			Function_21(bParam0, (iVar0 - 500), 0);
		}
		else
		{
			Function_21(bParam0, iVar0, 0);
		}
	}
	bVar8 = false;
	if (!Function_25(4) || Function_23(bParam0, 16, 1))
	{
		switch (-iVar0)
		{
			case 0x00000001:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_1"));
				bVar1 = 10;
				break;
			
			case 0x00000002:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_2"));
				bVar1 = 8;
				break;
			
			case 0x00000003:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_3"));
				bVar1 = 6;
				break;
			
			case 0x00000004:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_4"));
				bVar1 = 4;
				break;
			
			case 0x00000005:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_5"));
				bVar1 = 3;
				break;
			
			case 0x00000006:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_6"));
				bVar1 = 2;
				break;
			
			case 0x00000007:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_7"));
				bVar1 = 2;
				break;
			
			case 0x00000008:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_8"));
				bVar1 = true;
				break;
		}
	}
	else if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("MP_Race_DNF"));
		bVar1 = false;
	}
	if (Function_25(4))
	{
		bVar8++;
		strcpy(&cVar2, "<green>+", 24);
		stradd(&cVar2, I2STR(bVar1), 24);
		stradd(&cVar2, "</green>", 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		strcpy(&cVar2, "", 24);
		strcpy(&cVar2, I2STR(Function_19(5, bParam0)), 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		Function_13(bVar8, Function_15(bParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_13(bool bParam0, int iParam1) //Position: 0x793 / 1939
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_14(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_14(var uParam0) //Position: 0x9C0 / 2496
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_15(int iParam0) //Position: 0xA31 / 2609
{
	return Function_16(0, iParam0);
}

int Function_16(int iParam0, bool bParam1) //Position: 0xA3D / 2621
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_18(iParam0);
	}
	if (!Function_17(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

bool Function_17(bool bParam0) //Position: 0xAA6 / 2726
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

var Function_18(int iParam0) //Position: 0xB47 / 2887
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_19(int iParam0, bool bParam1) //Position: 0xB57 / 2903
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_20(iParam0);
	}
	if (!Function_17(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_20(int iParam0) //Position: 0xBBE / 3006
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_21(bool bParam0, int iParam1, int iParam2) //Position: 0xBCE / 3022
{
	var uVar0;
	
	return Function_22(bParam0, iParam1, &uVar0, iParam2);
}

int Function_22(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xBDF / 3039
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_23(bool bParam0, int iParam1, bool bParam2) //Position: 0xC44 / 3140
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam1, bParam2);
	}
	if (!Function_17(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_24(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_24(int iParam0) //Position: 0xCC5 / 3269
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_25(int iParam0) //Position: 0xFDE / 4062
{
	return Function_26(Global_76905.f_132, iParam0);
}

int Function_26(var uParam0, int iParam1) //Position: 0xFEF / 4079
{
	return (uParam0 && iParam1) == 0;
}

int Function_27(int iParam0) //Position: 0xFFC / 4092
{
	return Function_19(0, iParam0);
}

void Function_28(bool bParam0, int iParam1, char* cParam2) //Position: 0x1008 / 4104
{
	if (bParam0)
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

bool Function_29() //Position: 0x1029 / 4137
{
	return Function_25(32768);
}

int Function_30() //Position: 0x1036 / 4150
{
	if (!Function_35(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "mp_race_sb_ptTotal");
		NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_time");
	}
	else
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	}
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_31();
	return 1;
}

void Function_31() //Position: 0x1113 / 4371
{
	if (Function_25(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_32(8192, 1, 1);
	}
	else if (Function_25(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_32(8192, 1, 1);
	}
	else
	{
		Function_32(8192, 0, 1);
	}
	return;
}

void Function_32(int iParam0, bool bParam1, int iParam2) //Position: 0x1150 / 4432
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_34(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_33(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0x1178 / 4472
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_34(var uParam0, int iParam1) //Position: 0x118B / 4491
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_35(bool bParam0) //Position: 0x119A / 4506
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_29() || Function_39(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_36(Function_29());
	return 1;
}

void Function_36(bool bParam0) //Position: 0x121B / 4635
{
	if (bParam0 || Function_25(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_25(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_25(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_25(1048576) || Function_25(4)) || Function_54(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_32(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_37(var uParam0) //Position: 0x12A4 / 4772
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_38(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x12B8 / 4792
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_39(bool bParam0, bool bParam1) //Position: 0x12FD / 4861
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_40(int iParam0, int iParam1) //Position: 0x1331 / 4913
{
	Function_41(iParam0, iParam1, 6021);
	return;
}

void Function_41(var uParam0, var uParam1, int iParam2) //Position: 0x1342 / 4930
{
	if (Function_25(0x4000000))
	{
		Function_45();
		Function_32(0x4000000, 0, 1);
	}
	if (Function_25(0x10000000))
	{
		Function_45();
		Function_32(0x10000000, 0, 1);
	}
	if (Function_25(2) != Function_25(0x2000000))
	{
		Function_45();
		Function_32(0x2000000, Function_25(2), 1);
	}
	if (Function_29())
	{
		Function_44(!Function_25(16));
	}
	if (Function_25(16))
	{
		Function_43(&uParam0, &uParam1, &iParam2);
		if (Function_25(8192))
		{
			if (!Function_25(4194304))
			{
				Function_32(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_25(8388608))
			{
				Function_32(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_42();
		}
		Function_32(16384, 1, 1);
	}
	else if (!Function_25(32))
	{
		Function_42();
	}
	Function_32(32768, 0, 1);
	return;
}

void Function_42() //Position: 0x14DB / 5339
{
	if (Function_25(4194304))
	{
		Function_32(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_25(8388608))
	{
		Function_32(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_43(var uParam0, var uParam1, int iParam2) //Position: 0x15E4 / 5604
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_32(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_25(0x40000000);
	bVar3 = !Function_25(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_17(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_23(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_21(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_25(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_21(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

void Function_44(bool bParam0) //Position: 0x175C / 5980
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_32(16384, 0, 1);
	return;
}

void Function_45() //Position: 0x1776 / 6006
{
	Function_32(32768, 1, 0);
	return;
}

int Function_46() //Position: 0x1785 / 6021
{
	return 1;
}

int Function_47(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x178C / 6028
{
	int iVar0;
	char* cVar1[24];
	bool bVar7;
	
	Function_28(bParam1, iParam2, cParam3);
	bParam1 = bParam1;
	iVar0 = Function_49(bParam0);
	Function_21(bParam0, iVar0, 0);
	bVar7 = false;
	switch (-iVar0)
	{
		case 0x00000001:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_1"));
			break;
		
		case 0x00000002:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_2"));
			break;
		
		case 0x00000003:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_3"));
			break;
		
		case 0x00000004:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_4"));
			break;
		
		case 0x00000005:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_5"));
			break;
		
		case 0x00000006:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_6"));
			break;
		
		case 0x00000007:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_7"));
			break;
		
		case 0x00000008:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_8"));
			break;
	}
	bVar7++;
	strcpy(&cVar1, "", 24);
	strcpy(&cVar1, I2STR(Function_19(5, bParam0)), 24);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, &cVar1);
	bVar7++;
	Function_13(bVar7, Function_16(5, bParam0));
	bVar7++;
	Function_48(bVar7, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x192A / 6442
{
	if (Function_25(4))
	{
		if (Function_23(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

var Function_49(bool bParam0) //Position: 0x195D / 6493
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_19(5, bParam0);
	iVar2 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_50(bVar1))
		{
			if (bParam0 != bVar1)
			{
				iVar3 = Function_19(5, bVar1);
				if (iVar0 <= iVar3)
				{
					iVar2 = (iVar2 - 1);
				}
				else if (iVar0 == iVar3)
				{
					fVar4 = Function_16(5, bParam0);
					fVar5 = Function_16(5, bVar1);
					if (fVar4 < fVar5)
					{
						iVar2 = (iVar2 - 1);
					}
					else if (fVar4 != fVar5)
					{
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

bool Function_50(bool bParam0) //Position: 0x19DA / 6618
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_17(bParam0);
}

int Function_51() //Position: 0x19F0 / 6640
{
	if (!Function_35(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptTotal");
	NET_PLAYER_LIST_SET_HEADER(4, "MP_race_totalTime");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_31();
	return 1;
}

bool Function_52() //Position: 0x1A81 / 6785
{
	return Function_53(4);
}

int Function_53(int iParam0) //Position: 0x1A8B / 6795
{
	return Function_26((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_54(int iParam0, bool bParam1) //Position: 0x1A9E / 6814
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_55(var uParam0, int iParam1) //Position: 0x1ABE / 6846
{
	Function_10(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_56(StackVal, iParam1);
	}
	return;
}

void Function_56(int iParam0, int iParam1) //Position: 0x1AEF / 6895
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_10(iParam0);
	Function_9(iVar0);
	PRINTNL();
	Function_7(iParam0, iVar0, iParam1);
	return;
}

void Function_57(int iParam0) //Position: 0x1B14 / 6932
{
	bool bVar0;
	
	if (Global_63399 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		bVar0 = Global_63400;
	}
	else if (!iParam0 & 2 != 0)
	{
		bVar0 = Global_63401;
	}
	else if (!iParam0 & 4 != 0)
	{
		bVar0 = Global_63402;
	}
	else if (!iParam0 & 8 != 0)
	{
		bVar0 = Global_63403;
	}
	else if (!iParam0 & 16 != 0)
	{
		bVar0 = Global_63404;
	}
	else if (!iParam0 & 32 != 0)
	{
		bVar0 = Global_63405;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&bVar0, 0, false, false, 1);
	SET_TIME_OF_DAY(bVar0);
	return;
}

void Function_58(int iParam0) //Position: 0x1BD6 / 7126
{
	Function_59(8, iParam0);
	return;
}

void Function_59(int iParam0, bool bParam1) //Position: 0x1BE3 / 7139
{
	if (bParam1)
	{
		Function_34(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_33(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_60(int iParam0) //Position: 0x1C0B / 7179
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_61(int iParam0, bool bParam1) //Position: 0x1C19 / 7193
{
	if (bParam1)
	{
		Function_34(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_33(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x1C41 / 7233
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_63(int iParam0, int iParam1) //Position: 0x1C62 / 7266
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_64() //Position: 0x1C83 / 7299
{
	var uVar0;
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
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	bool bVar82;
	bool bVar83;
	bool bVar84;
	bool bVar85;
	bool bVar86;
	bool bVar87;
	bool bVar88;
	bool bVar89;
	bool bVar90;
	bool bVar91;
	bool bVar92;
	bool bVar93;
	bool bVar94;
	bool bVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	bool bVar114;
	bool bVar115;
	bool bVar116;
	bool bVar117;
	bool bVar118;
	bool bVar119;
	bool bVar120;
	bool bVar121;
	bool bVar122;
	bool bVar123;
	bool bVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	bool bVar128;
	bool bVar129;
	bool bVar130;
	bool bVar131;
	bool bVar132;
	bool bVar133;
	bool bVar134;
	bool bVar135;
	bool bVar136;
	bool bVar137;
	bool bVar138;
	
	Function_66(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_HEN_layout");
	Local_264.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -911.2114f, 90.24378f, 2430.209f, -1.066764f, 108.5527f, -1.103834f, 23.27515f, 5.36031f, 20.05701f);
	DECOR_SET_INT((*&Local_264 + 20)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[0]);
	(*&Local_264 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -977.2203f, 93.98312f, 2467.922f, 177.8506f, 19.04873f, -178.102f, 39.16458f, 10.26805f, 19.76059f);
	DECOR_SET_INT((*&Local_264 + 20)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[1]);
	(*&Local_264 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -974.8509f, 105.2503f, 2531.411f, 362.4992f, 203.3881f, -1.483108f, 36.16962f, 10.26805f, 17.70477f);
	DECOR_SET_INT((*&Local_264 + 20)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[2]);
	(*&Local_264 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -787.9124f, 102.1999f, 2687.158f, 147.8386f, -85.34772f, -149.4358f, 57.61511f, 10.26805f, 17.83872f);
	DECOR_SET_INT((*&Local_264 + 20)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[3]);
	(*&Local_264 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -728.2145f, 101.1291f, 2663.631f, -358.4809f, -92.68001f, 350.5479f, 56.09258f, 10.26805f, 19.48919f);
	DECOR_SET_INT((*&Local_264 + 20)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[4]);
	(*&Local_264 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -685.2676f, 100.2678f, 2693.192f, -360.9833f, -121.4518f, 358.0384f, 56.09258f, 10.26805f, 25.63379f);
	DECOR_SET_INT((*&Local_264 + 20)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[5]);
	(*&Local_264 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -656.1546f, 90.03809f, 2732.813f, 1.824908f, -155.7395f, 1.843916f, 13.07392f, 10.26805f, 18.77283f);
	DECOR_SET_INT((*&Local_264 + 20)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[6]);
	(*&Local_264 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -625.7307f, 78.35529f, 2784.049f, -9.920929f, -185.9724f, -3.694497f, 13.07392f, 12.84211f, 25.44512f);
	DECOR_SET_INT((*&Local_264 + 20)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[7]);
	(*&Local_264 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -563.9341f, 57.74855f, 2864.032f, -201.021f, -77.40646f, 205.502f, 54.99622f, 10.26805f, 19.84065f);
	DECOR_SET_INT((*&Local_264 + 20)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[8]);
	(*&Local_264 + 20)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -497.0784f, 52.95591f, 2852.541f, -346.5671f, -71.55483f, 345.7102f, 71.78866f, 10.26805f, 16.2801f);
	DECOR_SET_INT((*&Local_264 + 20)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[9]);
	(*&Local_264 + 20)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -540.3882f, 37.76312f, 2920.056f, -186.7998f, -0.4384032f, 178.866f, 66.07987f, 10.26805f, 19.28608f);
	DECOR_SET_INT((*&Local_264 + 20)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[10]);
	(*&Local_264 + 20)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -523.3842f, 30.44666f, 2970.977f, -192.6908f, -57.38936f, 189.5546f, 84.8255f, 14.16102f, 22.30589f);
	DECOR_SET_INT((*&Local_264 + 20)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[11]);
	(*&Local_264 + 20)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -471.7867f, 28.08062f, 2996.703f, -243.7775f, -82.41602f, 242.3911f, 85.0026f, 17.94962f, 16.14259f);
	DECOR_SET_INT((*&Local_264 + 20)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[12]);
	(*&Local_264 + 20)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -423.2107f, 38.42279f, 2954.222f, -268.9513f, -83.19929f, 267.7576f, 94.40825f, 15.28242f, 18.75886f);
	DECOR_SET_INT((*&Local_264 + 20)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[13]);
	(*&Local_264 + 20)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -310.4462f, 28.32186f, 2953.254f, 8.695932f, -41.88632f, -6.186462f, 67.57001f, 10.26805f, 24.36278f);
	DECOR_SET_INT((*&Local_264 + 20)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[14]);
	(*&Local_264 + 20)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -221.2838f, 34.58791f, 2879.093f, 8.695932f, -41.88632f, -6.186462f, 67.57001f, 11.81376f, 24.36278f);
	DECOR_SET_INT((*&Local_264 + 20)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[15]);
	(*&Local_264 + 20)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -133.03f, 59.14652f, 2797.86f, 187.2601f, -244.8955f, -176.4311f, 22.86353f, 14.96318f, 20.62348f);
	DECOR_SET_INT((*&Local_264 + 20)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[16]);
	(*&Local_264 + 20)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint17", 2, -263.0591f, 85.9464f, 2784.179f, 191.5182f, -219.9227f, -178.6906f, 26.09753f, 10.26805f, 17.54497f);
	DECOR_SET_INT((*&Local_264 + 20)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[17]);
	(*&Local_264 + 20)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint18", 2, -221.7411f, 95.56821f, 2705.526f, -3.00157f, -4.339558f, -0.6336313f, 28.20888f, 10.26805f, 18.11458f);
	DECOR_SET_INT((*&Local_264 + 20)[18], "pointNum", 18);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[18]);
	(*&Local_264 + 20)[19] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint19", 2, -251.2932f, 95.29415f, 2618.934f, -2.660669f, 26.26378f, -0.7809989f, 52.037f, 10.26805f, 20.33235f);
	DECOR_SET_INT((*&Local_264 + 20)[19], "pointNum", 19);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[19]);
	(*&Local_264 + 20)[20] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint20", 2, -299.771f, 93.27402f, 2585.857f, -5.06939f, 61.89343f, -4.07712f, 52.037f, 10.26805f, 22.24201f);
	DECOR_SET_INT((*&Local_264 + 20)[20], "pointNum", 20);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[20]);
	(*&Local_264 + 20)[21] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint21", 2, -355.0213f, 92.17521f, 2534.31f, -5.017508f, 64.05189f, -5.338892f, 42.49834f, 10.26805f, 21.00442f);
	DECOR_SET_INT((*&Local_264 + 20)[21], "pointNum", 21);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[21]);
	(*&Local_264 + 20)[22] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint22", 2, -479.2086f, 96.81442f, 2537.481f, 12.62028f, 79.26686f, 8.158505f, 39.34746f, 7.700776f, 19.61293f);
	DECOR_SET_INT((*&Local_264 + 20)[22], "pointNum", 22);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[22]);
	(*&Local_264 + 20)[23] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint23", 2, -576.5503f, 96.89757f, 2494.474f, 6.311213f, 68.27511f, 1.618305f, 39.34746f, 7.700776f, 20.32989f);
	DECOR_SET_INT((*&Local_264 + 20)[23], "pointNum", 23);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[23]);
	(*&Local_264 + 20)[24] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint24", 2, -674.6251f, 95.1226f, 2503.699f, 0.0f, -266.7185f, 0.0f, 78.30479f, 4.278285f, 20.82918f);
	DECOR_SET_INT((*&Local_264 + 20)[24], "pointNum", 24);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[24]);
	(*&Local_264 + 20)[25] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint25", 2, -764.3075f, 92.5062f, 2451.893f, 3.261009f, -307.748f, 0.9806553f, 27.25259f, 4.278285f, 19.65282f);
	DECOR_SET_INT((*&Local_264 + 20)[25], "pointNum", 25);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[25]);
	(*&Local_264 + 20)[26] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointFinish", 2, -814.1061f, 93.31841f, 2409.082f, 0.0f, -295.6015f, 0.0f, 71.01006f, 6.925615f, 3.745169f);
	DECOR_SET_INT((*&Local_264 + 20)[26], "pointNum", 26);
	DECOR_SET_BOOL((*&Local_264 + 20)[26], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_132, (*&Local_264 + 20)[26]);
	*(&Local_264 + 136) = { -889.5489f, 90.10427f, 2422.617f };
	*(&Local_264 + 136 + 12) = { 0.0f, -72.08572f, 0.0f };
	Local_264.f_160 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -889.5489f, 90.10427f, 2422.617f, 0.0f, -72.08572f, 0.0f);
	Local_264.f_164 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	*(&Local_264 + 168[06]) = { -884.6411f, 90.34009f, 2417.275f };
	*(&Local_264 + 168[06] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -884.6411f, 90.34009f, 2417.275f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_164);
	*(&Local_264 + 168[16]) = { -883.7216f, 90.27145f, 2419.72f };
	*(&Local_264 + 168[16] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -883.7216f, 90.27145f, 2419.72f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_164);
	*(&Local_264 + 168[26]) = { -885.6948f, 90.50272f, 2414.824f };
	*(&Local_264 + 168[26] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -885.6948f, 90.50272f, 2414.824f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_164);
	*(&Local_264 + 168[36]) = { -882.8246f, 90.247f, 2422.036f };
	*(&Local_264 + 168[36] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -882.8246f, 90.247f, 2422.036f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_164);
	*(&Local_264 + 168[46]) = { -882.1313f, 90.30735f, 2424.168f };
	*(&Local_264 + 168[46] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -882.1313f, 90.30735f, 2424.168f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_164);
	*(&Local_264 + 168[56]) = { -886.5868f, 90.87619f, 2412.393f };
	*(&Local_264 + 168[56] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -886.5868f, 90.87619f, 2412.393f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_164);
	*(&Local_264 + 168[66]) = { -880.9686f, 90.34708f, 2415.979f };
	*(&Local_264 + 168[66] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -880.9686f, 90.34708f, 2415.979f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_164);
	*(&Local_264 + 168[76]) = { -880.0173f, 90.29748f, 2418.219f };
	*(&Local_264 + 168[76] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -880.0173f, 90.29748f, 2418.219f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_164);
	*(&Local_264 + 168[86]) = { -881.9982f, 90.56499f, 2413.15f };
	*(&Local_264 + 168[86] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos9", -881.9982f, 90.56499f, 2413.15f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_164);
	*(&Local_264 + 168[96]) = { -878.9644f, 90.28918f, 2420.456f };
	*(&Local_264 + 168[96] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos10", -878.9644f, 90.28918f, 2420.456f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_164);
	*(&Local_264 + 168[106]) = { -878.1631f, 90.27337f, 2422.657f };
	*(&Local_264 + 168[106] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos11", -878.1631f, 90.27337f, 2422.657f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_164);
	*(&Local_264 + 168[116]) = { -877.4296f, 90.45858f, 2414.466f };
	*(&Local_264 + 168[116] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos12", -877.4296f, 90.45858f, 2414.466f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_164);
	*(&Local_264 + 168[126]) = { -876.3505f, 90.37823f, 2417.062f };
	*(&Local_264 + 168[126] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos13", -876.3505f, 90.37823f, 2417.062f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_164);
	*(&Local_264 + 168[136]) = { -878.6251f, 90.66104f, 2411.861f };
	*(&Local_264 + 168[136] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos14", -878.6251f, 90.66104f, 2411.861f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_164);
	*(&Local_264 + 168[146]) = { -875.4375f, 90.41155f, 2419.172f };
	*(&Local_264 + 168[146] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos15", -875.4375f, 90.41155f, 2419.172f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_164);
	*(&Local_264 + 168[156]) = { -874.573f, 90.38744f, 2421.235f };
	*(&Local_264 + 168[156] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos16", -874.573f, 90.38744f, 2421.235f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_164);
	Local_264.f_556 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	*(&Local_264 + 560[06]) = { -914.8104f, 90.1029f, 2431.082f };
	*(&Local_264 + 560[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -914.8104f, 90.1029f, 2431.082f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_556);
	*(&Local_264 + 560[16]) = { -979.433f, 92.4623f, 2473.035f };
	*(&Local_264 + 560[16] + 12) = { 0.0f, -206.1033f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire1", -979.433f, 92.4623f, 2473.035f, 0.0f, -206.1033f, 0.0f);
	DECOR_SET_INT(bVar18, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_556);
	*(&Local_264 + 560[26]) = { -971.7929f, 101.2555f, 2536.013f };
	*(&Local_264 + 560[26] + 12) = { 0.0f, 108.0431f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire2", -971.7929f, 101.2555f, 2536.013f, 0.0f, 108.0431f, 0.0f);
	DECOR_SET_INT(bVar19, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_556);
	*(&Local_264 + 560[36]) = { -782.4503f, 98.23435f, 2684.508f };
	*(&Local_264 + 560[36] + 12) = { 0.0f, -141.4073f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire3", -782.4503f, 98.23435f, 2684.508f, 0.0f, -141.4073f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_556);
	*(&Local_264 + 560[46]) = { -721.2427f, 99.23003f, 2663.939f };
	*(&Local_264 + 560[46] + 12) = { 0.0f, -147.5565f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire4", -721.2427f, 99.23003f, 2663.939f, 0.0f, -147.5565f, 0.0f);
	DECOR_SET_INT(bVar21, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_556);
	*(&Local_264 + 560[56]) = { -678.8922f, 93.90294f, 2696.117f };
	*(&Local_264 + 560[56] + 12) = { 0.0f, -147.5565f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire5", -678.8922f, 93.90294f, 2696.117f, 0.0f, -147.5565f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_556);
	*(&Local_264 + 560[66]) = { -653.2786f, 83.83328f, 2738.852f };
	*(&Local_264 + 560[66] + 12) = { 8.703268f, 46.82941f, 4.776563f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire6", -653.2786f, 83.83328f, 2738.852f, 8.703268f, 46.82941f, 4.776563f);
	DECOR_SET_INT(bVar23, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_556);
	*(&Local_264 + 560[76]) = { -625.4649f, 73.72144f, 2785.997f };
	*(&Local_264 + 560[76] + 12) = { 8.703268f, 46.82941f, 4.776563f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire7", -625.4649f, 73.72144f, 2785.997f, 8.703268f, 46.82941f, 4.776563f);
	DECOR_SET_INT(bVar24, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_556);
	*(&Local_264 + 560[86]) = { -558.3874f, 54.08253f, 2866.603f };
	*(&Local_264 + 560[86] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire8", -558.3874f, 54.08253f, 2866.603f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_556);
	*(&Local_264 + 560[96]) = { -487.9996f, 49.14577f, 2867.664f };
	*(&Local_264 + 560[96] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire9", -487.9996f, 49.14577f, 2867.664f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_556);
	*(&Local_264 + 560[106]) = { -540.774f, 32.62445f, 2925.153f };
	*(&Local_264 + 560[106] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire10", -540.774f, 32.62445f, 2925.153f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar27, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_556);
	*(&Local_264 + 560[116]) = { -522.9875f, 26.979f, 2971.175f };
	*(&Local_264 + 560[116] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire11", -522.9875f, 26.979f, 2971.175f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar28, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_556);
	*(&Local_264 + 560[126]) = { -467.6187f, 26.26733f, 2989.75f };
	*(&Local_264 + 560[126] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire12", -467.6187f, 26.26733f, 2989.75f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar29, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_556);
	*(&Local_264 + 560[136]) = { -420.1251f, 35.79535f, 2956.803f };
	*(&Local_264 + 560[136] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire13", -420.1251f, 35.79535f, 2956.803f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar30, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_556);
	*(&Local_264 + 560[146]) = { -309.5352f, 26.37215f, 2952.83f };
	*(&Local_264 + 560[146] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire14", -309.5352f, 26.37215f, 2952.83f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar31, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_556);
	*(&Local_264 + 560[156]) = { -220.2099f, 32.93156f, 2877.247f };
	*(&Local_264 + 560[156] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire15", -220.2099f, 32.93156f, 2877.247f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar32, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_556);
	*(&Local_264 + 560[166]) = { -139.0402f, 58.76357f, 2797.26f };
	*(&Local_264 + 560[166] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire16", -139.0402f, 58.76357f, 2797.26f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar33, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_556);
	*(&Local_264 + 560[176]) = { -262.1989f, 83.0606f, 2784.0f };
	*(&Local_264 + 560[176] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire17", -262.1989f, 83.0606f, 2784.0f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar34, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_556);
	*(&Local_264 + 560[186]) = { -221.3426f, 96.14294f, 2699.777f };
	*(&Local_264 + 560[186] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire18", -221.3426f, 96.14294f, 2699.777f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar35, "CheckPoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_556);
	*(&Local_264 + 560[196]) = { -254.4955f, 94.87625f, 2614.854f };
	*(&Local_264 + 560[196] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire19", -254.4955f, 94.87625f, 2614.854f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar36, "CheckPoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_556);
	*(&Local_264 + 560[206]) = { -304.8658f, 94.17149f, 2582.55f };
	*(&Local_264 + 560[206] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire20", -304.8658f, 94.17149f, 2582.55f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar37, "CheckPoint", 20);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_556);
	*(&Local_264 + 560[216]) = { -359.5176f, 92.1772f, 2530.602f };
	*(&Local_264 + 560[216] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire21", -359.5176f, 92.1772f, 2530.602f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar38, "CheckPoint", 21);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_556);
	*(&Local_264 + 560[226]) = { -485.1447f, 96.12665f, 2536.552f };
	*(&Local_264 + 560[226] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire22", -485.1447f, 96.12665f, 2536.552f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar39, "CheckPoint", 22);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_556);
	*(&Local_264 + 560[236]) = { -582.8068f, 95.63433f, 2493.068f };
	*(&Local_264 + 560[236] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire23", -582.8068f, 95.63433f, 2493.068f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar40, "CheckPoint", 23);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_556);
	*(&Local_264 + 560[246]) = { -681.5017f, 95.12231f, 2503.078f };
	*(&Local_264 + 560[246] + 12) = { 0.0f, -83.51501f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire24", -681.5017f, 95.12231f, 2503.078f, 0.0f, -83.51501f, 0.0f);
	DECOR_SET_INT(bVar41, "CheckPoint", 24);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_556);
	*(&Local_264 + 560[256]) = { -767.8842f, 92.28825f, 2447.465f };
	*(&Local_264 + 560[256] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire25", -767.8842f, 92.28825f, 2447.465f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar42, "CheckPoint", 25);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_556);
	*(&Local_264 + 560[266]) = { -813.3904f, 92.11077f, 2409.437f };
	*(&Local_264 + 560[266] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -813.3904f, 92.11077f, 2409.437f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar43, "CheckPoint", 26);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_556);
	Local_264.f_1212 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	*(&Local_264 + 1216[06]) = { -905.0997f, 90.10292f, 2425.33f };
	*(&Local_264 + 1216[06] + 12) = { 0.0f, 107.1992f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00", -905.0997f, 90.10292f, 2425.33f, 0.0f, 107.1992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_1212);
	*(&Local_264 + 1216[16]) = { -930.452f, 90.10287f, 2437.846f };
	*(&Local_264 + 1216[16] + 12) = { 0.0f, 107.1992f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00b", -930.452f, 90.10287f, 2437.846f, 0.0f, 107.1992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_1212);
	*(&Local_264 + 1216[26]) = { -965.1064f, 90.24692f, 2448.874f };
	*(&Local_264 + 1216[26] + 12) = { 0.0f, 141.7644f, 0.0f };
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00c", -965.1064f, 90.24692f, 2448.874f, 0.0f, 141.7644f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_1212);
	*(&Local_264 + 1216[36]) = { -982.952f, 92.07166f, 2471.702f };
	*(&Local_264 + 1216[36] + 12) = { 0.0f, 169.3077f, 0.0f };
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01", -982.952f, 92.07166f, 2471.702f, 0.0f, 169.3077f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_1212);
	*(&Local_264 + 1216[46]) = { -982.5268f, 99.34321f, 2503.071f };
	*(&Local_264 + 1216[46] + 12) = { 0.0f, 182.1024f, 0.0f };
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01b", -982.5268f, 99.34321f, 2503.071f, 0.0f, 182.1024f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_1212);
	*(&Local_264 + 1216[56]) = { -974.623f, 101.3643f, 2535.084f };
	*(&Local_264 + 1216[56] + 12) = { 0.0f, 231.9722f, 0.0f };
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02", -974.623f, 101.3643f, 2535.084f, 0.0f, 231.9722f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_1212);
	*(&Local_264 + 1216[66]) = { -936.6144f, 102.4f, 2590.225f };
	*(&Local_264 + 1216[66] + 12) = { 0.0f, 225.3934f, 0.0f };
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02b", -936.6144f, 102.4f, 2590.225f, 0.0f, 225.3934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_1212);
	*(&Local_264 + 1216[76]) = { -920.4757f, 107.8f, 2574.274f };
	*(&Local_264 + 1216[76] + 12) = { 0.8514488f, 233.5092f, -0.6388528f };
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02c", -920.4757f, 107.8f, 2574.274f, 0.8514488f, 233.5092f, -0.6388528f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_1212);
	*(&Local_264 + 1216[86]) = { -882.5305f, 102.25f, 2644.052f };
	*(&Local_264 + 1216[86] + 12) = { 0.0f, 225.005f, 0.0f };
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02d", -882.5305f, 102.25f, 2644.052f, 0.0f, 225.005f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_1212);
	*(&Local_264 + 1216[96]) = { -863.9309f, 108.4956f, 2625.839f };
	*(&Local_264 + 1216[96] + 12) = { 0.0f, 216.7704f, 0.0f };
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02e", -863.9309f, 108.4956f, 2625.839f, 0.0f, 216.7704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_1212);
	*(&Local_264 + 1216[106]) = { -820.78f, 99.70679f, 2675.239f };
	*(&Local_264 + 1216[106] + 12) = { 0.0f, 236.8246f, 0.0f };
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02f", -820.78f, 99.70679f, 2675.239f, 0.0f, 236.8246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_1212);
	*(&Local_264 + 1216[116]) = { -793.2358f, 98.36233f, 2689.407f };
	*(&Local_264 + 1216[116] + 12) = { 0.0f, 288.094f, 0.0f };
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03", -793.2358f, 98.36233f, 2689.407f, 0.0f, 288.094f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_1212);
	*(&Local_264 + 1216[126]) = { -761.973f, 98.36908f, 2673.652f };
	*(&Local_264 + 1216[126] + 12) = { 0.0f, 286.6428f, 0.0f };
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03b", -761.973f, 98.36908f, 2673.652f, 0.0f, 286.6428f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_1212);
	*(&Local_264 + 1216[136]) = { -736.8745f, 98.88127f, 2659.798f };
	*(&Local_264 + 1216[136] + 12) = { 0.0f, 260.2308f, 0.0f };
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04", -736.8745f, 98.88127f, 2659.798f, 0.0f, 260.2308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_1212);
	*(&Local_264 + 1216[146]) = { -711.5061f, 99.27065f, 2666.35f };
	*(&Local_264 + 1216[146] + 12) = { 0.0f, 537.1113f, 0.0f };
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04b", -711.5061f, 99.27065f, 2666.35f, 0.0f, 537.1113f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_1212);
	*(&Local_264 + 1216[156]) = { -684.9799f, 95.37789f, 2693.303f };
	*(&Local_264 + 1216[156] + 12) = { 1.575291f, 244.9397f, -1.492486f };
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05", -684.9799f, 95.37789f, 2693.303f, 1.575291f, 244.9397f, -1.492486f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_1212);
	*(&Local_264 + 1216[166]) = { -659.8423f, 84.74432f, 2736.259f };
	*(&Local_264 + 1216[166] + 12) = { 0.0f, 236.6189f, 0.0f };
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_06", -659.8423f, 84.74432f, 2736.259f, 0.0f, 236.6189f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_1212);
	*(&Local_264 + 1216[176]) = { -623.5028f, 75.7999f, 2774.747f };
	*(&Local_264 + 1216[176] + 12) = { 0.0f, 196.3551f, 0.0f };
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07", -623.5028f, 75.7999f, 2774.747f, 0.0f, 196.3551f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_1212);
	*(&Local_264 + 1216[186]) = { -589.2221f, 62.41069f, 2824.665f };
	*(&Local_264 + 1216[186] + 12) = { 0.0f, 249.5084f, 0.0f };
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07b", -589.2221f, 62.41069f, 2824.665f, 0.0f, 249.5084f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_1212);
	*(&Local_264 + 1216[196]) = { -571.0709f, 54.11265f, 2871.02f };
	*(&Local_264 + 1216[196] + 12) = { 0.0f, 282.4892f, 0.0f };
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08", -571.0709f, 54.11265f, 2871.02f, 0.0f, 282.4892f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_1212);
	*(&Local_264 + 1216[206]) = { -536.2216f, 54.83765f, 2857.388f };
	*(&Local_264 + 1216[206] + 12) = { 0.0f, -63.11189f, 0.0f };
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08b", -536.2216f, 54.83765f, 2857.388f, 0.0f, -63.11189f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_1212);
	*(&Local_264 + 1216[216]) = { -494.1964f, 53.46787f, 2850.736f };
	*(&Local_264 + 1216[216] + 12) = { 0.0f, 258.925f, 0.0f };
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09", -494.1964f, 53.46787f, 2850.736f, 0.0f, 258.925f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_1212);
	*(&Local_264 + 1216[226]) = { -500.3097f, 46.14061f, 2879.476f };
	*(&Local_264 + 1216[226] + 12) = { 0.0f, 109.8974f, 0.0f };
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09b", -500.3097f, 46.14061f, 2879.476f, 0.0f, 109.8974f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_1212);
	*(&Local_264 + 1216[236]) = { -533.867f, 39.43469f, 2890.136f };
	*(&Local_264 + 1216[236] + 12) = { 0.0f, 163.2191f, 0.0f };
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09c", -533.867f, 39.43469f, 2890.136f, 0.0f, 163.2191f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_1212);
	*(&Local_264 + 1216[246]) = { -542.111f, 34.58774f, 2915.024f };
	*(&Local_264 + 1216[246] + 12) = { 0.0f, 183.3208f, 0.0f };
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10", -542.111f, 34.58774f, 2915.024f, 0.0f, 183.3208f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_1212);
	*(&Local_264 + 1216[256]) = { -540.929f, 29.90707f, 2942.356f };
	*(&Local_264 + 1216[256] + 12) = { 0.0f, 195.4397f, 0.0f };
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10b", -540.929f, 29.90707f, 2942.356f, 0.0f, 195.4397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_1212);
	*(&Local_264 + 1216[266]) = { -530.2245f, 27.6731f, 2967.108f };
	*(&Local_264 + 1216[266] + 12) = { 0.0f, 235.4424f, 0.0f };
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11", -530.2245f, 27.6731f, 2967.108f, 0.0f, 235.4424f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_1212);
	*(&Local_264 + 1216[276]) = { -497.8356f, 26.90917f, 2982.539f };
	*(&Local_264 + 1216[276] + 12) = { 0.0f, 241.4567f, 0.0f };
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11b", -497.8356f, 26.90917f, 2982.539f, 0.0f, 241.4567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_1212);
	*(&Local_264 + 1216[286]) = { -476.1974f, 22.59184f, 3005.54f };
	*(&Local_264 + 1216[286] + 12) = { 0.0f, 328.7845f, 0.0f };
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12", -476.1974f, 22.59184f, 3005.54f, 0.0f, 328.7845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_1212);
	*(&Local_264 + 1216[296]) = { -462.3264f, 28.03133f, 2984.232f };
	*(&Local_264 + 1216[296] + 12) = { -0.3039975f, -47.35142f, 0.2873497f };
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12b", -462.3264f, 28.03133f, 2984.232f, -0.3039975f, -47.35142f, 0.2873497f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_1212);
	*(&Local_264 + 1216[306]) = { -446.1539f, 31.95315f, 2971.158f };
	*(&Local_264 + 1216[306] + 12) = { -0.3039975f, -47.35142f, 0.2873497f };
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12c", -446.1539f, 31.95315f, 2971.158f, -0.3039975f, -47.35142f, 0.2873497f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_1212);
	*(&Local_264 + 1216[316]) = { -432.1109f, 35.11486f, 2958.674f };
	*(&Local_264 + 1216[316] + 12) = { 0.0f, -94.6334f, 0.0f };
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13", -432.1109f, 35.11486f, 2958.674f, 0.0f, -94.6334f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_1212);
	*(&Local_264 + 1216[326]) = { -368.4763f, 29.95727f, 2965.898f };
	*(&Local_264 + 1216[326] + 12) = { 0.0f, 271.6852f, 0.0f };
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13b", -368.4763f, 29.95727f, 2965.898f, 0.0f, 271.6852f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_1212);
	*(&Local_264 + 1216[336]) = { -337.08f, 25.66775f, 2967.201f };
	*(&Local_264 + 1216[336] + 12) = { 0.0f, 285.8474f, 0.0f };
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13c", -337.08f, 25.66775f, 2967.201f, 0.0f, 285.8474f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_1212);
	*(&Local_264 + 1216[346]) = { -313.7169f, 26.21037f, 2959.123f };
	*(&Local_264 + 1216[346] + 12) = { 0.0f, 314.7851f, 0.0f };
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14", -313.7169f, 26.21037f, 2959.123f, 0.0f, 314.7851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_1212);
	*(&Local_264 + 1216[356]) = { -298.2233f, 27.10143f, 2931.451f };
	*(&Local_264 + 1216[356] + 12) = { 0.8436655f, -55.25195f, -0.651872f };
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14b", -298.2233f, 27.10143f, 2931.451f, 0.8436655f, -55.25195f, -0.651872f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_1212);
	*(&Local_264 + 1216[366]) = { -251.5584f, 30.04355f, 2908.355f };
	*(&Local_264 + 1216[366] + 12) = { 0.0f, -42.33238f, 0.0f };
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14c", -251.5584f, 30.04355f, 2908.355f, 0.0f, -42.33238f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_1212);
	*(&Local_264 + 1216[376]) = { -218.1165f, 33.1376f, 2873.493f };
	*(&Local_264 + 1216[376] + 12) = { 0.0f, -57.43667f, 0.0f };
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15", -218.1165f, 33.1376f, 2873.493f, 0.0f, -57.43667f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_1212);
	*(&Local_264 + 1216[386]) = { -173.4205f, 44.37194f, 2817.453f };
	*(&Local_264 + 1216[386] + 12) = { 0.0f, -70.86239f, 0.0f };
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15b", -173.4205f, 44.37194f, 2817.453f, 0.0f, -70.86239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_1212);
	*(&Local_264 + 1216[396]) = { -126.3759f, 56.06113f, 2797.567f };
	*(&Local_264 + 1216[396] + 12) = { 0.0f, 77.87792f, 0.0f };
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16", -126.3759f, 56.06113f, 2797.567f, 0.0f, 77.87792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_1212);
	*(&Local_264 + 1216[406]) = { -199.5475f, 71.17844f, 2785.949f };
	*(&Local_264 + 1216[406] + 12) = { 0.0f, 82.55106f, 0.0f };
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16b", -199.5475f, 71.17844f, 2785.949f, 0.0f, 82.55106f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_1212);
	*(&Local_264 + 1216[416]) = { -270.1582f, 83.52425f, 2784.372f };
	*(&Local_264 + 1216[416] + 12) = { 0.0f, -13.6368f, 0.0f };
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17", -270.1582f, 83.52425f, 2784.372f, 0.0f, -13.6368f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_1212);
	*(&Local_264 + 1216[426]) = { -249.7822f, 90.41345f, 2739.564f };
	*(&Local_264 + 1216[426] + 12) = { 0.0f, -44.28946f, 0.0f };
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17b", -249.7822f, 90.41345f, 2739.564f, 0.0f, -44.28946f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_1212);
	*(&Local_264 + 1216[436]) = { -220.0076f, 95.36875f, 2706.274f };
	*(&Local_264 + 1216[436] + 12) = { 0.0f, 20.79131f, 0.0f };
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_18", -220.0076f, 95.36875f, 2706.274f, 0.0f, 20.79131f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_1212);
	*(&Local_264 + 1216[446]) = { -238.7031f, 95.62409f, 2677.874f };
	*(&Local_264 + 1216[446] + 12) = { 0.0f, 1.060903f, 0.0f };
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_18b", -238.7031f, 95.62409f, 2677.874f, 0.0f, 1.060903f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_1212);
	*(&Local_264 + 1216[456]) = { -246.5435f, 96.32336f, 2625.393f };
	*(&Local_264 + 1216[456] + 12) = { 0.0f, 24.25065f, 0.0f };
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_19", -246.5435f, 96.32336f, 2625.393f, 0.0f, 24.25065f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_1212);
	*(&Local_264 + 1216[466]) = { -264.7606f, 93.81876f, 2602.335f };
	*(&Local_264 + 1216[466] + 12) = { 0.0f, 51.44057f, 0.0f };
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_19b", -264.7606f, 93.81876f, 2602.335f, 0.0f, 51.44057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_1212);
	*(&Local_264 + 1216[476]) = { -293.2142f, 93.76818f, 2591.156f };
	*(&Local_264 + 1216[476] + 12) = { 0.0f, 65.41023f, 0.0f };
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_20", -293.2142f, 93.76818f, 2591.156f, 0.0f, 65.41023f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_1212);
	*(&Local_264 + 1216[486]) = { -315.211f, 95.24835f, 2571.741f };
	*(&Local_264 + 1216[486] + 12) = { 0.0f, 33.48725f, 0.0f };
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_20b", -315.211f, 95.24835f, 2571.741f, 0.0f, 33.48725f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_1212);
	*(&Local_264 + 1216[496]) = { -347.211f, 92.3601f, 2535.785f };
	*(&Local_264 + 1216[496] + 12) = { 0.0f, 419.17f, 0.0f };
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_21", -347.211f, 92.3601f, 2535.785f, 0.0f, 419.17f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_1212);
	*(&Local_264 + 1216[506]) = { -380.649f, 92.3726f, 2528.422f };
	*(&Local_264 + 1216[506] + 12) = { 0.0f, 458.8866f, 0.0f };
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_21b", -380.649f, 92.3726f, 2528.422f, 0.0f, 458.8866f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_1212);
	*(&Local_264 + 1216[516]) = { -418.6939f, 94.69299f, 2533.95f };
	*(&Local_264 + 1216[516] + 12) = { 0.0f, 475.8371f, 0.0f };
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_21c", -418.6939f, 94.69299f, 2533.95f, 0.0f, 475.8371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_1212);
	*(&Local_264 + 1216[526]) = { -450.0951f, 95.1196f, 2535.13f };
	*(&Local_264 + 1216[526] + 12) = { 0.0f, 457.2776f, 0.0f };
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_21d", -450.0951f, 95.1196f, 2535.13f, 0.0f, 457.2776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_1212);
	*(&Local_264 + 1216[536]) = { -474.9062f, 96.09167f, 2541.915f };
	*(&Local_264 + 1216[536] + 12) = { 0.0f, 411.0375f, 0.0f };
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_22", -474.9062f, 96.09167f, 2541.915f, 0.0f, 411.0375f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_1212);
	*(&Local_264 + 1216[546]) = { -523.3671f, 96.12646f, 2519.942f };
	*(&Local_264 + 1216[546] + 12) = { 0.0f, 411.0375f, 0.0f };
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_22b", -523.3671f, 96.12646f, 2519.942f, 0.0f, 411.0375f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_1212);
	*(&Local_264 + 1216[556]) = { -570.9951f, 96.10069f, 2499.272f };
	*(&Local_264 + 1216[556] + 12) = { 0.0f, 425.4581f, 0.0f };
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_23", -570.9951f, 96.10069f, 2499.272f, 0.0f, 425.4581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_1212);
	*(&Local_264 + 1216[566]) = { -606.9112f, 94.89301f, 2490.087f };
	*(&Local_264 + 1216[566] + 12) = { 2.414193f, 455.5421f, 2.385426f };
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_23b", -606.9112f, 94.89301f, 2490.087f, 2.414193f, 455.5421f, 2.385426f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_1212);
	*(&Local_264 + 1216[576]) = { -631.6859f, 95.68909f, 2502.578f };
	*(&Local_264 + 1216[576] + 12) = { -179.0747f, 435.4091f, -179.122f };
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_23c", -631.6859f, 95.68909f, 2502.578f, -179.0747f, 435.4091f, -179.122f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_1212);
	*(&Local_264 + 1216[586]) = { -669.5267f, 95.12252f, 2499.731f };
	*(&Local_264 + 1216[586] + 12) = { -0.3570968f, 409.2521f, -0.2880291f };
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_24", -669.5267f, 95.12252f, 2499.731f, -0.3570968f, 409.2521f, -0.2880291f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_1212);
	*(&Local_264 + 1216[596]) = { -702.3761f, 94.78497f, 2499.435f };
	*(&Local_264 + 1216[596] + 12) = { -0.3570968f, 409.2521f, -0.2880291f };
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_24a", -702.3761f, 94.78497f, 2499.435f, -0.3570968f, 409.2521f, -0.2880291f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_1212);
	*(&Local_264 + 1216[606]) = { -726.3991f, 93.23589f, 2477.833f };
	*(&Local_264 + 1216[606] + 12) = { -0.3570968f, 409.2521f, -0.2880291f };
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_24b", -726.3991f, 93.23589f, 2477.833f, -0.3570968f, 409.2521f, -0.2880291f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_1212);
	*(&Local_264 + 1216[616]) = { -760.9186f, 92.11122f, 2458.517f };
	*(&Local_264 + 1216[616] + 12) = { -0.2498544f, 381.1096f, -0.1074811f };
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_25", -760.9186f, 92.11122f, 2458.517f, -0.2498544f, 381.1096f, -0.1074811f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_1212);
	*(&Local_264 + 1216[626]) = { -785.6017f, 92.39607f, 2425.62f };
	*(&Local_264 + 1216[626] + 12) = { -0.491931f, 421.7171f, -0.4507008f };
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_25b", -785.6017f, 92.39607f, 2425.62f, -0.491931f, 421.7171f, -0.4507008f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_1212);
	Local_264.f_2732 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 2736[06]) = { -831.0649f, 91.34441f, 2402.823f };
	*(&Local_264 + 2736[06] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -831.0649f, 91.34441f, 2402.823f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_2732);
	Local_264.f_2764 = CREATE_OBJECTSET_IN_LAYOUT("mp_CrowdCheer_flagsSet", Local_264, 8, 0);
	*(&Local_264 + 2768[06]) = { -897.3101f, 90.3529f, 2433.877f };
	*(&Local_264 + 2768[06] + 12) = { 0.0f, -9.245726f, 0.0f };
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer", -897.3101f, 90.3529f, 2433.877f, 0.0f, -9.245726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_2764);
	*(&Local_264 + 2768[16]) = { -895.1832f, 90.3529f, 2433.151f };
	*(&Local_264 + 2768[16] + 12) = { -0.2779998f, -19.47564f, 0.6781662f };
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer1", -895.1832f, 90.3529f, 2433.151f, -0.2779998f, -19.47564f, 0.6781662f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_2764);
	*(&Local_264 + 2768[26]) = { -906.0981f, 91.35684f, 2414.131f };
	*(&Local_264 + 2768[26] + 12) = { 1.459281f, -100.3478f, -0.8500774f };
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer2", -906.0981f, 91.35684f, 2414.131f, 1.459281f, -100.3478f, -0.8500774f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_2764);
	*(&Local_264 + 2768[36]) = { -906.4237f, 91.36167f, 2415.914f };
	*(&Local_264 + 2768[36] + 12) = { 1.459281f, -100.3478f, -0.8500774f };
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer3", -906.4237f, 91.36167f, 2415.914f, 1.459281f, -100.3478f, -0.8500774f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_2764);
	*(&Local_264 + 2768[46]) = { -947.7135f, 90.35291f, 2437.174f };
	*(&Local_264 + 2768[46] + 12) = { 1.459281f, -100.3478f, -0.8500774f };
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer4", -947.7135f, 90.35291f, 2437.174f, 1.459281f, -100.3478f, -0.8500774f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_2764);
	*(&Local_264 + 2768[56]) = { -945.3033f, 90.19563f, 2435.766f };
	*(&Local_264 + 2768[56] + 12) = { 1.459281f, -100.3478f, -0.8500774f };
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer5", -945.3033f, 90.19563f, 2435.766f, 1.459281f, -100.3478f, -0.8500774f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_2764);
	*(&Local_264 + 2768[66]) = { -891.624f, 102.404f, 2648.08f };
	*(&Local_264 + 2768[66] + 12) = { -0.2672968f, 11.32367f, 0.5329943f };
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer6", -891.624f, 102.404f, 2648.08f, -0.2672968f, 11.32367f, 0.5329943f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_2764);
	*(&Local_264 + 2768[76]) = { -895.1172f, 102.3983f, 2647.03f };
	*(&Local_264 + 2768[76] + 12) = { -0.3080653f, -31.70407f, 0.7473781f };
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer7", -895.1172f, 102.3983f, 2647.03f, -0.3080653f, -31.70407f, 0.7473781f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_2764);
	*(&Local_264 + 2768[86]) = { -785.2104f, 98.38924f, 2689.983f };
	*(&Local_264 + 2768[86] + 12) = { -0.4623702f, 55.46901f, 0.2045664f };
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer8", -785.2104f, 98.38924f, 2689.983f, -0.4623702f, 55.46901f, 0.2045664f);
	DECOR_SET_BOOL(bVar116, "Pointer", true);
	DECOR_SET_BOOL(bVar116, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_2764);
	*(&Local_264 + 2768[96]) = { -747.2244f, 98.39546f, 2654.819f };
	*(&Local_264 + 2768[96] + 12) = { 0.3424968f, 139.9288f, 0.8059587f };
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer9", -747.2244f, 98.39546f, 2654.819f, 0.3424968f, 139.9288f, 0.8059587f);
	DECOR_SET_BOOL(bVar117, "Pointer", true);
	DECOR_SET_BOOL(bVar117, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_2764);
	*(&Local_264 + 2768[106]) = { -744.1441f, 98.38781f, 2655.574f };
	*(&Local_264 + 2768[106] + 12) = { 0.5895134f, 116.3977f, 1.113527f };
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer10", -744.1441f, 98.38781f, 2655.574f, 0.5895134f, 116.3977f, 1.113527f);
	DECOR_SET_BOOL(bVar118, "Pointer", true);
	DECOR_SET_BOOL(bVar118, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_2764);
	*(&Local_264 + 2768[116]) = { -572.3989f, 54.21179f, 2866.927f };
	*(&Local_264 + 2768[116] + 12) = { -0.3091186f, -32.01873f, 0.7493735f };
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer11", -572.3989f, 54.21179f, 2866.927f, -0.3091186f, -32.01873f, 0.7493735f);
	DECOR_SET_BOOL(bVar119, "Pointer", true);
	DECOR_SET_BOOL(bVar119, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_2764);
	*(&Local_264 + 2768[126]) = { -573.7229f, 54.17309f, 2866.419f };
	*(&Local_264 + 2768[126] + 12) = { -0.2668058f, -10.78438f, 0.6354021f };
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer12", -573.7229f, 54.17309f, 2866.419f, -0.2668058f, -10.78438f, 0.6354021f);
	DECOR_SET_BOOL(bVar120, "Pointer", true);
	DECOR_SET_BOOL(bVar120, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_2764);
	*(&Local_264 + 2768[136]) = { -415.3966f, 40.76402f, 2944.036f };
	*(&Local_264 + 2768[136] + 12) = { 0.3008419f, 150.5985f, 0.733171f };
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer13", -415.3966f, 40.76402f, 2944.036f, 0.3008419f, 150.5985f, 0.733171f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_2764);
	*(&Local_264 + 2768[146]) = { -418.7944f, 40.80004f, 2942.813f };
	*(&Local_264 + 2768[146] + 12) = { 0.3207013f, 144.8107f, 0.7702937f };
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer14", -418.7944f, 40.80004f, 2942.813f, 0.3207013f, 144.8107f, 0.7702937f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_2764);
	*(&Local_264 + 2768[156]) = { -249.8539f, 96.32664f, 2719.997f };
	*(&Local_264 + 2768[156] + 12) = { 0.2638576f, 186.6292f, 0.5550179f };
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer15", -249.8539f, 96.32664f, 2719.997f, 0.2638576f, 186.6292f, 0.5550179f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_2764);
	*(&Local_264 + 2768[166]) = { -248f, 96.47942f, 2718.544f };
	*(&Local_264 + 2768[166] + 12) = { 0.2630539f, 175.1025f, 0.6079367f };
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer16", -248f, 96.47942f, 2718.544f, 0.2630539f, 175.1025f, 0.6079367f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_2764);
	*(&Local_264 + 2768[176]) = { -222.5387f, 95.57385f, 2637.739f };
	*(&Local_264 + 2768[176] + 12) = { 0.2700841f, 166.0282f, 0.6506894f };
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer17", -222.5387f, 95.57385f, 2637.739f, 0.2700841f, 166.0282f, 0.6506894f);
	DECOR_SET_BOOL(bVar125, "Pointer", true);
	DECOR_SET_BOOL(bVar125, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_2764);
	*(&Local_264 + 2768[186]) = { -220.0105f, 95.41972f, 2639.223f };
	*(&Local_264 + 2768[186] + 12) = { 0.3565376f, 137.3165f, 0.8271945f };
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer18", -220.0105f, 95.41972f, 2639.223f, 0.3565376f, 137.3165f, 0.8271945f);
	DECOR_SET_BOOL(bVar126, "Pointer", true);
	DECOR_SET_BOOL(bVar126, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_2764);
	*(&Local_264 + 2768[196]) = { -475.9999f, 96.37646f, 2547.223f };
	*(&Local_264 + 2768[196] + 12) = { -0.7294234f, 291.0587f, 1.266191f };
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer19", -475.9999f, 96.37646f, 2547.223f, -0.7294234f, 291.0587f, 1.266191f);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_2764);
	*(&Local_264 + 2768[206]) = { -486.4411f, 96.5731f, 2545.092f };
	*(&Local_264 + 2768[206] + 12) = { -0.7294234f, 291.0587f, 1.266191f };
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer20", -486.4411f, 96.5731f, 2545.092f, -0.7294234f, 291.0587f, 1.266191f);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_2764);
	*(&Local_264 + 2768[216]) = { -482.5317f, 96.53805f, 2545.081f };
	*(&Local_264 + 2768[216] + 12) = { -0.3294973f, 322.6964f, 0.7851679f };
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer21", -482.5317f, 96.53805f, 2545.081f, -0.3294973f, 322.6964f, 0.7851679f);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_2764);
	*(&Local_264 + 2768[226]) = { -760.9775f, 92.36066f, 2463.091f };
	*(&Local_264 + 2768[226] + 12) = { 0.8991179f, 253.0515f, -0.274594f };
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer22", -760.9775f, 92.36066f, 2463.091f, 0.8991179f, 253.0515f, -0.274594f);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_2764);
	*(&Local_264 + 2768[236]) = { -753.0417f, 92.32696f, 2452.156f };
	*(&Local_264 + 2768[236] + 12) = { 0.3106548f, 212.469f, 0.4187047f };
	bVar131 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer23", -753.0417f, 92.32696f, 2452.156f, 0.3106548f, 212.469f, 0.4187047f);
	ADD_OBJECT_TO_OBJECTSET(bVar131, Local_264.f_2764);
	*(&Local_264 + 2768[246]) = { -796.3643f, 92.33221f, 2426.908f };
	*(&Local_264 + 2768[246] + 12) = { -0.3058212f, 328.9832f, 0.7430661f };
	bVar132 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer24", -796.3643f, 92.33221f, 2426.908f, -0.3058212f, 328.9832f, 0.7430661f);
	ADD_OBJECT_TO_OBJECTSET(bVar132, Local_264.f_2764);
	*(&Local_264 + 2768[256]) = { -795.4592f, 92.38631f, 2428.656f };
	*(&Local_264 + 2768[256] + 12) = { -0.6043403f, 295.7021f, 1.13003f };
	bVar133 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer25", -795.4592f, 92.38631f, 2428.656f, -0.6043403f, 295.7021f, 1.13003f);
	ADD_OBJECT_TO_OBJECTSET(bVar133, Local_264.f_2764);
	*(&Local_264 + 2768[266]) = { -982.8869f, 91.23922f, 2465.482f };
	*(&Local_264 + 2768[266] + 12) = { -0.7140086f, 291.5357f, 1.249646f };
	bVar134 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer26", -982.8869f, 91.23922f, 2465.482f, -0.7140086f, 291.5357f, 1.249646f);
	DECOR_SET_BOOL(bVar134, "Pointer", true);
	DECOR_SET_BOOL(bVar134, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar134, Local_264.f_2764);
	*(&Local_264 + 2768[276]) = { -983.7115f, 91.22949f, 2464.074f };
	*(&Local_264 + 2768[276] + 12) = { -0.7140086f, 291.5357f, 1.249646f };
	bVar135 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer27", -983.7115f, 91.22949f, 2464.074f, -0.7140086f, 291.5357f, 1.249646f);
	DECOR_SET_BOOL(bVar135, "Pointer", true);
	DECOR_SET_BOOL(bVar135, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar135, Local_264.f_2764);
	*(&Local_264 + 2768[286]) = { -983.5722f, 91.21525f, 2466.526f };
	*(&Local_264 + 2768[286] + 12) = { -0.7140086f, 291.5357f, 1.249646f };
	bVar136 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer28", -983.5722f, 91.21525f, 2466.526f, -0.7140086f, 291.5357f, 1.249646f);
	DECOR_SET_BOOL(bVar136, "Pointer", true);
	DECOR_SET_BOOL(bVar136, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar136, Local_264.f_2764);
	*(&Local_264 + 2768[296]) = { -985.2917f, 91.38029f, 2464.036f };
	*(&Local_264 + 2768[296] + 12) = { -0.7140086f, 291.5357f, 1.249646f };
	bVar137 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer29", -985.2917f, 91.38029f, 2464.036f, -0.7140086f, 291.5357f, 1.249646f);
	DECOR_SET_BOOL(bVar137, "Pointer", true);
	DECOR_SET_BOOL(bVar137, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar137, Local_264.f_2764);
	*(&Local_264 + 2768[306]) = { -788.2975f, 98.23422f, 2692.106f };
	*(&Local_264 + 2768[306] + 12) = { -0.2788479f, 379.9626f, 0.4902778f };
	bVar138 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer30", -788.2975f, 98.23422f, 2692.106f, -0.2788479f, 379.9626f, 0.4902778f);
	ADD_OBJECT_TO_OBJECTSET(bVar138, Local_264.f_2764);
	Local_264.f_3516 = CREATE_OBJECTSET_IN_LAYOUT(Function_65(), Local_264, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish1", "stand_cheer", -815.3456f, 92.11627f, 2404.01f, 0.0f, -119.1704f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish2", "stand_cheer", -817.4974f, 92.11078f, 2404.189f, 0.0f, -132.0147f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish3", "stand_cheer", -817.3188f, 92.14249f, 2402.63f, 0.0f, -130.9805f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish4", "stand_cheer", -818.7857f, 92.18636f, 2411.651f, 0.0f, -68.18782f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish5", "stand_cheer", -819.864f, 92.11076f, 2410.389f, 0.0f, -80.74172f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish6", "stand_cheer", -821.3066f, 92.15485f, 2410.951f, 0.0f, -77.81361f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish7", "stand_cheer", -819.6029f, 92.11074f, 2403.612f, 0.0f, -121.9835f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish8", "stand_cheer", -820.6279f, 92.11073f, 2404.968f, 0.0f, -119.7519f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish9", "stand_cheer", -821.4999f, 92.11074f, 2409.777f, 0.0f, -97.92511f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish10", "stand_cheer", -821.0991f, 92.31422f, 2412.602f, 0.0f, -90.3829f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish11", "stand_cheer", -818.8374f, 92.31753f, 2412.977f, 0.0f, -98.09058f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish12", "stand_cheer", -817.2206f, 92.19033f, 2412.119f, 0.0f, -94.57852f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish13", "stand_cheer", -817.2109f, 92.34295f, 2413.851f, 0.0f, -77.79419f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish14", "stand_cheer", -823.0326f, 92.11079f, 2409.527f, 0.0f, -77.97589f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish15", "stand_cheer", -816.2055f, 92.11073f, 2401.432f, 0.0f, -133.3767f, 0.0f), Local_264.f_3516);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish16", "stand_cheer", -813.1826f, 92.20066f, 2402.566f, 0.0f, -172.2538f, 0.0f), Local_264.f_3516);
	return;
}

var Function_65() //Position: 0x6C2D / 27693
{
	int iVar0;
	
	return iVar0;
}

void Function_66(int iParam0, int iParam1) //Position: 0x6C35 / 27701
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

void Function_67() //Position: 0x6C7E / 27774
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_52())
		{
			Function_40(6640, 6028);
		}
		else
		{
			Function_40(4150, 1365);
		}
		WAIT(false);
	}
	return;
}

bool Function_68() //Position: 0x6CAD / 27821
{
	return Function_69(2);
}

int Function_69(var uParam0) //Position: 0x6CB7 / 27831
{
	return Function_26(StackVal, uParam0);
}

