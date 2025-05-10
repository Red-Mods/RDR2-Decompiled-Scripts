//Decompiled with MagicRDR v1.0
//Function Count : 70
//Statics Count : 1075
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_915 = 1;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 25;
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
		Local_134.f_500 = 2;
		ENABLE_CHILD_SECTOR("esc_flags01x");
		Function_63(0, 1);
		Function_63(1, 2);
		Function_62(0, TO_FLOAT(36));
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
	DISABLE_CHILD_SECTOR("esc_flags01x");
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
	bool bVar139;
	bool bVar140;
	bool bVar141;
	bool bVar142;
	bool bVar143;
	bool bVar144;
	bool bVar145;
	bool bVar146;
	bool bVar147;
	bool bVar148;
	bool bVar149;
	bool bVar150;
	bool bVar151;
	bool bVar152;
	bool bVar153;
	bool bVar154;
	bool bVar155;
	bool bVar156;
	bool bVar157;
	bool bVar158;
	bool bVar159;
	bool bVar160;
	bool bVar161;
	bool bVar162;
	bool bVar163;
	
	Function_66(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_ESC_layout");
	Local_264.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointstart", 2, -4242.694f, 20.14498f, 4428.781f, -2.384861f, 161.0416f, 0.1003748f, 71.16976f, 6.725543f, 26.04617f);
	DECOR_SET_INT((*&Local_264 + 20)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[0]);
	(*&Local_264 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint01", 2, -4283.951f, 18.59175f, 4503.917f, -2.86037f, 142.0578f, -0.8840799f, 65.04654f, 6.725543f, 22.97305f);
	DECOR_SET_INT((*&Local_264 + 20)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[1]);
	(*&Local_264 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint02", 2, -4355.676f, 19.81622f, 4553.133f, -2.86037f, 142.0578f, -0.8840799f, 65.04654f, 6.725543f, 22.97305f);
	DECOR_SET_INT((*&Local_264 + 20)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[2]);
	(*&Local_264 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint03", 2, -4445.672f, 18.57781f, 4663.616f, 176.7111f, -6.261036f, -176.3094f, 51.14556f, 8.75667f, 22.00329f);
	DECOR_SET_INT((*&Local_264 + 20)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[3]);
	(*&Local_264 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint04", 2, -4443.108f, 20.23478f, 4739.654f, -4.100542f, -217.1067f, 0.8549771f, 51.14556f, 8.75667f, 24.38563f);
	DECOR_SET_INT((*&Local_264 + 20)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[4]);
	(*&Local_264 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint05", 2, -4500.906f, 19.46613f, 4761.615f, 355.5636f, 76.04531f, -0.9519346f, 51.14556f, 8.75667f, 29.55351f);
	DECOR_SET_INT((*&Local_264 + 20)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[5]);
	(*&Local_264 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint06", 2, -4526.771f, 18.58202f, 4727.909f, 3.495677f, -20.7249f, -357.9069f, 51.14556f, 8.75667f, 23.03252f);
	DECOR_SET_INT((*&Local_264 + 20)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[6]);
	(*&Local_264 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint07", 2, -4499.017f, 18.16325f, 4682.765f, 4.207513f, -38.98848f, -359.3186f, 51.14556f, 8.75667f, 24.57671f);
	DECOR_SET_INT((*&Local_264 + 20)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[7]);
	(*&Local_264 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint08", 2, -4441.085f, 18.6333f, 4642.333f, 5.478601f, -53.32243f, -361.0671f, 51.14556f, 8.75667f, 24.57671f);
	DECOR_SET_INT((*&Local_264 + 20)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[8]);
	(*&Local_264 + 20)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint09", 2, -4379.698f, 16.87535f, 4597.972f, -0.02651229f, 316.5458f, 0.1217011f, 64.93066f, 4.749662f, 26.12415f);
	DECOR_SET_INT((*&Local_264 + 20)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[9]);
	(*&Local_264 + 20)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint010", 2, -4358.741f, 20.60445f, 4536.743f, -0.0207744f, 382.1158f, 0.09564553f, 64.93066f, 4.749662f, 26.12415f);
	DECOR_SET_INT((*&Local_264 + 20)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[10]);
	(*&Local_264 + 20)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint011", 2, -4404.356f, 18.8851f, 4512.527f, 0.0f, -282.4792f, 0.0f, 77.37174f, 7.303987f, 25.28269f);
	DECOR_SET_INT((*&Local_264 + 20)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[11]);
	(*&Local_264 + 20)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint012", 2, -4490.82f, 20.75472f, 4450.845f, 0.0f, -384.7421f, 0.0f, 60.97814f, 7.303987f, 25.28269f);
	DECOR_SET_INT((*&Local_264 + 20)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[12]);
	(*&Local_264 + 20)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint013", 2, -4461.333f, 32.70916f, 4369.085f, 3.978126f, -34.71317f, 1.06365f, 51.14556f, 8.75667f, 25.32833f);
	DECOR_SET_INT((*&Local_264 + 20)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[13]);
	(*&Local_264 + 20)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint014", 2, -4404.131f, 34.83703f, 4308.111f, -11.24399f, -40.52255f, 4.949319f, 65.34695f, 11.51465f, 32.98174f);
	DECOR_SET_INT((*&Local_264 + 20)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[14]);
	(*&Local_264 + 20)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint015", 2, -4382.387f, 35.66978f, 4269.328f, 2.25704f, -2.167594f, 0.7901626f, 68.19006f, 6.725543f, 25.65849f);
	DECOR_SET_INT((*&Local_264 + 20)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[15]);
	(*&Local_264 + 20)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint016", 2, -4414.664f, 35.29308f, 4232.099f, 0.0f, 76.60625f, 0.0f, 42.55631f, 6.725543f, 27.28949f);
	DECOR_SET_INT((*&Local_264 + 20)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[16]);
	(*&Local_264 + 20)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint017", 2, -4484.692f, 29.68823f, 4227.798f, 14.14696f, 453.0168f, 16.4725f, 66.35159f, 7.864084f, 24.41032f);
	DECOR_SET_INT((*&Local_264 + 20)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[17]);
	(*&Local_264 + 20)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint018", 2, -4612.813f, 17.75456f, 4238.062f, 0.7484077f, 34.65211f, -0.08416475f, 89.37851f, 7.430562f, 30.00798f);
	DECOR_SET_INT((*&Local_264 + 20)[18], "pointNum", 18);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[18]);
	(*&Local_264 + 20)[19] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint019", 2, -4622.048f, 14.80578f, 4179.581f, 0.0f, 339.9987f, 0.0f, 78.58351f, 8.048439f, 26.29372f);
	DECOR_SET_INT((*&Local_264 + 20)[19], "pointNum", 19);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[19]);
	(*&Local_264 + 20)[20] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint020", 2, -4532.631f, 9.096313f, 4080.672f, 0.0f, -9.037605f, 0.0f, 83.58174f, 8.048439f, 25.3972f);
	DECOR_SET_INT((*&Local_264 + 20)[20], "pointNum", 20);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[20]);
	(*&Local_264 + 20)[21] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint021", 2, -4600.417f, 4.860584f, 3990.819f, 0.0f, 427.9648f, 0.0f, 57.10492f, 8.048439f, 24.37327f);
	DECOR_SET_INT((*&Local_264 + 20)[21], "pointNum", 21);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[21]);
	(*&Local_264 + 20)[22] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint022", 2, -4674.984f, 5.569862f, 3960.681f, 0.0f, 117.5864f, 0.0f, 86.24488f, 8.048439f, 22.0687f);
	DECOR_SET_INT((*&Local_264 + 20)[22], "pointNum", 22);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[22]);
	(*&Local_264 + 20)[23] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint023", 2, -4710.758f, 4.215967f, 4013.476f, 0.0f, 180.0247f, 0.0f, 91.27204f, 8.048439f, 24.73496f);
	DECOR_SET_INT((*&Local_264 + 20)[23], "pointNum", 23);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[23]);
	(*&Local_264 + 20)[24] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint024", 2, -4655.029f, 10.37002f, 4079.515f, 179.9941f, -47.20751f, -177.1557f, 88.8576f, 8.75667f, 24.28456f);
	DECOR_SET_INT((*&Local_264 + 20)[24], "pointNum", 24);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[24]);
	(*&Local_264 + 20)[25] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint025", 2, -4557.79f, 12.94987f, 4129.366f, 175.8747f, -64.78218f, -174.5178f, 79.54835f, 8.75667f, 25.03036f);
	DECOR_SET_INT((*&Local_264 + 20)[25], "pointNum", 25);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[25]);
	(*&Local_264 + 20)[26] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint026", 2, -4476.494f, 20.91084f, 4153.759f, 177.5685f, -43.74169f, -176.5695f, 61.74184f, 8.75667f, 25.03036f);
	DECOR_SET_INT((*&Local_264 + 20)[26], "pointNum", 26);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[26]);
	(*&Local_264 + 20)[27] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint027", 2, -4440.436f, 32.28098f, 4227.131f, 193.5634f, -77.03098f, -191.305f, 51.14556f, 8.75667f, 29.55351f);
	DECOR_SET_INT((*&Local_264 + 20)[27], "pointNum", 27);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[27]);
	(*&Local_264 + 20)[28] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint028", 2, -4383.204f, 37.19906f, 4262.287f, 176.5342f, -19.37981f, -175.5172f, 51.14556f, 8.75667f, 23.31594f);
	DECOR_SET_INT((*&Local_264 + 20)[28], "pointNum", 28);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[28]);
	(*&Local_264 + 20)[29] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint029", 2, -4428.276f, 34.01178f, 4321.787f, 169.1004f, 72.44668f, -187.0719f, 77.78032f, 8.75667f, 22.03528f);
	DECOR_SET_INT((*&Local_264 + 20)[29], "pointNum", 29);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[29]);
	(*&Local_264 + 20)[30] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint030", 2, -4555.607f, 21.16481f, 4318.822f, 172.5486f, 63.91265f, -183.368f, 51.14556f, 8.75667f, 22.50949f);
	DECOR_SET_INT((*&Local_264 + 20)[30], "pointNum", 30);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[30]);
	(*&Local_264 + 20)[31] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint031", 2, -4599.601f, 17.00846f, 4349.513f, 176.7191f, 364.8296f, -176.945f, 51.14556f, 8.75667f, 21.6824f);
	DECOR_SET_INT((*&Local_264 + 20)[31], "pointNum", 31);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[31]);
	(*&Local_264 + 20)[32] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint032", 2, -4538.058f, 18.14204f, 4448.456f, 174.7696f, -51.27601f, -172.5834f, 67.94492f, 8.75667f, 29.55351f);
	DECOR_SET_INT((*&Local_264 + 20)[32], "pointNum", 32);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[32]);
	(*&Local_264 + 20)[33] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint033", 2, -4467.797f, 19.99228f, 4501.191f, 181.6224f, -54.0555f, -178.8727f, 73.21326f, 8.75667f, 25.06295f);
	DECOR_SET_INT((*&Local_264 + 20)[33], "pointNum", 33);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[33]);
	(*&Local_264 + 20)[34] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint034", 2, -4400.347f, 21.82895f, 4513.978f, 184.6067f, -78.05748f, -182.0665f, 73.21326f, 8.75667f, 25.06295f);
	DECOR_SET_INT((*&Local_264 + 20)[34], "pointNum", 34);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[34]);
	(*&Local_264 + 20)[35] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint035", 2, -4292.161f, 22.33526f, 4510.698f, 0.05191241f, -62.02061f, 5.011665f, 64.46039f, 8.75667f, 29.55351f);
	DECOR_SET_INT((*&Local_264 + 20)[35], "pointNum", 35);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[35]);
	(*&Local_264 + 20)[36] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -4245.203f, 21.80138f, 4435.185f, -181.2766f, -159.0388f, -177.682f, 73.72265f, 9.465247f, 7.083706f);
	DECOR_SET_INT((*&Local_264 + 20)[36], "pointNum", 36);
	DECOR_SET_BOOL((*&Local_264 + 20)[36], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_172, (*&Local_264 + 20)[36]);
	Local_264.f_176 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -4217.792f, 19.04727f, 4375.584f, -3.779677f, -37.38644f, 2.297077f);
	DECOR_SET_INT(Local_264.f_176, "checkpoint", true);
	Local_264.f_180 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -4244.446f, 18.0963f, 4431.706f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar1, "checkpoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_180);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire01", -4283.974f, 18.88509f, 4503.706f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar2, "checkpoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_180);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire02", -4355.935f, 17.32612f, 4555.855f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "checkpoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_180);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire03", -4445.446f, 15.66395f, 4663.865f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar4, "checkpoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_180);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire04", -4444.54f, 16.91975f, 4741.565f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar5, "checkpoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_180);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire05", -4500.33f, 17.19667f, 4760.434f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar6, "checkpoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_180);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire06", -4526.571f, 16.42861f, 4725.558f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar7, "checkpoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_180);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire07", -4499.225f, 16.1506f, 4682.667f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar8, "checkpoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_180);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire08", -4439.938f, 16.28913f, 4640.016f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "checkpoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_180);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire09", -4381.217f, 16.87724f, 4592.354f, 176.0945f, 81.83194f, 176.1602f);
	DECOR_SET_INT(bVar10, "checkpoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_180);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire010", -4360.453f, 18.61674f, 4531.04f, 176.0945f, 81.83194f, 176.1602f);
	DECOR_SET_INT(bVar11, "checkpoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_180);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire011", -4403.332f, 18.88512f, 4512.774f, -3.905491f, 98.16806f, -3.839747f);
	DECOR_SET_INT(bVar12, "checkpoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_180);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire012", -4491.145f, 19.15521f, 4452.274f, -3.905491f, 98.16806f, -3.839747f);
	DECOR_SET_INT(bVar13, "checkpoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_180);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire013", -4461.75f, 29.94004f, 4368.822f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "checkpoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_180);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire014", -4401.926f, 33.03436f, 4305.526f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "checkpoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_180);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire015", -4382.227f, 34.18267f, 4265.199f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "checkpoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_180);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire016", -4420.19f, 33.8703f, 4231.31f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "checkpoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_180);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire017", -4484.064f, 28.26432f, 4227.93f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar18, "checkpoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_180);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire018", -4613.377f, 16.77515f, 4237.544f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "checkpoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_180);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire019", -4620.987f, 12.41337f, 4175.888f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "checkpoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_180);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire020", -4532.313f, 6.374569f, 4076.628f, -6.567589f, 4.768462f, -4.812558f);
	DECOR_SET_INT(bVar21, "checkpoint", 20);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_180);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire021", -4601.673f, 2.462365f, 3990.255f, -6.567589f, 4.768462f, -4.812558f);
	DECOR_SET_INT(bVar22, "checkpoint", 21);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_180);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire022", -4675.893f, 2.786527f, 3960.709f, -6.567589f, 4.768462f, -4.812558f);
	DECOR_SET_INT(bVar23, "checkpoint", 22);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_180);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire023", -4710.574f, 2.042673f, 4016.271f, -6.567589f, 4.768462f, -4.812558f);
	DECOR_SET_INT(bVar24, "checkpoint", 23);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_180);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire024", -4653.052f, 7.896051f, 4079.757f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "checkpoint", 24);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_180);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire025", -4557.34f, 12.86727f, 4130.188f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "checkpoint", 25);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_180);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire026", -4473.293f, 20.95644f, 4156.944f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar27, "checkpoint", 26);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_180);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire027", -4436.274f, 31.42713f, 4227.697f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar28, "checkpoint", 27);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_180);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire028", -4382.356f, 34.12082f, 4264.545f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar29, "checkpoint", 28);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_180);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire029", -4427.818f, 33.0132f, 4321.938f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar30, "checkpoint", 29);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_180);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire030", -4559.433f, 19.83431f, 4320.072f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar31, "checkpoint", 30);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_180);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire031", -4599.845f, 14.81573f, 4352.11f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar32, "checkpoint", 31);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_180);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire032", -4539.017f, 15.7251f, 4448.926f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar33, "checkpoint", 32);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_180);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire033", -4467.921f, 18.88514f, 4501.352f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar34, "checkpoint", 33);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_180);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire034", -4399.681f, 18.8851f, 4513.408f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar35, "checkpoint", 34);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_180);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire035", -4288.023f, 18.88507f, 4507.54f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar36, "checkpoint", 35);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_180);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -4244.193f, 18.15304f, 4435.755f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar37, "checkpoint", 36);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_180);
	Local_264.f_184 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	*(&Local_264 + 188[06]) = { -4212.869f, 18.84748f, 4373.561f };
	*(&Local_264 + 188[06] + 12) = { 0.0f, -215.6225f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -4212.869f, 18.84748f, 4373.561f, 0.0f, -215.6225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_184);
	*(&Local_264 + 188[16]) = { -4214.259f, 18.84748f, 4372.557f };
	*(&Local_264 + 188[16] + 12) = { 0.0f, -214.4135f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -4214.259f, 18.84748f, 4372.557f, 0.0f, -214.4135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_184);
	*(&Local_264 + 188[26]) = { -4215.865f, 18.84748f, 4371.441f };
	*(&Local_264 + 188[26] + 12) = { 0.0f, 147.1811f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -4215.865f, 18.84748f, 4371.441f, 0.0f, 147.1811f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_184);
	*(&Local_264 + 188[36]) = { -4217.417f, 18.84748f, 4370.207f };
	*(&Local_264 + 188[36] + 12) = { 0.0f, -216.8621f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -4217.417f, 18.84748f, 4370.207f, 0.0f, -216.8621f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_184);
	*(&Local_264 + 188[46]) = { -4210.409f, 18.86695f, 4370.076f };
	*(&Local_264 + 188[46] + 12) = { 0.0f, -575.306f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -4210.409f, 18.86695f, 4370.076f, 0.0f, -575.306f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_184);
	*(&Local_264 + 188[56]) = { -4211.943f, 18.86695f, 4368.99f };
	*(&Local_264 + 188[56] + 12) = { 0.0f, -215.2504f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -4211.943f, 18.86695f, 4368.99f, 0.0f, -215.2504f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_184);
	*(&Local_264 + 188[66]) = { -4213.532f, 18.86695f, 4367.891f };
	*(&Local_264 + 188[66] + 12) = { 0.0f, 145.8402f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -4213.532f, 18.86695f, 4367.891f, 0.0f, 145.8402f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_184);
	*(&Local_264 + 188[76]) = { -4215.098f, 18.86695f, 4366.71f };
	*(&Local_264 + 188[76] + 12) = { 0.0f, -214.8665f, 0.0f };
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -4215.098f, 18.86695f, 4366.71f, 0.0f, -214.8665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_184);
	*(&Local_264 + 188[86]) = { -4208.024f, 18.88469f, 4366.458f };
	*(&Local_264 + 188[86] + 12) = { 0.0f, -215.1597f, 0.0f };
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos9", -4208.024f, 18.88469f, 4366.458f, 0.0f, -215.1597f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_184);
	*(&Local_264 + 188[96]) = { -4209.693f, 18.88469f, 4365.369f };
	*(&Local_264 + 188[96] + 12) = { 0.0f, 146.1496f, 0.0f };
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos10", -4209.693f, 18.88469f, 4365.369f, 0.0f, 146.1496f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_184);
	*(&Local_264 + 188[106]) = { -4211.161f, 18.88468f, 4364.294f };
	*(&Local_264 + 188[106] + 12) = { 0.0f, -213.7408f, 0.0f };
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos11", -4211.161f, 18.88468f, 4364.294f, 0.0f, -213.7408f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_184);
	*(&Local_264 + 188[116]) = { -4212.784f, 18.88467f, 4363.229f };
	*(&Local_264 + 188[116] + 12) = { 0.0f, -212.9293f, 0.0f };
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos12", -4212.784f, 18.88467f, 4363.229f, 0.0f, -212.9293f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_184);
	*(&Local_264 + 188[126]) = { -4205.601f, 18.87633f, 4362.749f };
	*(&Local_264 + 188[126] + 12) = { 0.0f, 146.3979f, 0.0f };
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos13", -4205.601f, 18.87633f, 4362.749f, 0.0f, 146.3979f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_184);
	*(&Local_264 + 188[136]) = { -4207.114f, 18.87633f, 4361.678f };
	*(&Local_264 + 188[136] + 12) = { 0.0f, 144.391f, 0.0f };
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos14", -4207.114f, 18.87633f, 4361.678f, 0.0f, 144.391f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_184);
	*(&Local_264 + 188[146]) = { -4208.703f, 18.87633f, 4360.661f };
	*(&Local_264 + 188[146] + 12) = { 0.0f, -215.8453f, 0.0f };
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos15", -4208.703f, 18.87633f, 4360.661f, 0.0f, -215.8453f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_184);
	*(&Local_264 + 188[156]) = { -4210.33f, 18.87633f, 4359.459f };
	*(&Local_264 + 188[156] + 12) = { 0.0f, -575.5106f, 0.0f };
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "StartPos16", -4210.33f, 18.87633f, 4359.459f, 0.0f, -575.5106f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_184);
	Local_264.f_576 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	*(&Local_264 + 580[06]) = { -4213.689f, 18.82525f, 4375.307f };
	*(&Local_264 + 580[06] + 12) = { 0.0f, 148.837f, 0.0f };
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000", -4213.689f, 18.82525f, 4375.307f, 0.0f, 148.837f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_576);
	*(&Local_264 + 580[16]) = { -4232.675f, 18.46801f, 4394.282f };
	*(&Local_264 + 580[16] + 12) = { 0.0f, 154.4548f, 0.0f };
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a", -4232.675f, 18.46801f, 4394.282f, 0.0f, 154.4548f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_576);
	*(&Local_264 + 580[26]) = { -4240.131f, 18.0873f, 4429.62f };
	*(&Local_264 + 580[26] + 12) = { 0.0f, 128.462f, 0.0f };
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_0", -4240.131f, 18.0873f, 4429.62f, 0.0f, 128.462f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_576);
	*(&Local_264 + 580[36]) = { -4265.8f, 18.86133f, 4474.13f };
	*(&Local_264 + 580[36] + 12) = { 0.0f, 157.6909f, 0.0f };
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0a", -4265.8f, 18.86133f, 4474.13f, 0.0f, 157.6909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_576);
	*(&Local_264 + 580[46]) = { -4290.271f, 18.88509f, 4505.137f };
	*(&Local_264 + 580[46] + 12) = { 0.0f, 138.5755f, 0.0f };
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_1", -4290.271f, 18.88509f, 4505.137f, 0.0f, 138.5755f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_576);
	*(&Local_264 + 580[56]) = { -4346.705f, 18.86865f, 4525.617f };
	*(&Local_264 + 580[56] + 12) = { 0.0f, 154.9446f, 0.0f };
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1a", -4346.705f, 18.86865f, 4525.617f, 0.0f, 154.9446f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_576);
	*(&Local_264 + 580[66]) = { -4359.637f, 17.25888f, 4555.902f };
	*(&Local_264 + 580[66] + 12) = { 0.0f, 136.5989f, 0.0f };
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_2", -4359.637f, 17.25888f, 4555.902f, 0.0f, 136.5989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_576);
	*(&Local_264 + 580[76]) = { -4384.154f, 17.08048f, 4598.875f };
	*(&Local_264 + 580[76] + 12) = { 0.0f, 131.8147f, 0.0f };
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2a", -4384.154f, 17.08048f, 4598.875f, 0.0f, 131.8147f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_576);
	*(&Local_264 + 580[86]) = { -4417.824f, 17.11729f, 4622.378f };
	*(&Local_264 + 580[86] + 12) = { -178.1398f, 45.71926f, -175.7534f };
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2b", -4417.824f, 17.11729f, 4622.378f, -178.1398f, 45.71926f, -175.7534f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_576);
	*(&Local_264 + 580[96]) = { -4447.728f, 15.80027f, 4666.145f };
	*(&Local_264 + 580[96] + 12) = { -178.7818f, -27.13805f, -178.0484f };
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_3", -4447.728f, 15.80027f, 4666.145f, -178.7818f, -27.13805f, -178.0484f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_576);
	*(&Local_264 + 580[106]) = { -4429.985f, 16.81668f, 4698.227f };
	*(&Local_264 + 580[106] + 12) = { 1.328548f, 167.8222f, 3.194904f };
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3a", -4429.985f, 16.81668f, 4698.227f, 1.328548f, 167.8222f, 3.194904f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_576);
	*(&Local_264 + 580[116]) = { -4440.534f, 16.92088f, 4742.308f };
	*(&Local_264 + 580[116] + 12) = { 0.0f, 147.5799f, 0.0f };
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_4", -4440.534f, 16.92088f, 4742.308f, 0.0f, 147.5799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_576);
	*(&Local_264 + 580[126]) = { -4467.204f, 16.91669f, 4763.725f };
	*(&Local_264 + 580[126] + 12) = { 0.0f, 78.31244f, 0.0f };
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4a", -4467.204f, 16.91669f, 4763.725f, 0.0f, 78.31244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_576);
	*(&Local_264 + 580[136]) = { -4500.628f, 17.22994f, 4765.631f };
	*(&Local_264 + 580[136] + 12) = { 0.0f, 61.15192f, 0.0f };
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_5", -4500.628f, 17.22994f, 4765.631f, 0.0f, 61.15192f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_576);
	*(&Local_264 + 580[146]) = { -4527.033f, 16.90671f, 4752.167f };
	*(&Local_264 + 580[146] + 12) = { 0.0f, -14.78581f, 0.0f };
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5a", -4527.033f, 16.90671f, 4752.167f, 0.0f, -14.78581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_576);
	*(&Local_264 + 580[156]) = { -4537.625f, 16.45626f, 4726.391f };
	*(&Local_264 + 580[156] + 12) = { 0.0f, -19.869f, 0.0f };
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_6", -4537.625f, 16.45626f, 4726.391f, 0.0f, -19.869f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_576);
	*(&Local_264 + 580[166]) = { -4506.226f, 15.98202f, 4685.738f };
	*(&Local_264 + 580[166] + 12) = { 0.0f, -48.09406f, 0.0f };
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_7", -4506.226f, 15.98202f, 4685.738f, 0.0f, -48.09406f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_576);
	*(&Local_264 + 580[176]) = { -4479.323f, 15.89727f, 4668.882f };
	*(&Local_264 + 580[176] + 12) = { 0.0f, -53.93884f, 0.0f };
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7a", -4479.323f, 15.89727f, 4668.882f, 0.0f, -53.93884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_576);
	*(&Local_264 + 580[186]) = { -4445.25f, 16.08275f, 4640.517f };
	*(&Local_264 + 580[186] + 12) = { 0.0f, -60.59792f, 0.0f };
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_8", -4445.25f, 16.08275f, 4640.517f, 0.0f, -60.59792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_576);
	*(&Local_264 + 580[196]) = { -4403.198f, 16.81668f, 4618.349f };
	*(&Local_264 + 580[196] + 12) = { 0.0f, -37.77182f, 0.0f };
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8a", -4403.198f, 16.81668f, 4618.349f, 0.0f, -37.77182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_576);
	*(&Local_264 + 580[206]) = { -4385.442f, 16.87726f, 4591.594f };
	*(&Local_264 + 580[206] + 12) = { 0.0f, -40.55076f, 0.0f };
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_9", -4385.442f, 16.87726f, 4591.594f, 0.0f, -40.55076f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_576);
	*(&Local_264 + 580[216]) = { -4352.665f, 17.38195f, 4556.046f };
	*(&Local_264 + 580[216] + 12) = { 0.0f, 22.65307f, 0.0f };
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9a", -4352.665f, 17.38195f, 4556.046f, 0.0f, 22.65307f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_576);
	*(&Local_264 + 580[226]) = { -4351.004f, 18.78947f, 4531.499f };
	*(&Local_264 + 580[226] + 12) = { 0.0f, 63.2516f, 0.0f };
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a", -4351.004f, 18.78947f, 4531.499f, 0.0f, 63.2516f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_576);
	*(&Local_264 + 580[236]) = { -4376.11f, 18.81771f, 4516.288f };
	*(&Local_264 + 580[236] + 12) = { 0.0f, 78.27676f, 0.0f };
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a1", -4376.11f, 18.81771f, 4516.288f, 0.0f, 78.27676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_576);
	*(&Local_264 + 580[246]) = { -4400.451f, 18.88509f, 4516.961f };
	*(&Local_264 + 580[246] + 12) = { 0.0f, 78.55634f, 0.0f };
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -4400.451f, 18.88509f, 4516.961f, 0.0f, 78.55634f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_576);
	*(&Local_264 + 580[256]) = { -4432.082f, 18.88495f, 4504.969f };
	*(&Local_264 + 580[256] + 12) = { 0.0f, 90.88303f, 0.0f };
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -4432.082f, 18.88495f, 4504.969f, 0.0f, 90.88303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_576);
	*(&Local_264 + 580[266]) = { -4460.902f, 18.88384f, 4508.077f };
	*(&Local_264 + 580[266] + 12) = { 0.0f, 55.53405f, 0.0f };
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -4460.902f, 18.88384f, 4508.077f, 0.0f, 55.53405f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_576);
	*(&Local_264 + 580[276]) = { -4495.857f, 18.86386f, 4476.507f };
	*(&Local_264 + 580[276] + 12) = { 0.0f, -13.51351f, 0.0f };
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11c", -4495.857f, 18.86386f, 4476.507f, 0.0f, -13.51351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_576);
	*(&Local_264 + 580[286]) = { -4491.341f, 19.53332f, 4448.133f };
	*(&Local_264 + 580[286] + 12) = { 0.0f, -48.67233f, 0.0f };
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -4491.341f, 19.53332f, 4448.133f, 0.0f, -48.67233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_576);
	*(&Local_264 + 580[296]) = { -4468.021f, 23.98775f, 4427.821f };
	*(&Local_264 + 580[296] + 12) = { 0.0f, -10.08522f, 0.0f };
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -4468.021f, 23.98775f, 4427.821f, 0.0f, -10.08522f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_576);
	*(&Local_264 + 580[306]) = { -4467.276f, 29.07149f, 4375.477f };
	*(&Local_264 + 580[306] + 12) = { 0.0f, -28.6014f, 0.0f };
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -4467.276f, 29.07149f, 4375.477f, 0.0f, -28.6014f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_576);
	*(&Local_264 + 580[316]) = { -4450.29f, 33.16452f, 4356.778f };
	*(&Local_264 + 580[316] + 12) = { 0.0f, -41.17572f, 0.0f };
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -4450.29f, 33.16452f, 4356.778f, 0.0f, -41.17572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_576);
	*(&Local_264 + 580[326]) = { -4418.856f, 33.21805f, 4328.132f };
	*(&Local_264 + 580[326] + 12) = { 0.0f, -32.39109f, 0.0f };
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13b", -4418.856f, 33.21805f, 4328.132f, 0.0f, -32.39109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_576);
	*(&Local_264 + 580[336]) = { -4407.413f, 33.12713f, 4308.487f };
	*(&Local_264 + 580[336] + 12) = { 0.0f, -41.79348f, 0.0f };
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -4407.413f, 33.12713f, 4308.487f, 0.0f, -41.79348f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_576);
	*(&Local_264 + 580[346]) = { -4390.159f, 33.19002f, 4293.417f };
	*(&Local_264 + 580[346] + 12) = { 0.0f, -38.27982f, 0.0f };
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -4390.159f, 33.19002f, 4293.417f, 0.0f, -38.27982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_576);
	*(&Local_264 + 580[356]) = { -4381.335f, 33.99489f, 4267.685f };
	*(&Local_264 + 580[356] + 12) = { 0.0f, 5.752063f, 0.0f };
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -4381.335f, 33.99489f, 4267.685f, 0.0f, 5.752063f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_576);
	*(&Local_264 + 580[366]) = { -4393.083f, 35.72764f, 4242.573f };
	*(&Local_264 + 580[366] + 12) = { 0.0f, 61.36845f, 0.0f };
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -4393.083f, 35.72764f, 4242.573f, 0.0f, 61.36845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_576);
	*(&Local_264 + 580[376]) = { -4417.755f, 34.19176f, 4232.429f };
	*(&Local_264 + 580[376] + 12) = { 0.0f, 70.1264f, 0.0f };
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -4417.755f, 34.19176f, 4232.429f, 0.0f, 70.1264f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_576);
	*(&Local_264 + 580[386]) = { -4457.076f, 29.27547f, 4227.166f };
	*(&Local_264 + 580[386] + 12) = { 0.0f, 90.14732f, 0.0f };
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16a", -4457.076f, 29.27547f, 4227.166f, 0.0f, 90.14732f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_576);
	*(&Local_264 + 580[396]) = { -4481.953f, 28.46763f, 4225.362f };
	*(&Local_264 + 580[396] + 12) = { 0.0f, 102.455f, 0.0f };
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17", -4481.953f, 28.46763f, 4225.362f, 0.0f, 102.455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_576);
	*(&Local_264 + 580[406]) = { -4518.296f, 25.3967f, 4235.801f };
	*(&Local_264 + 580[406] + 12) = { 0.0f, 104.2294f, 0.0f };
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a", -4518.296f, 25.3967f, 4235.801f, 0.0f, 104.2294f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_576);
	*(&Local_264 + 580[416]) = { -4570.392f, 20.11166f, 4251.217f };
	*(&Local_264 + 580[416] + 12) = { 0.0f, 72.14781f, 0.0f };
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17b", -4570.392f, 20.11166f, 4251.217f, 0.0f, 72.14781f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_576);
	*(&Local_264 + 580[426]) = { -4614.588f, 16.79469f, 4241.622f };
	*(&Local_264 + 580[426] + 12) = { 0.0f, 24.04162f, 0.0f };
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18", -4614.588f, 16.79469f, 4241.622f, 0.0f, 24.04162f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_576);
	*(&Local_264 + 580[436]) = { -4627.463f, 14.93936f, 4208.068f };
	*(&Local_264 + 580[436] + 12) = { 0.0f, -1.941711f, 0.0f };
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a", -4627.463f, 14.93936f, 4208.068f, 0.0f, -1.941711f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_576);
	*(&Local_264 + 580[446]) = { -4625.514f, 12.65795f, 4179.332f };
	*(&Local_264 + 580[446] + 12) = { 0.0f, -23.78012f, 0.0f };
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19", -4625.514f, 12.65795f, 4179.332f, 0.0f, -23.78012f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_576);
	*(&Local_264 + 580[456]) = { -4602.557f, 12.05851f, 4152.172f };
	*(&Local_264 + 580[456] + 12) = { 0.0f, -41.8956f, 0.0f };
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19a", -4602.557f, 12.05851f, 4152.172f, 0.0f, -41.8956f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_576);
	*(&Local_264 + 580[466]) = { -4572.542f, 12.67093f, 4116.993f };
	*(&Local_264 + 580[466] + 12) = { 0.0f, -59.38489f, 0.0f };
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19b", -4572.542f, 12.67093f, 4116.993f, 0.0f, -59.38489f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_576);
	*(&Local_264 + 580[476]) = { -4530.113f, 7.446794f, 4088.283f };
	*(&Local_264 + 580[476] + 12) = { 0.0f, -1.941711f, 0.0f };
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_20", -4530.113f, 7.446794f, 4088.283f, 0.0f, -1.941711f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_576);
	*(&Local_264 + 580[486]) = { -4536.743f, 5.174567f, 4062.386f };
	*(&Local_264 + 580[486] + 12) = { 0.0f, 9.536513f, 0.0f };
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_20a", -4536.743f, 5.174567f, 4062.386f, 0.0f, 9.536513f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_576);
	*(&Local_264 + 580[496]) = { -4556.496f, 3.874388f, 4022.907f };
	*(&Local_264 + 580[496] + 12) = { 0.0f, 39.12943f, 0.0f };
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_20b", -4556.496f, 3.874388f, 4022.907f, 0.0f, 39.12943f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_576);
	*(&Local_264 + 580[506]) = { -4594.652f, 2.739759f, 3996.465f };
	*(&Local_264 + 580[506] + 12) = { 0.0f, 61.5269f, 0.0f };
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_21", -4594.652f, 2.739759f, 3996.465f, 0.0f, 61.5269f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_576);
	*(&Local_264 + 580[516]) = { -4635.622f, 1.75787f, 3976.901f };
	*(&Local_264 + 580[516] + 12) = { 0.0f, 46.63164f, 0.0f };
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_21a", -4635.622f, 1.75787f, 3976.901f, 0.0f, 46.63164f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_576);
	*(&Local_264 + 580[526]) = { -4673.625f, 2.818618f, 3955.889f };
	*(&Local_264 + 580[526] + 12) = { 0.0f, 144.3979f, 0.0f };
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_22", -4673.625f, 2.818618f, 3955.889f, 0.0f, 144.3979f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_576);
	*(&Local_264 + 580[536]) = { -4682.058f, 2.816966f, 3984.552f };
	*(&Local_264 + 580[536] + 12) = { 0.0f, 116.6284f, 0.0f };
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_22a", -4682.058f, 2.816966f, 3984.552f, 0.0f, 116.6284f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_576);
	*(&Local_264 + 580[546]) = { -4714.128f, 2.501172f, 4011.63f };
	*(&Local_264 + 580[546] + 12) = { 0.0f, -176.1649f, 0.0f };
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_23", -4714.128f, 2.501172f, 4011.63f, 0.0f, -176.1649f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_576);
	*(&Local_264 + 580[556]) = { -4676.916f, 5.990356f, 4054.497f };
	*(&Local_264 + 580[556] + 12) = { 0.0f, -147.726f, 0.0f };
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_23a", -4676.916f, 5.990356f, 4054.497f, 0.0f, -147.726f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_576);
	*(&Local_264 + 580[566]) = { -4657.29f, 7.891606f, 4078.766f };
	*(&Local_264 + 580[566] + 12) = { 0.0f, -134.0757f, 0.0f };
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24", -4657.29f, 7.891606f, 4078.766f, 0.0f, -134.0757f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_576);
	*(&Local_264 + 580[576]) = { -4622.029f, 9.144627f, 4092.83f };
	*(&Local_264 + 580[576] + 12) = { 0.0f, -95.88435f, 0.0f };
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24a", -4622.029f, 9.144627f, 4092.83f, 0.0f, -95.88435f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_576);
	*(&Local_264 + 580[586]) = { -4592.053f, 11.85767f, 4108.982f };
	*(&Local_264 + 580[586] + 12) = { 0.0f, 225.4086f, 0.0f };
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24b", -4592.053f, 11.85767f, 4108.982f, 0.0f, 225.4086f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_576);
	*(&Local_264 + 580[596]) = { -4561.74f, 12.9187f, 4130.281f };
	*(&Local_264 + 580[596] + 12) = { 0.0f, -103.2182f, 0.0f };
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25", -4561.74f, 12.9187f, 4130.281f, 0.0f, -103.2182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_576);
	*(&Local_264 + 580[606]) = { -4519.095f, 13.07487f, 4132.294f };
	*(&Local_264 + 580[606] + 12) = { 0.0f, -116.8169f, 0.0f };
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25a", -4519.095f, 13.07487f, 4132.294f, 0.0f, -116.8169f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_576);
	*(&Local_264 + 580[616]) = { -4471.557f, 21.32846f, 4157.677f };
	*(&Local_264 + 580[616] + 12) = { 0.0f, -154.4339f, 0.0f };
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_26", -4471.557f, 21.32846f, 4157.677f, 0.0f, -154.4339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_576);
	*(&Local_264 + 580[626]) = { -4460.697f, 25.23346f, 4188.729f };
	*(&Local_264 + 580[626] + 12) = { 0.0f, -147.9497f, 0.0f };
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_26a", -4460.697f, 25.23346f, 4188.729f, 0.0f, -147.9497f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_576);
	*(&Local_264 + 580[636]) = { -4447.637f, 29.79992f, 4226.145f };
	*(&Local_264 + 580[636] + 12) = { 0.7563862f, -104.7449f, -2.358265f };
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_27", -4447.637f, 29.79992f, 4226.145f, 0.7563862f, -104.7449f, -2.358265f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_576);
	*(&Local_264 + 580[646]) = { -4400.807f, 35.97733f, 4237.049f };
	*(&Local_264 + 580[646] + 12) = { 0.0f, -142.6023f, 0.0f };
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_27a", -4400.807f, 35.97733f, 4237.049f, 0.0f, -142.6023f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_576);
	*(&Local_264 + 580[656]) = { -4383.81f, 34.02288f, 4263.29f };
	*(&Local_264 + 580[656] + 12) = { 0.0f, -165.8227f, 0.0f };
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_28", -4383.81f, 34.02288f, 4263.29f, 0.0f, -165.8227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_576);
	*(&Local_264 + 580[666]) = { -4397.23f, 33.18913f, 4302.253f };
	*(&Local_264 + 580[666] + 12) = { -4.320838f, -223.7182f, -3.003037f };
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_28a", -4397.23f, 33.18913f, 4302.253f, -4.320838f, -223.7182f, -3.003037f);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_576);
	*(&Local_264 + 580[676]) = { -4422.006f, 33.07713f, 4322.719f };
	*(&Local_264 + 580[676] + 12) = { 0.0f, -265.716f, 0.0f };
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_29", -4422.006f, 33.07713f, 4322.719f, 0.0f, -265.716f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_576);
	*(&Local_264 + 580[686]) = { -4456.672f, 31.79883f, 4326.91f };
	*(&Local_264 + 580[686] + 12) = { 0.0f, -279.2517f, 0.0f };
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_29a", -4456.672f, 31.79883f, 4326.91f, 0.0f, -279.2517f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_576);
	*(&Local_264 + 580[696]) = { -4501.042f, 27.67303f, 4319.811f };
	*(&Local_264 + 580[696] + 12) = { 0.0f, -278.3608f, 0.0f };
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_29b", -4501.042f, 27.67303f, 4319.811f, 0.0f, -278.3608f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_576);
	*(&Local_264 + 580[706]) = { -4554.135f, 19.80144f, 4321.875f };
	*(&Local_264 + 580[706] + 12) = { 0.0f, -256.0037f, 0.0f };
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_30", -4554.135f, 19.80144f, 4321.875f, 0.0f, -256.0037f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_576);
	*(&Local_264 + 580[716]) = { -4590.2f, 18.73572f, 4328.841f };
	*(&Local_264 + 580[716] + 12) = { 0.0f, -211.2607f, 0.0f };
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_30a", -4590.2f, 18.73572f, 4328.841f, 0.0f, -211.2607f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_576);
	*(&Local_264 + 580[726]) = { -4602.998f, 14.80218f, 4352.169f };
	*(&Local_264 + 580[726] + 12) = { 0.0f, -165.8227f, 0.0f };
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_31", -4602.998f, 14.80218f, 4352.169f, 0.0f, -165.8227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_576);
	*(&Local_264 + 580[736]) = { -4578.161f, 14.14349f, 4397.82f };
	*(&Local_264 + 580[736] + 12) = { 0.0f, -155.176f, 0.0f };
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_31a", -4578.161f, 14.14349f, 4397.82f, 0.0f, -155.176f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_576);
	*(&Local_264 + 580[746]) = { -4559.583f, 13.96681f, 4431.267f };
	*(&Local_264 + 580[746] + 12) = { 0.0f, -140.1851f, 0.0f };
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_31b", -4559.583f, 13.96681f, 4431.267f, 0.0f, -140.1851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_576);
	*(&Local_264 + 580[756]) = { -4540.698f, 15.72515f, 4450.966f };
	*(&Local_264 + 580[756] + 12) = { 0.0f, -135.4364f, 0.0f };
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_32", -4540.698f, 15.72515f, 4450.966f, 0.0f, -135.4364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_576);
	*(&Local_264 + 580[766]) = { -4503.986f, 18.74628f, 4472.654f };
	*(&Local_264 + 580[766] + 12) = { 0.0f, -137.2834f, 0.0f };
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_32a", -4503.986f, 18.74628f, 4472.654f, 0.0f, -137.2834f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_576);
	*(&Local_264 + 580[776]) = { -4471.744f, 18.88515f, 4502.924f };
	*(&Local_264 + 580[776] + 12) = { 0.0f, -110.3633f, 0.0f };
	bVar131 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_33", -4471.744f, 18.88515f, 4502.924f, 0.0f, -110.3633f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar131, Local_264.f_576);
	*(&Local_264 + 580[786]) = { -4447.303f, 18.88137f, 4512.877f };
	*(&Local_264 + 580[786] + 12) = { 0.0f, -90.75127f, 0.0f };
	bVar132 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_33a", -4447.303f, 18.88137f, 4512.877f, 0.0f, -90.75127f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar132, Local_264.f_576);
	*(&Local_264 + 580[796]) = { -4402.12f, 18.88515f, 4509.654f };
	*(&Local_264 + 580[796] + 12) = { 0.0f, -105.0567f, 0.0f };
	bVar133 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_34", -4402.12f, 18.88515f, 4509.654f, 0.0f, -105.0567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar133, Local_264.f_576);
	*(&Local_264 + 580[806]) = { -4340.2f, 18.86422f, 4525.939f };
	*(&Local_264 + 580[806] + 12) = { 0.0f, -80.84412f, 0.0f };
	bVar134 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_34a", -4340.2f, 18.86422f, 4525.939f, 0.0f, -80.84412f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar134, Local_264.f_576);
	*(&Local_264 + 580[816]) = { -4294.173f, 18.94188f, 4516.384f };
	*(&Local_264 + 580[816] + 12) = { 0.0f, -51.36796f, 0.0f };
	bVar135 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_35", -4294.173f, 18.94188f, 4516.384f, 0.0f, -51.36796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar135, Local_264.f_576);
	*(&Local_264 + 580[826]) = { -4269.315f, 19.17362f, 4480.002f };
	*(&Local_264 + 580[826] + 12) = { 0.0f, -33.03965f, 0.0f };
	bVar136 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_35a", -4269.315f, 19.17362f, 4480.002f, 0.0f, -33.03965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar136, Local_264.f_576);
	*(&Local_264 + 580[836]) = { -4251.193f, 18.7446f, 4461.778f };
	*(&Local_264 + 580[836] + 12) = { 0.0f, -18.92267f, 0.0f };
	bVar137 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_35b", -4251.193f, 18.7446f, 4461.778f, 0.0f, -18.92267f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar137, Local_264.f_576);
	Local_264.f_2600 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 2604[06]) = { -4237.274f, 17.62465f, 4414.307f };
	*(&Local_264 + 2604[06] + 12) = { 0.0f, -575.5106f, 0.0f };
	bVar138 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -4237.274f, 17.62465f, 4414.307f, 0.0f, -575.5106f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar138, Local_264.f_2600);
	Local_264.f_2632 = CREATE_OBJECTSET_IN_LAYOUT("mp_CrowdCheer_flagsSet", Local_264, 8, 0);
	*(&Local_264 + 2636[06]) = { -4218.019f, 19.08174f, 4389.827f };
	*(&Local_264 + 2636[06] + 12) = { 0.0f, 4.36288f, 0.0f };
	bVar139 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer", -4218.019f, 19.08174f, 4389.827f, 0.0f, 4.36288f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar139, Local_264.f_2632);
	*(&Local_264 + 2636[16]) = { -4220.016f, 19.03618f, 4390.215f };
	*(&Local_264 + 2636[16] + 12) = { 0.0f, 4.36288f, 0.0f };
	bVar140 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer1", -4220.016f, 19.03618f, 4390.215f, 0.0f, 4.36288f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar140, Local_264.f_2632);
	*(&Local_264 + 2636[26]) = { -4230.676f, 18.45139f, 4384.616f };
	*(&Local_264 + 2636[26] + 12) = { 0.0f, -50.29479f, 0.0f };
	bVar141 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer2", -4230.676f, 18.45139f, 4384.616f, 0.0f, -50.29479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar141, Local_264.f_2632);
	*(&Local_264 + 2636[36]) = { -4249.269f, 18.15452f, 4427.824f };
	*(&Local_264 + 2636[36] + 12) = { 0.0f, -50.29479f, 0.0f };
	bVar142 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer3", -4249.269f, 18.15452f, 4427.824f, 0.0f, -50.29479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar142, Local_264.f_2632);
	*(&Local_264 + 2636[46]) = { -4238.753f, 18.41099f, 4432.729f };
	*(&Local_264 + 2636[46] + 12) = { 0.0f, 118.1152f, 0.0f };
	bVar143 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer4", -4238.753f, 18.41099f, 4432.729f, 0.0f, 118.1152f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar143, Local_264.f_2632);
	*(&Local_264 + 2636[56]) = { -4239.523f, 18.37245f, 4434.805f };
	*(&Local_264 + 2636[56] + 12) = { 0.0f, 99.95644f, 0.0f };
	bVar144 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer5", -4239.523f, 18.37245f, 4434.805f, 0.0f, 99.95644f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar144, Local_264.f_2632);
	*(&Local_264 + 2636[66]) = { -4435.478f, 16.90182f, 4742.926f };
	*(&Local_264 + 2636[66] + 12) = { 0.0f, 7.047745f, 0.0f };
	bVar145 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer6", -4435.478f, 16.90182f, 4742.926f, 0.0f, 7.047745f, 0.0f);
	DECOR_SET_BOOL(bVar145, "Pointer", true);
	DECOR_SET_BOOL(bVar145, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar145, Local_264.f_2632);
	*(&Local_264 + 2636[76]) = { -4432.744f, 16.85482f, 4741.869f };
	*(&Local_264 + 2636[76] + 12) = { 0.0f, 10.43579f, 0.0f };
	bVar146 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer7", -4432.744f, 16.85482f, 4741.869f, 0.0f, 10.43579f, 0.0f);
	DECOR_SET_BOOL(bVar146, "Pointer", true);
	DECOR_SET_BOOL(bVar146, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar146, Local_264.f_2632);
	*(&Local_264 + 2636[86]) = { -4434.162f, 16.90193f, 4740.566f };
	*(&Local_264 + 2636[86] + 12) = { 0.0f, 15.86849f, 0.0f };
	bVar147 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer8", -4434.162f, 16.90193f, 4740.566f, 0.0f, 15.86849f, 0.0f);
	DECOR_SET_BOOL(bVar147, "Pointer", true);
	DECOR_SET_BOOL(bVar147, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar147, Local_264.f_2632);
	*(&Local_264 + 2636[96]) = { -4597.705f, 19.35138f, 4257.273f };
	*(&Local_264 + 2636[96] + 12) = { 0.0f, -47.56115f, 0.0f };
	bVar148 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer9", -4597.705f, 19.35138f, 4257.273f, 0.0f, -47.56115f, 0.0f);
	DECOR_SET_BOOL(bVar148, "Pointer", true);
	DECOR_SET_BOOL(bVar148, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar148, Local_264.f_2632);
	*(&Local_264 + 2636[106]) = { -4595.855f, 19.39894f, 4258.293f };
	*(&Local_264 + 2636[106] + 12) = { 0.0f, -64.41625f, 0.0f };
	bVar149 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer10", -4595.855f, 19.39894f, 4258.293f, 0.0f, -64.41625f, 0.0f);
	DECOR_SET_BOOL(bVar149, "Pointer", true);
	DECOR_SET_BOOL(bVar149, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar149, Local_264.f_2632);
	*(&Local_264 + 2636[116]) = { -4597.003f, 19.42344f, 4259.446f };
	*(&Local_264 + 2636[116] + 12) = { 0.0f, -64.41625f, 0.0f };
	bVar150 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer11", -4597.003f, 19.42344f, 4259.446f, 0.0f, -64.41625f, 0.0f);
	DECOR_SET_BOOL(bVar150, "Pointer", true);
	DECOR_SET_BOOL(bVar150, "LEFTORRIGHT", true);
	ADD_OBJECT_TO_OBJECTSET(bVar150, Local_264.f_2632);
	*(&Local_264 + 2636[126]) = { -4524.178f, 6.253443f, 4080.428f };
	*(&Local_264 + 2636[126] + 12) = { 0.0f, 125.5604f, 0.0f };
	bVar151 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer12", -4524.178f, 6.253443f, 4080.428f, 0.0f, 125.5604f, 0.0f);
	DECOR_SET_BOOL(bVar151, "Pointer", true);
	DECOR_SET_BOOL(bVar151, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar151, Local_264.f_2632);
	*(&Local_264 + 2636[136]) = { -4523.694f, 6.524668f, 4081.924f };
	*(&Local_264 + 2636[136] + 12) = { 0.0f, 125.5604f, 0.0f };
	bVar152 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer13", -4523.694f, 6.524668f, 4081.924f, 0.0f, 125.5604f, 0.0f);
	DECOR_SET_BOOL(bVar152, "Pointer", true);
	DECOR_SET_BOOL(bVar152, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar152, Local_264.f_2632);
	*(&Local_264 + 2636[146]) = { -4524.526f, 6.185299f, 4078.444f };
	*(&Local_264 + 2636[146] + 12) = { 0.0f, 125.5604f, 0.0f };
	bVar153 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer14", -4524.526f, 6.185299f, 4078.444f, 0.0f, 125.5604f, 0.0f);
	DECOR_SET_BOOL(bVar153, "Pointer", true);
	DECOR_SET_BOOL(bVar153, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar153, Local_264.f_2632);
	*(&Local_264 + 2636[156]) = { -4687.473f, 2.731157f, 3967.869f };
	*(&Local_264 + 2636[156] + 12) = { 0.0f, 262.2825f, 0.0f };
	bVar154 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer15", -4687.473f, 2.731157f, 3967.869f, 0.0f, 262.2825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar154, Local_264.f_2632);
	*(&Local_264 + 2636[166]) = { -4686.188f, 2.686037f, 3966.734f };
	*(&Local_264 + 2636[166] + 12) = { 0.0f, 291.5971f, 0.0f };
	bVar155 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer16", -4686.188f, 2.686037f, 3966.734f, 0.0f, 291.5971f, 0.0f);
	DECOR_SET_BOOL(bVar155, "Pointer", true);
	DECOR_SET_BOOL(bVar155, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar155, Local_264.f_2632);
	*(&Local_264 + 2636[176]) = { -4395.861f, 35.65532f, 4236.418f };
	*(&Local_264 + 2636[176] + 12) = { 0.0f, 177.4214f, 0.0f };
	bVar156 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer17", -4395.861f, 35.65532f, 4236.418f, 0.0f, 177.4214f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar156, Local_264.f_2632);
	*(&Local_264 + 2636[186]) = { -4399.786f, 35.87438f, 4233.531f };
	*(&Local_264 + 2636[186] + 12) = { 0.0f, 108.9007f, 0.0f };
	bVar157 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer18", -4399.786f, 35.87438f, 4233.531f, 0.0f, 108.9007f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar157, Local_264.f_2632);
	*(&Local_264 + 2636[196]) = { -4556.125f, 19.88906f, 4305.651f };
	*(&Local_264 + 2636[196] + 12) = { 0.0f, 236.3709f, 0.0f };
	bVar158 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer19", -4556.125f, 19.88906f, 4305.651f, 0.0f, 236.3709f, 0.0f);
	DECOR_SET_BOOL(bVar158, "Pointer", true);
	DECOR_SET_BOOL(bVar158, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar158, Local_264.f_2632);
	*(&Local_264 + 2636[206]) = { -4555.222f, 19.90404f, 4303.628f };
	*(&Local_264 + 2636[206] + 12) = { 0.0f, 244.6487f, 0.0f };
	bVar159 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer20", -4555.222f, 19.90404f, 4303.628f, 0.0f, 244.6487f, 0.0f);
	DECOR_SET_BOOL(bVar159, "Pointer", true);
	DECOR_SET_BOOL(bVar159, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar159, Local_264.f_2632);
	*(&Local_264 + 2636[216]) = { -4553.765f, 19.88902f, 4300.821f };
	*(&Local_264 + 2636[216] + 12) = { 0.0f, 250.7425f, 0.0f };
	bVar160 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer21", -4553.765f, 19.88902f, 4300.821f, 0.0f, 250.7425f, 0.0f);
	DECOR_SET_BOOL(bVar160, "Pointer", true);
	DECOR_SET_BOOL(bVar160, "LEFTORRIGHT", false);
	ADD_OBJECT_TO_OBJECTSET(bVar160, Local_264.f_2632);
	*(&Local_264 + 2636[226]) = { -4247.203f, 18.33696f, 4425.954f };
	*(&Local_264 + 2636[226] + 12) = { 0.0f, 207.6966f, 0.0f };
	bVar161 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer22", -4247.203f, 18.33696f, 4425.954f, 0.0f, 207.6966f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar161, Local_264.f_2632);
	*(&Local_264 + 2636[236]) = { -4246.141f, 18.09077f, 4424.854f };
	*(&Local_264 + 2636[236] + 12) = { 0.0f, 325.2989f, 0.0f };
	bVar162 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer23", -4246.141f, 18.09077f, 4424.854f, 0.0f, 325.2989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar162, Local_264.f_2632);
	*(&Local_264 + 2636[246]) = { -4238.795f, 18.4308f, 4428.565f };
	*(&Local_264 + 2636[246] + 12) = { 0.0f, 419.1785f, 0.0f };
	bVar163 = CREATE_POINT_IN_LAYOUT(Local_264, "f_CrowdCheer24", -4238.795f, 18.4308f, 4428.565f, 0.0f, 419.1785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar163, Local_264.f_2632);
	Local_264.f_3240 = CREATE_OBJECTSET_IN_LAYOUT(Function_65(), Local_264, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish1", "GenericContainer", -4240.511f, 18.09188f, 4431.173f, 0.0f, -219.4895f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish2", "GenericContainer", -4239.809f, 18.34216f, 4431.458f, 0.0f, -211.1533f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish3", "GenericContainer", -4240.656f, 18.08534f, 4430.032f, 0.0f, -212.599f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish4", "GenericContainer", -4238.322f, 18.54232f, 4432.415f, 0.0f, -221.9701f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish5", "GenericContainer", -4240.406f, 18.08434f, 4428.487f, 0.0f, 138.4294f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish6", "GenericContainer", -4239.353f, 18.33668f, 4429.591f, 0.0f, 139.9881f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish7", "GenericContainer", -4238.848f, 18.33801f, 4427.599f, 0.0f, -225.1173f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish8", "GenericContainer", -4239.015f, 18.57443f, 4430.382f, 0.0f, 149.5986f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish9", "GenericContainer", -4247.362f, 18.22902f, 4429.345f, 0.0f, 186.6249f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish10", "GenericContainer", -4246.428f, 18.08728f, 4428.004f, 0.0f, -165.667f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish11", "GenericContainer", -4247.199f, 18.33783f, 4428.001f, 0.0f, -157.3774f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish12", "GenericContainer", -4245.679f, 18.08433f, 4427.159f, 0.0f, -177.4304f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish13", "GenericContainer", -4246.936f, 18.33454f, 4426.921f, 0.0f, 189.6517f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish14", "GenericContainer", -4247.992f, 18.19138f, 4428.309f, 0.0f, -164.5902f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish15", "GenericContainer", -4248.016f, 18.15205f, 4426.477f, 0.0f, -157.2043f, 0.0f), Local_264.f_3240);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_264, "gringoplayerfinish16", "GenericContainer", -4248.739f, 18.15663f, 4428.547f, 0.0f, -116.3039f, 0.0f), Local_264.f_3240);
	return;
}

var Function_65() //Position: 0x7364 / 29540
{
	int iVar0;
	
	return iVar0;
}

void Function_66(int iParam0, int iParam1) //Position: 0x736C / 29548
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

void Function_67() //Position: 0x73B5 / 29621
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

bool Function_68() //Position: 0x73E4 / 29668
{
	return Function_69(2);
}

int Function_69(var uParam0) //Position: 0x73EE / 29678
{
	return Function_26(StackVal, uParam0);
}

