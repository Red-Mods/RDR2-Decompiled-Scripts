//Decompiled with MagicRDR v1.0
//Function Count : 560
//Statics Count : 1054
//Natives Count : 495
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
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0.0f;
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
	var uLocal_40 = 1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
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
	var uLocal_66 = 11;
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
	var uLocal_88 = 11;
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
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	struct<9> Local_108 = { 0, 0, 0, 0, 0, 4, 0, 0, 0 } ;
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
	var uLocal_134 = 0;
	var uLocal_135 = -1;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 27;
	var uLocal_157 = 0;
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
	var uLocal_172 = 0;
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
	int iLocal_216 = 0;
	struct<357> Local_217 = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
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
	var uLocal_732 = 3;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 16;
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
	var uLocal_846 = 16;
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
	var uLocal_952 = 16;
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
	int iLocal_1053 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar2;
	bool bVar3;
	
	iLocal_10 = 5;
	iLocal_11 = 0;
	fLocal_12 = 1.0f;
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_50 = 0;
	bLocal_106 = 16;
	bLocal_107 = false;
	bLocal_366 = true;
	iLocal_1053 = 1;
	Function_518();
	Function_517("TDM_team_fmt", 1);
	Function_516();
	iVar0 = NET_GET_PLAYMODE();
	while ((!IS_EXITFLAG_SET() && !iLocal_216) && NET_IS_IN_SESSION())
	{
		switch (Local_217.f_24)
		{
			case 0x00000000:
				if (Function_514(70444) && UNK_0xA80C6DE6(&Local_307))
				{
					NET_LOG(1, "DM Data", "DATA SUNK. MOVING ON.", 0, 0, 0, 0);
					Local_217.f_24 = 1;
				}
				else if (Function_513())
				{
					NET_LOG(1, "DM Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_216 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_407())
				{
					NET_LOG(1, "DM Data", "DATA SUNK AND INITED. MOVING ON.", 0, 0, 0, 0);
					Local_217.f_24 = 2;
				}
				else if (Function_513())
				{
					NET_LOG(1, "DM Data", "BAILING ON SYNC: GAME IS OVER.", 0, 0, 0, 0);
					iLocal_216 = 1;
				}
				break;
			
			case 0x00000002:
				if (!Function_151())
				{
					NET_LOG(iLocal_1053, "GameType State", "UPDATE_GAMETYPE_DEATHMATCH_BASIC returned false, transitioning to GAMETYPE_QUIT state.", 0, 0, 0, 0);
					iLocal_216 = 1;
				}
				break;
		}
		WAIT(0);
	}
	Function_149();
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_217.f_16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_217.f_16);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_217.f_20))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_217.f_20);
	}
	if (iVar0 != 1 || iVar0 != 3)
	{
		iVar2 = 0;
	}
	else if (Function_146())
	{
		iVar2 = Function_145();
	}
	else
	{
		iVar2 = Function_141();
	}
	bVar3 = false;
	if (NET_IS_IN_SESSION())
	{
		if (Function_513())
		{
			if (iVar2 >= 0)
			{
			}
			if (Function_146())
			{
				Function_89(iVar2, Function_135(), 1, 1, 0);
			}
			else
			{
				Function_89(iVar2, 4294967295, 1, 1, 0);
			}
		}
		else
		{
			if (iVar2 >= 0)
			{
			}
			bVar3 = true;
		}
	}
	else
	{
		bVar3 = true;
	}
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(GET_LOCAL_SLOT())))
		{
			SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(GET_LOCAL_SLOT()), 0);
		}
	}
	if (bVar3)
	{
		Function_45(iVar2);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2BB / 699
{
	Function_43(Function_44());
	Function_26(&vLocal_108);
	Function_12(&Local_217 + 36, 1);
	Function_4(&Local_217 + 236);
	Function_2(&Local_217 + 148);
	UNREGISTER_SCRIPT_WITH_AUDIO();
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_2(int iParam0) //Position: 0x2EB / 747
{
	Function_3(iParam0, 0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x2F7 / 759
{
	if (uParam0->f_72)
	{
		uParam0->f_72 = 0;
		UI_HIDE("ScoreGraph");
		UI_DEACTIVATE("ScoreGraph");
		uParam0->f_68 = iParam1;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x32F / 815
{
	PPP_UNLOAD_PRESET(iParam0->f_52);
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	Function_8(iParam0 + 64);
	if (IS_OBJECT_VALID(iParam0->f_28))
	{
		DESTROY_OBJECT(iParam0->f_28);
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	UI_EXIT("LoadingSpinner");
	UI_INCLUDE("FameText");
	if (!UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		UI_SHOW("FameText");
	}
	HUD_ENABLE(1);
	Function_5(5);
	if (iParam0->f_108 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_108);
		iParam0->f_108 = 0;
	}
	if (iParam0->f_112 != 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_112);
		iParam0->f_112 = 0;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3DC / 988
{
	Function_6(&Global_83864 + 1252, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x3EE / 1006
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x3FB / 1019
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_8(int iParam0) //Position: 0x40E / 1038
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_9(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x434 / 1076
{
	if (Function_11(uParam0[iParam13], 4))
	{
		if (Function_11(uParam0[iParam13], 1))
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
			Function_10(uParam0[iParam13], 1);
			Function_10(uParam0[iParam13], 2);
			Function_10(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x562 / 1378
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x57C / 1404
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(int iParam0, bool bParam1) //Position: 0x599 / 1433
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (IS_VOLUME_VALID(iParam0->f_84))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_84);
		DESTROY_VOLUME(iParam0->f_84);
	}
	if (IS_OBJECT_VALID(iParam0->f_40))
	{
		DESTROY_OBJECT(iParam0->f_40);
	}
	if (Function_24(iParam0, 8))
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
		UI_EXIT("MpWeaponSuppressor");
	}
	Function_23(0);
	if (bParam1)
	{
		if (IS_ACTOR_VALID(Function_22()))
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(Function_22(), 0.1f, 0.9f, 0);
		}
		UI_EXIT("XpHud");
		UI_EXIT("MpWeaponSuppressor");
		SET_HUD_MAP_DRAW_ENABLED(1);
		if (*iParam0 != 4 || *iParam0 != 8)
		{
			UI_EXIT("MPSplash");
		}
	}
	else if (!Function_24(iParam0, 64))
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
		UI_SHOW("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_RESTORE("WeaponAmmo");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	UI_EXIT("HudMPNoFun");
	Function_16(iParam0, bParam1);
	Function_13();
	if (iParam0->f_96 >= 4294967295)
	{
		NET_GAMER_SET_TEAM(iParam0->f_96, 3);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, 0);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		SET_FORCE_PLAYER_AIM_MODE(0, 0);
		bVar0 = Function_22();
		if (IS_ACTOR_VALID(bVar0))
		{
			DECOR_REMOVE(bVar0, "ForceAim");
		}
	}
	Function_8(iParam0 + 48);
	return;
}

void Function_13() //Position: 0x71B / 1819
{
	Function_14(1024, 0, 1);
	Function_14(1, 0, 0);
	return;
}

void Function_14(int iParam0, bool bParam1, int iParam2) //Position: 0x72F / 1839
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_15(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x757 / 1879
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_16(int iParam0, bool bParam1) //Position: 0x766 / 1894
{
	if (Function_24(iParam0, 2))
	{
		PPP_UNLOAD_PRESET(Function_21());
		PPP_UNLOAD_PRESET(Function_20());
		Function_19(iParam0, 2);
	}
	if (IS_OBJECT_VALID(iParam0->f_100))
	{
		DESTROY_OBJECT(iParam0->f_100);
	}
	if (Function_24(iParam0, 4))
	{
		PPP_UNLOAD_PRESET(Function_18());
		Function_19(iParam0, 4);
	}
	if (bParam1)
	{
		Function_17();
	}
	return;
}

void Function_17() //Position: 0x7B5 / 1973
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	return;
}

var Function_18() //Position: 0x7BE / 1982
{
	return "MP_ShowdownBlueTeam.ppp";
}

void Function_19(int iParam0, int iParam1) //Position: 0x7DE / 2014
{
	Function_7(iParam0 + 24, iParam1);
	return;
}

var Function_20() //Position: 0x7ED / 2029
{
	return "MP_WinningFrame.ppp";
}

var Function_21() //Position: 0x809 / 2057
{
	return "MP_ShowdownRedTeam.ppp";
}

bool Function_22() //Position: 0x828 / 2088
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_23(bool bParam0) //Position: 0x83D / 2109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (bParam0)
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 2);
			}
			else
			{
				NET_GAMER_ICON_FORCE_VISIBILITY(bVar0, 0);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_24(int iParam0, int iParam1) //Position: 0x872 / 2162
{
	return Function_25(iParam0->f_24, iParam1);
}

bool Function_25(var uParam0, int iParam1) //Position: 0x881 / 2177
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(int iParam0) //Position: 0x88E / 2190
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_40();
	bVar0 = Function_22();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_188))
	{
		DESTROY_OBJECT(iParam0->f_188);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_37(!Function_38(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_36(81920, 0);
	Function_36(8388608, 0);
	Function_27(iParam0);
	if (iParam0->f_108 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
	}
	return;
}

void Function_27(int iParam0) //Position: 0x940 / 2368
{
	Function_33(iParam0);
	Function_28(iParam0, 0);
	Function_14(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_28(int iParam0, bool bParam1) //Position: 0x97A / 2426
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_29(StackVal, StackVal, Function_32(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_120))
	{
		DESTROY_OBJECT(iParam0->f_120);
	}
	if (bParam1)
	{
		iParam0->f_120 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		RELEASE_OBJECT_REF(iParam0->f_156);
	}
	if (IS_VOLUME_VALID(iParam0->f_424))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
		DESTROY_VOLUME(iParam0->f_424);
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
	}
	if (Function_25(iParam0->f_48, 2))
	{
		Function_7(iParam0 + 48, 2);
	}
	Function_15(iParam0 + 48, 1);
	return;
}

var Function_29(char* cParam0, vector3 vParam1, bool bParam4) //Position: 0xA0B / 2571
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	iVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_31(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_31(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iVar2, 0);
		Function_30(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(uVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(iVar2, 0, 1, 0.5f, 4294967295, 0), 1, 1);
		Function_31(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_31(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iVar2, (iVar3 + iVar1));
		Function_31(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_31(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_30(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(iVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(iVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(iVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return iVar2;
}

void Function_30(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0xB44 / 2884
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *uParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
}

vector3 Function_31(var uParam0, float fParam1) //Position: 0xB99 / 2969
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, fParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_32() //Position: 0xBB3 / 2995
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_33(int iParam0) //Position: 0xBE2 / 3042
{
	Function_35(iParam0);
	Function_34(1048576);
	return;
}

void Function_34(int iParam0) //Position: 0xBF4 / 3060
{
	Function_6(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_35(int iParam0) //Position: 0xC2D / 3117
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	return;
}

void Function_36(int iParam0, bool bParam1) //Position: 0xC44 / 3140
{
	if (bParam1)
	{
		Function_15(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_7(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_37(bool bParam0) //Position: 0xC7F / 3199
{
	if (bParam0)
	{
		UI_EXIT("MPSplash");
	}
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("NotorietyMeter");
	UI_RESTORE("NotorietyMeter");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

bool Function_38(int iParam0) //Position: 0xD06 / 3334
{
	return Function_39(Global_79336, iParam0);
}

bool Function_39(var uParam0, bool bParam1) //Position: 0xD15 / 3349
{
	return (uParam0 && bParam1) == 0;
}

void Function_40() //Position: 0xD22 / 3362
{
	if (Function_42(8))
	{
		Function_41();
	}
	Function_14(8, 0, 1);
	return;
}

void Function_41() //Position: 0xD3A / 3386
{
	Function_14(32768, 1, 0);
	return;
}

bool Function_42(int iParam0) //Position: 0xD49 / 3401
{
	return Function_25(Global_76905.f_132, iParam0);
}

void Function_43(bool bParam0) //Position: 0xD5A / 3418
{
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	return;
}

bool Function_44() //Position: 0xD6A / 3434
{
	return Global_83591.f_140;
}

void Function_45(int iParam0) //Position: 0xD76 / 3446
{
	int iVar0;
	int iVar1[67];
	int iVar69;
	
	Function_82();
	Function_81();
	UI_EXIT("XpHud");
	if (iParam0 >= 0)
	{
		iVar0 = 4294967295;
		if (NET_IS_IN_SESSION())
		{
			iVar0 = GET_LOCAL_SLOT();
		}
		NET_START_LB_UPDATE(0);
		iVar1[6] = 1;
		NET_UPDATE_LEADERBOARD(iVar0, iParam0, 4294967295, &iVar1);
		NET_UPDATE_LEADERBOARD(iVar0, 3, 4294967295, &iVar1);
		NET_END_LB_UPDATE();
		Global_84364.f_776 = 4294967295;
		Function_47(0);
		if (NET_IS_IN_SESSION())
		{
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar69 = UNK_0xA684E813();
				if (iVar69 >= 4294967295)
				{
					Function_46(&Global_76943[iVar6996] + 220, &iVar1, 1);
					NET_REPORT_FRIEND_SCORES(iVar69, iParam0, &iVar1);
				}
			}
		}
	}
	return;
}

void Function_46(var uParam0, int iParam1, bool bParam2) //Position: 0xE08 / 3592
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*iParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*iParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_47(bool bParam0) //Position: 0xE4D / 3661
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_79(2);
	if (bParam0)
	{
		Function_79(1);
	}
	else
	{
		Function_78(1);
	}
	Function_48();
	return;
}

void Function_48() //Position: 0xED6 / 3798
{
	Function_76();
	Function_75();
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_56(0);
	Function_56(0);
	if (!Function_55())
	{
		Function_53();
		Function_52();
		Function_51();
		Function_50();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_49();
	return;
}

void Function_49() //Position: 0xF28 / 3880
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

void Function_50() //Position: 0x102E / 4142
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

void Function_51() //Position: 0x1061 / 4193
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

void Function_52() //Position: 0x11EF / 4591
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

void Function_53() //Position: 0x13A3 / 5027
{
	Function_54(&Global_28260, 1, 0);
	return;
}

void Function_54(int iParam0, bool bParam1, var uParam2) //Position: 0x13B1 / 5041
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	bVar0 = Function_22();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

bool Function_55() //Position: 0x15A2 / 5538
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_56(int iParam0) //Position: 0x15AB / 5547
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
					iVar2 = ((Function_72((50 + iVar4)) + Function_72((183 + iVar4))) + Function_72((90 + iVar4)));
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
	Function_57(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x1651 / 5713
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
		Function_71(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_70(iParam0);
	if (bParam2)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_58(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x18EC / 6380
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_69(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_68(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_68(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_66(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_63(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(iParam7), &Global_35278[iParam020] + 16, Function_60(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_59(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_59() //Position: 0x1F19 / 7961
{
	int iVar0;
	
	return iVar0;
}

var Function_60(int iParam0) //Position: 0x1F21 / 7969
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_61(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F32 / 7986
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_62(char* cParam0, char* cParam1) //Position: 0x2027 / 8231
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2040 / 8256
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_65(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_64(Function_65(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_64(int iParam0, int iParam1) //Position: 0x20A5 / 8357
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_65(int iParam0, int iParam1) //Position: 0x20B7 / 8375
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_66(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x20C9 / 8393
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
	if (((Function_67(iParam0) != 19 || Function_67(iParam0) != 17) || Function_67(iParam0) != 10) || Function_67(iParam0) != 9)
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

int Function_67(int iParam0) //Position: 0x21F9 / 8697
{
	return Global_35278[iParam020].f_48;
}

float Function_68(int iParam0) //Position: 0x2208 / 8712
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_69(int iParam0) //Position: 0x2241 / 8769
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_70(int iParam0) //Position: 0x227E / 8830
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

int Function_71(int iParam0, float fParam1, bool bParam2) //Position: 0x2418 / 9240
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

int Function_72(int iParam0) //Position: 0x265C / 9820
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_73() //Position: 0x269D / 9885
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
		iVar2 = ((Function_72((50 + iVar3) + 15) + Function_72((183 + iVar3) + 15)) + Function_72((90 + iVar3) + 15));
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
	Function_57(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_74() //Position: 0x2726 / 10022
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
			iVar2 = ((Function_72((50 + iVar3) + 8) + Function_72((183 + iVar3) + 8)) + Function_72((90 + iVar3) + 8));
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
	Function_57(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_75() //Position: 0x27BD / 10173
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
		iVar2 = ((Function_72((50 + iVar3)) + Function_72((183 + iVar3))) + Function_72((90 + iVar3)));
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
	Function_57(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_76() //Position: 0x283C / 10300
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_77(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_57(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_77(int iParam0, float fParam1, int iParam2) //Position: 0x2875 / 10357
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_71(iParam0, fParam1, 1);
	Function_70(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_58(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_78(int iParam0) //Position: 0x2A7F / 10879
{
	Function_6(&Global_79338, iParam0);
	return;
}

void Function_79(int iParam0) //Position: 0x2A8E / 10894
{
	Function_80(&Global_79338, iParam0);
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x2A9D / 10909
{
	Function_15(uParam0, iParam1);
	return;
}

void Function_81() //Position: 0x2AAA / 10922
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_82() //Position: 0x2AD4 / 10964
{
	if (Global_83864.f_1264 > 6)
	{
		Function_83(&(Global_50170[522]));
		Function_83(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_83(&(Global_50170[722]));
		Function_83(&(Global_50170[822]));
		Function_83(&(Global_50170[922]));
		Function_83(&(Global_50170[1022]));
		Function_83(&(Global_50170[1122]));
	}
	return;
}

void Function_83(bool bParam0) //Position: 0x2B34 / 11060
{
	Global_56092[*bParam0] = 0;
	Function_84(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_84(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2B4E / 11086
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_88(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_87(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (iParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(iParam4));
		}
		if (iParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(iParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_88(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_86(iParam0, 4))
	{
		Function_85(Function_88(iParam0), 0);
	}
}

void Function_85(var uParam0, int iParam1) //Position: 0x2C05 / 11269
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

bool Function_86(int iParam0, int iParam1) //Position: 0x2C2A / 11306
{
	return Function_25(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_87(int iParam0) //Position: 0x2C3E / 11326
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_88(int iParam0) //Position: 0x2C72 / 11378
{
	return Global_50170[iParam022].f_24;
}

void Function_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2C81 / 11393
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_134(5, 1);
	Function_34(4096);
	switch (Function_133())
	{
		case 0x00000011:
		case 0x00000002:
			Function_93(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_82();
	Function_81();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_46(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			if (bParam4)
			{
				Function_90(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_46(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_47(bParam2);
}

void Function_90(int iParam0) //Position: 0x2D9D / 11677
{
	int iVar0[67];
	int iVar68[67];
	
	Function_15(&Global_79338, 32);
	iVar0[13] = FLOOR(Function_92(8));
	iVar0[0] = FLOOR(Function_92(8));
	if (Function_92(8) < 0.0f)
	{
		if (Function_91())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &iVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &iVar0);
		}
	}
	if (Function_92(7) < 0.0f)
	{
		iVar68[13] = FLOOR(Function_92(7));
		iVar68[0] = iVar68[13];
		if (Function_91())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &iVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &iVar68);
		}
	}
	return;
}

bool Function_91() //Position: 0x2E44 / 11844
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

float Function_92(int iParam0) //Position: 0x2E4F / 11855
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_93(var uParam0, var uParam1, int iParam2) //Position: 0x2E5F / 11871
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_125(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_131(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_84(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_132(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_125(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_131(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_84(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_132(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_94(17, 150, Function_131(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_84(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_94(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3008 / 12296
{
	Function_122(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_88(iParam0), 1.0f, 0, 0);
	Function_118(iParam0, 0);
	if (!IS_STRING_VALID(iParam2))
	{
		iParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_115(iParam3);
	}
	Function_110(&Global_50170[iParam022] + 16, iParam1, iParam2);
	Function_95();
}

void Function_95() //Position: 0x306E / 12398
{
	if (!Function_55())
	{
		if (!Function_109(1, 3, 1, 1))
		{
			Function_97(1);
			Function_96(1, 8);
		}
	}
	else
	{
		Function_47(0);
	}
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x3097 / 12439
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_55())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_97(bool bParam0) //Position: 0x30D9 / 12505
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_98();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_7(&Global_63095, 1);
		Function_7(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_98() //Position: 0x312A / 12586
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_108())
	{
		Function_105(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_105(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_100(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_100(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_99(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_99(vector3 vParam0) //Position: 0x31E5 / 12773
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_100(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31FD / 12797
{
	int iVar0;
	
	iVar0 = Function_103(uParam2, uParam3);
	if (Function_102(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_15(&Global_63095, 1);
			Function_7(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_15(&Global_63095, 2);
			Function_7(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_15(&Global_63095, 2);
		Function_7(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_101();
	return StackVal, StackVal, Function_101();
}

vector3 Function_101() //Position: 0x32E4 / 13028
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_102(int iParam0) //Position: 0x32ED / 13037
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_103(bool bParam0, bool bParam1) //Position: 0x3303 / 13059
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
				fVar2 = Function_104(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_104(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_102(bVar0) && !bParam1)
	{
		bVar0 = Function_103(bParam0, 1);
	}
	return bVar0;
}

float Function_104(vector3 vParam0, vector3 vParam3) //Position: 0x33CA / 13258
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_105(var uParam0, int iParam1) //Position: 0x33E7 / 13287
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_107(Global_34573, &vVar4);
	if (!Function_106(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_106(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_15(&Global_63095, 2);
	Function_7(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_99(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_106(int iParam0) //Position: 0x3C0C / 15372
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_25(uVar0, 0x1000000) || Function_25(uVar0, 0x2000000)) || Function_25(uVar0, 0x4000000)) || !Function_25(uVar0, 0x10000000));
}

void Function_107(bool bParam0, var uParam1) //Position: 0x3C47 / 15431
{
	GET_POSITION(bParam0, uParam1);
	return;
}

bool Function_108() //Position: 0x3C54 / 15444
{
	if (Function_25(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_109(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3C6F / 15471
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

void Function_110(int iParam0, int iParam1, int iParam2) //Position: 0x3D13 / 15635
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	iVar0 = Function_32();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(iVar0, Function_114(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_113(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, STRING_TO_HASH(iParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_112(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, STRING_TO_HASH(iParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_111(iVar2) };
	DECOR_SET_INT(iVar0, &Var3, iParam1);
	DECOR_SET_INT(iVar0, Function_114(), iVar1 + 1);
	return;
}

struct<16> Function_111(int iParam0) //Position: 0x3D85 / 15749
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_112(int iParam0) //Position: 0x3DA6 / 15782
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_113(int iParam0) //Position: 0x3DC7 / 15815
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_114() //Position: 0x3DE8 / 15848
{
	return "CQueue_Count";
}

void Function_115(int iParam0) //Position: 0x3DFD / 15869
{
	Function_116(iParam0, 1);
	return;
}

void Function_116(int iParam0, bool bParam1) //Position: 0x3E09 / 15881
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_15(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_117((iVar0 % 32)));
	}
	else
	{
		Function_7(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_117((iVar0 % 32)));
	}
	return;
}

int Function_117(int iParam0) //Position: 0x3E5F / 15967
{
	return SHIFT_LEFT(1, iParam0);
}

void Function_118(int iParam0, int iParam1) //Position: 0x3E6B / 15979
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_121(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_88(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_87(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_88(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_88(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_88(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_119(int iParam0) //Position: 0x3EED / 16109
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_87(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_120(int iParam0) //Position: 0x3F0D / 16141
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_121(int iParam0) //Position: 0x3F3E / 16190
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_122(bool bParam0, bool bParam1) //Position: 0x4177 / 16759
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	iVar0 = 0;
	bVar1 = Function_123();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (iVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(iParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(iVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

var Function_123() //Position: 0x42C3 / 17091
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_124(var uParam0, bool bParam1, bool bParam2) //Position: 0x4310 / 17168
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_125(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x4328 / 17192
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(iParam11))
	{
		iParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_87(iParam0) };
	Function_110(&Var0, iParam7, iParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_124(&fParam5, bParam8, iParam9);
	Function_84(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_127(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_115(iParam12);
	}
	Function_126(iParam0, 4);
	Function_95();
}

void Function_126(int iParam0, int iParam1) //Position: 0x439E / 17310
{
	Function_7(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_127(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x43B2 / 17330
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_121(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_88(iParam0));
	if ((bParam3 && Function_86(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_88(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_120(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_87(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(iParam0) };
			UI_SET_STRING(&Var11, I2STR(iParam1));
			UI_SET_STRING(&Var17, I2STR(iParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_88(iParam0), &Var7, 0, 2, Function_86(iParam0, 4));
			if (!bParam3)
			{
				Function_128(iParam0, 4);
			}
		}
	}
}

void Function_128(int iParam0, int iParam1) //Position: 0x446F / 17519
{
	Function_15(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_129(int iParam0) //Position: 0x4483 / 17539
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_130(int iParam0) //Position: 0x44B1 / 17585
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_131() //Position: 0x44E1 / 17633
{
	return "MP_Unstoppable_Icon_128";
}

float Function_132(int iParam0) //Position: 0x4501 / 17665
{
	return Global_50170[iParam022].f_12;
}

int Function_133() //Position: 0x4510 / 17680
{
	return Global_79349.f_16;
}

void Function_134(int iParam0, int iParam1) //Position: 0x451C / 17692
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

int Function_135() //Position: 0x4541 / 17729
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_136(GET_LOCAL_SLOT(), 1, 0);
}

int Function_136(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4558 / 17752
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(iParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_140(bParam0))
			{
				if (!Function_137(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_137(int iParam0, int iParam1, bool bParam2) //Position: 0x459C / 17820
{
	char* cVar0[64];
	int iVar16;
	
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return Function_139(iParam1, bParam2);
	}
	if (!Function_140(iParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_138(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
	}
	iVar16 = (Global_76943[iParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_138(int iParam0) //Position: 0x461D / 17949
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

bool Function_139(int iParam0, bool bParam1) //Position: 0x4936 / 18742
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_140(int iParam0) //Position: 0x4956 / 18774
{
	char* cVar0[64];
	
	if (iParam0 > 0 || iParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[iParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[iParam02] = Global_78617.f_60;
		(&Global_78617 + 64[iParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, iParam0);
	}
	return StackVal;
}

int Function_141() //Position: 0x49F7 / 18935
{
	if (Function_144())
	{
		return 93;
	}
	if (Function_143())
	{
		return 95;
	}
	if (Function_142())
	{
		return 94;
	}
	return 4;
}

bool Function_142() //Position: 0x4A1F / 18975
{
	return Function_25(Global_79962, 512);
}

bool Function_143() //Position: 0x4A2F / 18991
{
	return Function_25(Global_79962, 256);
}

bool Function_144() //Position: 0x4A3F / 19007
{
	return Function_25(Global_79962, 16384);
}

int Function_145() //Position: 0x4A4F / 19023
{
	if (Function_144())
	{
		return 96;
	}
	if (Function_143())
	{
		return 98;
	}
	if (Function_142())
	{
		return 97;
	}
	return 1;
}

bool Function_146() //Position: 0x4A77 / 19063
{
	return Function_147(2);
}

int Function_147(int iParam0) //Position: 0x4A81 / 19073
{
	return Function_148(&Global_79349, iParam0);
}

int Function_148(var uParam0, var uParam1) //Position: 0x4A90 / 19088
{
	return Function_25(uParam0->f_44, uParam1);
}

void Function_149() //Position: 0x4A9F / 19103
{
	if (bLocal_366)
	{
		Function_150();
		PRINTSTRING("Game End");
		PRINTNL();
	}
	return;
}

void Function_150() //Position: 0x4ABF / 19135
{
	if (bLocal_366)
	{
		PRINTSTRING("[RESPAWNLOG],");
		PRINTFLOAT(NET_GET_NET_TIME());
		PRINTSTRING(",");
		if (NET_IS_IN_SESSION())
		{
			PRINTSTRING(GET_SLOT_NAME(GET_LOCAL_SLOT()));
		}
		else
		{
			PRINTSTRING("OutOfSession");
		}
		PRINTSTRING(",");
	}
	return;
}

bool Function_151() //Position: 0x4B16 / 19222
{
	int iVar0;
	
	iVar0 = 1;
	Function_405(2);
	if (NET_IS_SESSION_HOST())
	{
		Function_395();
	}
	Function_393();
	iVar0 = (iVar0 && Function_152());
	return iVar0;
}

int Function_152() //Position: 0x4B3A / 19258
{
	int iVar0;
	
	Function_386(&Global_78578 + 96, &Local_217, &Local_217 + 8, Global_83591.f_16, 0, 0);
	if (Function_384())
	{
		if (!Function_25(StackVal, 64))
		{
			Function_15(&Local_217 + 4, 64);
			AUDIO_MUSIC_SET_MOOD("OVERTIME", 0, 4294967295, 4294967295);
			if (Function_146())
			{
				Function_382("TDM_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_382("DM_overtime_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			Function_381("GENMESS_OTENGAGED", 0);
		}
		Function_376(&Local_217 + 148, 4294967295);
	}
	else
	{
		Function_376(&Local_217 + 148, Global_83591);
	}
	if (Function_375(&vLocal_108))
	{
		if (Function_513())
		{
			Function_374(&vLocal_108);
		}
	}
	if (Function_277(&Local_217 + 36, &Local_307))
	{
		if (!Local_217.f_228)
		{
			Local_217.f_228 = 1;
			Function_274(&vLocal_108);
			if (Function_273(&vLocal_108))
			{
				Function_272(&vLocal_108, 0);
				Function_271(&vLocal_108);
			}
			Function_270(&vLocal_108, 0);
			Function_269(&Local_217 + 148);
		}
		if (NET_IS_SESSION_HOST())
		{
			if (!Function_268(&Global_78578 + 96))
			{
				Function_265(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	iVar0 = Function_153(&vLocal_108);
	if (iVar0 == 0)
	{
	}
	else if (iVar0 == 3)
	{
		return 0;
	}
	if (iVar0 == 2)
	{
		return 0;
	}
	return 1;
}

int Function_153(int iParam0) //Position: 0x4C94 / 19604
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	int iVar15;
	
	bVar0 = Function_22();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(Global_78617.f_28))
	{
		iParam0->f_64 = 0.0f;
	}
	else
	{
		iParam0->f_64 = Function_264((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_146())
	{
		if (bVar1)
		{
			switch (Function_135())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(bVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(bVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(bVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(bVar0, iParam0->f_52);
	}
	if (Function_263(iParam0) && !IS_SCRIPT_VALID(Global_78617.f_28))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_25(iParam0->f_44, 2) || Function_25(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					if (Function_262() && IS_PS3())
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 5, 0, 0, 0, 0, 4294967295, 0);
					}
					else
					{
						iParam0->f_100 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", 0, 6, 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
	}
	if (((Function_263(iParam0) && Function_261(4096)) && Function_260()) && !Function_38(32768))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_25(iParam0->f_44, 2) || Function_25(iParam0->f_44, 128)) && !IS_SCRIPT_VALID(Global_78617.f_28))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
				{
					iParam0->f_104 = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, 4, 0, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 4, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
					Function_259(128);
					Global_78617.f_28 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_258(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_104))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_104);
	}
	fVar8 = Function_257();
	if (bVar1)
	{
		bVar9 = Function_256(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_112 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_147(8192) || Function_25(iParam0->f_48, 512)) && !Function_139(1, 1))
			{
				iVar6 = Function_255(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_25(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_15(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_382("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_254(2, NET_GET_NET_TIME());
								Function_251(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", 1);
								Function_36(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(bVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_92(2));
						if (!Function_139(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_7(iParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(bVar0, 60.0f);
							DECOR_REMOVE(bVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(bVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(bVar0, "Drowned", 1);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", 1);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_36(65536, 0);
					Function_7(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_36(8388608, 1);
					iParam0->f_428 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_139(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_428) <= 2.0f)
					{
						Function_36(8388608, 0);
					}
				}
			}
			if (Function_250(iParam0 + 116, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_25(iParam0->f_44, 16))
					{
						Function_15(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_249(iParam0 + 116, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_7(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_188))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_188))
				{
					Function_248(iParam0->f_188, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_14(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_420 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_168);
			Function_36(65536, 0);
			Function_36(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_25(iParam0->f_44, 8))
			{
				Function_247(0);
			}
			else if (bVar1)
			{
				iParam0->f_152 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			iParam0->f_56 = 4294967295;
			iParam0->f_68 = 0.0f;
			if (Function_246(iParam0 + 116, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_112 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_112 = "";
						break;
					
					default:
						break;
					}
			}
			Function_242(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_226(iParam0, iParam0->f_12 != 0);
			}
			Function_224(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_224(iParam0, 1);
			if ((iParam0->f_12 >= 0 && iParam0->f_64 <= 4.0f) || (iParam0->f_12 < 0 && iParam0->f_64 <= 2.0f))
			{
				if (iParam0->f_12 < 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iParam0->f_64 = 0.0f;
			*iParam0 = 5;
		
		case 0x00000005:
			Function_224(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_25(iParam0->f_44, 512))
				{
					*iParam0 = 8;
				}
				else if (iParam0->f_12 < 1)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_224(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_223();
				Function_14(32, 0, 1);
				Function_37(1);
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_224(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_40();
			}
			break;
		
		case 0x00000008:
			if (Function_25(iParam0->f_44, 2))
			{
				if (Function_25(iParam0->f_44, 512))
				{
					if (!Function_25(iParam0->f_48, 4096))
					{
						Function_28(iParam0, 1);
						Function_15(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_139(16384, 1))
						{
							Function_28(iParam0, 0);
							Function_36(16384, 1);
							iParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(iParam0->f_84))
					{
						TERMINATE_SCRIPT(iParam0->f_84);
					}
					Function_224(iParam0, 1);
				}
			}
			else
			{
				Function_224(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_100))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_100);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_224(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_222(0.0f, 0.0f, 0.0f, 1.0f, 0.5f, 1);
				if (iParam0->f_64 > 0.0f)
				{
					iParam0->f_64 = 0.0f;
				}
			}
			if (iParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				iParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_37(1);
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_221();
				Function_40();
				Function_14(32, 0, 1);
				iParam0->f_424 = CREATE_VOLUME_IN_LAYOUT(Function_32(), Function_59(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_108 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_108 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_108, 4294967295);
				}
				iParam0->f_108 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_108, 1, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_108, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_176);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_25(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_164);
					Function_15(iParam0 + 48, 8);
				}
				if (Function_216(StackVal, Function_25(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_201(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_25(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_25(iParam0->f_44, 1))
				{
					Function_7(iParam0 + 44, 1);
				}
				else
				{
					Function_33(iParam0);
					Function_28(iParam0, 0);
				}
				bVar0 = Function_22();
				Function_200(bVar0);
				if (Function_25(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_188))
				{
					DESTROY_OBJECT(iParam0->f_188);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_424))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_424);
					DESTROY_VOLUME(iParam0->f_424);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_197(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*iParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && iParam0->f_64 > 60.0f)
			{
				if (iParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_196(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_25(iParam0->f_44, 8))
				{
					Function_195(iParam0 + 192, 0, 1, 1);
					Function_189(iParam0 + 192);
					Function_180(&bVar0, 0, 0, 0);
					Function_180(&bVar0, 0, 0, 0);
					Function_179(bVar0);
				}
				else
				{
					Function_195(iParam0 + 192, 1, 1, 1);
				}
				iParam0->f_188 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_188, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_188, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_188, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_178(bVar0);
					vVar10 = { StackVal, StackVal, Function_178(bVar0) };
					bVar13 = Function_177(StackVal, StackVal, vVar10, 0, 1, 1);
					if (Function_176(bVar13))
					{
						if (StackVal || Function_260() == 7)
						{
							iParam0->f_4 = bVar13;
						}
					}
				}
				if (StackVal != Global_29006)
				{
					Function_172(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_171(&(Global_29008[StackVal]), 4194304);
				}
				Function_258(32);
				*iParam0 = 13;
			}
			if (!Function_25(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_184);
				if (StackVal)
				{
					Function_15(iParam0 + 48, 128);
					Function_7(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_258(32);
				Function_172(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_176(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_169(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_169(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_169(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*iParam0 = 14;
					}
				}
				else
				{
					bVar14 = Global_29155[StackVal10];
					if (Function_176(bVar14))
					{
						if (StackVal && (!Function_170(bVar14) && !Function_169(&(Global_29008[bVar14]), 1)) != 2)
						{
							Function_168(bVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_167();
			if (!Function_25(iParam0->f_44, 32))
			{
				if (Function_166())
				{
					iVar15 = 4294967295;
					if (iParam0->f_152 >= 4294967295)
					{
						iVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_152);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
					}
					if (iVar15 == 4294967295)
					{
						iVar15 = Function_165(bVar0, 40);
						if (iVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
						}
						else
						{
							iVar15 = Function_165(bVar0, 39);
							if (iVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
							}
							else
							{
								iVar15 = Function_165(bVar0, 42);
								if (iVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
								}
								else
								{
									iVar15 = Function_165(bVar0, 41);
									if (iVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
									}
									else
									{
										iVar15 = Function_165(bVar0, 43);
										if (iVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
										}
										else
										{
											iVar15 = Function_165(bVar0, 48);
											if (iVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
											}
											else
											{
												iVar15 = Function_165(bVar0, 46);
												if (iVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, iVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_25(iParam0->f_44, 64))
				{
					Function_164(0.5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_36(16384, 0);
			Function_163(bVar0, !Function_25(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_160);
			iParam0->f_112 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_224(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_37(1);
			}
			else if (!Function_161())
			{
				Call_Loc(iParam0->f_172);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_155(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_154(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_224(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_224(iParam0, 1);
			Call_Loc(iParam0->f_180);
			if (StackVal)
			{
				if (Function_25(iParam0->f_44, 4))
				{
					*iParam0 = 17;
				}
				else
				{
					*iParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_224(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_222(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_224(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_222(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_224(iParam0, 1);
			if (Function_161())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_222(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_154(int iParam0) //Position: 0x5D4F / 23887
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0f, 0f, 0, 0);
	}
	return;
}

void Function_155(int iParam0) //Position: 0x5D6B / 23915
{
	var uVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_221();
		uVar0 = "";
		if (Function_25(iParam0->f_44, 256))
		{
			if (Function_25(iParam0->f_44, 4))
			{
				uVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				uVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_268(&Global_78578 + 96))
			{
				if (FABS(Function_156(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, uVar0);
		NET_LOG(1, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

float Function_156(int iParam0) //Position: 0x5E5C / 24156
{
	return -Function_157(iParam0);
}

float Function_157(int iParam0) //Position: 0x5E68 / 24168
{
	if (Function_268(iParam0))
	{
		if (Function_160(iParam0))
		{
			return StackVal;
		}
		Function_158();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_158() //Position: 0x5F39 / 24377
{
	if (!Function_159())
	{
	}
	return;
}

bool Function_159() //Position: 0x5F46 / 24390
{
	return NET_IS_IN_SESSION();
}

bool Function_160(int iParam0) //Position: 0x5F4F / 24399
{
	return Function_25(*iParam0, 2);
}

bool Function_161() //Position: 0x5F5C / 24412
{
	return (HUD_IS_FADED() || Function_162(0));
}

bool Function_162(bool bParam0) //Position: 0x5F6A / 24426
{
	bool bVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			bVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (bParam0)
		{
		}
	}
	else if (bParam0)
	{
	}
	return 0;
}

void Function_163(bool bParam0, int iParam1) //Position: 0x600E / 24590
{
	struct<5> Var0;
	
	Function_36(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	if (Function_261(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_164(float fParam0) //Position: 0x6064 / 24676
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

int Function_165(bool bParam0, int iParam1) //Position: 0x6081 / 24705
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_166() //Position: 0x6092 / 24722
{
	return !Function_260();
}

void Function_167() //Position: 0x609C / 24732
{
	int iVar0;
	bool bVar1;
	
	bVar1 = Function_22();
	if (IS_ACTOR_VALID(bVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, iVar0))
			{
				SET_WEAPON_GOLD(bVar1, iVar0, Global_83823[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

void Function_168(bool bParam0) //Position: 0x60DB / 24795
{
	if (!Function_176(bParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", 1);
	}
	else if (StackVal == 1)
	{
		Function_171(&(Global_29008[Global_29155[bParam010]]), 1024);
	}
	return;
}

bool Function_169(var uParam0, int iParam1) //Position: 0x6136 / 24886
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_170(bool bParam0) //Position: 0x6152 / 24914
{
	if (!Function_176(bParam0))
	{
		return 1;
	}
	return Function_169(&(Global_29008[bParam0]), 4);
}

void Function_171(var uParam0, int iParam1) //Position: 0x616E / 24942
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_172(int iParam0, bool bParam1, int iParam2) //Position: 0x617D / 24957
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_176(Global_29006))
		{
			Function_171(&(Global_29008[Global_29006]), 131072);
			Function_175(&(Global_29008[Global_29006]), 2097152);
			Function_173(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_169(&(Global_29008[iVar0]), 4) || Function_169(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_175(&(Global_29008[iVar0]), 2097155);
					Function_171(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_55())
			{
			}
			WAIT(0);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(0);
	}
	return;
}

void Function_173(int iParam0) //Position: 0x6288 / 25224
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_174())
			{
				return;
			}
		}
		if (!Function_169(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_174() //Position: 0x6307 / 25351
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_169(&(Global_29008[iVar0]), 4) || Function_169(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_175(var uParam0, int iParam1) //Position: 0x6370 / 25456
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_176(bool bParam0) //Position: 0x6387 / 25479
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_177(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x639D / 25501
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
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
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_178(bool bParam0) //Position: 0x6438 / 25656
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_179(bool bParam0) //Position: 0x6449 / 25673
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 < 6)
	{
		iVar1 = GET_WEAPON_EQUIPPED(bParam0, iVar0);
		if (iVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, iVar1, GET_WEAPON_MAX_AMMO(iVar1));
		}
		iVar0++;
	}
	return;
}

var Function_180(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x647C / 25724
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*bParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			iVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(iVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(*bParam0, iVar2))
				{
					iVar3 = GET_AMMO_ENUM(iVar2);
					if (Function_188(iVar3, 1))
					{
						iVar5[iVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				iVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(Function_187(&Global_83591 + 276, iVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					iVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_186(iVar2))
					{
						if (Function_185(iVar2))
						{
							iVar3 = GET_AMMO_ENUM(iVar2);
							if (Function_188(iVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, iVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, iVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				iVar2 = 0;
				while (iVar2 <= 40)
				{
					if (Global_84559[iVar2])
					{
						iVar3 = GET_AMMO_ENUM(iVar2);
						if (Function_188(iVar3, 1))
						{
							bVar24 = (Function_187(&Global_83591 + 276, iVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, iVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, iVar2, 0.0f, 0, 0);
							}
						}
					}
					iVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_32(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_32(), &cVar28, &uVar26))
						{
							Function_181(uVar26, &Var36);
							iVar3 = GET_AMMO_ENUM(Var36);
							if (Function_188(iVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, iVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, iVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
	}
	return iVar0;
}

void Function_181(var uParam0, int iParam1) //Position: 0x675F / 26463
{
	*iParam1 = Function_182(uParam0, Function_183(), 0);
	iParam1->f_4 = Function_182(uParam0, Function_183() + 8, Function_183());
	return;
}

var Function_182(var uParam0, int iParam1, int iParam2) //Position: 0x6782 / 26498
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_117((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

int Function_183() //Position: 0x67A1 / 26529
{
	return Function_184(39);
}

int Function_184(int iParam0) //Position: 0x67AC / 26540
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool Function_185(int iParam0) //Position: 0x67DA / 26586
{
	switch (UNK_0xDB679ED9(iParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_186(int iParam0) //Position: 0x67FC / 26620
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_187(int iParam0, int iParam1) //Position: 0x680E / 26638
{
	if (Function_188(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_188(int iParam0, int iParam1) //Position: 0x6828 / 26664
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_189(int iParam0) //Position: 0x683B / 26683
{
	struct<2> Var0;
	int iVar2;
	var uVar3;
	int iVar4;
	char* cVar5[32];
	struct<2> Var13;
	
	Function_192(&Global_79378, iParam0);
	if (IS_ACTOR_VALID(Function_22()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_191(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_190(StackVal, Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_32(), "DLCFM_Weapon", &iVar2))
	{
		iVar4 = 0;
		while (iVar4 <= iVar2)
		{
			strcpy(&cVar5, "DLCFM_Weapon_", 32);
			straddi(&cVar5, iVar4, 32);
			if (DECOR_GET_INT_VERBOSE(Function_32(), &cVar5, &uVar3))
			{
				Function_181(uVar3, &Var13);
				Function_190(StackVal, Var13, 1, 1, 1);
			}
			iVar4++;
		}
	}
	return;
}

void Function_190(struct<5> Param0) //Position: 0x68E2 / 26850
{
	bool bVar0;
	int iVar1;
	float fVar2;
	
	if (!Function_186(Param0))
	{
		return;
	}
	bVar0 = Function_22();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			iVar1 = GET_AMMO_ENUM(Param0);
			if (Function_188(iVar1, 1))
			{
				fVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					fVar2 = (fVar2 - _GET_AMMO_AMOUNT(bVar0, iVar1, 0));
				}
				if (fVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, iVar1, fVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

bool Function_191(bool bParam0) //Position: 0x6962 / 26978
{
	return Function_39(Global_83864.f_1252, bParam0);
}

void Function_192(int iParam0, int iParam1) //Position: 0x6974 / 26996
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = Function_22();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_193(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_193(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_193(23, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, (*iParam0 + 1088)[iVar1]);
			}
			iVar1++;
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1124))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1124);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1128))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1128);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1120 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1120))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1120);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			iVar4 = Function_165(bVar2, 40);
			if (iVar4 == 4294967295)
			{
				iVar4 = Function_165(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, iVar4);
		}
	}
	return;
}

bool Function_193(int iParam0, int iParam1) //Position: 0x6AF1 / 27377
{
	return Function_194(iParam0, iParam1) < 4294967295;
}

int Function_194(int iParam0, int iParam1) //Position: 0x6B00 / 27392
{
	int iVar0;
	
	if (!Function_186(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == (*iParam1)[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_195(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6B33 / 27443
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_22();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(bVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(bVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_190(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_196(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6B7E / 27518
{
	float fVar0;
	bool bVar1;
	
	if (Function_55() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_197(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x6C1B / 27675
{
	int iVar0;
	
	if (bParam1)
	{
		Function_80(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_80(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_80(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_80(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_80(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_80(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_80(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_80(&iVar0, 1048576);
	}
	return Function_198(bParam0, iVar0);
}

bool Function_198(bool bParam0, int iParam1) //Position: 0x6C8A / 27786
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_199(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_199(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_199(var uParam0, int iParam1) //Position: 0x6D63 / 28003
{
	return (uParam0 && iParam1) == 0;
}

void Function_200(bool bParam0) //Position: 0x6D70 / 28016
{
	Function_36(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_201(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x6D91 / 28049
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_22();
	Function_212();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_211();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_198(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_261(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_208(bVar0, 0);
		Function_203();
		Function_202(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_177(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_176(uVar14))
			{
				Var10.f_4 = uVar14;
			}
			else
			{
				Var10.f_4 = Global_29006;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var10, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var10, 4, 1);
		}
	}
	return 1;
}

void Function_202(char* cParam0, vector3 vParam1) //Position: 0x6F08 / 28424
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_203() //Position: 0x6F46 / 28486
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_207(iVar1))
		{
			uVar2 = Function_206(iVar1);
			Function_204(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_204(int iParam0, bool bParam1) //Position: 0x6F78 / 28536
{
	if (!Function_207(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_205(222, Global_26401[iParam0], 0);
		if (Function_72(222) <= 0)
		{
			Function_57(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_57((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_205((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_205(222, bParam1, 0);
	}
	return;
}

int Function_205(int iParam0, bool bParam1, int iParam2) //Position: 0x7001 / 28673
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
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_206(int iParam0) //Position: 0x71FC / 29180
{
	if (!Function_207(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_207(int iParam0) //Position: 0x7214 / 29204
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_208(bool bParam0, bool bParam1) //Position: 0x7229 / 29225
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_210(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_147(8192) && !Function_139(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_260())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	uVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_209())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_209() //Position: 0x7331 / 29489
{
	return Function_25(Global_79962, 2048);
}

var Function_210(int iParam0) //Position: 0x7341 / 29505
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

void Function_211() //Position: 0x7376 / 29558
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_212() //Position: 0x738B / 29579
{
	Function_215();
	Function_82();
	Function_213();
	return;
}

void Function_213() //Position: 0x739A / 29594
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_214();
	return;
}

void Function_214() //Position: 0x73CE / 29646
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_215() //Position: 0x73DF / 29663
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_216(bool bParam0, bool bParam1, bool bParam2) //Position: 0x73F8 / 29688
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	int iVar15;
	char* cVar16[64];
	int iVar32;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_220(bParam0);
	Var6 = { StackVal, StackVal, Function_220(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	iVar15 = GET_OBJECT_OWNER(bParam0);
	if (IS_OBJECT_VALID(iVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		iVar32 = FIND_OBJECT_IN_OBJECT(iVar15, &cVar16);
		if (IS_OBJECT_VALID(iVar32))
		{
			Function_219(iVar32);
			vVar12.f_4 = Function_217(StackVal, StackVal, StackVal, StackVal, vVar3, Function_219(iVar32));
		}
	}
	return Function_201(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_217(vector3 vParam0, vector3 vParam3) //Position: 0x74AF / 29871
{
	var uVar0;
	
	Function_218(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x74C9 / 29897
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_219(int iParam0) //Position: 0x74EC / 29932
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(iParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_220(bool bParam0) //Position: 0x7513 / 29971
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_221() //Position: 0x7524 / 29988
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_222(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7539 / 30009
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_223() //Position: 0x7562 / 30050
{
	if (!Function_42(8))
	{
		Function_41();
	}
	Function_14(8, 1, 1);
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0x757B / 30075
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_120))
	{
		return;
	}
	if (Function_25(iParam0->f_48, 256) || Function_25(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_25(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_120);
	if (!Function_198(iParam0->f_112, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_120, true);
			Function_7(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_128);
				DETACH_CAMERASHOT(iParam0->f_132);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_225(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_25(iParam0->f_48, 8192))
		{
			Function_15(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(iParam0->f_112))
			{
				Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_112);
				Function_259(1048576);
			}
			if (IS_OBJECT_VALID(iParam0->f_124) && IS_OBJECT_VALID(iParam0->f_128))
			{
				GET_POSITION(iParam0->f_112, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_128, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_132, iParam0->f_112, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_128, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_132, iParam0->f_112, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_128, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_132, 0.0f, 0.0f, 0.0f, 0.0f, 1.4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_128, iParam0->f_112, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_132, iParam0->f_112, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_112, 1);
		}
	}
	return;
}

void Function_225(int iParam0) //Position: 0x7776 / 30582
{
	var uVar0;
	vector3 vVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_DIRECTION(uVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_124, &vVar1);
	SET_CAMERASHOT_POSITION(uVar0, vVar1);
	SET_CAMERASHOT_FOV(uVar0, GET_CAMERASHOT_FOV(iParam0->f_124));
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0x77B7 / 30647
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* cVar7;
	vector3 vVar8;
	vector3 vVar11;
	
	bVar0 = Function_22();
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_178(bVar0);
		vVar1 = { StackVal, StackVal, Function_178(bVar0) };
		Function_241(bVar0);
		vVar4 = { StackVal, StackVal, Function_241(bVar0) };
	}
	else
	{
		vVar1 = { StackVal, StackVal, Global_34574 };
		GET_CAMERA_CHANNEL_DIRECTION(&vVar4, 0);
		vVar4 = { 0.0f, UNK_0x9C40E671(&vVar4), 0.0f };
	}
	cVar7 = Function_32();
	iParam0->f_156 = FIND_OBJECT_IN_LAYOUT(cVar7, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_156))
	{
		SET_OBJECT_POSITION(iParam0->f_156, vVar1);
		SET_OBJECT_ORIENTATION(iParam0->f_156, vVar4);
	}
	else
	{
		iParam0->f_156 = CREATE_POINT_IN_LAYOUT(cVar7, "DeathAnchorPoint", vVar1, vVar4);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_112))
	{
		iParam0->f_120 = Function_237(cVar7, 0, iParam0->f_156, 1, 0, 0);
		Function_15(iParam0 + 48, 256);
	}
	else
	{
		Function_178(iParam0->f_112);
		vVar8 = { StackVal, StackVal, Function_178(iParam0->f_112) };
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar8, StackVal) };
		VNORMALIZE(&vVar11);
		iParam0->f_120 = Function_229(cVar7, 0, iParam0->f_156, iParam0->f_112, iParam0->f_156, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 1));
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 2);
		Function_228(iParam0->f_120, 0);
		iParam0->f_128 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 4);
		iParam0->f_132 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_120, 5);
		Function_15(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_112);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar11, vVar8, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar11, 1);
	}
	Function_227(iParam0->f_120);
	return;
}

void Function_227(int iParam0) //Position: 0x794C / 31052
{
	Function_211();
	Global_63118 = iParam0;
	return;
}

void Function_228(int iParam0, bool bParam1) //Position: 0x795A / 31066
{
	PLAY_CUTSCENEOBJECT(iParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_229(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x796F / 31087
{
	int iVar0;
	
	if (bParam5)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_59(), 6, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_230(&iVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_230(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x79F1 / 31217
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_236(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_235(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_234(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_233(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_232(&uVar0, uParam1, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_231(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0.65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0.25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1.5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0.35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0.35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_231(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7B0C / 31500
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_232(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7C21 / 31777
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43.16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_233(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7D3A / 32058
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_234(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7E44 / 32324
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.5f, 0.020286f, -0.644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_235(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7F4A / 32586
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3.512409f, 1.385313f, 11.99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.000168f, 1.399967f, 0.006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_236(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7FFA / 32762
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6.044836f, 1.844389f, 8.871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.125951f, 1.612884f, -0.415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_237(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x80B2 / 32946
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_59(), 2, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "nMPSuicide", 2, 1);
	}
	Function_238(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_238(var uParam0, int iParam1) //Position: 0x8129 / 33065
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_240(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_239(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_239(var uParam0, int iParam1) //Position: 0x8195 / 33173
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.221893f, 12.0f, 0.202029f };
	Function_241(iParam1);
	vVar3 = { StackVal, StackVal, Function_241(iParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_219(iParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_219(iParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548455f, 1.703024f, 0.63911f };
	Function_241(iParam1);
	vVar6 = { StackVal, StackVal, Function_241(iParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_219(iParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_219(iParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_240(var uParam0, int iParam1) //Position: 0x8257 / 33367
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0.17905f, 10.0f, 0.125767f };
	Function_241(iParam1);
	vVar3 = { StackVal, StackVal, Function_241(iParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_219(iParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_219(iParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1.548457f, 1.703026f, -3.141586f };
	Function_241(iParam1);
	vVar6 = { StackVal, StackVal, Function_241(iParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_219(iParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_219(iParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_241(bool bParam0) //Position: 0x8319 / 33561
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(iParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_242(int iParam0) //Position: 0x8340 / 33600
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<16> Var4;
	vector3 vVar20;
	int iVar23;
	
	if (!Function_25(iParam0->f_48, 2048))
	{
		Function_15(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(iParam0->f_112))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_112))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				iVar2 = (&Global_78617 + 2604)->f_12;
				if (Function_186(iVar2) && RAND_INT_RANGE(0, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_243("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_112))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_112));
			iVar2 = GET_WEAPON_IN_HAND(iParam0->f_112);
			bVar1 = true;
		}
		else
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("NotorietyMeter");
			UI_EXCLUDE("NotorietyMeter");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_186(iVar2))
				{
					if (iVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(iVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_112, &vVar20);
						iVar23 = CEIL((VDIST(vVar20, *(&Global_78617 + 2604 + 16)) * 1.093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(iVar2)), I2STR(iVar23), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

int Function_243(int iParam0) //Position: 0x8666 / 34406
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

struct<64> Function_244(int iParam0) //Position: 0x887A / 34938
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_262())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(iParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(iParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_245();
	}
	if (!Function_140(iParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(iParam0), 64);
	}
	if (!Function_140(iParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[iParam096] + 32);
}

struct<64> Function_245() //Position: 0x8920 / 35104
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_246(var uParam0, int iParam1) //Position: 0x8931 / 35121
{
	if (Function_250(uParam0, iParam1))
	{
		Function_249(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_247(int iParam0) //Position: 0x894B / 35147
{
	Function_54(&Global_79378, 0, iParam0);
	return;
}

void Function_248(var uParam0, bool bParam1) //Position: 0x895B / 35163
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_32(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(iVar0, uParam0);
	iVar1 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(iVar1))
	{
		if (DECOR_GET_INT_VERBOSE(iVar1, "Type", &iVar2))
		{
			if (Function_186(iVar2))
			{
				SET_WEAPON_GOLD(bParam1, iVar2, Global_83823[iVar2]);
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(uParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(uParam0);
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_249(var uParam0, int iParam1) //Position: 0x89D7 / 35287
{
	*uParam0 = *iParam1;
	return;
}

bool Function_250(var uParam0, int iParam1) //Position: 0x89E3 / 35299
{
	return *uParam0 == *iParam1;
}

void Function_251(int iParam0, int iParam1) //Position: 0x89F0 / 35312
{
	Function_252(iParam0, (Function_253(iParam0) + iParam1));
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0x8A03 / 35331
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_253(int iParam0) //Position: 0x8A2C / 35372
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_254(int iParam0, int iParam1) //Position: 0x8A3C / 35388
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

var Function_255(int iParam0, bool bParam1, int iParam2) //Position: 0x8A65 / 35429
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar2 = GET_LOCAL_SLOT();
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (Function_140(iVar1) && (iParam2 || iVar1 == iVar2))
		{
			if (!Function_137(iVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_256(int iParam0) //Position: 0x8AAC / 35500
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0.4f))
	{
		return 0;
	}
	return 1;
}

var Function_257() //Position: 0x8AC2 / 35522
{
	if (Function_25(Global_79349.f_44, 4194304))
	{
		return 180.0f;
	}
	if (Function_25(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_258(int iParam0) //Position: 0x8AF8 / 35576
{
	Function_6(&Global_78617 + 52, iParam0);
	return;
}

void Function_259(int iParam0) //Position: 0x8B09 / 35593
{
	Function_80(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_260() //Position: 0x8B62 / 35682
{
	if (Function_55())
	{
		return (Function_133() != 1 || Function_133() != 0);
	}
	return 0;
}

bool Function_261(bool bParam0) //Position: 0x8B7B / 35707
{
	return Function_39(Global_78617.f_52, bParam0);
}

bool Function_262() //Position: 0x8B8C / 35724
{
	return HAS_STRING_TABLE_LOADED("jp");
}

var Function_263(int iParam0) //Position: 0x8B9A / 35738
{
	return (*iParam0 <= 1 && *iParam0 >= 14);
}

var Function_264(int iParam0, int iParam1) //Position: 0x8BAC / 35756
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_265(int iParam0, float fParam1) //Position: 0x8BBF / 35775
{
	Function_266(iParam0, -fParam1);
	return;
}

void Function_266(var uParam0, float fParam1) //Position: 0x8BCD / 35789
{
	Function_158();
	Function_267(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_267(var uParam0, int iParam1) //Position: 0x8BE1 / 35809
{
	uParam0->f_4 = iParam1;
	Function_15(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_268(int iParam0) //Position: 0x8BFE / 35838
{
	return Function_25(*iParam0, 1);
}

void Function_269(int iParam0) //Position: 0x8C0B / 35851
{
	iParam0->f_68 = 1;
	return;
}

void Function_270(int iParam0, bool bParam1) //Position: 0x8C16 / 35862
{
	if (bParam1)
	{
		Function_15(iParam0 + 44, 32);
	}
	else
	{
		Function_7(iParam0 + 44, 32);
	}
	return;
}

void Function_271(int iParam0) //Position: 0x8C36 / 35894
{
	Function_7(iParam0 + 44, 512);
	return;
}

void Function_272(int iParam0, bool bParam1) //Position: 0x8C46 / 35910
{
	if (bParam1)
	{
		Function_15(iParam0 + 44, 2);
	}
	else
	{
		Function_7(iParam0 + 44, 2);
	}
	return;
}

bool Function_273(int iParam0) //Position: 0x8C64 / 35940
{
	return Function_25(iParam0->f_44, 32);
}

void Function_274(int iParam0) //Position: 0x8C73 / 35955
{
	Function_275(iParam0, 35982);
	return;
}

void Function_275(int iParam0, int iParam1) //Position: 0x8C82 / 35970
{
	iParam0->f_176 = iParam1;
	return;
}

int Function_276() //Position: 0x8C8E / 35982
{
	return 0;
}

bool Function_277(int iParam0, int iParam1) //Position: 0x8C95 / 35989
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	uVar2 = "";
	if (!Function_373(iParam1) && *iParam0 > 9)
	{
		*iParam0 = 9;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_367(iParam0 + 48))
			{
				*iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_24(iParam0, 1) || Function_24(iParam0, 64))
			{
				if (Function_24(iParam0, 64))
				{
					Function_366(1);
				}
				else
				{
					Function_365();
				}
				bVar1 = Function_22();
				if (Function_24(iParam0, 8))
				{
				}
				else
				{
					Function_364(bVar1);
				}
				if (Function_268(iParam1) || Function_363(2))
				{
					Function_362(iParam0);
					if (Function_24(iParam0, 8))
					{
						*iParam0 = 5;
					}
					else
					{
						Function_361(bVar1, iParam0);
						*iParam0 = 7;
					}
				}
				else
				{
					*iParam0 = 2;
					iParam0->f_108 = 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_359(iParam1, 0, (iParam0->f_108 % 300) != 0))
			{
				Function_366(1);
				*iParam0 = 3;
				iParam0->f_108 = 0;
			}
			else
			{
				Function_352(iParam0, iParam1);
				iParam0->f_108++;
			}
			break;
		
		case 0x00000003:
			if (Function_359(iParam1, 1, (iParam0->f_108 % 300) != 0))
			{
				Function_362(iParam0);
				iParam0->f_44 = 4294967295;
				if (Function_24(iParam0, 8))
				{
					if (!Function_351(2097152) && !Function_351(4194304))
					{
						Function_348(iParam1);
					}
					if (Function_24(iParam0, 64))
					{
						*iParam0 = 5;
					}
					else
					{
						iParam0->f_36 = Function_334(Function_44(), Function_135());
						Function_327(iParam0);
						*iParam0 = 4;
						Function_23(1);
					}
				}
				else
				{
					if (IS_STRING_VALID(&Global_83591 + 28[09]))
					{
						Function_326(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
					}
					if (Function_24(iParam0, 64))
					{
						*iParam0 = 7;
					}
					else
					{
						iParam0->f_36 = Function_312(Function_44(), iParam0);
						Function_306(iParam0, iParam1);
						*iParam0 = 8;
						Function_305(iParam0);
					}
				}
				if (NET_IS_SESSION_HOST())
				{
					Function_304(2, 1);
				}
			}
			else
			{
				iParam0->f_108++;
				Function_352(iParam0, iParam1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_327(iParam0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 1, 1);
				Function_16(iParam0, 1);
				*iParam0 = 5;
			}
			break;
		
		case 0x00000005:
			if (!Function_268(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_265(iParam1, 6.0f);
				}
			}
			else if (Function_303(iParam1))
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				Function_302("showdown_draw", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_381("GENMESS_SDOWNSTARTS", 0);
				DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_76, 1);
				if (!Function_24(iParam0, 64))
				{
					Function_299();
					bVar1 = Function_22();
					Function_298(bVar1, iParam0);
				}
				Function_13();
				*iParam0 = 9;
			}
			else
			{
				iVar0 = CEIL(Function_156(iParam1));
				if (StackVal != iVar0)
				{
					iParam0->f_4 = iVar0;
					switch (StackVal)
					{
						case 0x00000004:
							Function_302("showdown_ready", uVar2, 2.0f, 0, 0, 0, 0);
							Function_381("GENMESS_SDABOUTSTART", 0);
							break;
						}
					}
			}
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(iParam0->f_36))
			{
				Function_306(iParam0, iParam1);
			}
			else
			{
				if (!Function_24(iParam0, 64))
				{
					UI_SHOW("Reticle");
					SET_PLAYER_CONTROL(0, 1, 1, 1);
					SET_FORCE_PLAYER_AIM_MODE(0, 0);
				}
				*iParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (!Function_268(iParam1))
			{
				if (NET_IS_SESSION_HOST())
				{
					Function_265(iParam1, (4.0f + 1.0f));
				}
			}
			else if (Function_303(iParam1))
			{
				if (!Function_24(iParam0, 64))
				{
					Function_16(iParam0, 1);
					Function_299();
					UI_EXIT("MPSplash");
					Function_297(Function_22(), iParam0);
				}
				Function_13();
				Function_302("standoff_go", "HUD_MP_STARTING_GUN_MASTER", 1.0f, 0, 0, 0, 0);
				Function_381("GENMESS_STANDSTART", 0);
				AUDIO_MUSIC_SUSPEND(0);
				*iParam0 = 9;
			}
			else
			{
				iVar0 = CEIL(Function_156(iParam1));
				if (StackVal != iVar0)
				{
					iParam0->f_4 = iVar0;
					if (iVar0 != 4 && 0)
					{
						Function_302("standoff_wait", uVar2, 2.0f, 0, 0, 0, 0);
					}
					else if (iVar0 == 4)
					{
						Function_381("GENMESS_STANDABOUTSTART", 0);
						Function_302("showdown_ready", uVar2, 3.0f, 0, 0, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000009:
			Function_12(iParam0, 0);
			if (NET_IS_SESSION_HOST())
			{
				Function_296(iParam1 + 12);
			}
			*iParam0 = 10;
		
		case 0x0000000A:
			Function_294(iParam0);
			if (Function_280(iParam0, iParam1))
			{
				*iParam0 = 11;
				Function_279();
				iParam0->f_88 = GET_CURRENT_GAME_TIME();
			}
			break;
		
		case 0x0000000B:
			Function_294(iParam0);
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 6.0f)
			{
				UI_HIDE("XpHud");
				Function_12(iParam0, 1);
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (NET_IS_SESSION_HOST())
			{
				Function_304(3, 0);
				iParam1->f_16 = 0;
			}
			Function_294(iParam0);
			if (!Function_24(iParam0, 128))
			{
				if (iParam0->f_88 != 0.0f || (GET_CURRENT_GAME_TIME() - iParam0->f_88) <= 10.0f)
				{
					if (Function_159())
					{
						if (Function_268(&Global_78578 + 96))
						{
							if (Function_156(&Global_78578 + 96) < (Global_83591.f_16 * 0.5f))
							{
								if (IS_STRING_VALID(&Global_83591 + 28[09]))
								{
									Function_326(&Global_83591 + 28[09], (&Global_83591 + 28[09])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
							else if (Function_156(&Global_78578 + 96) < 30.0f)
							{
								if (IS_STRING_VALID(&Global_83591 + 28[19]))
								{
									Function_326(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0.0f, 3000, 3000, 3212836864, 0);
								}
							}
						}
					}
					Function_278(iParam0, 128);
				}
			}
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_278(int iParam0, int iParam1) //Position: 0x928F / 37519
{
	Function_15(iParam0 + 24, iParam1);
	return;
}

void Function_279() //Position: 0x929E / 37534
{
	float fVar0;
	int iVar1;
	
	fVar0 = (UI_ANIM_GET_TIME("XpComboTimer") / 20.0f);
	iVar1 = FLOOR((32.0f * fVar0));
	UI_ANIM_SETUP("XpComboTimer", 0.0f, iVar1, iVar1);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

bool Function_280(int iParam0, int iParam1) //Position: 0x92F4 / 37620
{
	var uVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	
	if (NET_IS_SESSION_HOST() && iParam1->f_20 != 4294967295)
	{
		Function_292(iParam0, iParam1);
	}
	if (iParam1->f_20 == 4294967295)
	{
		return 0;
	}
	uVar0 = "";
	if (iParam1->f_20 == 4294967292)
	{
		if (Function_24(iParam0, 8))
		{
			Function_302("showdown_timeout", uVar0, 2.0f, 0, 0, 0, 0);
			Function_381("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_302("standoff_timeout", uVar0, 2.0f, 0, 0, 0, 0);
			Function_381("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		Function_290("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		return 1;
	}
	if (iParam1->f_20 == 4294967291)
	{
		Function_302("showdown_tie", uVar0, 2.0f, 0, 0, 0, 0);
		Function_290("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (Function_24(iParam0, 8))
		{
			Function_381("GENMESS_NEITHERWINSSDOWN", 0);
		}
		else
		{
			Function_381("GENMESS_SOTIMESOUT2ALIVE", 0);
		}
		return 1;
	}
	if (Function_24(iParam0, 8))
	{
		bVar1 = Function_25(iParam1->f_20, 4);
		iVar2 = iParam1->f_20 & 1;
		Var3 = { StackVal, StackVal, StackVal, Function_286(iVar2, 0) };
		if (iVar2 == Function_135())
		{
			iVar7 = "mp_teammsg_blue_start";
			iVar8 = "mp_teammsg_blue_end";
			Function_290("FTR_BOUNTY_HUNTER_COMPLETE_SONG_01", 1, 0, 0, 0, 0);
			if (Function_285(iParam1, GET_LOCAL_SLOT()))
			{
				if (bVar1)
				{
					Function_281(100.0f, "xp_showdown_flawless", 1);
					Function_381("GENMESS_SDSURVIVEUNTOUCH", 0);
				}
				else
				{
					Function_281(50.0f, "xp_showdown_flawless", 1);
					Function_381("GENMESS_GANGWINSSDOWN", 0);
				}
			}
			else
			{
				Function_381("GENMESS_GANGWINSSDOWN", 0);
			}
		}
		else
		{
			Function_290("FTR_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
			iVar7 = "mp_teammsg_red_start";
			iVar8 = "mp_teammsg_red_end";
			Function_381("GENMESS_GANGLOSESDSTART", 0);
		}
		Function_17();
		Function_302("showdown_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, iVar7, &Var3, iVar8, 0);
		if (bVar1)
		{
			Function_302("showdown_flawless", "HUD_MP_PRINT_AWESOME_MASTER", 2.0f, 0, 0, 0, 0);
		}
	}
	else
	{
		Function_290("MEX_BOUNTY_HUNTER_FAIL_SONG_01", 1, 0, 0, 0, 0);
		if (iParam1->f_20 == GET_LOCAL_SLOT())
		{
			Function_281(75.0f, "xp_standoff", 1);
			Function_302("standoff_won_you", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, 0, 0, 0, 0);
			Function_381("GENMESS_WINSOSTARTMATCH", 0);
		}
		else
		{
			Function_381("GENMESS_LOSESOSTARTMATCH", 0);
			Function_302("standoff_won", "HUD_MP_PRINT_AWESOME_MASTER", 3.0f, Function_243(iParam1->f_20), 0, 0, 0);
		}
	}
	return 1;
}

int Function_281(float fParam0, float fParam1, bool bParam2) //Position: 0x97A2 / 38818
{
	if (!Function_260())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_284(8, fParam0);
	}
	Function_282(487, (fParam0 * Global_3362), fParam1);
	return 1;
}

void Function_282(var uParam0, float fParam1, int iParam2) //Position: 0x97D2 / 38866
{
	Function_283(uParam0, CEIL(fParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_283(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x97EE / 38894
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
	Function_71(iParam0, TO_FLOAT(bParam1), 1);
	Function_70(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_284(var uParam0, float fParam1) //Position: 0x9A0E / 39438
{
	Function_254(uParam0, (Function_92(uParam0) + fParam1));
	return;
}

bool Function_285(int iParam0, int iParam1) //Position: 0x9A21 / 39457
{
	return ((!Function_137(iParam1, 2, 1) && !Function_137(iParam1, 16384, 1)) && (*iParam0 + 24)[iParam1] == 4294967295);
}

struct<16> Function_286(int iParam0, int iParam1) //Position: 0x9A45 / 39493
{
	return StackVal, StackVal, StackVal, Function_287(Function_288(iParam0), iParam1);
}

struct<16> Function_287(int iParam0, bool bParam1) //Position: 0x9A57 / 39511
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(iParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_288(int iParam0) //Position: 0x9A8C / 39564
{
	if (!Function_289())
	{
		return 0;
	}
	return StackVal;
}

bool Function_289() //Position: 0x9AA5 / 39589
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_290(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x9AB2 / 39602
{
	AUDIO_MUSIC_ONE_SHOT(uParam0, Function_291(iParam1), fParam2, fParam3, iParam4, iParam5);
}

var Function_291(int iParam0) //Position: 0x9ACC / 39628
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_292(int iParam0, int iParam1) //Position: 0xA01F / 40991
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	int iVar7;
	int iVar8;
	
	if (!Function_268(iParam1))
	{
	}
	else if (Function_157(iParam1) < 20.0f)
	{
		iParam1->f_20 = 4294967292;
		return;
	}
	if (Function_24(iParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 <= 16)
		{
			if (Function_293(iVar0))
			{
				iVar7 = Function_136(iVar0, 0, 0);
				if (iVar7 >= 4294967295)
				{
					uVar4[iVar7]++;
					if (Function_285(iParam1, iVar0))
					{
						uVar1[iVar7]++;
					}
				}
			}
			iVar0++;
		}
		if (uVar1[0] < 0 && uVar1[1] < 0)
		{
			return;
		}
		if (uVar1[0] >= 0 && uVar1[1] >= 0)
		{
			iParam1->f_20 = 4294967291;
			return;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (uVar1[iVar0] >= 0)
			{
				iParam1->f_20 = iVar0;
				if (uVar1[iVar0] == uVar4[iVar0])
				{
					Function_15(iParam1 + 20, 4);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar8 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= 16)
		{
			if (Function_293(iVar0))
			{
				if (Function_285(iParam1, iVar0))
				{
					if (iVar8 == 4294967295)
					{
						iVar8 = iVar0;
					}
					else
					{
						return;
					}
				}
			}
			iVar0++;
		}
		if (iVar8 >= 4294967295)
		{
			iParam1->f_20 = iVar8;
		}
		else
		{
			iParam1->f_20 = 4294967292;
		}
	}
	return;
}

bool Function_293(bool bParam0) //Position: 0xA164 / 41316
{
	if (!IS_SLOT_VALID(iParam0))
	{
		return 0;
	}
	return Function_140(bParam0);
}

void Function_294(int iParam0) //Position: 0xA17A / 41338
{
	bool bVar0;
	
	if (Function_24(iParam0, 8))
	{
		if (!Function_24(iParam0, 256))
		{
			bVar0 = Function_22();
			if (!Function_198(bVar0, 0))
			{
				Function_278(iParam0, 256);
			}
			else if (!ACTOR_HAS_ANIM_SET(bVar0, Function_295()))
			{
				Function_278(iParam0, 256);
			}
			else if (!IS_ACTOR_PLAYING_NODE_IN_TREE(bVar0, "MP_Showdown/Idles"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				Function_278(iParam0, 256);
			}
		}
	}
	return;
}

var Function_295() //Position: 0xA1F2 / 41458
{
	return "mp_showdown";
}

void Function_296(int iParam0) //Position: 0xA206 / 41478
{
	*iParam0++;
	return;
}

void Function_297(bool bParam0, int iParam1) //Position: 0xA214 / 41492
{
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, iParam1->f_28);
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_MAX_SPEED(bParam0, 3);
	}
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_298(bool bParam0, var uParam1) //Position: 0xA25F / 41567
{
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_END_FORCE_HOLSTER(bParam0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL_CONFIG(0, uParam1->f_28);
	}
	if (Function_351(2097152) || Function_351(4194304))
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			SET_ACTOR_MAX_SPEED(bParam0, 3);
		}
	}
	UI_EXIT("MpWeaponSuppressor");
	return;
}

void Function_299() //Position: 0xA2BD / 41661
{
	UI_SHOW("XpHud");
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	UI_SHOW("XPMultiplier");
	UI_SHOW("XPComboTimer");
	UI_SET_TEXT("XPComboLevel", Function_300(0));
	UI_ANIM_SETUP("XpComboTimer", 20.0f, 32, 0);
	UI_ANIM_RESTART("XpComboTimer");
	return;
}

var Function_300(int iParam0) //Position: 0xA349 / 41801
{
	int iVar0;
	
	iVar0 = Function_301();
	UI_SET_STRING(iVar0, I2STR(iParam0));
	return iVar0;
}

var Function_301() //Position: 0xA360 / 41824
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

void Function_302(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA41C / 42012
{
	if (IS_STRING_VALID(iParam3))
	{
		PRINT_BIG_FORMAT(fParam2, iParam0, iParam3, iParam4, iParam5, iParam6, 0, uParam1);
	}
	else
	{
		PRINT_BIG(iParam0, fParam2, 0, 0, uParam1);
	}
}

bool Function_303(int iParam0) //Position: 0xA44C / 42060
{
	if (Function_268(iParam0))
	{
		if (Function_156(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_304(int iParam0, bool bParam1) //Position: 0xA467 / 42087
{
	if (!NET_IS_SESSION_HOST() && NET_IS_IN_SESSION())
	{
		return;
	}
	if (bParam1)
	{
		Function_15(&Global_78578 + 88, iParam0);
	}
	else
	{
		Function_7(&Global_78578 + 88, iParam0);
	}
	return;
}

void Function_305(int iParam0) //Position: 0xA497 / 42135
{
	if (iParam0->f_96 != 4294967295)
	{
		NET_GAMER_ICON_FORCE_VISIBILITY(iParam0->f_96, 2);
	}
	NET_GAMER_ICON_FORCE_VISIBILITY(GET_LOCAL_SLOT(), 2);
	return;
}

void Function_306(int iParam0, int iParam1) //Position: 0xA4B4 / 42164
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_24(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_311();
			Function_381(&Global_79349 + 48, 0);
			Function_278(iParam0, 32);
		}
	}
	UI_SUPPRESS("WeaponAmmo");
	UI_EXCLUDE("WeaponAmmo");
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0x00000000:
				iParam0->f_96 = Function_310(iParam1);
				NET_GAMER_SET_TEAM(iParam0->f_96, 0);
				break;
			
			case 0x00000001:
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000002:
				DECOR_SET_BOOL(Function_22(), "ForceAim", 1);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				Function_309("standoff_title");
				break;
			
			case 0x00000003:
				DECOR_SET_BOOL(Function_22(), "ForceAim", 1);
				SET_FORCE_PLAYER_AIM_MODE(0, 1);
				PPP_LOAD_PRESET(Function_20());
				iParam0->f_100 = Function_308(Function_22());
				Function_278(iParam0, 2);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000005:
				Function_16(iParam0, 0);
				if (iParam0->f_96 != 4294967295)
				{
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("standoff_help_target"), UI_GET_STRING(Function_243(iParam0->f_96)), 0, 0);
					UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_1");
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s1", "standoff_help");
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000007:
				break;
			
			case 0x00000008:
				break;
			
			case 0x00000009:
				break;
			
			case 0x0000000A:
				break;
			
			case 0x0000000B:
				Function_307(8, 0.0f, 4000, 1000);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			}
	}
	return;
}

void Function_307(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xA6DC / 42716
{
	AUDIO_MUSIC_SET_MOOD(Function_291(iParam0), iParam1, iParam2, iParam3);
}

var Function_308(bool bParam0) //Position: 0xA6F2 / 42738
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_178(bParam0);
	vVar6 = { StackVal, StackVal, Function_178(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0.5f, -0.5f, -0.5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_22(), "LookItMeLight", vVar6, 6.0f, 6.0f, 6.0f, 2.5f);
}

void Function_309(int iParam0) //Position: 0xA767 / 42855
{
	UI_SET_TEXT("MPSplashItem.s0", iParam0);
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_SET_STYLE("MPSplashTitle", 17);
	UI_ENTER("MPSplash");
	return;
}

var Function_310(int iParam0) //Position: 0xA7CA / 42954
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = GET_LOCAL_SLOT();
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if ((*iParam0 + 24)[iVar1] == 4294967295 && iVar1 == iVar2)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return 4294967295;
	}
	iVar3 = (RAND_INT_RANGE(0, 1000) % iVar0);
	iVar4 = 0;
	iVar1 = (iVar2 + 1 % 16);
	bVar5 = false;
	while (!bVar5 && iVar4 > 16)
	{
		if (IS_SLOT_VALID(iVar1))
		{
			if ((*iParam0 + 24)[bVar1] == 4294967295 && iVar4 <= iVar3)
			{
				bVar5 = true;
			}
			else
			{
				iVar4++;
			}
		}
		if (!bVar5)
		{
			bVar1 = (bVar1 + 1 % 16);
		}
	}
	if (!bVar5)
	{
		return 4294967295;
	}
	return bVar1;
}

void Function_311() //Position: 0xA873 / 43123
{
	Function_382("DM_game_help_0", 0x41200000, 1, 0, 2, 1, 0);
	return;
}

int Function_312(bool bParam0, bool bParam1) //Position: 0xA897 / 43159
{
	char* cVar0;
	var uVar1;
	
	cVar0 = Function_325(Function_22(), "Me");
	uVar1 = Function_324(bParam0);
	bParam1->f_40 = CREATE_OBJECT_LOCATOR(cVar0, "gunLocator");
	if (!OBJECT_LOCATOR_ATTACH_TO_OBJECT_BONE(bParam1->f_40, cVar0, "wrist_r_attachment", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
	}
	return Function_313(bParam0, 0, cVar0, uVar1, bParam1->f_40, 1, 0, 0);
}

int Function_313(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xA900 / 43264
{
	int iVar0;
	
	if (bParam5)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_59(), 9, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "MP_Standoff", 9, 1);
	}
	Function_314(&iVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, bParam1, 0.0f, 1.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_314(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA97F / 43391
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_323(&uVar0, uParam1, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_322(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_321(&uVar0, uParam1, uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_320(&uVar0, uParam1, uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_319(&uVar0, uParam1, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_318(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_317(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_316(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_315(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 11.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 0.05f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 1.5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 4, 5, 2.5f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 0.45f, 7);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 5, 6, 4.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 0.5f, 9);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 6, 7, 1.5f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 7, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 7, 8, 0.2f, 12, 0);
}

void Function_315(var uParam0, int iParam1) //Position: 0xAAE3 / 43747
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.700737f, 1.6177f, 0.676565f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_316(var uParam0, int iParam1) //Position: 0xAB58 / 43864
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.700737f, 1.6177f, 0.676565f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 8.6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_317(var uParam0, int iParam1) //Position: 0xAC05 / 44037
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.700737f, 1.6177f, 0.676565f, -3.928657f, 42.53037f, -0.03432f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_318(var uParam0, int iParam1) //Position: 0xACAE / 44206
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.441266f, 1.590829f, 0.323404f, -3.052203f, -37.19361f, -0.093048f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 5.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_319(var uParam0, int iParam1, int iParam2) //Position: 0xAD57 / 44375
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.441266f, 1.590829f, 0.323404f, -3.701995f, 9.551663f, -0.076891f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 8.6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_320(var uParam0, int iParam1, int iParam2) //Position: 0xAE0C / 44556
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 2.0f, 18.23245f, 4.313523f, -67.08659f, 0.237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0.380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31.69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_321(var uParam0, int iParam1, int iParam2) //Position: 0xAECF / 44751
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -2.0f, 18.23245f, 4.313523f, -67.08659f, 0.237949f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -0.380612f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 31.69f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_322(var uParam0, int iParam1) //Position: 0xAF96 / 44950
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 45.75f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.562671f, 1.496117f, -1.597335f, -3.967331f, 158.1299f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.103045f, 1.372172f, 0.061185f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.964602f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 19.216f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 5.9696f);
	return;
}

void Function_323(var uParam0, int iParam1, int iParam2) //Position: 0xB062 / 45154
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.8127f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.351376f, 1.457621f, -1.083728f, -1.094235f, 158.9572f, -10.40062f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.06695f, 1.435368f, 0.003617f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0.181525f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.04f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_324(bool bParam0) //Position: 0xB14C / 45388
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, "StandoffCenter");
}

var Function_325(bool bParam0, bool bParam1) //Position: 0xB168 / 45416
{
	if (IS_ACTOR_VALID(bParam0))
	{
	}
	else
	{
		bParam0 = Function_22();
	}
	return GET_OBJECT_FROM_ACTOR(bParam0);
}

void Function_326(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB183 / 45443
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_291(iParam1), fParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_327(int iParam0) //Position: 0xB19F / 45471
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_36);
	if (!Function_24(iParam0, 32))
	{
		if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			Function_333();
			Function_381(&Global_79349 + 48, 0);
			Function_278(iParam0, 32);
		}
	}
	iVar1 = iVar0;
	if (iParam0->f_92 < 0.0f)
	{
		iParam0->f_92 = (iParam0->f_92 - GET_UNWARPED_REALTIME_SECONDS());
		if (iParam0->f_92 >= 0.0f)
		{
			switch (iVar1)
			{
				case 0x00000002:
					DECOR_SET_INT(Function_22(), "Go", 1);
					break;
				
				case 0x00000004:
					DECOR_SET_INT(Function_22(), "Go2", 1);
					break;
				
				case 0x00000006:
					DECOR_SET_INT(Function_22(), "Go3", 1);
					break;
				}
			}
	}
	if (iParam0->f_44 != iVar0)
	{
		iParam0->f_44 = iVar0;
		switch (iVar1)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_18());
				Function_278(iParam0, 4);
				UI_SET_STYLE("MPSplashTitle", 16);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Var2 = { StackVal, StackVal, StackVal, Function_286(Function_135(), 1) };
				Function_332(Function_135());
				UI_SET_TEXT("MPSplashTitle", &Var2);
				break;
			
			case 0x00000003:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_22(), "Go");
				Function_16(iParam0, 1);
				Function_381("ANNOUNCE_VS", 0);
				CANCEL_TIME_WARP(0);
				break;
			
			case 0x00000004:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_21());
				Function_278(iParam0, 2);
				Var2 = { StackVal, StackVal, StackVal, Function_286(Function_330(Function_135()), 1) };
				Function_332(Function_330(Function_135()));
				UI_SET_TEXT("MPSplashTitle", &Var2);
				UI_SET_STYLE("MPSplashTitle", 15);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000005:
				UI_EXIT("MPSplash");
				DECOR_REMOVE(Function_22(), "Go2");
				Function_16(iParam0, 1);
				CANCEL_TIME_WARP(0);
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				NET_GAMER_ICONS_SHOW_LOCAL(0);
				break;
			
			case 0x00000006:
				iParam0->f_92 = 2.5f;
				PPP_LOAD_PRESET(Function_18());
				iParam0->f_100 = Function_329(Function_22());
				Function_278(iParam0, 4);
				Function_381("ANNOUNCE_YOU", 0);
				UI_SET_TEXT("MPSplashItem.s0", Function_328(GET_LOCAL_SLOT()));
				UI_SET_STRING("Generic_Dbuffer128_0", &Global_78480 + 32);
				if (Function_262())
				{
					if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT())))
					{
						UI_SET_STRING("Generic_Dbuffer128_0", NET_GAMER_GET_JPN_TITLE(GET_LOCAL_SLOT()));
					}
				}
				UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
				UI_SET_STYLE("MPSplashTitle", 17);
				UI_ENTER("MPSplash");
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				break;
			
			case 0x00000007:
				DECOR_REMOVE(Function_22(), "Go3");
				CANCEL_TIME_WARP(1);
				UI_EXIT("MPSplash");
				Function_16(iParam0, 1);
				if (IS_PS3())
				{
					Function_382("showdown_draw_help_ps3", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				else
				{
					Function_382("showdown_draw_help", (2.5f + 1.0f), 0, 0, 2, 1, 0);
				}
				break;
			}
	}
	return;
}

var Function_328(int iParam0) //Position: 0xB609 / 46601
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerName_0";
		
		case 0x00000001:
			return "MPPlayerName_1";
		
		case 0x00000002:
			return "MPPlayerName_2";
		
		case 0x00000003:
			return "MPPlayerName_3";
		
		case 0x00000004:
			return "MPPlayerName_4";
		
		case 0x00000005:
			return "MPPlayerName_5";
		
		case 0x00000006:
			return "MPPlayerName_6";
		
		case 0x00000007:
			return "MPPlayerName_7";
		
		case 0x00000008:
			return "MPPlayerName_8";
		
		case 0x00000009:
			return "MPPlayerName_9";
		
		case 0x0000000A:
			return "MPPlayerName_10";
		
		case 0x0000000B:
			return "MPPlayerName_11";
		
		case 0x0000000C:
			return "MPPlayerName_12";
		
		case 0x0000000D:
			return "MPPlayerName_13";
		
		case 0x0000000E:
			return "MPPlayerName_14";
		
		case 0x0000000F:
			return "MPPlayerName_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

var Function_329(bool bParam0) //Position: 0xB7AD / 47021
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_ACTOR_AXIS(bParam0, &vVar0, 0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	Function_178(bParam0);
	vVar6 = { StackVal, StackVal, Function_178(bParam0) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar6, StackVal) * Vector(-0.5f, -0.5f, -0.5f), StackVal, StackVal) };
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, StackVal) * Vector(-1.0f, -1.0f, -1.0f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1.5f);
	return CREATE_POINT_LIGHT_IN_LAYOUT(Function_22(), "LookItMeLight", vVar6, 1.0f, 1.0f, 1.0f, 2.5f);
}

int Function_330(int iParam0) //Position: 0xB822 / 47138
{
	if (iParam0 == 4294967295)
	{
		return 4294967295;
	}
	return Function_331(iParam0);
}

int Function_331(int iParam0) //Position: 0xB835 / 47157
{
	return (iParam0 + 1 % 2);
}

void Function_332(int iParam0) //Position: 0xB841 / 47169
{
	char* cVar0[64];
	
	strcpy(&cVar0, "ANNOUNCE_TEAM_", 64);
	straddi(&cVar0, Function_288(iParam0), 64);
	Function_381(&cVar0, 0);
	return;
}

void Function_333() //Position: 0xB86B / 47211
{
	Function_382("TDM_game_help_0", 0x41200000, 1, 0, 2, 1, 0);
	return;
}

int Function_334(bool bParam0, bool bParam1) //Position: 0xB890 / 47248
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = Function_330(bParam1);
	uVar1 = Function_346(bParam0, bParam1);
	uVar2 = Function_346(bParam0, iVar0);
	uVar3 = Function_325(Function_22(), "Me");
	return Function_335(bParam0, 0, uVar3, uVar1, uVar2, 0, 0, 0);
}

int Function_335(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0xB8CB / 47307
{
	int iVar0;
	
	if (bParam5)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_59(), 9, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "MP_Showdown2", 9, 1);
	}
	Function_336(&iVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, bParam1, 0.0f, 2.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_336(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0xB94B / 47435
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_345(&uVar0, uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_344(&uVar0, uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_343(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_342(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_341(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_340(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_339(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_338(&uVar0, uParam2, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_337(&uVar0, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 12.5f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 1.5f, 1, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "Go", 2, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 1.5f, 3, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 3, cParam1, "Go2", 4, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 4, 2.5f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 5, cParam1, "Go3", 6, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 4.5f, 7);
}

void Function_337(var uParam0, int iParam1, int iParam2) //Position: 0xBA80 / 47744
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 1.5f, 6.064114f, 4.464365f, -37.3141f, -2.927814f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_338(var uParam0, int iParam1, int iParam2) //Position: 0xBB3C / 47932
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 65.44f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 3.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -1.5f, 6.064114f, 4.4647f, -37.3141f, -2.927871f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, -2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 42.778f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 4);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_339(var uParam0, int iParam1) //Position: 0xBBF8 / 48120
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 18.542f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 1.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.674432f, 0.879538f, 1.537114f, -0.349963f, 9.024257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.41889f, 0.869587f, -0.071906f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0xBC84 / 48260
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 7.228f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 0.725417f, 1.294801f, -2.751867f, 2.473631f, 165.6309f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.533f, -0.21f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, -0.64f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_341(var uParam0, int iParam1) //Position: 0xBD4C / 48460
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 6.728f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 1.07f, 1.175f, -4.092f, 0.0f, 179.5041f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.074344f, 1.538012f, -0.054681f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 18.028f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 1.8226f);
	return;
}

void Function_342(var uParam0, int iParam1) //Position: 0xBE10 / 48656
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -8.5f, 1.469942f, -1.747687f, -1.032928f, -98.24805f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.161f, 1.317305f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_343(var uParam0, int iParam1) //Position: 0xBED8 / 48856
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -8.5f, 1.469955f, -0.105855f, -1.02399f, -89.95139f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.024f, 1.317f, -0.115f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_344(var uParam0, int iParam1) //Position: 0xBFA0 / 49056
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 8.5f, 1.47f, -1.747912f, -1.011041f, 105.8626f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.153f, 1.316862f, 0.622f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 1.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_345(var uParam0, int iParam1) //Position: 0xC06A / 49258
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 2.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, 8.5f, 1.469824f, -0.105534f, -1.030178f, 89.93437f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.023677f, 1.317106f, -0.115403f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, iParam1);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 47.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

var Function_346(bool bParam0, int iParam1) //Position: 0xC132 / 49458
{
	return FIND_OBJECT_IN_LAYOUT(bParam0, Function_347(iParam1));
}

var Function_347(int iParam0) //Position: 0xC142 / 49474
{
	if (iParam0 == 0)
	{
		return "Showdown_A";
	}
	if (iParam0 == 1)
	{
		return "Showdown_B";
	}
	return "__invalid__";
}

void Function_348(int iParam0) //Position: 0xC184 / 49540
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			bVar1 = GET_SLOT_ACTOR(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((*iParam0 + 24)[bVar0] != 4294967295)
				{
					Function_349(bVar1, 0, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_349(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC1C8 / 49608
{
	if (!ACTOR_HAS_ANIM_SET(bParam0, Function_295()))
	{
		if (!SET_ANIM_SET_FOR_ACTOR(bParam0, Function_295(), 0))
		{
			return 0;
		}
	}
	if (bParam1)
	{
		return 1;
	}
	if (bParam2)
	{
		return SET_ACTION_NODE_FOR_ACTOR(bParam0, Function_350());
	}
	TASK_ACTION_PERFORM(bParam0, Function_350());
	return 1;
}

var Function_350() //Position: 0xC20A / 49674
{
	return "MP_Showdown/Idles";
}

bool Function_351(int iParam0) //Position: 0xC224 / 49700
{
	return Function_25((&Global_83591 + 140)->f_56, iParam0);
}

void Function_352(int iParam0, int iParam1) //Position: 0xC237 / 49719
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar9;
	
	iVar0 = GET_LOCAL_SLOT();
	if (iVar0 != 4294967295)
	{
		iVar1 = (*iParam1 + 24)[iVar0];
		if (iVar1 != 4294967295)
		{
			bVar2 = false;
			if (Function_24(iParam0, 8))
			{
				iVar9 = Function_135();
				if (iVar9 != 4294967295)
				{
					bVar2 = Function_355(Function_44(), iVar9, &vVar3, &uVar6, iVar1, (*iParam1 + 92)[iVar9]);
				}
			}
			else
			{
				bVar2 = Function_353(Function_44(), &vVar3, &uVar6, iVar1, 16);
			}
			if (bVar2)
			{
				SET_OBJECT_POSITION(Function_22(), vVar3);
			}
		}
	}
	return;
}

int Function_353(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC2AB / 49835
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = Function_324(bParam0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		return 0;
	}
	if (bParam3 >= 4294967295)
	{
		fVar5 = TO_FLOAT(bParam4);
		fVar4 = TO_FLOAT(bParam3);
	}
	else
	{
		fVar5 = TO_FLOAT(NET_GET_SESSION_GAMER_COUNT());
		fVar4 = TO_FLOAT(Function_354(GET_LOCAL_SLOT()));
	}
	*uParam2 = { 0.0f, ((360.0f / fVar5) * fVar4), 0.0f };
	UNK_0x44986367(StackVal, &vVar6);
	if (DECOR_CHECK_EXIST(bVar0, "Narrow"))
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(2.8f, 2.8f, 2.8f), StackVal, StackVal) };
	}
	else
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal) };
	}
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, uParam1, &uVar12))
	{
		*uParam1 = { StackVal, StackVal, vVar9 };
	}
	return 1;
}

var Function_354(bool bParam0) //Position: 0xC376 / 50038
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (bVar0 == bParam0)
			{
				return iVar1;
			}
			iVar1++;
		}
		bVar0++;
	}
	return 4294967295;
}

bool Function_355(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xC3B1 / 50097
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	iVar0 = Function_346(bParam0, iParam1);
	if (!IS_OBJECT_VALID(iVar0))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar0, &vVar1))
	{
		if (bParam4 == 4294967295)
		{
		}
		return 0;
	}
	if (bParam4 >= 4294967295)
	{
		fVar4 = TO_FLOAT(bParam5);
		fVar5 = TO_FLOAT(bParam4);
	}
	else
	{
		fVar4 = TO_FLOAT(Function_357(iParam1));
		fVar5 = TO_FLOAT(Function_356(GET_LOCAL_SLOT(), 1));
	}
	fVar6 = (fVar5 - ((fVar4 - 1.0f) / 2.0f));
	GET_OBJECT_ORIENTATION(bVar0, uParam3);
	DECOR_GET_VECTOR(bVar0, "Right", &vVar7);
	vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar7, vVar1, StackVal) * Vector(1.5f, 1.5f, 1.5f), StackVal, StackVal) * Vector(fVar6, fVar6, fVar6), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar10, 2.0f, uParam2, &uVar13))
	{
		if (bParam4 == 4294967295)
		{
		}
		*uParam2 = { StackVal, StackVal, vVar10 };
	}
	return 1;
}

var Function_356(int iParam0, bool bParam1) //Position: 0xC482 / 50306
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = Function_136(iParam0, bParam1, 0);
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 == iParam0)
		{
			return iVar1;
		}
		if (Function_136(iVar0, bParam1, 0) == iVar2)
		{
			iVar1++;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_357(int iParam0) //Position: 0xC4C9 / 50377
{
	return Function_358(iParam0, 1);
}

int Function_358(int iParam0, bool bParam1) //Position: 0xC4D5 / 50389
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (IS_SLOT_VALID(iVar1) || !bParam1)
		{
			if (Function_136(bVar1, bParam1, 0) == iParam0)
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_359(int iParam0, bool bParam1, bool bParam2) //Position: 0xC512 / 50450
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bParam2 = bParam2;
	bVar4 = NET_IS_SESSION_HOST();
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (IS_SLOT_VALID(iVar1))
		{
			if ((*iParam0 + 24)[bVar1] == 4294967295)
			{
				iVar2++;
			}
			else if (Function_140(bVar1))
			{
				if (Function_360(bVar1) || !bParam1)
				{
					bVar3 = GET_SLOT_ACTOR(bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (Function_196(bVar3, 1, 0x41700000))
						{
							iVar0++;
						}
					}
				}
			}
		}
		else if (bVar4 && (*iParam0 + 24)[bVar1] == 4294967295)
		{
			(*iParam0 + 24)[bVar1] = 4294967295;
		}
		bVar1++;
	}
	return iVar0 != (NET_GET_SESSION_GAMER_COUNT() - iVar2);
}

bool Function_360(int iParam0) //Position: 0xC5AD / 50605
{
	return Function_137(iParam0, 4, 1);
}

void Function_361(bool bParam0, int iParam1) //Position: 0xC5BA / 50618
{
	if (IS_ACTOR_VALID(bParam0))
	{
		DECOR_SET_BOOL(bParam0, "ForceAim", 1);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_FORCE_PLAYER_AIM_MODE(0, 1);
		iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
		SET_PLAYER_CONTROL_CONFIG(0, 4);
		SET_PLAYER_CONTROL(0, 1, 1, 1);
	}
	UI_SUPPRESS("Reticle");
	UI_ENTER("MpWeaponSuppressor");
	return;
}

void Function_362(int iParam0) //Position: 0xC61F / 50719
{
	if (!Function_24(iParam0, 16))
	{
		HUD_FADE_IN(1.5f, 1065353216);
		SET_HUD_MAP_DRAW_ENABLED(0);
		UI_SUPPRESS("Reticle");
		UI_SUPPRESS("WeaponAmmo");
		UI_EXCLUDE("WeaponAmmo");
		NET_GAMER_ICONS_SHOW_LOCAL(1);
		if (Function_24(iParam0, 8))
		{
			if (Function_24(iParam0, 64))
			{
				Function_309("common_null");
				UI_EXIT("HudMPNoFun");
			}
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MP_SHOWDOWN2", iParam0 + 76);
			if (IS_STRING_VALID(&Global_83591 + 28[09]))
			{
				Function_326(&Global_83591 + 28[09], 6, 0.0f, 3000, 3000, 3212836864, 0);
			}
		}
		else if (Function_24(iParam0, 64))
		{
			Function_309("standoff_title");
			UI_EXIT("HudMPNoFun");
		}
		Function_278(iParam0, 16);
	}
	return;
}

int Function_363(int iParam0) //Position: 0xC72C / 50988
{
	if (!Function_289())
	{
		return 0;
	}
	return Function_25(Global_78578.f_88, iParam0);
}

int Function_364(int iParam0) //Position: 0xC746 / 51014
{
	iParam0 = iParam0;
	UI_ENTER("MpWeaponSuppressor");
	return 1;
}

void Function_365() //Position: 0xC769 / 51049
{
	Function_14(1024, 1, 0);
	Function_14(1, 0, 0);
	return;
}

void Function_366(int iParam0) //Position: 0xC77D / 51069
{
	Function_36(4, iParam0);
	return;
}

bool Function_367(int iParam0) //Position: 0xC789 / 51081
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_372();
	iVar1 = 0;
	if (!Function_11(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_371(iParam0[iVar03], 8);
		}
		else if (Function_370())
		{
			iVar1 = 1;
			Function_371(iParam0[iVar03], 8);
		}
		Function_371(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_11(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_11(iParam0[03], 8) || iVar1));
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
				Function_371(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_371(iParam0[iVar03], 2);
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
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_371(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_371(iParam0[iVar03], 2);
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
	Function_368();
	return 1;
}

void Function_368() //Position: 0xCB04 / 51972
{
	if (!Function_369(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_369(int iParam0) //Position: 0xCB44 / 52036
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_370() //Position: 0xCB60 / 52064
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

void Function_371(var uParam0, int iParam1) //Position: 0xCB8B / 52107
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_372() //Position: 0xCB9C / 52124
{
	if (!Function_369(128))
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

bool Function_373(int iParam0) //Position: 0xCBDE / 52190
{
	if (iParam0->f_16 != Function_363(1))
	{
	}
	return iParam0->f_16;
}

void Function_374(int iParam0) //Position: 0xCBF3 / 52211
{
	if (!Function_375(iParam0))
	{
	}
	if (!Function_38(2048))
	{
		Function_259(2048);
		Global_78617.f_56 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	*iParam0 = 15;
	return;
}

bool Function_375(int iParam0) //Position: 0xCC26 / 52262
{
	return !(*iParam0 <= 15 && *iParam0 >= 20);
}

void Function_376(int iParam0, bool bParam1) //Position: 0xCC3A / 52282
{
	bool bVar0;
	int iVar1;
	
	if (!iParam0->f_68)
	{
		return;
	}
	if (Function_380())
	{
		Function_3(iParam0, 1);
		return;
	}
	iParam0->f_76 = (iParam0->f_76 - 1);
	if (!iParam0->f_72 || iParam0->f_76 > 0)
	{
		iParam0->f_76 = iLocal_10;
		bVar0 = false;
		if (!iParam0->f_72)
		{
			iParam0->f_72 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
		}
		if (!iParam0->f_64)
		{
			iVar1 = NET_GET_SESSION_GAMER_COUNT();
			if (iParam0->f_52 != iVar1)
			{
				iParam0->f_52 = iVar1;
				bVar0 = true;
			}
		}
		if (iParam0->f_56 != bParam1)
		{
			iParam0->f_56 = bParam1;
			bVar0 = true;
		}
		Stack.Push(bVar0);
		Stack.Push(iParam0);
		Stack.Push(iParam0 + 24);
		Call_Loc(iParam0->f_48);
		bVar0 = (StackVal || StackVal);
		if (bVar0)
		{
			NET_SCOREGRAPH_CLEAR_MARKERS();
			if (iParam0->f_64)
			{
				NET_SCOREGRAPH_SETUP(2, 1, iParam0->f_60);
				if (StackVal > StackVal)
				{
					Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 0);
					Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 5);
				}
				else
				{
					Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), 1, bParam1, 0);
					Function_379(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, 2, bParam1, 5);
				}
			}
			else
			{
				NET_SCOREGRAPH_SETUP(iParam0->f_52, 0, iParam0->f_60);
				if (StackVal >= 4294967295)
				{
					if (*iParam0 == iParam0->f_24)
					{
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 1);
					}
					else if (*iParam0 <= iParam0->f_24)
					{
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
					}
					else
					{
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), bParam1, 0);
						Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
					}
				}
				else
				{
					Function_377(StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, bParam1, 0);
				}
			}
		}
	}
	return;
}

void Function_377(struct<21> Param0) //Position: 0xCDB3 / 52659
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_PLAYER_LABEL(StackVal, StackVal, Function_378((Param0 + iParam7), bParam6), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_PLAYER_SCORE(StackVal, StackVal, StackVal, Function_378((Param0 + iParam7), bParam6));
	}
}

var Function_378(bool bParam0, bool bParam1) //Position: 0xCE28 / 52776
{
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

void Function_379(struct<21> Param0) //Position: 0xCE4A / 52810
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(Param0.f_16))
	{
		stradd(&cVar0, Param0.f_16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(Param0.f_20))
	{
		stradd(&cVar0, Param0.f_20, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, iParam8, Function_378(bParam6, bParam7), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, iParam8, Function_378(bParam6, bParam7));
	}
}

bool Function_380() //Position: 0xCEB5 / 52917
{
	return Function_42(16384);
}

void Function_381(char* cParam0, bool bParam1) //Position: 0xCEC1 / 52929
{
	var uVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		uVar0 = "";
		if (bParam1)
		{
			uVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, cParam0, uVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(0, 0);
	return;
}

void Function_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCF01 / 52993
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_383(Global_6269) };
		}
		PRINT_HELP_B(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_383(int iParam0) //Position: 0xCF7C / 53116
{
	char* cVar0[16];
	
	if (!Function_108())
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

bool Function_384() //Position: 0xCFBB / 53179
{
	return Function_385() != 4294967290;
}

int Function_385() //Position: 0xCFC8 / 53192
{
	if (!Function_289())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

void Function_386(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5) //Position: 0xCFDD / 53213
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (Function_159())
	{
		if (Function_268(iParam0))
		{
			iVar0 = CEIL(Function_156(iParam0));
			iVar1 = CEIL((fParam3 * 0.5f));
			if (*uParam1 != iVar0)
			{
				*uParam1 = iVar0;
				if (iVar0 < 22)
				{
					if (*uParam2 != 6)
					{
						if (*uParam2 == 5)
						{
							AUDIO_MUSIC_PLAY_PREPARED();
							*uParam2 = 6;
						}
						else
						{
							fVar2 = ((((22.0f - Function_156(iParam0)) + 1.0f) * 1000.0f) / 178979.0f);
							if (iVar0 >= 1)
							{
								Function_290(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, fVar2, 1, 1);
								*uParam2 = 5;
							}
							else
							{
								AUDIO_MUSIC_ONE_SHOT(&Global_83591 + 28[29], "OVERTIME", 0.0f, fVar2, 0, 1);
								*uParam2 = 6;
							}
						}
					}
				}
				else if (iVar0 < 23)
				{
					if (*uParam2 != 5)
					{
						*uParam2 = 5;
						if (IS_STRING_VALID(&Global_83591 + 28[29]))
						{
							Function_290(&Global_83591 + 28[29], (&Global_83591 + 28[29])->f_32, 0.0f, 0.0f, 1, 1);
						}
					}
				}
				else if (iVar0 < 31)
				{
					if (*uParam2 != 4)
					{
						*uParam2 = 4;
						AUDIO_MUSIC_SUSPEND(8000);
					}
				}
				else if (iVar0 < 60)
				{
					if (*uParam2 != 3)
					{
						AUDIO_MUSIC_SET_MOOD("LOUD_TENSION", 0, 4294967295, 4294967295);
						if (!IS_STRING_VALID(iParam5))
						{
							iParam5 = "GENMESS_GCRUNNINGDOWN";
						}
						Function_381(iParam5, 0);
						*uParam2 = 3;
					}
				}
				else if (iVar0 < 66)
				{
					if (*uParam2 != 2)
					{
						AUDIO_MUSIC_SET_MOOD("QUIET_TENSION", 0, 4294967295, 4294967295);
						*uParam2 = 2;
					}
				}
				else if (iVar0 < iVar1)
				{
					if (*uParam2 != 1)
					{
						if (IS_STRING_VALID(&Global_83591 + 28[19]))
						{
							Function_326(&Global_83591 + 28[19], (&Global_83591 + 28[19])->f_32, 0, 4294967295, 4294967295, 3212836864, 0);
						}
						*uParam2 = 1;
					}
				}
				if ((iVar0 <= (iVar1 - 10) && iVar0 >= iVar1 + 10) || (iVar0 >= 15 && iVar0 <= 0))
				{
					Function_392();
					if (iVar0 >= 5 && (Global_76905.f_128 % 2) != 1)
					{
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
					if (iVar0 == iVar1)
					{
						Function_391("mp_match_half_over");
						PLAY_SOUND_FRONTEND("HUD_TIMER_BELL_STRIKE_MASTER");
					}
				}
				else if (!bParam4)
				{
					Function_390();
				}
			}
			if (!Function_384())
			{
				Function_388("mp_time_remaining_header");
				Function_387(Function_64(0, iVar0), iVar0 >= 5);
			}
			else
			{
				Function_388("mp_time_overtime_header");
				Function_387(ABS(iVar0), bVar0 < 4294967291);
			}
		}
	}
}

void Function_387(int iParam0, bool bParam1) //Position: 0xD2B9 / 53945
{
	if (Global_76905.f_128 != iParam0)
	{
		Function_14(0x20000000, 1, 1);
	}
	Global_76905.f_128 = iParam0;
	Function_14(65536, bParam1, 1);
	return;
}

void Function_388(char* cParam0) //Position: 0xD2E6 / 53990
{
	if (Function_389(cParam0, &Global_76905))
	{
		Function_14(0x4000000, 1, 1);
	}
	strcpy(&Global_76905, cParam0, 64);
	return;
}

bool Function_389(int iParam0, int iParam1) //Position: 0xD30A / 54026
{
	if (IS_STRING_VALID(iParam0) != IS_STRING_VALID(iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(iParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void Function_390() //Position: 0xD33E / 54078
{
	if (Function_42(1048576))
	{
		Function_14(0x10000000, 1, 1);
	}
	Function_14(1048576, 0, 1);
	return;
}

void Function_391(int iParam0) //Position: 0xD361 / 54113
{
	NET_TICKER_REPORTF(UI_GET_STRING(iParam0), 0, 0, 0, 0, 0, 0);
	return;
}

void Function_392() //Position: 0xD375 / 54133
{
	if (!Function_42(1048576))
	{
		Function_14(0x10000000, 1, 1);
	}
	Function_14(1048576, 1, 1);
	return;
}

void Function_393() //Position: 0xD399 / 54169
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
			{
				if (StackVal < 0.0f)
				{
					if (StackVal + 10.0f) < NET_GET_NET_TIME()
					{
						if (!Function_394(bVar0))
						{
							SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(bVar0), 1);
							DECOR_SET_BOOL(GET_SLOT_ACTOR(bVar0), "beastmaster", 1);
						}
					}
					else if (Function_394(bVar0))
					{
						SET_ACTOR_IS_THE_BEASTMASTER(GET_SLOT_ACTOR(bVar0), 0);
						DECOR_SET_BOOL(GET_SLOT_ACTOR(bVar0), "beastmaster", 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_394(bool bParam0) //Position: 0xD43F / 54335
{
	if (!IS_SLOT_VALID(iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(bParam0)))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(GET_SLOT_ACTOR(bParam0), "beastmaster"))
	{
		return 0;
	}
	return DECOR_GET_BOOL(GET_SLOT_ACTOR(bParam0), "beastmaster");
}

int Function_395() //Position: 0xD490 / 54416
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_513())
	{
		if (GET_NUM_PLAYERS() < 1)
		{
			NET_LOG(iLocal_1053, "Local State", "\I'm the only player left in the session, quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
			Function_404(4294967293);
		}
		if (Function_146())
		{
			if (Function_403())
			{
				NET_LOG(iLocal_1053, "Local State", "Team DM has determined that there's only one team remaining, we're quitting.  Transitioning to MPGTPS_ENDMATCH state.", 0, 0, 0, 0);
				Function_404(4294967294);
			}
		}
	}
	if (!Function_513())
	{
		bVar1 = false;
		iVar2 = Global_83591;
		if (Function_303(&Global_78578 + 96))
		{
			iVar2 = 4294967295;
			bVar1 = true;
		}
		if (Function_146())
		{
			iVar0 = Function_401(iVar2);
		}
		else
		{
			iVar0 = Function_398(iVar2);
		}
		if (bVar1 && iVar0 != 4294967291)
		{
			if (!Function_384())
			{
				NET_LOG(iLocal_1053, "Rules State", "Overtime entered because scores are tied.", 0, 0, 0, 0);
				Function_397();
			}
		}
		else if (iVar0 != 4294967295)
		{
			NET_LOG(iLocal_1053, "Rules State", "Player/Team %s won the match.", I2STR(iVar0), 0, 0, 0);
			Function_396(iVar0);
		}
		else if (bVar1)
		{
		}
	}
	return 1;
}

void Function_396(int iParam0) //Position: 0xD6A8 / 54952
{
	int iVar0;
	
	if (Function_25(StackVal, 4))
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_404(iParam0);
		return;
	}
	Function_15(&Local_217 + 4, 4);
	iVar0 = iParam0;
	NET_SCRIPTMSG_SEND(2, 5, &iVar0, 1, 1);
	return;
}

void Function_397() //Position: 0xD6DC / 55004
{
	Function_404(4294967290);
	return;
}

var Function_398(int iParam0) //Position: 0xD6E8 / 55016
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = 4294967295;
	iVar1 = iParam0;
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 <= 16)
	{
		if (Function_293(iVar3))
		{
			iVar2 = Function_399(iVar3);
			if (iVar2 >= iVar1)
			{
				iVar1 = iVar2;
				iVar0 = iVar3;
				bVar4 = false;
			}
			else if (iVar2 == iVar1)
			{
				if (iVar0 == 4294967295)
				{
					bVar4 = false;
					iVar0 = iVar3;
					iVar1 = iVar2;
				}
				else
				{
					bVar4 = true;
				}
			}
		}
		iVar3++;
	}
	if (bVar4)
	{
		return 4294967291;
	}
	return iVar0;
}

int Function_399(int iParam0) //Position: 0xD758 / 55128
{
	return Function_400(0, iParam0);
}

int Function_400(int iParam0, int iParam1) //Position: 0xD764 / 55140
{
	char* cVar0[64];
	
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_253(iParam0);
	}
	if (!Function_140(iParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[iParam196] + 132)[iParam0];
}

int Function_401(int iParam0) //Position: 0xD7CB / 55243
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_402(0);
	iVar1 = Function_402(1);
	if (iVar0 <= iParam0 || iVar1 <= iParam0)
	{
		if (iVar0 == iVar1)
		{
			return 4294967291;
		}
		if (iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	return 4294967295;
}

int Function_402(int iParam0) //Position: 0xD808 / 55304
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_403() //Position: 0xD824 / 55332
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		iVar1 = Function_136(iVar2, 1, 0);
		if (iVar1 >= 4294967295)
		{
			if (iVar0 == 4294967295)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 != iVar1)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

void Function_404(int iParam0) //Position: 0xD866 / 55398
{
	if (NET_IS_SESSION_HOST())
	{
		Global_78578.f_108 = iParam0;
	}
	return;
}

void Function_405(int iParam0) //Position: 0xD87A / 55418
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_406(iParam0);
		}
	}
	return;
}

void Function_406(var uParam0) //Position: 0xD8AC / 55468
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

bool Function_407() //Position: 0xD8BB / 55483
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = GET_LOCAL_SLOT();
	if (Function_146())
	{
		bVar1 = false;
		if (!Function_512(Function_44()))
		{
		}
		else if ((Function_38(1024) && !Function_373(&Local_307)) && Function_268(&Global_78578 + 96))
		{
		}
		else if (iVar0 > 0 || iVar0 <= 16)
		{
			return 0;
		}
		bVar1 = true;
		if (Local_307.f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_510(&Local_307, 1);
			}
			return 0;
		}
		if ((*&Local_307 + 24)[iVar0] == 4294967295)
		{
			Function_278(&Local_217 + 36, 64);
			Function_497(&vLocal_108, 0, 0, 0, 1);
		}
		else
		{
			Function_497(&vLocal_108, 1, 0, 0, 1);
			Function_275(&vLocal_108, 69118);
		}
		Function_272(&vLocal_108, 1);
		Function_494(Function_44(), &Local_217 + 36);
		Function_493(StackVal, StackVal, &vLocal_108, Function_494(Function_44(), &Local_217 + 36));
		if (NET_IS_SESSION_HOST())
		{
			Function_492(&Global_78578 + 96);
		}
		if (!bVar1)
		{
			Function_497(&vLocal_108, 1, 0, 0, 0);
			Function_491(&Local_217 + 36);
			if (NET_IS_SESSION_HOST())
			{
				Function_265(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	else
	{
		bVar2 = false;
		if (!Function_490(Function_44()))
		{
		}
		else if ((Function_38(1024) && !Function_373(&Local_307)) && Function_268(&Global_78578 + 96))
		{
		}
		else if (iVar0 > 0 || iVar0 <= 16)
		{
			return 0;
		}
		if (Local_307.f_12 == 0)
		{
			if (NET_IS_SESSION_HOST())
			{
				Function_510(&Local_307, 0);
			}
			return 0;
		}
		if ((*&Local_307 + 24)[iVar0] == 4294967295)
		{
			Function_278(&Local_217 + 36, 64);
			Function_497(&vLocal_108, 0, 0, 0, 1);
		}
		else
		{
			Function_497(&vLocal_108, 1, 0, 0, 1);
			Function_275(&vLocal_108, 68803);
		}
		Function_272(&vLocal_108, 1);
		Function_494(Function_44(), &Local_217 + 36);
		Function_493(StackVal, StackVal, &vLocal_108, Function_494(Function_44(), &Local_217 + 36));
		bVar2 = true;
		if (!bVar2)
		{
			Function_497(&vLocal_108, 1, 0, 0, 0);
			Function_491(&Local_217 + 36);
			if (NET_IS_SESSION_HOST())
			{
				Function_265(&Global_78578 + 96, Global_83591.f_16);
			}
		}
	}
	Function_487(&vLocal_108, 2);
	Function_428(&vLocal_108, 58365);
	Function_418(&vLocal_108, 56729);
	Function_413(&vLocal_108, 56227);
	Function_409(&vLocal_108, 56018);
	Function_408(&vLocal_108, 30);
	return 1;
}

void Function_408(int iParam0, int iParam1) //Position: 0xDABA / 55994
{
	iParam0->f_52 = iParam1;
	return;
}

void Function_409(int iParam0, int iParam1) //Position: 0xDAC6 / 56006
{
	iParam0->f_184 = iParam1;
	return;
}

int Function_410() //Position: 0xDAD2 / 56018
{
	return Function_411(&uLocal_367);
}

int Function_411(int iParam0) //Position: 0xDADE / 56030
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0->f_1452 < 4294967295)
	{
		return 0;
	}
	fVar3 = NET_GET_NET_TIME();
	iVar4 = GET_LOCAL_SLOT();
	iVar5 = Function_135();
	if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iParam0->f_14526]))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != iVar4)
		{
			if (IS_SLOT_VALID(iVar0))
			{
				if (iVar5 != 4294967295 || Function_136(bVar0, 1, 0) == iVar5)
				{
					if (Function_412(bVar0, &Var1))
					{
						if (StackVal && StackVal > (StackVal && (Var1 != iParam0->f_1452 - fVar3) >= 15.0f))
						{
							return 1;
						}
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_412(int iParam0, int iParam1) //Position: 0xDB76 / 56182
{
	if (_IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_333, iParam0))
	{
		*iParam1 = { StackVal, Local_333[iParam02] };
		return 1;
	}
	return 0;
}

void Function_413(int iParam0, int iParam1) //Position: 0xDB97 / 56215
{
	iParam0->f_160 = iParam1;
	return;
}

void Function_414(var uParam0) //Position: 0xDBA3 / 56227
{
	if (!Function_416(uParam0, &Local_217 + 36, &Local_307))
	{
		if (Function_146())
		{
			Function_415("TDM_obj_team", 7.5f, !Local_217.f_232, 2, 0, 0, 0, 0);
		}
		else if (Function_133() == 2)
		{
			Function_415("DM_obj_FFA", 7.5f, !Local_217.f_232, 2, 0, 0, 0, 0);
		}
		Local_217.f_232 = 1;
	}
	return;
}

void Function_415(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xDC0E / 56334
{
	struct<4> Var0;
	var uVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_383(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, uVar4, iParam5, iParam6);
	}
}

bool Function_416(bool bParam0, int iParam1, int iParam2) //Position: 0xDC93 / 56467
{
	int iVar0;
	
	Function_278(iParam1, 1);
	if (Function_373(iParam2) && !Function_417(iParam1))
	{
		SET_ACTOR_POSTURE(bParam0, 0);
		iVar0 = Function_165(bParam0, 40);
		if (Function_351(2097152))
		{
			if (ACTOR_HAS_WEAPON(bParam0, 29))
			{
				iVar0 = 29;
			}
			else if (ACTOR_HAS_WEAPON(bParam0, 25))
			{
				iVar0 = 25;
			}
		}
		if (Function_351(4194304))
		{
			if (ACTOR_HAS_WEAPON(bParam0, 15))
			{
				iVar0 = 15;
			}
		}
		if (iVar0 == 4294967295)
		{
			iVar0 = Function_165(bParam0, 39);
			if (iVar0 == 4294967295)
			{
				iVar0 = 22;
			}
		}
		if ((Function_24(iParam1, 8) && !Function_351(2097152)) && !Function_351(4194304))
		{
			ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(bParam0, 1, 0);
			ACTOR_SET_NEXT_WEAPON(bParam0, iVar0);
		}
		else
		{
			OVERRIDE_PLAYER_TARGETING_WEIGHTS(bParam0, 0.1f, 0.9f, 1);
			SET_ACTOR_MAX_SPEED(bParam0, 5);
			iParam1->f_28 = GET_PLAYER_CONTROL_CONFIG(0);
			SET_PLAYER_CONTROL_CONFIG(0, 4);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bParam0, iVar0, 0);
		}
		return 1;
	}
	return 0;
}

bool Function_417(int iParam0) //Position: 0xDD81 / 56705
{
	return *iParam0 <= 12;
}

void Function_418(int iParam0, int iParam1) //Position: 0xDD8D / 56717
{
	iParam0->f_164 = iParam1;
	return;
}

void Function_419() //Position: 0xDD99 / 56729
{
	Function_425(&uLocal_367, Function_146());
	vLocal_108.f_8 = Function_420(&uLocal_367, 1);
	return;
}

var Function_420(int iParam0, int iParam1) //Position: 0xDDB3 / 56755
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9[60];
	int iVar70;
	
	iVar3 = 0;
	iParam0->f_2736 = NET_GET_NET_TIME();
	iVar6 = GET_LOCAL_SLOT();
	iVar7 = Function_135();
	bVar8 = (IS_VOLUME_VALID(iParam0->f_1448) && iParam1);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1444)
	{
		iParam0[iVar06]->f_20 = 0.0f;
		if (FIRE_ARE_ANY_FLAMES_IN_VOLUME((*iParam0)[iVar06]))
		{
			iParam0[iVar06]->f_20 = -1000.0f;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if ((iParam0 + 1460[iVar1106])->f_420)
			{
				iVar2 = 0;
				while (iVar2 <= 16)
				{
					if ((iParam0 + 1460[iVar1106] + 28[iVar26])->f_16)
					{
						if (iVar1 != 2)
						{
							if (IS_VOLUME_VALID(StackVal) && iParam1)
							{
								if (IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 1460[iVar1106] + 28[iVar26])))
								{
									iParam0[iVar06]->f_20 = (iParam0[iVar06]->f_20 + (307.0f * (*iParam0 + 1460)[iVar1106]));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 2.0f, 0.0f));
								}
							}
							else if (bVar8)
							{
								if (IS_POINT_IN_VOLUME(*(iParam0 + 1460[iVar1106] + 28[iVar26]), iParam0->f_1448))
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 1.0f, 0.5f));
								}
								else
								{
									iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
								}
							}
							else
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
							}
						}
						else if (iVar2 != iVar6 || Function_423(iParam0 + 1460[iVar1106] + 28[iVar26], iParam0->f_2736))
						{
							iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0 + 1460[iVar1106] + 28[iVar26]), *(iParam0 + 1460[iVar1106]), 0x3f800000, 0x3f800000));
						}
						else
						{
							(iParam0 + 1460[iVar1106] + 28[iVar26])->f_16 = 0;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 16)
		{
			if (iVar2 != iVar6)
			{
				if (IS_SLOT_VALID(iVar2))
				{
					if (iVar7 != 4294967295 || Function_136(bVar2, 1, 0) == iVar7)
					{
						if (Function_412(bVar2, &Var4))
						{
							if (StackVal && (Var4 < 4294967295 - iParam0->f_2736) >= 15.0f)
							{
								iParam0[iVar06]->f_20 = (StackVal + Function_424(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0[iVar06]->f_20, *(iParam0[iVar06] + 8), *(iParam0[Var46] + 8), *(iParam0 + 1460[2106]), 0x3f800000, 0x3f800000));
							}
						}
					}
				}
			}
			bVar2++;
		}
		if (bLocal_366)
		{
			if ((iVar3 % 10) == 0)
			{
				PRINTNL();
				Function_150();
				PRINTSTRING("Weighting,");
			}
			PRINTSTRING(GET_OBJECT_NAME((*iParam0)[iVar06]));
			PRINTSTRING(",");
			Function_422(iParam0[iVar06]->f_20);
			PRINTSTRING(",");
			iVar3++;
		}
		iVar0++;
	}
	if (bLocal_366)
	{
		PRINTNL();
	}
	iVar70 = 1;
	iVar0 = 1;
	while (iVar0 < (iParam0->f_1444 - 1))
	{
		if (iParam0[iVar06]->f_20 < iParam0[iVar9[0]6]->f_20)
		{
			iVar9[0] = iVar0;
			iVar70 = 1;
		}
		else if (iParam0[iVar06]->f_20 != iParam0[iVar9[0]6]->f_20)
		{
			iVar9[iVar70] = iVar0;
			iVar70++;
		}
		iVar0++;
	}
	iVar0 = iVar9[(RAND_INT_RANGE(0, 10000) % iVar70)];
	iParam0->f_1452 = iVar0;
	(iParam0 + 1452)->f_4 = NET_GET_NET_TIME();
	Function_421(iParam0 + 1452);
	return (*iParam0)[iVar06];
}

void Function_421(int iParam0) //Position: 0xE1E2 / 57826
{
	Local_333[GET_LOCAL_SLOT()2] = { StackVal, *iParam0 };
	return;
}

void Function_422(float fParam0) //Position: 0xE1F6 / 57846
{
	if (bLocal_366)
	{
		PRINTINT(ROUND(fParam0));
	}
	return;
}

var Function_423(var uParam0, float fParam1) //Position: 0xE20A / 57866
{
	return (fParam1 - uParam0->f_12) >= 20.0f;
}

float Function_424(vector3 vParam0, vector3 vParam3, struct<25> Param6) //Position: 0xE21D / 57885
{
	float fVar0;
	float fVar1;
	
	if (fParam14 != 0.0f)
	{
		return 0.0f;
	}
	fVar0 = (VDIST2(vParam0, vParam3) * fParam13);
	fVar1 = 0.0f;
	if (StackVal >= fVar0)
	{
		fVar1 = (StackVal * Param6);
	}
	else if (fVar0 >= Param6.f_12)
	{
		fVar1 = (Param6.f_16 * Param6);
	}
	else if (fVar0 >= Param6.f_20)
	{
		fVar1 = (Param6.f_24 * Param6);
	}
	return (fVar1 * fParam14);
}

void Function_425(int iParam0, bool bParam1) //Position: 0xE287 / 57991
{
	(iParam0 + 1460[0106])->f_420 = 1;
	if (bParam1)
	{
		Function_426(iParam0, 0, Function_330(Function_135()));
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	else
	{
		Function_426(iParam0, 0, 4294967295);
		(iParam0 + 1460[1106])->f_420 = 0;
	}
	return;
}

void Function_426(int iParam0, int iParam1, int iParam2) //Position: 0xE2CC / 58060
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (iVar0 != GET_LOCAL_SLOT())
		{
			Function_427(iParam0, iVar0, iParam1, iParam2);
		}
		else
		{
			(iParam0 + 1460[iParam1106] + 28[iVar06])->f_16 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_427(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xE30D / 58125
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	(iParam0 + 1460[iParam2106] + 28[iParam16])->f_16 = 0;
	if (IS_SLOT_VALID(iParam1))
	{
		bVar3 = false;
		if (iParam3 != 4294967295 || Function_136(bParam1, 1, 0) != iParam3)
		{
			bVar4 = GET_SLOT_ACTOR(bParam1);
			if (IS_ACTOR_VALID(bVar4))
			{
				if (IS_ACTOR_ALIVE(bVar4))
				{
					Function_107(bVar4, &vVar0);
					bVar3 = true;
				}
			}
			else if (Function_140(bParam1))
			{
				if (!Function_137(bParam1, 2, 1))
				{
					if (GET_SLOT_POSITION(bParam1, &vVar0))
					{
						bVar3 = true;
					}
				}
			}
			if (bVar3)
			{
				(iParam0 + 1460[iParam2106] + 28[bParam16])->f_16 = 1;
				*(iParam0 + 1460[iParam2106] + 28[bParam16]) = { StackVal, StackVal, vVar0 };
				if (IS_VOLUME_VALID(iParam0->f_1448))
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = IS_POINT_IN_VOLUME(vVar0, iParam0->f_1448);
				}
				else
				{
					(iParam0 + 1460[iParam2106] + 28[bParam16])->f_20 = 0;
				}
			}
		}
	}
}

void Function_428(int iParam0, int iParam1) //Position: 0xE3F1 / 58353
{
	iParam0->f_172 = iParam1;
	return;
}

void Function_429() //Position: 0xE3FD / 58365
{
	if (Function_486(&vLocal_108, Function_385()))
	{
		Function_381("GENMESS_GAMEOVER", 0);
		switch (Function_385())
		{
			case 0xFFFFFFFE:
			case 0xFFFFFFFD:
				Function_484(&vLocal_108, 1, 1, 0);
				Function_483(0, 1);
				if (Function_146())
				{
					Function_134(9, 1);
				}
				else
				{
					Function_134(8, 1);
				}
				break;
			
			default:
				Function_484(&vLocal_108, 0, 1, 0);
				break;
		}
	}
	else
	{
		Function_467(&vLocal_108, 64647);
		Function_2(&Local_217 + 148);
		Function_430(Function_385());
	}
	return;
}

void Function_430(int iParam0) //Position: 0xE482 / 58498
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	uVar1 = "";
	if (Function_146())
	{
		if (Function_25(Global_79962, 512))
		{
			iVar0 = CEIL(50.0f);
			uVar1 = "xp_hardcore";
		}
		else if (Function_25(Global_79962, 256))
		{
			iVar0 = CEIL(100.0f);
			uVar1 = "xp_veteran";
		}
		iVar2 = Function_135();
		if (iParam0 == iVar2)
		{
			Function_484(&vLocal_108, 1, 1, 0);
			Function_134(9, 1);
			Function_483(0, 1);
			Function_465(&vLocal_108, Function_466(iVar2), "mp_teammsg_blue_start", "mp_teammsg_blue_end", 0, 0);
			Function_455(&Local_217 + 236, Function_460(iParam0, CEIL(25.0f)), CEIL(100.0f), 1, iVar2, uVar1, iVar0);
			Function_454(Function_288(iVar2));
		}
		else if (Function_288(iVar2) == 15)
		{
			iVar3 = Function_330(iVar2);
			Function_455(&Local_217 + 236, Function_460(iVar3, CEIL(25.0f)), 0, 0, iVar3, uVar1, iVar0);
			Function_465(&vLocal_108, Function_453(iVar2), "mp_teammsg_red_start", "mp_teammsg_red_end", 0, 0);
			Function_484(&vLocal_108, 0, 1, 0);
			Function_451(&Global_50170[422] + 4, &Global_50170[422] + 8, &Global_50170[422] + 12);
			Function_381("GENMESS_LOSE_TEAM_15", 0);
		}
		else
		{
			iVar4 = Function_330(iVar2);
			Function_455(&Local_217 + 236, Function_460(iVar4, CEIL(25.0f)), 0, 0, iVar4, uVar1, iVar0);
			Function_465(&vLocal_108, Function_466(iVar4), "mp_teammsg_red_start", "mp_teammsg_red_end", 0, 0);
			Function_484(&vLocal_108, 0, 1, 0);
			Function_451(&Global_50170[422] + 4, &Global_50170[422] + 8, &Global_50170[422] + 12);
			Function_450(Function_288(iVar4));
		}
		Function_448(&Global_50170[322] + 4, &Global_50170[322] + 8, &Global_50170[322] + 12);
		Function_446(&Global_50170[222] + 4, &Global_50170[222] + 8, &Global_50170[222] + 12);
		Function_445(&Global_50170[1322] + 4, &Global_50170[1322] + 8, &Global_50170[1322] + 12);
		Function_444(&Global_50170[1622] + 4, &Global_50170[1622] + 8, &Global_50170[1622] + 12);
	}
	else
	{
		if (Function_25(Global_79962, 512))
		{
			iVar0 = CEIL(50.0f);
			uVar1 = "xp_hardcore";
		}
		else if (Function_25(Global_79962, 256))
		{
			iVar0 = CEIL(100.0f);
			uVar1 = "xp_veteran";
		}
		if (iParam0 == GET_LOCAL_SLOT())
		{
			Function_484(&vLocal_108, 1, 1, 0);
			Function_134(8, 1);
			Function_483(0, 1);
			Function_465(&vLocal_108, "DM_victory", Function_243(iParam0), 0, 0, 0);
			Function_455(&Local_217 + 236, iParam0, 0, 1, 4294967295, uVar1, iVar0);
			Function_443();
			Function_442(&Global_50170[122] + 4, &Global_50170[122] + 8, &Global_50170[122] + 12, iParam0);
		}
		else
		{
			Function_484(&vLocal_108, 0, 1, 0);
			Function_465(&vLocal_108, "DM_victory", Function_243(iParam0), 0, 0, 0);
			Function_455(&Local_217 + 236, iParam0, 0, 0, 4294967295, uVar1, iVar0);
			Function_441();
		}
		Function_437(&Global_50170[022] + 4, &Global_50170[022] + 8, &Global_50170[022] + 12);
		Function_434(&Global_50170[1222] + 4, &Global_50170[1222] + 8, &Global_50170[1222] + 12);
		Function_431(&Global_50170[1522] + 4, &Global_50170[1522] + 8, &Global_50170[1522] + 12);
	}
	Function_2(&Local_217 + 148);
	return;
}

void Function_431(var uParam0, var uParam1, var uParam2) //Position: 0xE855 / 59477
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(15);
				if (Function_432() == 0)
				{
					Global_50170[1522].f_28++;
					bVar0 = Global_50170[1522].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_94(15, 150, Function_131(), 3029);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(15, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

int Function_432() //Position: 0xE8E2 / 59618
{
	return Function_433(12);
}

int Function_433(int iParam0) //Position: 0xE8ED / 59629
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_434(var uParam0, var uParam1, var uParam2) //Position: 0xE906 / 59654
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(12);
				if (Function_432() >= 0)
				{
					if ((Function_436() / Function_432()) > 5)
					{
						Global_50170[1222].f_28++;
						bVar0 = Global_50170[1222].f_28;
					}
				}
				else if (Function_436() > 5)
				{
					Global_50170[1222].f_28++;
					bVar0 = Global_50170[1222].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_94(12, 150, Function_435(), 3026);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(12, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

int Function_435() //Position: 0xE9C7 / 59847
{
	return "MP_KDR_Icon_128";
}

int Function_436() //Position: 0xE9DF / 59871
{
	return Function_433(11);
}

void Function_437(var uParam0, var uParam1, var uParam2) //Position: 0xE9EA / 59882
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(0);
				if (Function_439(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 1)
				{
					Function_125(0, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_438(), 3105);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_132(0);
				if (Function_439(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 5)
				{
					Function_125(0, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_438(), 3001);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_84(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_132(0);
				if (Function_439(3))
				{
					Global_50170[022].f_28++;
					bVar0 = Global_50170[022].f_28;
				}
				if (bVar0 > 20)
				{
					Function_94(0, 150, Function_438(), 3002);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_84(0, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

int Function_438() //Position: 0xEB6F / 60271
{
	return "MP_DM_Icon_128";
}

bool Function_439(int iParam0) //Position: 0xEB86 / 60294
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Function_440();
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_293(iVar2))
		{
			if (Function_399(iVar2) >= iVar0)
			{
				iVar1++;
				if (iVar1 > iParam0)
				{
					return 0;
				}
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_440() //Position: 0xEBC6 / 60358
{
	return Function_253(0);
}

void Function_441() //Position: 0xEBD0 / 60368
{
	Function_381("GENMESS_GAMELOST", 0);
	return;
}

void Function_442(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xEBED / 60397
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 5)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 1)
				{
					Function_125(1, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_438(), 3003);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_132(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 5)
				{
					Function_125(1, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_438(), 3004);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_84(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_132(1);
				if (iParam3 == GET_LOCAL_SLOT())
				{
					Global_50170[122].f_28++;
					bVar0 = Global_50170[122].f_28;
				}
				if (bVar0 > 20)
				{
					Function_94(1, 150, Function_438(), 3005);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_84(1, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_443() //Position: 0xED77 / 60791
{
	Function_381("GENMESS_GAMEWON", 0);
	return;
}

void Function_444(var uParam0, var uParam1, int iParam2) //Position: 0xED93 / 60819
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(16);
				if (Function_432() == 0)
				{
					Global_50170[1622].f_28++;
					bVar0 = Global_50170[1622].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_94(16, 150, Function_131(), 3030);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_84(16, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_445(var uParam0, var uParam1, int iParam2) //Position: 0xEE20 / 60960
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 18)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(13);
				if (Function_432() >= 0)
				{
					if ((Function_436() / Function_432()) > 5)
					{
						Global_50170[1322].f_28++;
						bVar0 = Global_50170[1322].f_28;
					}
				}
				else if (Function_436() > 5)
				{
					Global_50170[1322].f_28++;
					bVar0 = Global_50170[1322].f_28;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_94(13, 150, Function_435(), 3027);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_84(13, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_446(var uParam0, var uParam1, var uParam2) //Position: 0xEEE1 / 61153
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(2);
				if (Function_439(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 1)
				{
					Function_125(2, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_447(), 3006);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_132(2);
				if (Function_439(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 5)
				{
					Function_125(2, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_447(), 3007);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_84(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_132(2);
				if (Function_439(3))
				{
					Global_50170[222].f_28++;
					bVar0 = Global_50170[222].f_28;
				}
				if (bVar0 > 20)
				{
					Function_94(2, 150, Function_447(), 3008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_84(2, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

int Function_447() //Position: 0xF066 / 61542
{
	return "MP_TDM_Icon_128";
}

void Function_448(var uParam0, var uParam1, var uParam2) //Position: 0xF07E / 61566
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(3);
				if (Function_449())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 1)
				{
					Function_125(3, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 5, 100, Function_447(), 3009);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_132(3);
				if (Function_449())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 5)
				{
					Function_125(3, uParam0, 2, uParam1, 2, *uParam2, 0, 100, bVar0, 20, 150, Function_447(), 3010);
					*uParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 5);
					if (*uParam2 == fVar1)
					{
						Function_84(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_132(3);
				if (Function_449())
				{
					Global_50170[322].f_28++;
					bVar0 = Global_50170[322].f_28;
				}
				if (bVar0 > 20)
				{
					Function_94(3, 150, Function_447(), 3011);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 20);
					if (*uParam2 == fVar1)
					{
						Function_84(3, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_449() //Position: 0xF200 / 61952
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Function_440();
	iVar2 = GET_LOCAL_SLOT();
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (Function_293(iVar1) && iVar2 == iVar1)
		{
			if (iVar0 < Function_399(iVar1))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

void Function_450(int iParam0) //Position: 0xF23E / 62014
{
	char* cVar0[64];
	
	if (iParam0 == 15)
	{
		Function_454(iParam0);
		return;
	}
	strcpy(&cVar0, "GENMESS_LOSE_TEAM_", 64);
	straddi(&cVar0, iParam0, 64);
	Function_381(&cVar0, 0);
	return;
}

void Function_451(var uParam0, var uParam1, var uParam2) //Position: 0xF276 / 62070
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 1)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_132(4);
				if (Function_452())
				{
					bVar0++;
				}
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_94(4, 150, Function_447(), 3012);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_124(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_84(4, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

bool Function_452() //Position: 0xF2E6 / 62182
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GET_LOCAL_SLOT();
	iVar1 = Function_399(iVar0);
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_293(iVar2) && iVar0 == iVar2)
		{
			if ((*&Global_78578 + 20)[iVar2] == (*&Global_78578 + 20)[iVar0])
			{
				if (iVar1 < Function_399(iVar2))
				{
					return 0;
				}
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_453(int iParam0) //Position: 0xF33D / 62269
{
	switch (Function_288(iParam0))
	{
		case 0xFFFFFFF6:
			return "TeamLose_-10";
		
		case 0xFFFFFFF7:
			return "TeamLose_-9";
		
		case 0xFFFFFFF8:
			return "TeamLose_-8";
		
		case 0xFFFFFFF9:
			return "TeamLose_-7";
		
		case 0xFFFFFFFA:
			return "TeamLose_-6";
		
		case 0xFFFFFFFB:
			return "TeamLose_-5";
		
		case 0xFFFFFFFC:
			return "TeamLose_-4";
		
		case 0xFFFFFFFD:
			return "TeamLose_-3";
		
		case 0xFFFFFFFE:
			return "TeamLose_-2";
		
		case 0xFFFFFFFF:
			return "TeamLose_-1";
		
		case 0x00000000:
			return "TeamLose_0";
		
		case 0x00000001:
			return "TeamLose_1";
		
		case 0x00000002:
			return "TeamLose_2";
		
		case 0x00000003:
			return "TeamLose_3";
		
		case 0x00000004:
			return "TeamLose_4";
		
		case 0x00000005:
			return "TeamLose_5";
		
		case 0x00000006:
			return "TeamLose_6";
		
		case 0x00000007:
			return "TeamLose_7";
		
		case 0x00000008:
			return "TeamLose_8";
		
		case 0x00000009:
			return "TeamLose_9";
		
		case 0x0000000A:
			return "TeamLose_10";
		
		case 0x0000000B:
			return "TeamLose_11";
		
		case 0x0000000C:
			return "TeamLose_12";
		
		case 0x0000000D:
			return "TeamLose_13";
		
		case 0x0000000E:
			return "TeamLose_14";
		
		case 0x0000000F:
			return "TeamLose_15";
		
		case 0x00000010:
			return "TeamLose_16";
		
		case 0x00000011:
			return "TeamLose_17";
		
		case 0x00000012:
			return "TeamLose_18";
		
		case 0x00000013:
			return "TeamLose_19";
		
		case 0x00000014:
			return "TeamLose_20";
		
		default:
	}
	return "TeamLose_unx";
}

void Function_454(int iParam0) //Position: 0xF5DE / 62942
{
	char* cVar0[64];
	
	strcpy(&cVar0, "GENMESS_WIN_TEAM_", 64);
	straddi(&cVar0, iParam0, 64);
	Function_381(&cVar0, 0);
	return;
}

void Function_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6) //Position: 0xF608 / 62984
{
	iParam0->f_24 = iParam1;
	iParam0->f_32 = iParam3;
	iParam0->f_36 = iParam4;
	iParam0->f_40 = iParam2;
	iParam0->f_48 = uParam5;
	iParam0->f_44 = iParam6;
	if (iParam1 > 0)
	{
		iParam0->f_20 = Function_400(9, iParam1);
		if (!IS_ACTORENUM_INSTALLED(iParam0->f_20))
		{
			iParam0->f_20 = 869;
		}
		Function_459(iParam0 + 64, iParam0->f_20, 3, 0);
	}
	else
	{
		iParam0->f_20 = 4294967295;
	}
	Function_457(iParam0 + 64, "MP_victory", 5, 0);
	Function_457(iParam0 + 64, "custom/mp_victory", 8, 0);
	Function_367(iParam0 + 64);
	Function_456(5);
	Function_365();
}

void Function_456(int iParam0) //Position: 0xF6B2 / 63154
{
	Function_80(&Global_83864 + 1252, iParam0);
	return;
}

var Function_457(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xF6C4 / 63172
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_458(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_371(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_458(var uParam0, int iParam1, int iParam2) //Position: 0xF6FC / 63228
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_371(uParam0[iVar03], 4);
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

var Function_459(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xF7C0 / 63424
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_371(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_371(uParam0[iVar03], 8);
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

int Function_460(int iParam0, int iParam1) //Position: 0xF890 / 63632
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294957296;
	iVar2 = 4294967295;
	iVar3 = 0;
	while (iVar3 <= 16)
	{
		if (Function_293(iVar3))
		{
			if ((*&Global_78578 + 20)[iVar3] == iParam0)
			{
				iVar1 = Function_461(iVar3, iParam1);
				if (iVar0 < iVar1)
				{
					iVar0 = iVar1;
					iVar2 = iVar3;
				}
			}
		}
		iVar3++;
	}
	return iVar2;
}

var Function_461(int iParam0, int iParam1) //Position: 0xF8E2 / 63714
{
	return ((((Function_399(iParam0) / iParam1) * 100000) + Function_464(iParam0) * 100) - Function_462(iParam0));
}

int Function_462(int iParam0) //Position: 0xF903 / 63747
{
	return Function_463(12, iParam0);
}

bool Function_463(int iParam0, int iParam1) //Position: 0xF910 / 63760
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_433(iParam0);
	}
	if (!Function_140(iParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[iParam196] + 220)[iParam0];
}

int Function_464(bool bParam0) //Position: 0xF97E / 63870
{
	return Function_463(11, bParam0);
}

void Function_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF98B / 63883
{
	int iVar0;
	
	iParam0->f_16 = iParam1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(*iParam0 + 20)[iVar0] = "";
		iVar0++;
	}
	if (IS_STRING_VALID(iParam2))
	{
		(*iParam0 + 20)[0] = iParam2;
	}
	if (IS_STRING_VALID(iParam3))
	{
		(*iParam0 + 20)[1] = iParam3;
	}
	if (IS_STRING_VALID(iParam4))
	{
		(*iParam0 + 20)[2] = iParam4;
	}
	if (IS_STRING_VALID(iParam5))
	{
		(*iParam0 + 20)[3] = iParam5;
	}
}

int Function_466(int iParam0) //Position: 0xF9FA / 63994
{
	switch (Function_288(iParam0))
	{
		case 0xFFFFFFF6:
			return "TeamWin_-10";
		
		case 0xFFFFFFF7:
			return "TeamWin_-9";
		
		case 0xFFFFFFF8:
			return "TeamWin_-8";
		
		case 0xFFFFFFF9:
			return "TeamWin_-7";
		
		case 0xFFFFFFFA:
			return "TeamWin_-6";
		
		case 0xFFFFFFFB:
			return "TeamWin_-5";
		
		case 0xFFFFFFFC:
			return "TeamWin_-4";
		
		case 0xFFFFFFFD:
			return "TeamWin_-3";
		
		case 0xFFFFFFFE:
			return "TeamWin_-2";
		
		case 0xFFFFFFFF:
			return "TeamWin_-1";
		
		case 0x00000000:
			return "nTeamWin_0";
		
		case 0x00000001:
			return "nTeamWin_1";
		
		case 0x00000002:
			return "nTeamWin_2";
		
		case 0x00000003:
			return "nTeamWin_3";
		
		case 0x00000004:
			return "nTeamWin_4";
		
		case 0x00000005:
			return "nTeamWin_5";
		
		case 0x00000006:
			return "nTeamWin_6";
		
		case 0x00000007:
			return "nTeamWin_7";
		
		case 0x00000008:
			return "nTeamWin_8";
		
		case 0x00000009:
			return "nTeamWin_9";
		
		case 0x0000000A:
			return "TeamWin_10";
		
		case 0x0000000B:
			return "TeamWin_11";
		
		case 0x0000000C:
			return "TeamWin_12";
		
		case 0x0000000D:
			return "TeamWin_13";
		
		case 0x0000000E:
			return "TeamWin_14";
		
		case 0x0000000F:
			return "TeamWin_15";
		
		case 0x00000010:
			return "TeamWin_16";
		
		case 0x00000011:
			return "TeamWin_17";
		
		case 0x00000012:
			return "TeamWin_18";
		
		case 0x00000013:
			return "TeamWin_19";
		
		case 0x00000014:
			return "TeamWin_20";
		
		default:
	}
	return "TeamWin_unx";
}

void Function_467(int iParam0, int iParam1) //Position: 0xFC7B / 64635
{
	iParam0->f_180 = iParam1;
	return;
}

int Function_468() //Position: 0xFC87 / 64647
{
	if (Function_469(&Local_217 + 236, Function_44()))
	{
		Function_4(&Local_217 + 236);
		return 1;
	}
	return 0;
}

bool Function_469(int iParam0, char* cParam1) //Position: 0xFCA4 / 64676
{
	int iVar0;
	
	if (!iParam0->f_32)
	{
		iVar0 = 5;
	}
	switch (iParam0->f_56)
	{
		case 0x00000000:
			Function_482();
			UI_HIDE("FameText");
			UI_EXCLUDE("FameText");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			CANCEL_DEADEYE();
			UI_PUSH("MPSplash");
			UI_ENTER("HudMPNoFun");
			UI_SET_STYLE("MPSplashTitle", (0 + iVar0));
			Function_481(iParam0, 1, "VS_WAITING_FOR_MOVIE_TO_BE_READY");
			break;
		
		case 0x00000001:
			if (!UNK_0x9D20BDC4("networking"))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1000.0f, 1065353216);
				}
			}
			else
			{
				if (iParam0->f_104 < 5.0f)
				{
					Function_481(iParam0, 2, "VS_STREAMING");
				}
				iParam0->f_104 = (iParam0->f_104 + 1.0f);
			}
			break;
		
		case 0x00000002:
			if (Function_367(iParam0 + 64) && FLASH_GET_INT("networking", "splashDone") < 0)
			{
				UI_ENTER("LoadingSpinner");
				UI_HIDE("WeaponAmmo");
				UI_EXIT("XpHud");
				HUD_CLEAR_HELP();
				HUD_ENABLE(0);
				UI_EXCLUDE("MPSplashItem.s0");
				UI_EXCLUDE("MPSplashItem.s1");
				UI_EXCLUDE("MPSplashItem.s2");
				UI_EXCLUDE("MPSplashItem.s3");
				UI_SET_TEXT("MPSplashTitle", "Common_Null");
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_REFRESH("MPSplash");
				if (VDIST(*(&Global_79349 + 28), Global_34574) >= 200.0f)
				{
					*(iParam0 + 8) = { StackVal, StackVal, *(&Global_79349 + 28) };
				}
				else
				{
					Function_479(StackVal, StackVal, Global_34574);
					*(iParam0 + 8) = { StackVal, StackVal, Function_479(StackVal, StackVal, Global_34574) };
					iParam0->f_108 = CLEAR_AREA_OF_GRASS(*(iParam0 + 8), 2.0f);
					iParam0->f_112 = CLEAR_AREA_OF_TREE_TYPE(*(iParam0 + 8), 5.0f, "");
				}
				*iParam0 = CREATE_POINT_IN_LAYOUT(cParam1, "CloneAnchor", *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
				iParam0->f_28 = Function_476(cParam1, 0, *iParam0, 1, 0, 0);
				if (!iParam0->f_32)
				{
					SET_CAMERASHOT_TARGET_OBJECT_ROLL(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.0f);
					SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_28, 0), 0.180749f, 1.206322f, -0.246788f, 0.0f, 0.0f, 0.0f, 0);
				}
				if (IS_ACTOR_VALID(Global_34573))
				{
					DESTROY_ACTOR(Global_34573);
				}
				Function_481(iParam0, 4, "VS_LOADING");
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (iParam0->f_20 != 4294967295)
				{
					NET_OBJECT_REPLICATION_MODE_START(15, 0);
					iParam0->f_4 = CREATE_ACTOR_IN_LAYOUT(cParam1, "Clone", iParam0->f_20, *(iParam0 + 8), 0.0f, 0.0f, 0.0f);
					NET_OBJECT_REPLICATION_MODE_END(15);
					SET_AMBIENT_VOICE_NAME(StackVal, Function_210(GET_ACTOR_ENUM(StackVal)));
					SET_ACTOR_INVULNERABILITY(StackVal, 1);
					SET_ACTOR_PROOF(StackVal, 4294967295);
				}
				if (!IS_POINT_LIGHT_VALID(CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(*(iParam0 + 8), "winLight", cParam1) + Vector(-0.75f, 1.5f, -0.75f), 1.0f, 1.0f, 1.0f, 2.5f)))
				{
				}
				if (iParam0->f_32)
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_won_header");
				}
				else
				{
					UI_SET_TEXT("MPSplashTitle", "mp_you_lost_header");
				}
				if (iParam0->f_36 == 4294967295)
				{
					UI_SET_TEXT("MPSplashItem.s0", Function_328(iParam0->f_24));
					Function_475(iParam0->f_24);
				}
				else
				{
					Function_474("MPSplashItem.s0", iParam0->f_36);
					if (iParam0->f_20 != 4294967295)
					{
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("mp_mvp"), UI_GET_STRING(Function_328(iParam0->f_24)), 0, 0);
						UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
					}
					else
					{
						UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
					}
				}
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_REFRESH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				Function_481(iParam0, 3, "VS_WAITING_FOR_READY");
			}
			break;
		
		case 0x00000003:
			if (StackVal || (StackVal && Function_196(HAS_INVENTORY_COMPONENT(iParam0->f_20 != 4294967295), 1, 0x41700000)))
			{
				if (iParam0->f_20 != 4294967295)
				{
					Function_472(StackVal);
					SET_ANIM_SET_FOR_ACTOR(StackVal, "mp_victory", 1);
					SET_ACTION_NODE_FOR_ACTOR(StackVal, "mp_victory");
				}
				PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM_MASTER");
				if (iParam0->f_36 == 4294967295)
				{
					if (iParam0->f_32)
					{
						iParam0->f_52 = "MP_VS_White.ppp";
					}
					else
					{
						iParam0->f_52 = "MP_VS_Red.ppp";
					}
				}
				else if (iParam0->f_32)
				{
					iParam0->f_52 = "MP_VS_Blue.ppp";
				}
				else
				{
					iParam0->f_52 = "MP_VS_Red.ppp";
				}
				PPP_LOAD_PRESET(iParam0->f_52);
				PLAY_SOUND_FRONTEND("DEATH_EFFECT_MASTER");
				Function_482();
				Function_481(iParam0, 6, "VS_SPLASH_APPEAR");
			}
			break;
		
		case 0x00000006:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_SET_STYLE("MPSplashTitle", (2 + iVar0));
				HUD_FADE_IN(0.0f, 1065353216);
				Function_481(iParam0, 7, "VS_SPLASH_APPEAR_WAIT");
			}
			break;
		
		case 0x00000007:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0.5f)
				{
					if (iParam0->f_20 != 4294967295)
					{
						SAY_SINGLE_LINE_STRING(StackVal, "MPTAUNT", 1, 1, 4, 0, 1, 0);
						Function_481(iParam0, 10, "VS_WAIT_FOR_CHATTY_CATHY");
					}
					else if (iParam0->f_104 < 5.0f)
					{
						Function_481(iParam0, 11, "VS_MATCH_BONUS");
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_ANY_SPEECH_PLAYING(StackVal))
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 1.0f)
				{
					Function_481(iParam0, 11, "VS_MATCH_BONUS");
				}
			}
			break;
		
		case 0x0000000B:
			if (iParam0->f_40 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_471(iParam0->f_40);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_281(TO_FLOAT(iParam0->f_40), 0, 1);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_40 >= 0)
			{
				Function_481(iParam0, 12, "VS_AIM_BONUS");
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_44 < 0 && iParam0->f_104 != 0.0f)
			{
				Function_470(iParam0);
				PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_GOLD_MASTER");
				Function_281(TO_FLOAT(iParam0->f_44), 0, 1);
			}
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (iParam0->f_104 < 3.0f || iParam0->f_44 >= 0)
			{
				if (iParam0->f_20 != 4294967295)
				{
					DECOR_SET_BOOL(StackVal, "HolsterTheDamnedThing", 1);
					Function_481(iParam0, 13, "VS_WAIT_FOR_START_HOLSTER");
				}
				else
				{
					Function_481(iParam0, 14, "VS_OUTRO");
				}
			}
			break;
		
		case 0x0000000D:
			iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
			if (DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_104 < 15.0f)
			{
				Function_481(iParam0, 14, "VS_OUTRO");
			}
			break;
		
		case 0x0000000E:
			if (!DECOR_CHECK_EXIST(StackVal, "YeahyeahyeahIHearYa") || iParam0->f_20 != 4294967295)
			{
				iParam0->f_104 = (iParam0->f_104 + GET_UNWARPED_REALTIME_SECONDS());
				if (iParam0->f_104 < 0.6f)
				{
					UI_SET_STYLE("MPSplashTitle", (4 + iVar0));
					Function_481(iParam0, 15, "VS_OUTRO_FADE");
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_162(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_470(int iParam0) //Position: 0x106A9 / 67241
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0->f_44, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", iParam0->f_48);
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_471(int iParam0) //Position: 0x10737 / 67383
{
	char* cVar0[32];
	
	itos(&cVar0, iParam0, 32);
	stradd(&cVar0, " <XP>", 32);
	UI_SET_TEXT("MPSplashItem.s0", "mp_plist_match_bonus");
	UI_SET_STRING("Generic_Dbuffer128_0", &cVar0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	UI_REFRESH("MPSplashTitle");
	return;
}

void Function_472(bool bParam0) //Position: 0x107D6 / 67542
{
	int iVar0;
	
	iVar0 = Function_473();
	GIVE_WEAPON_TO_ACTOR(bParam0, iVar0, 0f, 1, 1);
	ACTOR_SET_WEAPON_AMMO(bParam0, iVar0, 9.0f);
	ACTOR_PUT_WEAPON_IN_HAND(bParam0, iVar0, 1);
	return;
}

int Function_473() //Position: 0x10800 / 67584
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		switch (UNK_0xDB679ED9((*&Global_83591 + 276)[iVar02]))
		{
			case 0x00000027:
			case 0x00000028:
				return (*&Global_83591 + 276)[iVar02];
			
			default:
		}
		iVar0++;
	}
	return 5;
}

void Function_474(char* cParam0, int iParam1) //Position: 0x10845 / 67653
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_286(iParam1, 1) };
	UI_SET_TEXT(cParam0, &Var0);
	return;
}

void Function_475(bool bParam0) //Position: 0x1085C / 67676
{
	struct<16> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(bParam0) };
	UI_SET_STRING("Generic_Dbuffer128_0", &Var0);
	UI_SET_TEXT("MPSplashItem.s1", "Generic_Dbuffer128_0");
	return;
}

var Function_476(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x108B4 / 67764
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_59(), 1, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "MP_Victory", 1, 1);
	}
	Function_477(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_477(var uParam0, int iParam1) //Position: 0x1092C / 67884
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_478(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	return;
}

void Function_478(var uParam0, int iParam1) //Position: 0x10952 / 67922
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -0.004f, 1.051545f, -0.924536f, 9.279476f, -164.752f, 29.3796f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.180749f, 1.166322f, -0.246788f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.512771f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

vector3 Function_479(vector3 vParam0) //Position: 0x109ED / 68077
{
	vector3 vVar0;
	
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 100.0f);
	Function_480(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	return StackVal, StackVal, vParam0;
}

void Function_480(int iParam0) //Position: 0x10A50 / 68176
{
	switch (iParam0)
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

void Function_481(var uParam0, int iParam1, int iParam2) //Position: 0x10B03 / 68355
{
	uParam0->f_56 = iParam1;
	uParam0->f_104 = 0.0f;
	return;
}

void Function_482() //Position: 0x10B14 / 68372
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_483(int iParam0, int iParam1) //Position: 0x10B26 / 68390
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_484(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10B40 / 68416
{
	if (bParam1)
	{
		Function_134(7, 1);
		Function_134(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_146())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					if (Function_433(37) > 4)
					{
						AWARD_ACHIEVEMENT(46);
					}
				}
			}
			else if (Function_485())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(44))
				{
					if (Function_433(37) > 3)
					{
						AWARD_ACHIEVEMENT(44);
					}
				}
			}
		}
		Function_15(iParam0 + 44, 4);
	}
	else if (bParam3)
	{
		Function_483(37, 0);
		Function_7(iParam0 + 44, 4);
	}
	else
	{
		Function_134(6, 1);
		Function_483(37, 0);
		Function_7(iParam0 + 44, 4);
	}
	if (bParam2)
	{
		Function_15(iParam0 + 44, 256);
	}
	else
	{
		Function_7(iParam0 + 44, 256);
	}
}

bool Function_485() //Position: 0x10BEE / 68590
{
	return Function_147(16);
}

bool Function_486(var uParam0, int iParam1) //Position: 0x10BF9 / 68601
{
	switch (iParam1)
	{
		case 0xFFFFFFFE:
			Function_465(uParam0, "MP_endgame_OneTeamLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFD:
			Function_465(uParam0, "MP_endgame_EverybodyLeft", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFC:
			Function_465(uParam0, "MP_endgame_OutOfTime", 0, 0, 0, 0);
			return 1;
			break;
		
		case 0xFFFFFFFB:
			Function_465(uParam0, "MP_Endgame_draw", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_487(var uParam0, var uParam1) //Position: 0x10CB4 / 68788
{
	uParam0->f_12 = 2;
	uParam1 = uParam1;
	return;
}

int Function_488() //Position: 0x10CC3 / 68803
{
	return Function_489(&Local_217 + 36, &Local_307, 0);
}

int Function_489(int iParam0, int iParam1, bool bParam2) //Position: 0x10CD4 / 68820
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	if (Function_250(iParam0 + 32, iParam1 + 12))
	{
		if (!bParam2)
		{
			iVar7 = GET_LOCAL_SLOT();
			if (iVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 24)[iVar7];
				if (bVar8 != 4294967295)
				{
					bVar6 = Function_353(Function_44(), &vVar0, &vVar3, bVar8, 16);
				}
				else
				{
					return 0;
				}
			}
			return 2;
		}
		bVar6 = Function_353(Function_44(), &vVar0, &vVar3, bLocal_107, bLocal_106);
		if (bVar6)
		{
			if (Function_201(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
			{
				return 1;
			}
			return 2;
		}
		return 0;
	}
	return 2;
}

bool Function_490(char* cParam0) //Position: 0x10D58 / 68952
{
	return IS_OBJECT_VALID(Function_324(cParam0));
}

void Function_491(int iParam0) //Position: 0x10D66 / 68966
{
	UI_EXIT("HudMPNoFun");
	UI_EXIT("MPSplash");
	*iParam0 = 12;
	return;
}

void Function_492(int iParam0) //Position: 0x10D8F / 69007
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_493(int iParam0, vector3 vParam1) //Position: 0x10DA3 / 69027
{
	Function_15(iParam0 + 44, 512);
	*(iParam0 + 72) = { StackVal, StackVal, vParam1 };
}

vector3 Function_494(char* cParam0, var uParam1) //Position: 0x10DBF / 69055
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_24(uParam1, 8))
	{
		iVar0 = Function_346(cParam0, 0);
		iVar1 = Function_346(cParam0, 1);
		Function_219(iVar0);
		Function_219(iVar1);
		return StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(Function_219(iVar1), Function_219(iVar0), StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f);
	}
	iVar2 = Function_324(cParam0);
	Function_219(iVar2);
	return StackVal, StackVal, Function_219(iVar2);
}

int Function_495() //Position: 0x10DFE / 69118
{
	return Function_496(&Local_217 + 36, &Local_307);
}

int Function_496(int iParam0, int iParam1) //Position: 0x10E0E / 69134
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Function_250(iParam0 + 32, iParam1 + 12))
	{
		iVar6 = Function_135();
		if (iVar6 != 4294967295)
		{
			iVar7 = GET_LOCAL_SLOT();
			if (iVar7 != 4294967295)
			{
				bVar8 = (*iParam1 + 24)[iVar7];
				if (bVar8 != 4294967295)
				{
					if (Function_355(Function_44(), iVar6, &vVar0, &vVar3, bVar8, (*iParam1 + 92)[iVar6]))
					{
						if (Function_201(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 0, 1))
						{
							return 1;
						}
						return 2;
					}
					return 0;
				}
				return 0;
			}
			return 2;
		}
		return 2;
	}
	return 2;
}

void Function_497(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10E8A / 69258
{
	if (bParam1)
	{
		*iParam0 = 9;
	}
	else if (bParam4)
	{
		*iParam0 = 8;
	}
	else
	{
		*iParam0 = 0;
	}
	iParam0->f_64 = 0.0f;
	iParam0->f_44 = 0;
	iParam0->f_48 = 0;
	iParam0->f_152 = 4294967295;
	iParam0->f_12 = 2;
	Function_509(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_195(iParam0 + 192, 1, 1, 1);
	}
	iParam0->f_116 = Global_78617.f_2648;
	iParam0->f_108 = 4294967295;
	Function_408(iParam0, 2);
	Function_507(iParam0);
	Function_274(iParam0);
	Function_506(iParam0);
	Function_504(iParam0);
	Function_502(iParam0);
	Function_500(iParam0);
	Function_498(iParam0);
	if (bParam2)
	{
		Function_15(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_15(iParam0 + 44, 8);
		Function_189(iParam0 + 192);
	}
	Function_270(iParam0, bParam4);
	Function_36(8388608, 0);
}

void Function_498(var uParam0) //Position: 0x10F52 / 69458
{
	Function_409(uParam0, 69473);
	return;
}

int Function_499() //Position: 0x10F61 / 69473
{
	return 0;
}

void Function_500(var uParam0) //Position: 0x10F68 / 69480
{
	Function_467(uParam0, 69495);
	return;
}

int Function_501() //Position: 0x10F77 / 69495
{
	return 1;
}

void Function_502(var uParam0) //Position: 0x10F7E / 69502
{
	Function_418(uParam0, 69517);
	return;
}

void Function_503() //Position: 0x10F8D / 69517
{
	return;
}

void Function_504(int iParam0) //Position: 0x10F93 / 69523
{
	Function_505(iParam0, 69517);
	return;
}

void Function_505(var uParam0, int iParam1) //Position: 0x10FA2 / 69538
{
	uParam0->f_168 = iParam1;
	return;
}

void Function_506(int iParam0) //Position: 0x10FAE / 69550
{
	Function_428(iParam0, 69517);
	return;
}

void Function_507(int iParam0) //Position: 0x10FBD / 69565
{
	Function_413(iParam0, 69580);
	return;
}

void Function_508(var uParam0) //Position: 0x10FCC / 69580
{
	uParam0 = uParam0;
	return;
}

void Function_509(int iParam0, struct<57> Param1) //Position: 0x10FD6 / 69590
{
	*(iParam0 + 192) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_510(int iParam0, bool bParam1) //Position: 0x10FEA / 69610
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[2];
	int iVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	
	Function_304(1, 1);
	iParam0->f_16 = 1;
	Function_304(2, 0);
	Function_492(iParam0);
	iParam0->f_20 = 4294967295;
	if (bParam1)
	{
		Function_511(&iVar1, &iVar2, 1, 1);
		(*iParam0 + 92)[0] = (iVar1 + (iVar1 % 2));
		(*iParam0 + 92)[1] = (iVar2 + (iVar2 % 2));
		iVar0 = 0;
		while (iVar0 <= 16)
		{
			(*iParam0 + 24)[iVar0] = 4294967295;
			if (IS_SLOT_VALID(iVar0))
			{
				if (Function_140(bVar0))
				{
					if (Function_137(bVar0, 2048, 1))
					{
						iVar6 = Function_136(bVar0, 0, 0);
						if (iVar6 > 0)
						{
							(*iParam0 + 24)[bVar0] = uVar3[iVar6];
							uVar3[iVar6]++;
						}
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		fVar7 = 0.0f;
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_293(bVar0))
			{
				if (Function_137(bVar0, 2048, 1))
				{
					bVar8++;
				}
			}
			bVar0++;
		}
		fVar9 = (TO_FLOAT(16) / TO_FLOAT(bVar8));
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (Function_293(bVar0))
			{
				if (Function_137(bVar0, 2048, 1))
				{
					(*iParam0 + 24)[bVar0] = FLOOR((fVar7 * fVar9));
					fVar7 = (fVar7 + 1.0f);
				}
				else
				{
					(*iParam0 + 24)[bVar0] = 4294967295;
				}
			}
			else
			{
				(*iParam0 + 24)[bVar0] = 4294967295;
			}
			bVar0++;
		}
	}
	Function_296(iParam0 + 12);
	return;
}

void Function_511(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x11143 / 69955
{
	int iVar0;
	
	*uParam0 = 0;
	*uParam1 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		switch (Function_136(iVar0, uParam2, uParam3))
		{
			case 0x00000000:
				*uParam0++;
				break;
			
			case 0x00000001:
				*uParam1++;
				break;
		}
		iVar0++;
	}
}

bool Function_512(int iParam0) //Position: 0x11196 / 70038
{
	if (!IS_OBJECT_VALID(Function_346(iParam0, 0)))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Function_346(iParam0, 1)))
	{
		return 0;
	}
	return 1;
}

bool Function_513() //Position: 0x111BB / 70075
{
	return (Function_385() == 4294967295 && !Function_384());
}

var Function_514(int iParam0) //Position: 0x111CB / 70091
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (IS_SLOT_VALID(iVar0))
		{
			if (Function_140(bVar0))
			{
				if (Function_137(bVar0, 2048, 1))
				{
					Stack.Push(bVar0);
					Call_Loc(iParam0);
					if (StackVal)
					{
						iVar1 = 1;
					}
					else
					{
						NET_LOG(1, "GameSync", "Slot #%s, (%s) invalid because their gamedata isn't valid yet", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
						iVar2 = 0;
					}
				}
				else
				{
					NET_LOG(1, "GameSync", "Slot #%s, (%s) skipped because they haven't joined the game", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
				}
			}
			else
			{
				NET_LOG(1, "GameSync", "Slot #%s, (%s)'s slot is valid, but has invalid CBA data", I2STR(bVar0), GET_SLOT_NAME(bVar0), 0, 0);
			}
		}
		bVar0++;
	}
	return (iVar1 && iVar2);
}

var Function_515(int iParam0) //Position: 0x1132C / 70444
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_333, iParam0);
}

void Function_516() //Position: 0x1133A / 70458
{
	if (bLocal_366)
	{
		Function_150();
		PRINTSTRING("Game Started");
		PRINTNL();
	}
	return;
}

void Function_517(int iParam0, bool bParam1) //Position: 0x1135E / 70494
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(iParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", iParam0);
	}
	return;
}

void Function_518() //Position: 0x11393 / 70547
{
	int iVar0;
	
	iLocal_216 = 0;
	Local_217.f_4 = 0;
	Local_217.f_24 = 0;
	Local_217.f_352 = 0;
	Local_217.f_356 = 0;
	Function_555(&Local_217 + 36, &Local_307, Function_146());
	Function_404(4294967295);
	REGISTER_HOST_BROADCAST_VARIABLES(&Local_307, 26);
	REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_333, 33);
	Function_554(0);
	Function_547(0);
	iVar0 = NET_GET_PLAYMODE();
	if (iVar0 != 1 || iVar0 != 3)
	{
		Global_84364.f_776 = 4294967295;
	}
	else if (Function_146())
	{
		Global_84364.f_776 = Function_145();
	}
	else
	{
		Global_84364.f_776 = Function_141();
	}
	Function_47(0);
	if (IS_ACTOR_VALID(Function_22()))
	{
		DESTROY_ACTOR(Function_22());
	}
	Function_545();
	Function_537(Function_44(), &uLocal_367, 0, 1);
	if (Function_146())
	{
		Function_534(&Local_217 + 148, 1, 72877, UI_GET_STRING("TDM_team_fmt_cpp"));
	}
	else
	{
		Function_534(&Local_217 + 148, 0, 72590, UI_GET_STRING("TDM_team_fmt_cpp"));
	}
	Function_519();
	return;
}

void Function_519() //Position: 0x11487 / 70791
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 70835);
	NET_SCRIPTMSG_REGISTER_HANDLER(5, 70815);
	return;
}

void Function_520(var uParam0) //Position: 0x1149F / 70815
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &iVar0, 1);
	Function_404(iVar0);
	return;
}

void Function_521(var uParam0) //Position: 0x114B3 / 70835
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	Function_529(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uLocal_367, Var0);
	if (Var0.f_32 >= 0)
	{
		return;
	}
	if (Function_513())
	{
		return;
	}
	switch (StackVal)
	{
		case default:
			break;
		
		case 0x00000002:
			if (StackVal == GET_LOCAL_SLOT())
			{
				Function_527(0, &Local_217 + 28);
			}
			break;
		
		case 0x00000009:
			if (IS_SLOT_VALID(Var0))
			{
				if (StackVal || !Function_146() == Function_136(Function_136(Var0, 1, 0), 1, 0))
				{
					if (Var0 == GET_LOCAL_SLOT())
					{
						Function_526(CEIL(25.0f));
						Function_281(25.0f, "nXP_assist", 1);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (StackVal && IS_SLOT_VALID(IS_SLOT_VALID(Var0)))
			{
				bVar11 = Function_146();
				if (StackVal || !bVar11 == Function_136(Function_136(Var0, 1, 0), 1, 0))
				{
					if (StackVal == GET_LOCAL_SLOT())
					{
						Function_526(CEIL(50.0f));
						Function_281(50.0f, 0, 1);
						Function_524(&Local_217 + 36, &Local_307, Var0);
						if (Function_191(32))
						{
							if (Function_373(&Local_307))
							{
								if ((&Local_217 + 36)->f_104 > 3)
								{
									if (!HAS_ACHIEVEMENT_BEEN_PASSED(60))
									{
										AWARD_ACHIEVEMENT(60);
									}
								}
							}
							if (Local_217.f_352 <= 27)
							{
								if (Var0.f_28)
								{
									Local_217.f_352++;
									if (Local_217.f_352 > 5)
									{
										Local_217.f_352 = 100;
										if (!HAS_ACHIEVEMENT_BEEN_PASSED(63))
										{
											AWARD_ACHIEVEMENT(63);
										}
									}
								}
							}
							if (Local_217.f_356 <= 15)
							{
								if (Var0.f_12 != 22 || Var0.f_12 != 25)
								{
									Local_217.f_356++;
									if (Local_217.f_356 > 3)
									{
										Local_217.f_356 = 100;
										if (!HAS_ACHIEVEMENT_BEEN_PASSED(61))
										{
											AWARD_ACHIEVEMENT(61);
										}
									}
								}
							}
						}
					}
					if (bVar11)
					{
						Function_522(Function_523(StackVal), CEIL(50.0f));
					}
				}
			}
			break;
	}
	return;
}

void Function_522(int iParam0, int iParam1) //Position: 0x1167E / 71294
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = (Global_78578[iParam02] + iParam1);
		Function_296(&Global_78578 + 92);
	}
	return;
}

int Function_523(int iParam0) //Position: 0x116B3 / 71347
{
	return Function_136(iParam0, 1, 0);
}

void Function_524(var uParam0, var uParam1, int iParam2) //Position: 0x116C0 / 71360
{
	struct<5> Var0;
	
	if (uParam1->f_20 == 4294967295)
	{
		Var0.f_4 = Function_525(uParam0->f_104);
		uParam0->f_104++;
		UI_SET_TEXT("XPComboLevel", Function_300(uParam0->f_104));
		UI_REFRESH("XPComboLevel");
		PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_KILL_RISER_MASTER", &Var0);
		if (iParam2 == uParam0->f_96)
		{
			Function_281(100.0f, "xp_standoff_kill_target", 1);
		}
	}
	return;
}

var Function_525(int iParam0) //Position: 0x1175E / 71518
{
	return (4294966996 + iParam0 * 100);
}

void Function_526(int iParam0) //Position: 0x1176C / 71532
{
	Function_251(0, iParam0);
	return;
}

void Function_527(int iParam0, int iParam1) //Position: 0x11778 / 71544
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_22();
	iVar1 = Function_528(iParam0, iParam1);
	switch (iParam0)
	{
		case 0x00000000:
			switch (iVar1)
			{
				case 0x00000002:
					if (IS_ACTOR_VALID(bVar0))
					{
						if (IS_ACTOR_ALIVE(bVar0))
						{
							Function_382("mp_griefing_teamkill_offense", 0x41200000, 1, 0, 2, 1, 0);
							KILL_ACTOR(Function_22());
						}
					}
					break;
				
				case 0x00000000:
					Function_382("mp_griefing_teamkill_warning", 0x41200000, 1, 0, 2, 1, 0);
					break;
				
				case 0x00000001:
					Function_382("mp_griefing_teamkill_warning_2", 0x41200000, 1, 0, 2, 1, 0);
					break;
			}
			break;
	}
	return;
}

int Function_528(int iParam0, bool bParam1) //Position: 0x1185A / 71770
{
	(*bParam1)[iParam0]++;
	switch ((*bParam1)[iParam0])
	{
		case 0x00000001:
			return 0;
		
		case 0x00000002:
			return 1;
		
		default:
	}
	return 2;
}

void Function_529(var uParam0, struct<29> Param1) //Position: 0x1188A / 71818
{
	int iVar0;
	struct<9> Var1;
	
	iVar0 = GET_LOCAL_SLOT();
	if (StackVal == 1)
	{
		if (StackVal != iVar0)
		{
			if (!Function_146() || Function_135() != Function_136(Param1, 1, 0))
			{
				Function_531(StackVal, StackVal, uParam0, *(&Param1 + 16));
			}
		}
	}
	if (Param1 == iVar0)
	{
		Function_150();
		PRINTSTRING("Died,");
		bVar4 = Function_22();
		if (IS_ACTOR_VALID(bVar4))
		{
			Function_107(bVar4, &vVar1);
			PRINTFLOAT(vVar1.x);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.y);
			PRINTSTRING(",");
			PRINTFLOAT(vVar1.z);
			PRINTSTRING(",");
		}
		else
		{
			PRINTSTRING(",,,");
		}
		iVar5 = Param1.f_12;
		if (Function_186(iVar5))
		{
			GET_WEAPON_DISPLAY_NAME(iVar5);
		}
		PRINTSTRING(",");
		bVar6 = true;
		switch (StackVal)
		{
			case 0x00000003:
				PRINTSTRING("nSuicide,,");
				bVar6 = false;
				break;
			
			case 0x00000001:
				PRINTSTRING("Player,");
				break;
			
			case 0x00000002:
				PRINTSTRING("nTeamKill,");
				break;
			
			case 0x00000006:
				PRINTSTRING("KO,");
				break;
			
			case 0x00000004:
				PRINTSTRING("NPC,");
				PRINTSTRING(Function_530(StackVal));
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000005:
				PRINTSTRING("Animal,");
				PRINTINT(StackVal);
				PRINTSTRING(",");
				bVar6 = false;
				break;
			
			case 0x00000000:
				PRINTSTRING("nDefault,,");
				bVar6 = false;
				break;
			
			default:
				PRINTSTRING("Other,,");
				bVar6 = false;
				break;
		}
		if (bVar6)
		{
			bVar4 = GET_SLOT_ACTOR(StackVal);
			if (IS_ACTOR_VALID(bVar4))
			{
				Function_107(bVar4, &vVar1);
				PRINTFLOAT(vVar1.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar1.z);
				PRINTSTRING(",");
			}
			else
			{
				PRINTSTRING(",,,");
			}
		}
		else
		{
			PRINTSTRING(",,,");
		}
		if (Param1.f_28)
		{
			PRINTSTRING("HeadShot");
		}
		PRINTNL();
	}
}

var Function_530(int iParam0) //Position: 0x11A96 / 72342
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000019:
			iVar0 = "gang_name_dnd";
			break;
		
		case 0x0000000E:
			iVar0 = "gang_name_rustlers";
			break;
		
		case 0x00000018:
			iVar0 = "gang_name_treasure";
			break;
		
		default:
			iVar0 = "proc_grp_neutral";
			break;
	}
	return iVar0;
}

void Function_531(int iParam0, vector3 vParam1) //Position: 0x11B18 / 72472
{
	(iParam0 + 1460[2106])->f_416 = ((iParam0 + 1460[2106])->f_416 + 1 % 16);
	*(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166]) = { StackVal, StackVal, vParam1 };
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_12 = NET_GET_NET_TIME();
	(iParam0 + 1460[2106] + 28[(iParam0 + 1460[2106])->f_4166])->f_16 = 1;
}

var Function_532(int iParam0, int iParam1) //Position: 0x11B8E / 72590
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = GET_LOCAL_SLOT();
	iVar2 = Function_440();
	iVar3 = 4294967295;
	iVar4 = 4294967295;
	iVar5 = 0;
	iVar6 = 4294967295;
	iVar7 = 4294967295;
	iVar8 = 0;
	while (iVar8 <= 16)
	{
		if (iVar8 != iVar1)
		{
			if (Function_293(iVar8))
			{
				iVar9 = Function_399(iVar8);
				if (iVar9 >= iVar2)
				{
					iVar5++;
					if (iVar9 >= iVar4)
					{
						iVar4 = iVar9;
						iVar3 = iVar8;
					}
				}
				else if (iVar9 >= iVar7)
				{
					iVar7 = iVar9;
					iVar6 = iVar8;
				}
			}
		}
		iVar8++;
	}
	Function_533(iParam0, iVar5, &iVar0);
	Function_533(iParam0 + 4, iVar2, &iVar0);
	Function_533(iParam0 + 8, iVar1, &iVar0);
	if (*iParam0 == 0)
	{
		Function_533(iParam1, 1, &iVar0);
		Function_533(iParam1 + 4, iVar7, &iVar0);
		Function_533(iParam1 + 8, iVar6, &iVar0);
	}
	else
	{
		Function_533(iParam1, 0, &iVar0);
		Function_533(iParam1 + 4, iVar4, &iVar0);
		Function_533(iParam1 + 8, iVar3, &iVar0);
	}
	return iVar0;
}

int Function_533(int iParam0, int iParam1, int iParam2) //Position: 0x11C74 / 72820
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

void Function_534(var uParam0, var uParam1, int iParam2, char* cParam3) //Position: 0x11C8E / 72846
{
	uParam0->f_76 = 0;
	uParam0->f_64 = uParam1;
	uParam0->f_48 = iParam2;
	uParam0->f_60 = cParam3;
}

var Function_535(int iParam0, int iParam1) //Position: 0x11CAD / 72877
{
	int iVar0;
	
	Function_533(iParam0 + 4, Function_536(), &iVar0);
	Function_533(iParam1 + 4, Function_402(Function_330(Function_135())), &iVar0);
	return iVar0;
}

int Function_536() //Position: 0x11CD5 / 72917
{
	if (Function_135() > 0 || Function_135() < 2)
	{
		return 4294967295;
	}
	return Function_402(Function_135());
}

int Function_537(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x11CF1 / 72945
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar14;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(iVar0))
	{
		return 0;
	}
	ITERATE_IN_LAYOUT(iVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(iVar0, 9);
	if (bLocal_366)
	{
		Function_150();
		PRINTSTRING("Init_Layout,");
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTNL();
	}
	Function_544(iParam1 + 1460[0106]);
	Function_544(iParam1 + 1460[1106]);
	Function_544(iParam1 + 1460[2106]);
	(*iParam1 + 1460)[1106] = 0.1f;
	(*iParam1 + 1460)[2106] = -3.0f;
	(iParam1 + 1460[2106])->f_12 = 0.0f;
	(iParam1 + 1460[2106])->f_20 = 0.0f;
	(iParam1 + 1460[0106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_420 = 1;
	(iParam1 + 1460[2106])->f_416 = 0;
	Function_543(iParam1);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = 1;
		iVar4 = Function_135();
	}
	else
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		iVar4 = 4294967295;
	}
	iParam1->f_1444 = 0;
	iVar3 = iVar1;
	while (iVar3 < iVar2)
	{
		if (bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_540(iVar3) };
			ITERATE_ON_PARTIAL_NAME(iVar0, &Var8);
		}
		else
		{
			ITERATE_ON_PARTIAL_NAME(iVar0, Function_539());
		}
		bVar14 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(iVar0));
		while (IS_VOLUME_VALID(bVar14) && iParam1->f_1444 > 60)
		{
			if (bLocal_366)
			{
				Function_150();
				PRINTSTRING("Init_");
				PRINTSTRING(GET_OBJECT_NAME(bVar14));
				PRINTSTRING(",");
				GET_VOLUME_CENTER(bVar14, &vVar5);
				PRINTFLOAT(vVar5.x);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.y);
				PRINTSTRING(",");
				PRINTFLOAT(vVar5.z);
				PRINTSTRING(",");
			}
			if (iVar3 == iVar4)
			{
				(*iParam1)[iParam1->f_14446] = bVar14;
				if (DECOR_CHECK_EXIST(bVar14, "IntSpawn"))
				{
					iParam1[iParam1->f_14446]->f_4 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bVar14, "IntSpawn"));
					if (bLocal_366)
					{
						PRINTSTRING(GET_OBJECT_NAME(StackVal));
					}
				}
				GET_VOLUME_CENTER(bVar14, iParam1[iParam1->f_14446] + 8);
				iParam1->f_1444++;
			}
			if (bLocal_366)
			{
				PRINTNL();
			}
			bVar14 = GET_VOLUME_FROM_OBJECT(OBJECT_ITERATOR_NEXT(iVar0));
		}
		if (iParam1->f_1444 > 60)
		{
		}
		iVar3++;
	}
	iParam1->f_1448 = FIND_VOLUME_IN_LAYOUT(bParam0, "Interiors_Set");
	if (IS_VOLUME_VALID(iParam1->f_1448))
	{
	}
	if (iParam1->f_1444 < 0)
	{
	}
	if (bLocal_366)
	{
		Function_150();
		PRINTSTRING("Init_Respawn,");
		PRINTINT(iVar4);
		PRINTSTRING(",");
		PRINTINT(iParam1->f_1444);
		PRINTNL();
	}
	DESTROY_ITERATOR(iVar0);
	if (bParam3)
	{
		Function_538(iParam1 + 1460[0106], "Enemy Players");
		Function_538(iParam1 + 1460[1106], "Friendly Players");
		Function_538(iParam1 + 1460[2106], "Player Deaths");
	}
	return 1;
}

void Function_538(var uParam0, var uParam1) //Position: 0x11FE4 / 73700
{
	return;
}

var Function_539() //Position: 0x11FEA / 73706
{
	return "nSpawnVol_";
}

struct<24> Function_540(var uParam0) //Position: 0x11FFC / 73724
{
	char* cVar0[24];
	
	strcpy(&cVar0, Function_542(), 24);
	stradd(&cVar0, Function_541(uParam0), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_541(int iParam0) //Position: 0x12018 / 73752
{
	switch (iParam0)
	{
		case 0x00000000:
			return "A";
		
		case 0x00000001:
			return "B";
		
		case 0x00000002:
			return "C";
		
		case 0x00000003:
			return "D";
		
		case 0x00000004:
			return "E";
		
		case 0x00000005:
			return "F";
		
		case 0x00000006:
			return "G";
		
		case 0x00000007:
			return "H";
		
		case 0x00000008:
			return "I";
		
		case 0x00000009:
			return "J";
		
		case 0x0000000A:
			return "K";
		
		case 0x0000000B:
			return "L";
		
		case 0x0000000C:
			return "M";
		
		case 0x0000000D:
			return "N";
		
		case 0x0000000E:
			return "O";
		
		case 0x0000000F:
			return "P";
		
		default:
	}
	return "Z";
}

var Function_542() //Position: 0x120D9 / 73945
{
	return "T_SpawnVol_";
}

void Function_543(int iParam0) //Position: 0x120ED / 73965
{
	iParam0->f_1452 = 4294967295;
	Function_421(iParam0 + 1452);
	return;
}

void Function_544(var uParam0) //Position: 0x12101 / 73985
{
	uParam0->f_4 = 225.0f;
	uParam0->f_8 = 157.0f;
	uParam0->f_12 = 625.0f;
	uParam0->f_16 = 53.0f;
	uParam0->f_20 = 2500.0f;
	uParam0->f_24 = 11.0f;
	*uParam0 = -1.0f;
	return;
}

void Function_545() //Position: 0x12141 / 74049
{
	int iVar0;
	
	if (NET_IS_SESSION_HOST())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Function_546(iVar0, 0);
			iVar0++;
		}
	}
	return;
}

void Function_546(int iParam0, int iParam1) //Position: 0x12165 / 74085
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return;
	}
	if (NET_IS_SESSION_HOST())
	{
		Global_78578[iParam02] = iParam1;
		Function_296(&Global_78578 + 92);
	}
	return;
}

void Function_547(int iParam0) //Position: 0x12191 / 74129
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_81();
	Function_82();
	switch (iParam0)
	{
		case 0x00000001:
			Function_259(12288);
			Function_34(16384);
			break;
		
		case 0x00000002:
			Function_259(20480);
			Function_34(8192);
			break;
		
		default:
			Function_34(28672);
			break;
	}
	Function_34(2048);
	Function_548(0, 0);
	Function_215();
	return;
}

void Function_548(bool bParam0, bool bParam1) //Position: 0x12255 / 74325
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_553(&Global_78480);
	Function_552(&Global_78480);
	uVar0 = Function_433(37);
	Function_550();
	if (!bParam0)
	{
		Function_483(37, uVar0);
	}
	Function_36(18264, 0);
	Function_549();
	return;
}

void Function_549() //Position: 0x122A1 / 74401
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_550() //Position: 0x122C0 / 74432
{
	Function_551(&Global_78480 + 220);
	return;
}

void Function_551(int iParam0) //Position: 0x122CF / 74447
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_552(int iParam0) //Position: 0x122F0 / 74480
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_553(int iParam0) //Position: 0x12314 / 74516
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_554(int iParam0) //Position: 0x12338 / 74552
{
	Function_252(0, iParam0);
	return;
}

int Function_555(int iParam0, int iParam1, bool bParam2) //Position: 0x12344 / 74564
{
	Function_559(iParam0 + 32);
	Function_559(iParam1 + 12);
	iParam0->f_96 = 4294967295;
	if (NET_IS_SESSION_HOST())
	{
		Function_510(iParam1, bParam2);
	}
	*iParam0 = 0;
	Function_366(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	UI_SET_STRING("mp_killchain_header", UI_GET_STRING("mp_plist_kills1"));
	iParam0->f_24 = 0;
	if (bParam2)
	{
		Function_278(iParam0, 8);
		Function_558(Function_44(), iParam0);
		Function_457(iParam0 + 48, Function_295(), 5, 0);
		Function_457(iParam0 + 48, Function_557(), 8, 0);
	}
	else
	{
		Function_556(Function_44(), iParam0);
	}
	UI_ENTER("HudMPNoFun");
	return 1;
}

void Function_556(var uParam0, var uParam1) //Position: 0x123F5 / 74741
{
	int iVar0;
	
	iVar0 = Function_324(uParam0);
	if (!IS_OBJECT_VALID(iVar0))
	{
		return;
	}
	Function_219(bVar0);
	uParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(uParam0, "ShowdownStayOut", 2, Function_219(bVar0), 0.0f, 0.0f, 0.0f, (4.0f * 3.0f), (4.0f * 3.0f), (4.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam1->f_84);
	return;
}

var Function_557() //Position: 0x12447 / 74823
{
	return "Custom/MP_Showdown";
}

void Function_558(char* cParam0, int iParam1) //Position: 0x12462 / 74850
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	var uVar26;
	
	iVar0 = Function_346(cParam0, 0);
	iVar1 = Function_346(cParam0, 1);
	if (!(IS_OBJECT_VALID(iVar0) && IS_OBJECT_VALID(iVar1)))
	{
		return;
	}
	if (!(GET_OBJECT_POSITION(bVar0, &vVar2) && GET_OBJECT_POSITION(bVar1, &vVar5)))
	{
		return;
	}
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
	VSCALE(&vVar8, 0.5f);
	vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
	VNORMALIZE(&vVar11);
	vVar17 = { 0.0f, -1.0f, 0.0f };
	VCROSS(&vVar17, &vVar11, &vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	VNORMALIZE(&vVar14);
	SET_OBJECT_POSITION(bVar0, vVar23);
	SET_OBJECT_ORIENTATION(bVar0, 0.0f, UNK_0x9C40E671(&vVar11), 0.0f);
	DECOR_SET_VECTOR(bVar0, "Right", vVar14);
	vVar20 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar11, vVar8, StackVal) * Vector(8.0f, 8.0f, 8.0f), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f), StackVal, StackVal) };
	if (!FIND_GROUND_INTERSECTION(&vVar20, 3.0f, &vVar23, &uVar26))
	{
		vVar23 = { StackVal, StackVal, vVar20 };
	}
	SET_OBJECT_POSITION(bVar1, vVar23);
	SET_OBJECT_ORIENTATION(bVar1, 0.0f, (UNK_0x9C40E671(&vVar11) + 180.0f), 0.0f);
	DECOR_SET_VECTOR(bVar1, "Right", vVar14);
	iParam1->f_84 = CREATE_VOLUME_IN_LAYOUT(cParam0, "ShowdownStayOut", 2, vVar8, vVar11, (8.0f * 3.0f), (8.0f * 3.0f), (8.0f * 3.0f));
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_84);
	return;
}

void Function_559(var uParam0) //Position: 0x125DB / 75227
{
	*uParam0 = 0;
	return;
}

