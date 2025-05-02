//Decompiled with MagicRDR v1.0
//Function Count : 626
//Statics Count : 847
//Natives Count : 804
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1721> Local_4 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	int iScriptParam_6 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_806 = 4294967295;
	iLocal_807 = 4294967295;
	fLocal_809 = -1.0f;
	vLocal_816 = { -695,36f, 63,24877f, 3317,787f };
	iLocal_819 = 4294967295;
	iLocal_820 = 4294967295;
	iLocal_828 = 0;
	iLocal_829 = 0;
	iLocal_830 = 0;
	iLocal_831 = 0;
	iLocal_832 = 0;
	iLocal_833 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
	iLocal_837 = 0;
	iLocal_838 = 0;
	iLocal_839 = 3;
	Local_436 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_840 };
	bLocal_545 = 99;
	iLocal_546 = 6;
	iLocal_538 = 1000;
	while (Function_318())
	{
		Function_227();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x98 / 152
{
	Function_206();
	ENABLE_CHILD_SECTOR("chu_cantina01Props01x");
	ENABLE_CHILD_SECTOR("chu_corral01x");
	ENABLE_CHILD_SECTOR("chu_corral01Props01x");
	ENABLE_CHILD_SECTOR("chu_bank01x");
	ENABLE_CHILD_SECTOR("chu_bank01Props01x");
	ENABLE_CHILD_SECTOR("chu_church_int_01x");
	ENABLE_CHILD_SECTOR("chu_hotel01Props01x");
	ENABLE_CHILD_SECTOR("chu_hotel01x");
	ENABLE_CHILD_SECTOR("chu_cityHall_int_01x");
	ENABLE_CHILD_SECTOR("chu_market01x");
	ENABLE_CHILD_SECTOR("chu_wall02x");
	ENABLE_CHILD_SECTOR("chu_wall01props01x");
	ENABLE_CHILD_SECTOR("chu_flags01x");
	DECOR_REMOVE(Global_34573, "NoGringoCamera");
	Function_205(&(Global_29008[Global_30693[0]]), 384);
	Function_204(4194304);
	Function_201(6, 1, 0, 1, 1);
	Function_201(5, 1, 0, 1, 1);
	Function_201(7, 1, 0, 1, 1);
	Function_200(bLocal_435);
	Function_200(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_199();
	STREAMING_UNLOAD_SCENE();
	Function_173(bLocal_575, 0, 0, 1, 0, 0, 0, 0);
	Function_169(&bLocal_443);
	Function_169(&bLocal_465);
	Function_169(&bLocal_469);
	Function_169(&bLocal_488);
	Function_167();
	if (IS_ITERATOR_VALID(bLocal_548))
	{
		DESTROY_ITERATOR(bLocal_548);
	}
	RELEASE_LAYOUT_REF(bLocal_435);
	if (bLocal_574)
	{
		Function_24(Local_436, 1, 1, 1, 0);
	}
	else if (bLocal_575)
	{
		Function_20(Local_436);
	}
	else
	{
		Function_2(Local_436);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x28E / 654
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x2AF / 687
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2CA / 714
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2EB / 747
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x301 / 769
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x39D / 925
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3BE / 958
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

void Function_9() //Position: 0x404 / 1028
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x41D / 1053
{
	int iVar0;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x470 / 1136
{
	struct<4> Var0;
	
	if (!Function_18(bParam1))
	{
		return;
	}
	switch (Function_15(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_13(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_15(bParam1), Function_13(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x594 / 1428
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5B9 / 1465
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5D9 / 1497
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5F0 / 1520
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x60B / 1547
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
			Function_17(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x852 / 2130
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x87B / 2171
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_19(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_19(int iParam0) //Position: 0x89F / 2207
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x8B4 / 2228
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x8D2 / 2258
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_18(bParam0))
	{
		return;
	}
	iVar0 = Function_15(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0x978 / 2424
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x9A2 / 2466
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBF8 / 3064
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_15(bParam0) == 1)
	{
		iVar2 = Function_13(bParam0);
		Function_162(&(Global_3422[iVar240]));
		Function_161(4194304);
		if (bParam3)
		{
			Function_114(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_108(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_114(iVar2, &uVar0, 0);
		}
		bVar1 = Function_107();
		if (bParam1)
		{
			Function_91(iVar2, bParam0, bVar1);
			Function_90();
		}
	}
	Function_37(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_29(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_15(bParam0) == 1)
		{
			iVar2 = Function_13(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_25();
}

void Function_25() //Position: 0xCE5 / 3301
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_26(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_26(int iParam0, bool bParam1) //Position: 0xD15 / 3349
{
	int iVar0;
	
	iVar0 = Function_27(iParam0);
	if (!Function_14(iVar0))
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

int Function_27(int iParam0) //Position: 0xD52 / 3410
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD6C / 3436
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD82 / 3458
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
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_29(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_29(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_29(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_29(57, 0);
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1079 / 4217
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_32(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_31(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_31(char* cParam0, int iParam1) //Position: 0x10E5 / 4325
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x111C / 4380
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
		if (Function_35(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_33(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1194 / 4500
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x11A7 / 4519
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

int Function_35(int iParam0) //Position: 0x1248 / 4680
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&bVar1, 2147483648);
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1285 / 4741
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1298 / 4760
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_13(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_86();
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
		Function_11("DEED_COMPLETE", bParam0);
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
			Function_80(bParam0);
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
						switch (Function_13(bParam0))
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
			Function_41(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_38(bParam0, &Var14);
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

void Function_38(int iParam0, int iParam1) //Position: 0x14AA / 5290
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x14E4 / 5348
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_40())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_40() //Position: 0x1526 / 5414
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x152F / 5423
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_72();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_36(&Global_63095, 1);
		Function_36(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_42() //Position: 0x1580 / 5504
{
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_50();
	Function_50();
	if (!Function_40())
	{
		Function_47();
		Function_46();
		Function_45();
		Function_44();
	}
	Function_43();
	return;
}

void Function_43() //Position: 0x15B3 / 5555
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

void Function_44() //Position: 0x16B9 / 5817
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

void Function_45() //Position: 0x16EC / 5868
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

void Function_46() //Position: 0x187A / 6266
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

void Function_47() //Position: 0x1A2E / 6702
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A3C / 6716
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
	
	bVar0 = Function_49();
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

var Function_49() //Position: 0x1C2D / 7213
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C42 / 7234
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
				iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
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
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CDD / 7389
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
		Function_65(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_64(iParam0);
	if (bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F78 / 8056
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_63(390))), 32);
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
					bVar19 = (Function_62(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_62(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_53(), &Var9);
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

bool Function_53() //Position: 0x25A5 / 9637
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x25AD / 9645
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25BE / 9662
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x26B3 / 9907
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26CC / 9932
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2731 / 10033
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2743 / 10051
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2755 / 10069
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
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
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

int Function_61(int iParam0) //Position: 0x2885 / 10373
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2894 / 10388
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x28CD / 10445
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x290A / 10506
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AA4 / 10916
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

int Function_66(bool bParam0) //Position: 0x2CBE / 11454
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CFF / 11519
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
		iVar2 = ((Function_66((50 + iVar3) + 15) + Function_66((183 + iVar3) + 15)) + Function_66((90 + iVar3) + 15));
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
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x2D88 / 11656
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
			iVar2 = ((Function_66((50 + iVar3) + 8) + Function_66((183 + iVar3) + 8)) + Function_66((90 + iVar3) + 8));
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
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2E1F / 11807
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
		iVar2 = ((Function_66((50 + iVar3)) + Function_66((183 + iVar3))) + Function_66((90 + iVar3)));
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
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_70() //Position: 0x2E9E / 11934
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2EC4 / 11972
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
	Function_65(iParam0, bParam1, 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_72() //Position: 0x30CE / 12494
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_73(StackVal, StackVal, vVar0))
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

bool Function_73(vector3 vParam0) //Position: 0x316F / 12655
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3187 / 12679
{
	int iVar0;
	
	iVar0 = Function_78(uParam2, uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_76(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_76(&Global_63095, 2);
			Function_36(&Global_63095, 1);
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
		Function_76(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

vector3 Function_75() //Position: 0x326E / 12910
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3277 / 12919
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3286 / 12934
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x329C / 12956
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
				fVar2 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_79(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(bVar0) && !bParam1)
	{
		bVar0 = Function_78(bParam0, 1);
	}
	return bVar0;
}

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3363 / 13155
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3380 / 13184
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_15(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_13(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_85(12, 1, 0, 0);
				Function_84(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_85(13, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_85(14, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_85(15, 1, 0, 0);
				Function_84(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_85(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_83(bParam0) == 1)
					{
						iVar0 = Function_82(bParam0);
						if (Function_81(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_84(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_84(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_84(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_84(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_84(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_84(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_84(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_84(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_84(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_84(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_84(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_84(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_84(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_84(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_84(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_84(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_84(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_84(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_84(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_84(4, 19);
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
								Function_85(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_85(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_85(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_82(bParam0) == 0)
			{
				if (Function_83(bParam0) == 1)
				{
					Function_85(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_81(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_84(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_84(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_84(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_84(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_84(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_84(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_84(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_84(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_83(bParam0) == 1)
			{
				Function_85(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_85(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_84(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_84(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_85(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_84(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 9);
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

bool Function_81(int iParam0) //Position: 0x385C / 14428
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3872 / 14450
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3891 / 14481
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x38AB / 14507
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3912 / 14610
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
	Function_65(iParam0, TO_FLOAT(bParam1), 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_86() //Position: 0x3B32 / 15154
{
	int iVar0;
	int iVar1;
	
	if (!Function_28(Global_6269))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_27(Global_6269);
	if (!Function_28(iVar0) && Function_89(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_89(Function_27(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3BB2 / 15282
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
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3F04 / 16132
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

int Function_89(int iParam0) //Position: 0x3F87 / 16263
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3FA1 / 16289
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3FCF / 16335
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
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_106(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_66(42) - Global_34165.f_116);
				bVar1 = (Function_66(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_63(49)) - Global_34165.f_124);
				bVar3 = (Function_66(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_66(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_105(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_92(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x426C / 17004
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_66(3);
	Function_101();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_99(3, bVar1);
		if (!bParam2)
		{
			if (!Function_33(Global_76848, 4))
			{
				Function_30(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_85(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
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

void Function_93(int iParam0, int iParam1) //Position: 0x442F / 17455
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x468D / 18061
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
	Function_87(iParam0, cParam1, 0, 1);
	iVar1 = Function_95();
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

int Function_95() //Position: 0x4812 / 18450
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
	Function_96();
	return 0;
}

void Function_96() //Position: 0x48B1 / 18609
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
		Function_97(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_97(int iParam0) //Position: 0x4960 / 18784
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

var Function_98(int iParam0) //Position: 0x49BE / 18878
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A4D / 19021
{
	bool bVar0;
	int iVar1;
	
	Function_85(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_100(iParam0, 4294967295);
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
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_100(int iParam0, int iParam1) //Position: 0x4BEA / 19434
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

void Function_101() //Position: 0x4C2B / 19499
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C41 / 19521
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C81 / 19585
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4CC1 / 19649
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4CD0 / 19664
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
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
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
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

int Function_106(int iParam0) //Position: 0x4E98 / 20120
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

var Function_107() //Position: 0x4F2D / 20269
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F52 / 20306
{
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_92(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_92(25, 1, 0);
			Function_113(1, 1);
			break;
		
		case 0x00000015:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			Function_109(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_113(50, 1);
			Function_92(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_113(5, 1);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_92(75, 1, 0);
			Function_109(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_113(5, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_113(25, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_113(10, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_92(50, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_92(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_113(20, 1);
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_113(25, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_113(10, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_92(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_109(100, 1, 0);
			Function_113(5, 1);
			break;
		
		case 0x0000000F:
			Function_113(3, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_109(125, 1, 0);
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_113(50, 1);
			Function_92(100, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_113(75, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_92(250, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_92(75, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_92(200, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_113(100, 1);
			Function_92(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_92(200, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_92(500, 1, 0);
			Function_109(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_92(150, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_109(25, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x0000002A:
			Function_92(150, 1, 0);
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000035:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000032:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x540D / 21517
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
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
			Function_99(1, bVar1);
			if (!bParam2)
			{
				if (!Function_33(Global_76848, 1))
				{
					Function_30(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_112(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_33(Global_76848, 2))
				{
					Function_30(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_85(1, bVar1, 0, 0);
	}
	else
	{
		Function_111(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_62(1));
	iVar0 = Function_66(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_94(2, Function_110(Global_12976.f_152), 0);
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
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 1);
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
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_94(2, Function_110(Global_12976.f_152), 1);
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
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			break;
	}
	Function_93(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_110(int iParam0) //Position: 0x5722 / 22306
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x57C5 / 22469
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
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_112(int iParam0, bool bParam1) //Position: 0x59C0 / 22976
{
	bool bVar0;
	int iVar1;
	
	Function_111(iParam0, bParam1, 0);
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
	iVar1 = Function_100(iParam0, 4294967295);
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
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B5C / 23388
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_85(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_85(597, bParam0, 0, 0);
	}
	if ((Function_66(597) + Function_66(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5C27 / 23591
{
	struct<4> Var0;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_159(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_154(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_156(Global_30668[0]);
			Function_145(0);
			Function_143(2, 1);
			Function_143(0, 1);
			Function_143(1, 1);
			break;
		
		case 0x00000003:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_156(Global_30668[0]);
			Function_156(Global_30640[0]);
			Function_141(0, 1);
			Function_141(15, 1);
			Function_141(9, 1);
			Function_141(12, 1);
			Function_141(16, 1);
			Function_143(3, 1);
			break;
		
		case 0x00000005:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_154(21, bParam2, 4);
			Function_156(Global_30668[0]);
			Function_143(39, 1);
			break;
		
		case 0x00000007:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_140(4))
					{
						Function_130(4, 0, 0, 1);
					}
				}
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_156(Global_30640[0]);
			Function_156(Global_30668[2]);
			Function_129(&(Global_29008[Global_30668[2]]), 32768);
			Function_205(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_154(9, bParam2, 4);
			Function_156(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_156(Global_30640[0]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_205(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_156(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_156(Global_30640[1]);
			Function_156(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_156(Global_30679[0]);
			Function_156(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_156(Global_30658[5]);
			Function_156(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_154(21, bParam2, 4);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[4]);
			Function_128(&Global_76847, 0x2000000);
			Function_128(&Global_76847, 0x4000000);
			Function_128(&Global_76847, 4096);
			Function_128(&Global_76847, 8);
			Function_128(&Global_76847, 8388608);
			Function_128(&Global_76847, 524288);
			Function_128(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_205(&(Global_29008[Global_30640[4]]), 256);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_205(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_156(Global_30640[0]);
			Function_156(Global_30640[5]);
			Function_154(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_156(Global_30658[3]);
			Function_129(&(Global_29008[Global_30658[3]]), 32768);
			Function_205(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_154(9, bParam2, 4);
			Function_156(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_129(&(Global_29008[Global_30679[1]]), 32768);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_154(12, bParam2, 4);
			Function_205(&(Global_29008[Global_30679[1]]), 256);
			Function_156(Global_30668[3]);
			Function_156(Global_30693[0]);
			Function_156(Global_30685[0]);
			Function_145(4);
			Function_141(13, 1);
			Function_141(1, 1);
			Function_141(18, 1);
			Function_143(34, 1);
			Function_143(44, 1);
			Function_143(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_154(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_156(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_156(Global_30693[0]);
			Function_156(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_156(Global_30685[0]);
			Function_156(Global_30693[0]);
			Function_156(Global_30693[1]);
			Function_156(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_154(23, bParam2, 3);
			Function_141(23, 1);
			Function_156(Global_30685[0]);
			Function_156(Global_30685[2]);
			Function_129(&(Global_29008[Global_30685[2]]), 32768);
			Function_205(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_154(19, bParam2, 4);
			Function_156(Global_30685[0]);
			Function_156(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_154(24, bParam2, 3);
			Function_141(24, 1);
			Function_156(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_156(Global_30685[0]);
			Function_156(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_156(Global_30693[12]);
			Function_156(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_156(Global_30693[12]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_154(25, bParam2, 10);
			Function_156(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_154(13, bParam2, 4);
			Function_156(Global_30693[2]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_140(8))
				{
					Function_130(8, 0, 0, 1);
				}
			}
			Function_156(Global_30685[0]);
			Function_145(9);
			Function_141(7, 1);
			Function_141(11, 1);
			Function_141(3, 1);
			Function_141(20, 1);
			Function_143(57, 1);
			break;
		
		case 0x0000002A:
			Function_154(2, bParam2, 4);
			Function_156(Global_30717[0]);
			Function_156(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_156(Global_30717[0]);
			Function_156(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_154(17, bParam2, 4);
			Function_156(Global_30723[0]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_126(15))
				{
					Function_121(15, 0, 1);
				}
			}
			Function_205(&(Global_29008[Global_30717[1]]), 256);
			Function_145(11);
			Function_156(Global_30717[1]);
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_156(Global_30717[1]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_156(Global_30717[1]);
			Function_115(11);
			Function_145(12);
			Global_16537[1121].f_40 = 0;
			Function_143(56, 1);
			if (!bParam2)
			{
				if (!Function_140(9))
				{
					Function_130(9, 0, 0, 0);
				}
				if (!Function_140(10))
				{
					Function_130(10, 0, 0, 1);
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

void Function_115(int iParam0) //Position: 0x6517 / 25879
{
	bool bVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_120(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_120(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_116(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6686 / 26246
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_118(Function_119(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_118(Function_119(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_118(StackVal);
				vVar1 = { StackVal, StackVal, Function_118(StackVal) };
				if (Function_117(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x678C / 26508
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x67B9 / 26553
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_119(vector3 vParam0) //Position: 0x6810 / 26640
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x685E / 26718
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x68B2 / 26802
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0))
	{
		if (!Function_140(bParam0))
		{
			Function_130(bParam0, 1, 0, 0);
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
		Function_85(457, 1, 0, 0);
		Function_124(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
	}
	return;
}

void Function_122() //Position: 0x6A50 / 27216
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A56 / 27222
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6AFA / 27386
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B4F / 27471
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B65 / 27493
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_127(int iParam0, int iParam1) //Position: 0x6BB6 / 27574
{
	int iVar0;
	
	if (!Function_125(iParam0))
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

void Function_128(var uParam0, int iParam1) //Position: 0x6BE3 / 27619
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6BF2 / 27634
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6C01 / 27649
{
	struct<8> Var0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_139(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_140(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_122();
			}
		}
		Function_133(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_132() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_132() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_131(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_131(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D4B / 27979
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

bool Function_132() //Position: 0x6D96 / 28054
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_133(bool bParam0) //Position: 0x6DC3 / 28099
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_136(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_135(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_134(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_134(int iParam0) //Position: 0x6F73 / 28531
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
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

void Function_135(bool bParam0, bool bParam1) //Position: 0x6FCA / 28618
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

var Function_136(int iParam0) //Position: 0x6FEF / 28655
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
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

bool Function_137(bool bParam0, bool bParam1) //Position: 0x7045 / 28741
{
	int iVar0;
	
	if (!Function_125(bParam0))
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

bool Function_138(bool bParam0) //Position: 0x70A4 / 28836
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_139(int iParam0) //Position: 0x70B0 / 28848
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_140(int iParam0) //Position: 0x70CC / 28876
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_141(int iParam0, int iParam1) //Position: 0x711E / 28958
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_142(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x7191 / 29073
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x71ED / 29165
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_144(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x725E / 29278
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_145(int iParam0) //Position: 0x72B8 / 29368
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_153(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_153(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_85(468, 1, 0, 0);
			Function_84(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_131("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_130(14, 1, 0, 0);
				Function_146(14, 1, 0, 0, 0);
			}
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 6);
			}
			else
			{
				Function_122();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_131("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7564 / 30052
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_139(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_127(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_131(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_137(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_124(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
		Function_133(bParam0);
		if (StackVal && !Function_152(((((!Function_132() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_152((((Function_132() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_148();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_84(2, 24);
				break;
			
			case 0x00000003:
				Function_84(2, 25);
				break;
			
			case 0x0000000F:
				Function_84(2, 26);
				break;
			
			case 0x0000000D:
				Function_84(2, 27);
				break;
			
			case 0x0000000E:
				Function_84(2, 28);
				break;
			}
	}
}

void Function_147(int iParam0, bool bParam1) //Position: 0x77F3 / 30707
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

void Function_148() //Position: 0x7852 / 30802
{
	if (Function_125(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_149(int iParam0, int iParam1) //Position: 0x78CD / 30925
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
					if (Function_26(6, 0) || Function_26(12, 0))
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
					if (Function_150(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_26(5, 0))
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
					if (Function_150(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_26(26, 0))
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
					if (Function_150(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(27) && iVar18)
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
					if (Function_150(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_26(17, 0) && iVar15)
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
					if (Function_150(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_150(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_150(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_26(8, 0) && iVar19)
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
	if (Function_73(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_73(StackVal, StackVal, vVar3))
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
	if (!Function_73(StackVal, StackVal, vVar3))
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

int Function_150(int iParam0) //Position: 0x84C1 / 33985
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x84D6 / 34006
{
	int iVar0;
	int iVar1;
	
	if (!Function_125(iParam0))
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

bool Function_152(bool bParam0, bool bParam1) //Position: 0x8525 / 34085
{
	return (bParam0 && bParam1) == 0;
}

void Function_153(bool bParam0, bool bParam1) //Position: 0x8532 / 34098
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

void Function_154(bool bParam0, bool bParam1, int iParam2) //Position: 0x8583 / 34179
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_155(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_159(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_155(int iParam0, int iParam1) //Position: 0x85F1 / 34289
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_156(int iParam0) //Position: 0x8604 / 34308
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_158(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_129(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_157(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_85(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_85(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_85(476, 1, 0, 0);
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
		Function_84(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_84(7, 30);
	}
	if (Function_62(473) <= Function_63(473))
	{
		if (!Function_40())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_157(int iParam0) //Position: 0x8703 / 34563
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_81(iParam0))
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

bool Function_158(var uParam0, int iParam1) //Position: 0x875B / 34651
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0x8777 / 34679
{
	if (!Function_160(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_49(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_49(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_49(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_160(bool bParam0) //Position: 0x87CE / 34766
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_161(bool bParam0) //Position: 0x87E0 / 34784
{
	bool bVar0;
	
	if (Function_152(bParam0, 1) && Function_152(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_162(int iParam0) //Position: 0x8814 / 34836
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_163(4, 0, 0);
		}
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x887B / 34939
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
		Function_164(Global_16524, bVar0, 1);
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8958 / 35160
{
	int iVar0;
	
	Function_166(bParam0);
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
	Function_165();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_165() //Position: 0x8AD1 / 35537
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_166(int iParam0) //Position: 0x8ADD / 35549
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

void Function_167() //Position: 0x8B23 / 35619
{
	Function_168();
	return;
}

void Function_168() //Position: 0x8B2C / 35628
{
	Function_169(&Local_4 + 4);
	Function_169(&Local_4 + 80);
	Function_169(&Local_4 + 192);
	Function_169(&Local_4 + 304);
	Function_169(&Local_4 + 416);
	Function_169(&Local_4 + 540);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_169(bool bParam0) //Position: 0x8B64 / 35684
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_170(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x8B8A / 35722
{
	if (Function_172(uParam0[iParam13], 4))
	{
		if (Function_172(uParam0[iParam13], 1))
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
			Function_171(uParam0[iParam13], 1);
			Function_171(uParam0[iParam13], 2);
			Function_171(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8CB8 / 36024
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_172(var uParam0, bool bParam1) //Position: 0x8CD2 / 36050
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8CEF / 36079
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_198());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(true);
	}
	Function_197();
	CLEAR_PRINTED_OBJECTIVE();
	Function_196();
	Function_194(0);
	Function_193();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_192();
	Function_191();
	Function_197();
	ENABLE_JOURNAL_REPLAY(1);
	Function_190(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	if (bParam7)
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			TASK_CLEAR(Global_34573);
		}
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		ACTOR_END_FORCE_HOLSTER(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_189(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_188(Global_28178);
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
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_187(1178687);
	Function_185(33039);
	Function_184(0x218003f);
	Function_204(4194560);
	Function_183();
	Function_182();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_179(0, 1, 1);
	}
	else
	{
		Function_179(0, 1, 1);
	}
	Function_178();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_174();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_174() //Position: 0x8EE0 / 36576
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_177() > 3)
		{
			bVar0 *= 2;
		}
		Function_175(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_175(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8F36 / 36662
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_176((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_176(bool bParam0) //Position: 0x8F7C / 36732
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_177() //Position: 0x8FA1 / 36769
{
	return Global_12976.f_156;
}

void Function_178() //Position: 0x8FAC / 36780
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_205(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_179(int iParam0, bool bParam1, int iParam2) //Position: 0x8FD6 / 36822
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
		if (Function_81(Global_29006))
		{
			Function_129(&(Global_29008[Global_29006]), 131072);
			Function_205(&(Global_29008[Global_29006]), 2097152);
			Function_180(Global_29006);
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
				if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_205(&(Global_29008[iVar0]), 2097155);
					Function_129(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_40())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_180(int iParam0) //Position: 0x90E1 / 37089
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_181())
			{
				return;
			}
		}
		if (!Function_158(&(Global_29008[iParam0]), 2048))
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

bool Function_181() //Position: 0x9160 / 37216
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_182() //Position: 0x91BD / 37309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30804)
	{
		Global_30804[iVar0] = 1;
		iVar0++;
	}
	Global_30838 = 0;
	return;
}

void Function_183() //Position: 0x91E3 / 37347
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_184(int iParam0) //Position: 0x9209 / 37385
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_185(int iParam0) //Position: 0x921C / 37404
{
	Function_186(&Global_28842, iParam0);
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x922A / 37418
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_187(bool bParam0) //Position: 0x9245 / 37445
{
	if (Function_152(bParam0, 1) && !Function_152(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_188(int iParam0) //Position: 0x9272 / 37490
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
	}
	return;
}

void Function_189(bool bParam0) //Position: 0x9339 / 37689
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_190(bool bParam0) //Position: 0x93B5 / 37813
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_191() //Position: 0x9429 / 37929
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay"))
		{
			DECOR_REMOVE(Global_34573, "ResetMenuDelay");
		}
	}
	return;
}

void Function_192() //Position: 0x946A / 37994
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			DECOR_REMOVE(Global_34573, "missionFailRmd");
		}
	}
	return;
}

void Function_193() //Position: 0x94AB / 38059
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_194(int iParam0) //Position: 0x94BF / 38079
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_195())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_195() //Position: 0x94FB / 38139
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

void Function_196() //Position: 0x9520 / 38176
{
	Global_8722 = 0.0f;
	return;
}

void Function_197() //Position: 0x952A / 38186
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

int Function_198() //Position: 0x9555 / 38229
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_199() //Position: 0x956F / 38255
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_200(bool bParam0) //Position: 0x9578 / 38264
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x95D0 / 38352
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
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
	if (Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 0;
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(StackVal))
	{
		if (StackVal && IS_ACTOR_HUMAN(bParam4))
		{
			ACTOR_HOLSTER_WEAPON(StackVal, 1);
		}
		if (bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(StackVal, 1);
			TASK_CLEAR(StackVal);
			MEMORY_CLEAR_ALL(StackVal);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(StackVal, 0);
		}
		Function_203(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_202(StackVal);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(StackVal);
			DEREFERENCE_ACTOR(StackVal);
			if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (bParam2)
			{
				DECOR_SET_BOOL(Global_8492[iParam014], "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
			bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (bParam1)
			{
				DESTROY_ACTOR(StackVal);
			}
			else if (bParam3)
			{
				RELEASE_ACTOR(StackVal);
				if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	Global_8492[iParam014].f_4 = "";
	return bVar1;
}

void Function_202(bool bParam0) //Position: 0x98EE / 39150
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_203(bool bParam0) //Position: 0x991A / 39194
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_204(int iParam0) //Position: 0x992F / 39215
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0x994C / 39244
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_206() //Position: 0x9963 / 39267
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_728))
	{
		DESTROY_OBJECT(bLocal_728);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	Function_224(7, 0, 1);
	Function_223(0);
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				SET_ACTOR_FACTION(bLocal_712, 20);
				AI_GOAL_SHOOT_CLEAR(bLocal_712);
				TASK_WANDER(bLocal_712, 3212836864);
				TASK_PRIORITY_SET(bLocal_712, 3);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_712);
				Function_222(bLocal_712, 0);
			}
			bVar0++;
		}
		Function_221(Local_4.f_736);
		Function_219(&Local_4 + 736, 1, 0);
	}
	if (SQUAD_IS_VALID(bLocal_714))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bLocal_714))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_714, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				SET_ACTOR_FACTION(bLocal_712, 20);
				AI_GOAL_SHOOT_CLEAR(bLocal_712);
				TASK_WANDER(bLocal_712, 3212836864);
				TASK_PRIORITY_SET(bLocal_712, 3);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_712);
				Function_222(bLocal_712, 0);
			}
			bVar0++;
		}
		Function_221(bLocal_714);
		Function_219(&bLocal_714, 1, 0);
	}
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_218(&Local_4 + 728);
		DESTROY_OBJECT(Local_4.f_728);
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_218(&Local_4 + 744);
		DESTROY_OBJECT(Local_4.f_744);
	}
	if (SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_218(&Local_4 + 740);
		DESTROY_OBJECT(Local_4.f_740);
	}
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_217();
	Function_216();
	Function_215();
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	if (IS_OBJECT_VALID(bLocal_777))
	{
		DESTROY_OBJECT(bLocal_777);
	}
	Function_213("Cleanup_Mission()");
	if (IS_DOOR_VALID(bLocal_780))
	{
		if (IS_DOOR_LOCKED(bLocal_780))
		{
			SET_DOOR_LOCK(bLocal_780, 0);
		}
	}
	if (IS_DOOR_VALID(bLocal_780))
	{
		if (IS_DOOR_LOCKED(bLocal_780))
		{
			SET_DOOR_LOCK(bLocal_780, 0);
		}
	}
	Function_212();
	Function_211();
	Function_210();
	Function_209();
	Function_208();
	Function_207();
	AUDIO_SET_PLAYER_MOOD(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (iLocal_746)
	{
		iLocal_746 = 0;
	}
	return;
}

void Function_207() //Position: 0x9BFD / 39933
{
	return;
}

void Function_208() //Position: 0x9C03 / 39939
{
	Function_169(&Local_4 + 540);
	return;
}

void Function_209() //Position: 0x9C11 / 39953
{
	Function_169(&Local_4 + 416);
	return;
}

void Function_210() //Position: 0x9C1F / 39967
{
	Function_169(&Local_4 + 304);
	return;
}

void Function_211() //Position: 0x9C2D / 39981
{
	Function_169(&Local_4 + 192);
	return;
}

void Function_212() //Position: 0x9C3A / 39994
{
	Function_169(&Local_4 + 80);
	return;
}

int Function_213(int iParam0) //Position: 0x9C47 / 40007
{
	if (bLocal_741)
	{
		Function_214(uLocal_730, &uLocal_731, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 1);
		if (IS_BLIP_VALID(bLocal_766))
		{
			REMOVE_BLIP(bLocal_766);
		}
		if (Global_26055[10])
		{
			SET_WEAPON_GOLD(Global_34573, 4, true);
			SET_WEAPON_GOLD(Global_34573, 8, true);
		}
		bLocal_741 = false;
		return 1;
	}
	return 0;
}

void Function_214(bool bParam0, var uParam1, int iParam2) //Position: 0x9C97 / 40087
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	if (*uParam1 <= 8)
	{
		PRINTSTRING("GIVE_PLAYER_BACK_WEAPONS: lastEquipped bool array not big enough to hold last equipped weapons. Needs to contain four elements");
		PRINTNL();
		return;
	}
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (Function_152(bParam0, Function_138(bVar0)))
		{
			GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar0, 0.0f, iParam2, 1);
			PRINTSTRING("Giving player back his ");
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar1));
			PRINTNL();
		}
		bVar0++;
	}
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[7]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[6]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[5]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[4]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[3]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[2]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[1]);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), (*uParam1)[0]);
	PRINTNL();
	return;
}

int Function_215() //Position: 0x9DEB / 40427
{
	if (iLocal_742)
	{
		if (ACTOR_HAS_ANIM_SET(Global_34573, "knl_picklock"))
		{
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "knl_picklock", 0);
		}
		AI_STOP_IGNORING_ACTOR(Global_34573);
		AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
		iLocal_742 = 0;
		return 1;
	}
	return 0;
}

void Function_216() //Position: 0x9E41 / 40513
{
	SATCHEL_SET_ENABLED(1);
	if (HAS_ACCESSORY("WRIST_BIND", Global_34573))
	{
		DELETE_ACCESSORY("WRIST_BIND", Global_34573);
	}
	if (iLocal_744)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
		SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(1, 0);
		SET_PLAYER_ALLOW_PICKUP(1, 0);
		RESET_REACT_NODE_FOR_ACTOR(Global_34573);
		ENABLE_USE_CONTEXTS(1);
		FREE_FROM_HOGTIE(Global_34573);
		CLEAR_LINKED_ANIM_TARGET(Global_34573);
		iLocal_744 = 0;
	}
	return;
}

void Function_217() //Position: 0x9EA6 / 40614
{
	if (IS_ACTORSET_VALID(Local_4.f_764))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 752)[02]))
		{
			SET_ACTOR_PERMANENT((*&Local_4 + 752)[02], false);
			DESTROY_ACTORSET(Local_4.f_764);
		}
	}
	return;
}

void Function_218(int iParam0) //Position: 0x9EDA / 40666
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9F21 / 40737
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_220(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_220(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9F9D / 40861
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_221(bool bParam0) //Position: 0x9FB7 / 40887
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_202(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_222(bool bParam0, int iParam1) //Position: 0x9FEE / 40942
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_223(bool bParam0) //Position: 0xA021 / 40993
{
	if (SQUAD_IS_VALID(bLocal_714))
	{
		if (SQUAD_GET_SIZE(bLocal_714) >= 0)
		{
			bLocal_740 = false;
			while (bLocal_740 <= SQUAD_GET_SIZE(bLocal_714))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_714, bLocal_740);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_CRIPPLED(bLocal_712, 4))
					{
						KILL_ACTOR(bLocal_712);
					}
					else
					{
						SET_ACTOR_PERMANENT(bLocal_712, bParam0);
						SET_ACTOR_INVULNERABILITY(bLocal_712, bParam0);
						SET_ACTOR_HEALTH(bLocal_712, GET_ACTOR_MAX_HEALTH(bLocal_712));
					}
				}
				bLocal_740++;
			}
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		if (SQUAD_GET_SIZE(Local_4.f_736) >= 0)
		{
			bLocal_740 = false;
			while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_736))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bLocal_740);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_CRIPPLED(bLocal_712, 4))
					{
						KILL_ACTOR(bLocal_712);
					}
					else
					{
						SET_ACTOR_PERMANENT(bLocal_712, bParam0);
						SET_ACTOR_INVULNERABILITY(bLocal_712, bParam0);
						SET_ACTOR_HEALTH(bLocal_712, GET_ACTOR_MAX_HEALTH(bLocal_712));
					}
				}
				bLocal_740++;
			}
		}
	}
	return;
}

void Function_224(int iParam0, bool bParam1, bool bParam2) //Position: 0xA113 / 41235
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		bVar0 = GET_OBJECT_FROM_ACTOR(StackVal);
	}
	else if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar0 = GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			Global_8492[iParam014].f_52 = ADD_BLIP_FOR_OBJECT(bVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(bVar0) == 15)
			{
				SET_BLIP_NAME(Global_8492[iParam014].f_52, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(Global_8492[iParam014].f_52, 0.0f);
		}
		SET_BLIP_PRIORITY(Global_8492[iParam014].f_52, 3);
	}
	else
	{
		if (IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			REMOVE_BLIP(Global_8492[iParam014].f_52);
		}
		if (bParam2)
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						Function_202(bVar1);
					}
				}
				Function_225(bVar0);
			}
		}
	}
	return;
}

void Function_225(bool bParam0) //Position: 0xA20A / 41482
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

void Function_226(bool bParam0) //Position: 0xA236 / 41526
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_227() //Position: 0xA2C0 / 41664
{
	var uVar0[9];
	int iVar10;
	
	if (Function_317())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - ...Come Out...";
		uVar0[4] = "Stage 03 - GET TO REYES";
		uVar0[5] = "Stage 04 - Need bigger knife";
		uVar0[6] = "Stage 05 - Battle";
		uVar0[7] = "Last Stage - Mission End";
		uVar0[8] = "Kill All MexArmy Soldiers";
		iVar10 = Function_303(&uLocal_531, &uVar0, &Local_436 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_302(&iVar10, &bLocal_545, &iLocal_546, &iLocal_538))
		{
			Function_295();
			Function_294();
		}
		if (iVar10 == 0)
		{
			Function_295();
			Function_294();
			Function_293(&bLocal_574, 8);
		}
		else if (iVar10 == 1)
		{
			Function_295();
			Function_294();
			Function_287(bLocal_545);
			Function_283(StackVal, StackVal, 5, &bLocal_575, &bLocal_545, Function_291(bLocal_545), Function_287(bLocal_545), 0);
		}
		else if (iVar10 == 2)
		{
			Function_295();
			Function_294();
			Function_278(&bLocal_576, 4);
		}
		else if (iVar10 == 3)
		{
			Function_295();
			Function_294();
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Mission_Cheats_Menu().3");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_263();
			Function_261(&iLocal_553);
			bLocal_545 = true;
			iLocal_546 = 0;
			iLocal_538 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_295();
			Function_294();
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Mission_Cheats_Menu().4");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_260();
			Function_261(&iLocal_553);
			bLocal_545 = 2;
			iLocal_546 = 0;
			iLocal_538 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_295();
			Function_294();
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Mission_Cheats_Menu().5");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_256();
			Function_261(&iLocal_553);
			bLocal_545 = 3;
			iLocal_546 = 0;
			iLocal_538 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_295();
			Function_294();
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Mission_Cheats_Menu().6");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_247();
			Function_261(&iLocal_553);
			bLocal_545 = 4;
			iLocal_546 = 0;
			iLocal_538 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_295();
			Function_294();
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Mission_Cheats_Menu().7");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_228();
			Function_261(&iLocal_553);
			bLocal_545 = 101;
			iLocal_546 = 0;
			iLocal_538 = 1000;
		}
		else if (iVar10 == 8)
		{
			iLocal_801 = 1;
		}
	}
	return;
}

void Function_228() //Position: 0xA5EE / 42478
{
	Function_246(fLocal_727);
	fLocal_727 = 0.0f;
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_218(&Local_4 + 728);
		DESTROY_OBJECT(Local_4.f_728);
	}
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (!SQUAD_IS_VALID(Local_4.f_736))
	{
		Function_237();
	}
	if (!IS_ACTOR_ALIVE(bLocal_551))
	{
		Function_229();
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_728))
	{
		DESTROY_OBJECT(bLocal_728);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	Function_216();
	if (IS_OBJECT_VALID(bLocal_777))
	{
		DESTROY_OBJECT(bLocal_777);
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	return;
}

void Function_229() //Position: 0xA73F / 42815
{
	RESET_ACTOR_GAITS(bLocal_551, 0);
	SET_CRIPPLE_ENABLE(bLocal_551, 0);
	SET_ACTOR_FACTION(bLocal_551, 20);
	TASK_PRIORITY_SET(bLocal_551, true);
	TASK_STAND_STILL(bLocal_551, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bLocal_551, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_551, 50.0f);
	SET_ACTOR_HEALTH(bLocal_551, GET_ACTOR_MAX_HEALTH(bLocal_551));
	TASK_STAND_STILL(bLocal_551, -1.0f, 0, 0);
	Function_230(&(Local_618[017]), bLocal_551, "RebelLeader", 0, 0x5f5e100, 1);
	return;
}

int Function_230(float fParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA7B5 / 42933
{
	if (!Function_236(fParam0, uParam1))
	{
		return 0;
	}
	if (!Function_235(fParam0, bParam2))
	{
		return 0;
	}
	Function_234(fParam0, iParam3);
	fParam0->f_40 = 0;
	Function_231(fParam0, iParam4, iParam5);
	return 1;
}

void Function_231(var uParam0, int iParam1, int iParam2) //Position: 0xA7F1 / 42993
{
	if (iParam1 != 100000000)
	{
		Function_233(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_232(uParam0, iParam2);
	}
	return;
}

void Function_232(int iParam0, bool bParam1) //Position: 0xA814 / 43028
{
	iParam0->f_40 = 0;
	Function_233(iParam0, 2, bParam1);
	Function_233(iParam0, 4, bParam1);
	Function_233(iParam0, 8, bParam1);
	Function_233(iParam0, 16, bParam1);
	Function_233(iParam0, 32, bParam1);
	Function_233(iParam0, 64, bParam1);
	Function_233(iParam0, 128, bParam1);
	Function_233(iParam0, 256, bParam1);
	Function_233(iParam0, 512, bParam1);
	Function_233(iParam0, 1024, bParam1);
	return;
}

void Function_233(int iParam0, int iParam1, bool bParam2) //Position: 0xA87A / 43130
{
	bool bVar0;
	
	Function_76(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_76(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_36(iParam0 + 40, bVar0);
	}
	else
	{
		Function_76(iParam0 + 40, bVar0);
	}
	return;
}

void Function_234(var uParam0, int iParam1) //Position: 0xA8B6 / 43190
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_235(int iParam0, bool bParam1) //Position: 0xA8C2 / 43202
{
	if (!IS_STRING_VALID(cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(bParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(iParam0 + 4, bParam1, 24);
	return 1;
}

bool Function_236(int iParam0, bool bParam1) //Position: 0xA94B / 43339
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	*iParam0 = bParam1;
	iParam0->f_28 = GET_OBJECT_TYPE(*iParam0);
	iParam0->f_32 = 2;
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_HORSE(bVar0))
				{
					iParam0->f_32 = 1;
				}
				else if (IS_ACTOR_VEHICLE(bVar0))
				{
					iParam0->f_32 = 3;
				}
			}
			break;
		
		case 0x00000019:
			bVar1 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (SQUAD_IS_VALID(bVar1))
			{
				if (SQUAD_GET_SIZE(bVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar1, false);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_HORSE(bVar2))
						{
							iParam0->f_32 = 1;
						}
						else if (IS_ACTOR_VEHICLE(bVar2))
						{
							iParam0->f_32 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar3 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (IS_OBJECTSET_VALID(bVar3))
			{
				if (GET_OBJECTSET_SIZE(bVar3) >= 0)
				{
					bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar3);
					if (IS_OBJECT_VALID(bVar4))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTOR_HORSE(bVar5))
							{
								iParam0->f_32 = 1;
							}
							else if (IS_ACTOR_VEHICLE(bVar5))
							{
								iParam0->f_32 = 3;
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

void Function_237() //Position: 0xAAD7 / 43735
{
	Function_244();
	Function_243(Local_4.f_736, 0);
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		bLocal_740 = false;
		while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_736))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bLocal_740);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				SET_ACTOR_FACTION(bLocal_712, 20);
			}
			bLocal_740++;
		}
	}
	Function_230(&(Local_618[117]), Local_4.f_736, "RebelSoldier", 0, 0x5f5e100, 1);
	Function_241(&(Local_618[117]), 2);
	Function_241(&(Local_618[117]), 512);
	Function_238(Local_4.f_736, 20);
	return;
}

void Function_238(bool bParam0, int iParam1) //Position: 0xAB75 / 43893
{
	Function_240(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	Function_239(bParam0);
	SQUAD_SET_FACTION(bParam0, iParam1);
	return;
}

void Function_239(bool bParam0) //Position: 0xAB91 / 43921
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_240(bool bParam0) //Position: 0xABC6 / 43974
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

void Function_241(int iParam0, int iParam1) //Position: 0xABF8 / 44024
{
	if (iParam1 != 100000000)
	{
		Function_242(iParam0, iParam1);
	}
	else
	{
		Function_232(iParam0, 1);
	}
	return;
}

void Function_242(int iParam0, bool bParam1) //Position: 0xAC18 / 44056
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

void Function_243(bool bParam0, int iParam1) //Position: 0xAC43 / 44099
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_244() //Position: 0xAC7A / 44154
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_736 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RebelSoldier"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier01", 516, -2717,468f, 32,50984f, 4244,825f, 0.0f, 179,1652f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier02", 521, -2716,259f, 32,13002f, 4243,681f, 0.0f, 170,0132f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier03", 529, -2708,607f, 32,08835f, 4238,95f, 0.0f, 221,5913f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier04", 517, -2706,087f, 32,17834f, 4236,917f, 0.0f, 254,3215f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier05", 529, -2699,762f, 32,34887f, 4231,092f, 0.0f, 213,0072f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier06", 516, -2697,411f, 32,34887f, 4231,474f, 0.0f, 166,4859f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier07", 521, -2691,945f, 32,50169f, 4232,613f, 0.0f, 162,5419f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "RebelSoldier08", 517, -2675,583f, 32,34564f, 4225,896f, 0.0f, 170,9182f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_736);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	Function_245(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	return;
}

void Function_245(bool bParam0) //Position: 0xAFF4 / 45044
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_246(bool bParam0) //Position: 0xB028 / 45096
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_247() //Position: 0xB040 / 45120
{
	bool bVar0;
	
	Function_246(fLocal_727);
	fLocal_727 = 0.0f;
	if (!SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_254();
	}
	if (!SQUAD_IS_VALID(Local_4.f_736))
	{
		Function_237();
	}
	if (!SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_252();
	}
	Function_251(&(Local_618[317]));
	if (!SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_248();
	}
	Function_251(&(Local_618[417]));
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	SET_ACTOR_INVULNERABILITY(bLocal_549, true);
	TELEPORT_ACTOR(bLocal_549, &vLocal_816, 1, 1, 1);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_740);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_744);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_248() //Position: 0xB29C / 45724
{
	Function_250();
	Function_249(Local_4.f_744, 19, 0.0f);
	Function_243(Local_4.f_744, 0);
	Function_230(&(Local_618[417]), Local_4.f_744, "MexicanSoldier", 0, 0x5f5e100, 1);
	Function_241(&(Local_618[417]), 2);
	Function_241(&(Local_618[417]), 512);
	return;
}

void Function_249(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB2F6 / 45814
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_VALID(bVar1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_250() //Position: 0xB342 / 45890
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_744 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmySniper"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySniper00", 391, -2670,298f, 36,76358f, 4254,787f, 0.0f, 146,662f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_744);
	GIVE_WEAPON_TO_ACTOR(bVar0, 19, 0,5f, 1, 1);
	TASK_DRAW_HOLSTER_WEAPON(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySniper01", 392, -2668,418f, 36,76358f, 4262,099f, 0.0f, 150,127f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_744);
	GIVE_WEAPON_TO_ACTOR(bVar0, 19, 0,5f, 1, 1);
	TASK_DRAW_HOLSTER_WEAPON(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	return;
}

void Function_251(int iParam0) //Position: 0xB431 / 46129
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(*iParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*iParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*iParam0);
			}
		}
	}
	*iParam0 = "";
	strcpy(iParam0 + 4, "", 24);
	iParam0->f_36 = 0;
	iParam0->f_40 = 0;
	return;
}

void Function_252() //Position: 0xB4E5 / 46309
{
	Function_253();
	Function_249(Local_4.f_740, 16, 0.0f);
	Function_243(Local_4.f_740, 0);
	Function_230(&(Local_618[317]), Local_4.f_740, "MexicanSoldier", 0, 0x5f5e100, 1);
	Function_241(&(Local_618[317]), 2);
	Function_241(&(Local_618[317]), 512);
	return;
}

void Function_253() //Position: 0xB53F / 46399
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_740 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmySweeper"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sweeper1", 381, -2695,315f, 32,34362f, 4219,25f, 0.0f, 169,3079f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_740);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sweeper2", 380, -2696,097f, 32,34147f, 4220,7f, 0.0f, 183,3876f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_740);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Sweeper3", 379, -2697,128f, 32,33864f, 4222,61f, 0.0f, 179,8953f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_740);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	return;
}

void Function_254() //Position: 0xB658 / 46680
{
	Function_255();
	Function_249(Local_4.f_728, 8, 0.0f);
	Function_230(&(Local_618[117]), Local_4.f_728, "MexicanSoldier", 1, 0x5f5e100, 1);
	Function_241(&(Local_618[117]), 2);
	return;
}

void Function_255() //Position: 0xB69D / 46749
{
	Local_4.f_728 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmySoldier"));
	(*&Local_4 + 676)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier01", 379, -4382,035f, 38,27919f, 4364,645f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[02], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[02], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[02], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[02], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[02]);
	(*&Local_4 + 676)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier02", 380, -4389,873f, 38,11534f, 4363,574f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[12], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[12], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[12], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[12], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[12]);
	(*&Local_4 + 676)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier03", 391, -4391,729f, 38,15187f, 4368,127f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[22], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[22], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[22], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[22], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[22]);
	(*&Local_4 + 676)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier04", 381, -4384,735f, 38,68094f, 4363,848f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[32], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[32], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[32], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[32]);
	(*&Local_4 + 676)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier05", 379, -4368,004f, 38,81228f, 4359.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[42], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[42], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[42], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[42], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[42]);
	(*&Local_4 + 676)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmySoldier06", 392, -4381,849f, 38,59397f, 4356,843f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 676)[52], Local_4.f_728);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 676)[52], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 676)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 676)[52], 20);
	TASK_PRIORITY_SET((*&Local_4 + 676)[52], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 676)[52]);
	return;
}

void Function_256() //Position: 0xBA1B / 47643
{
	bool bVar0;
	
	Function_246(fLocal_727);
	fLocal_727 = 0.0f;
	Function_257("JumpTo_Stage_Four()");
	if (!SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_254();
	}
	if (!SQUAD_IS_VALID(Local_4.f_736))
	{
		Function_237();
	}
	if (!SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_252();
	}
	Function_251(&(Local_618[317]));
	if (!SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_248();
	}
	Function_251(&(Local_618[417]));
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	SET_ACTOR_INVULNERABILITY(bLocal_549, true);
	TELEPORT_ACTOR(bLocal_549, &vLocal_816, 1, 1, 1);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_740);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_744);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	return;
}

int Function_257(int iParam0) //Position: 0xBC91 / 48273
{
	if (!bLocal_741)
	{
		Function_259(&uLocal_730, &uLocal_731);
		Function_258(0, 0);
		bLocal_741 = true;
		return 1;
	}
	return 0;
}

void Function_258(int iParam0, bool bParam1) //Position: 0xBCB3 / 48307
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = GET_PLAYER_ACTOR(iParam0);
	if (IS_ACTOR_VALID(bVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		bVar0 = false;
		while (bVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(bVar1, GET_WEAPON_EQUIPPED(bVar1, bVar0));
			bVar0++;
		}
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player weapons");
		PRINTNL();
		if (bParam1)
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(bVar1);
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

void Function_259(bool bParam0, var uParam1) //Position: 0xBDB2 / 48562
{
	bool bVar0;
	
	bVar0 = false;
	if (*uParam1 <= 8)
	{
		PRINTSTRING("STORE_PLAYER_WEAPONS: lastEquipped bool array not big enough to hold last equipped weapons. Needs to contain eight elements");
		PRINTNL();
		return;
	}
	*bParam0 = 0;
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), bVar0))
		{
			PRINTSTRING("Player has ");
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			PRINTSTRING(", storing it.");
			PRINTNL();
			Function_76(bParam0, Function_138(bVar0));
		}
		else
		{
			PRINTSTRING("Player does not have ");
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			PRINTNL();
			Function_36(bParam0, Function_138(bVar0));
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (7 - 1))
	{
		(*uParam1)[bVar0] = GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar0);
		bVar0++;
	}
	return;
}

void Function_260() //Position: 0xBEFA / 48890
{
	bool bVar0;
	
	Function_246(fLocal_727);
	fLocal_727 = 0.0f;
	if (!SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_254();
	}
	if (!SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_252();
	}
	Function_251(&(Local_618[317]));
	if (!SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_248();
	}
	Function_251(&(Local_618[417]));
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_740);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_744);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_261(int iParam0) //Position: 0xC134 / 49460
{
	Function_262(iParam0, 0.0f);
	return;
}

void Function_262(int iParam0, float fParam1) //Position: 0xC140 / 49472
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_263() //Position: 0xC161 / 49505
{
	bool bVar0;
	
	Function_246(fLocal_727);
	fLocal_727 = 0.0f;
	if (!SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_254();
	}
	if (!SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_275();
	}
	if (!IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		Function_269();
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	bLocal_547 = Global_30693[0];
	if (!Function_268(bLocal_547))
	{
		Function_266(&Local_436);
	}
	Function_264(Global_34573, (*&Local_4 + 984)[1], 0, 1, 1, 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 2);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		if (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					TASK_CLEAR(bLocal_712);
					TASK_PRIORITY_SET(bLocal_712, true);
					TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_712, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_264(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xC2CE / 49870
{
	Function_265(bParam0, uParam1, iParam3, iParam4, iParam5);
}

void Function_265(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xC2E3 / 49891
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
			}
		}
	}
}

void Function_266(int iParam0) //Position: 0xC3EA / 50154
{
	if (!Function_267(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_179(1, 0, 1);
		}
	}
	return;
}

bool Function_267(int iParam0) //Position: 0xC405 / 50181
{
	return iParam0->f_20;
}

bool Function_268(bool bParam0) //Position: 0xC40F / 50191
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_158(&(Global_29008[bParam0]), 4);
}

void Function_269() //Position: 0xC42B / 50219
{
	Function_270();
	Function_230(&(Local_618[217]), (*&Local_4 + 664)[02], "Wagon", 1, 0x5f5e100, 1);
	Function_241(&(Local_618[217]), 64);
	Function_241(&(Local_618[217]), 512);
	Function_241(&(Local_618[217]), 2);
	return;
}

void Function_270() //Position: 0xC476 / 50294
{
	(*&Local_4 + 664)[02] = Function_271(Local_4, "SupplyWagon", 1196, 976, -4386,59f, 38,55816f, 4368,51f, 0.0f, 125,396f, 0.0f, 1, 976, 976, 976, 4);
	return;
}

var Function_271(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xC4BE / 50366
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_274(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_273(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_272(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_272(int iParam0, int iParam1) //Position: 0xC6F2 / 50930
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_273(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xC724 / 50980
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC73C / 51004
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_275() //Position: 0xC763 / 51043
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_732 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyHorse"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse01", 977, -4398,197f, 37,95454f, 4359,166f, 0.0f, 271,1648f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse02", 983, -4398,77f, 37,95638f, 4362,374f, 0.0f, 267,7092f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse03", 976, -4400.0f, 38,02462f, 4364f, 0.0f, 229,0954f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse04", 983, -4398,08f, 37,6467f, 4367,667f, 0.0f, 136,8483f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse05", 977, -4376,587f, 38,70368f, 4365,893f, 0.0f, 64,95152f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyHorse06", 976, -4379,811f, 38,70368f, 4360,985f, 0.0f, 114,79f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_732);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bVar0, true);
	ACCESSORIZE_HORSE(bVar0, 3);
	return;
}

void Function_276(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5) //Position: 0xC96D / 51565
{
	Function_277(fParam0, fParam1, fParam2, fParam3, fParam4, 1);
}

void Function_277(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC983 / 51587
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

void Function_278(bool bParam0, int iParam1) //Position: 0xC9AC / 51628
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_279(iParam1);
	*bParam0 = 1;
	return;
}

void Function_279(int iParam0) //Position: 0xC9CF / 51663
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_282("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_281(2) || Function_281(8)) || Function_281(9)) || Function_281(10))
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
		Function_282("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_282("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_282("");
	}
	else if (iParam0 == 8)
	{
		Function_280();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_280();
	}
	return;
}

void Function_280() //Position: 0xCAC6 / 51910
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_281(int iParam0) //Position: 0xCAD2 / 51922
{
	int iVar0;
	
	if (!Function_28(iParam0))
	{
		return 0;
	}
	iVar0 = Function_27(iParam0);
	if (!Function_18(Function_27(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_282(bool bParam0) //Position: 0xCB08 / 51976
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_283(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xCB72 / 52082
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_284(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_279(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_284(vector3 vParam0, var uParam3, var uParam4) //Position: 0xCBAF / 52143
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_286(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_285(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_285(int iParam0) //Position: 0xCC32 / 52274
{
	if (!Function_81(iParam0))
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

var Function_286(vector3 vParam0, bool bParam3) //Position: 0xD0E0 / 53472
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

vector3 Function_287(int iParam0) //Position: 0xD14B / 53579
{
	Function_288(iParam0 + 1);
	return StackVal, StackVal, Function_288(iParam0 + 1);
}

vector3 Function_288(int iParam0) //Position: 0xD158 / 53592
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_290((*&Local_4 + 956)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 956)[0]);
			break;
		
		case 0x00000001:
			if (Function_289(Local_436) == 0)
			{
				Function_290((*&Local_4 + 984)[0]);
				return StackVal, StackVal, Function_290((*&Local_4 + 984)[0]);
			}
			Function_290((*&Local_4 + 984)[1]);
			return StackVal, StackVal, Function_290((*&Local_4 + 984)[1]);
			break;
		
		case 0x00000002:
			Function_290((*&Local_4 + 1080)[1]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1080)[1]);
			break;
		
		case 0x00000003:
			Function_290((*&Local_4 + 1180)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1180)[0]);
			break;
		
		case 0x00000004:
			Function_290((*&Local_4 + 1276)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1276)[0]);
			break;
		
		default:
			Function_290((*&Local_4 + 1276)[0]);
			return StackVal, StackVal, Function_290((*&Local_4 + 1276)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_290((*&Local_4 + 956)[0]);
	return StackVal, StackVal, Function_290((*&Local_4 + 956)[0]);
}

int Function_289(int iParam0) //Position: 0xD265 / 53861
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

vector3 Function_290(bool bParam0) //Position: 0xD27F / 53887
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

int Function_291(int iParam0) //Position: 0xD2A6 / 53926
{
	return Function_292(iParam0 + 1);
}

int Function_292(int iParam0) //Position: 0xD2B3 / 53939
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 956)[0]);
			break;
		
		case 0x00000001:
			if (Function_289(Local_436) == 0)
			{
				return GET_OBJECT_HEADING((*&Local_4 + 984)[0]);
			}
			return GET_OBJECT_HEADING((*&Local_4 + 984)[1]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1080)[1]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1180)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1276)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1276)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 956)[0]);
}

void Function_293(bool bParam0, int iParam1) //Position: 0xD3C0 / 54208
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_279(iParam1);
	*bParam0 = 1;
	return;
}

void Function_294() //Position: 0xD3E3 / 54243
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_295() //Position: 0xD3F8 / 54264
{
	Function_297();
	Function_296(10, 3);
	return;
}

void Function_296(int iParam0, int iParam1) //Position: 0xD407 / 54279
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_297() //Position: 0xD53E / 54590
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_301())
	{
		Function_300(10, 3);
	}
	else
	{
		Function_298();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_298() //Position: 0xD589 / 54665
{
	Function_299(25, 2);
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0xD595 / 54677
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_300(int iParam0, int iParam1) //Position: 0xD793 / 55187
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_301() //Position: 0xD8CA / 55498
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_152(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_302(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD931 / 55601
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_295();
			Function_294();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			*uParam1++;
			*uParam2 = 0;
			*uParam3 = 1000;
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
		*uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_282("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_303(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD9D7 / 55767
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_316(&Var15, &Var0);
	uVar20 = Function_315(*uParam1, &Var15);
	Function_314(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_313(uParam0, uVar20);
	Function_311(StackVal, uParam0, Var15.f_12);
	Function_309(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_308(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_305(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_304(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_304(int iParam0, int iParam1, int iParam2) //Position: 0xDA9E / 55966
{
	bool bVar0;
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
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_305(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xDAFA / 56058
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_307(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_307(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_304(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_306(bParam1->f_32);
	}
	else
	{
		Function_306(bParam1->f_32);
	}
	return 0;
}

void Function_306(bool bParam0) //Position: 0xDC80 / 56448
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_307(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xDCBA / 56506
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_308(int iParam0, var uParam1, int iParam2) //Position: 0xDD68 / 56680
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_309(var uParam0, int iParam1, int iParam2) //Position: 0xDD8C / 56716
{
	switch (Function_310())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_310() //Position: 0xDE28 / 56872
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

void Function_311(var uParam0, int iParam1, int iParam2) //Position: 0xDE64 / 56932
{
	switch (Function_312(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_312(bool bParam0) //Position: 0xDEFC / 57084
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_313(var uParam0, int iParam1) //Position: 0xE047 / 57415
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_314(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE196 / 57750
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_315(int iParam0, int iParam1) //Position: 0xE229 / 57897
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_316(var uParam0, var uParam1) //Position: 0xE243 / 57923
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1,6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_317() //Position: 0xE291 / 58001
{
	return Global_30920;
}

bool Function_318() //Position: 0xE29A / 58010
{
	if (IS_EXITFLAG_SET())
	{
		Function_287(bLocal_545);
		Function_283(StackVal, StackVal, 4, &bLocal_575, &bLocal_545, Function_291(bLocal_545), Function_287(bLocal_545), 0);
		return 0;
	}
	Function_625(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_436, bLocal_545, iLocal_546, &bLocal_576, &bLocal_574, &bLocal_575);
	if (bLocal_545 == 99 && bLocal_545 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_287(bLocal_545);
			Function_283(StackVal, StackVal, 1, &bLocal_575, &bLocal_545, Function_291(bLocal_545), Function_287(bLocal_545), 0);
			return 1;
		}
		if (Function_605(&Local_618, &uLocal_578, &uLocal_704, bLocal_548, iLocal_577))
		{
			if (Function_603(&uLocal_704))
			{
				Function_287(bLocal_545);
				Function_283(StackVal, StackVal, 5, &bLocal_575, &bLocal_545, Function_291(bLocal_545), Function_287(bLocal_545), 0);
				return 1;
			}
		}
	}
	switch (bLocal_545)
	{
		case 0x00000063:
			Function_571();
			break;
		
		case 0x00000000:
			Function_533();
			break;
		
		case 0x00000001:
			Function_507();
			break;
		
		case 0x00000002:
			Function_494();
			break;
		
		case 0x00000003:
			Function_483();
			break;
		
		case 0x00000004:
			Function_411();
			break;
		
		case 0x00000065:
			Function_321();
			break;
		
		case 0x00000064:
			if (Function_320(&bLocal_575))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_319(&bLocal_545, &iLocal_546, &iLocal_538))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_574)
	{
		Function_293(&bLocal_574, 8);
		Function_1();
		return 0;
	}
	if (bLocal_575 && bLocal_545 == 100)
	{
		Function_287(bLocal_545);
		Function_283(StackVal, StackVal, 5, &bLocal_575, &bLocal_545, Function_291(bLocal_545), Function_287(bLocal_545), 0);
	}
	if (bLocal_576)
	{
		Function_278(&bLocal_576, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_319(var uParam0, var uParam1, int iParam2) //Position: 0xE414 / 58388
{
	if (*uParam0 <= 98)
	{
		*uParam0++;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else if (*uParam0 == 98)
	{
		*uParam0 = 101;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_320(int iParam0) //Position: 0xE454 / 58452
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_321() //Position: 0xE467 / 58471
{
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			if (IS_VOLUME_VALID((*&Local_4 + 808)[3]))
			{
				Function_405();
				DESTROY_VOLUME((*&Local_4 + 808)[3]);
			}
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_402(0);
			bLocal_547 = Global_30693[0];
			if (!Function_268(bLocal_547))
			{
				Function_266(&Local_436);
			}
			Function_264(Global_34573, (*&Local_4 + 1276)[0], 0, 1, 1, 1);
			Function_261(&iLocal_553);
			iLocal_546 = 1;
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_398(&bLocal_488)) && (Function_268(bLocal_547) || bLocal_547 != 4294967295)) && Function_397())
			{
				Function_212();
				Function_211();
				Function_210();
				Function_209();
				Function_228();
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_397())
			{
				Function_395();
				Function_261(&iLocal_553);
				iLocal_546 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_329("$/cutscene/MEXICAN_ARMY_05_END/MEXICAN_ARMY_05_END", &iLocal_538, &Local_436, &bLocal_545, 74889, 71505, 70359, 64364, 62721, 62527, 0, 1, 1, 1, 2, 0, 1))
			{
				Function_261(&iLocal_553);
				Function_261(&iLocal_559);
				vLocal_810 = { -2760,928f, 33,311f, 4265,074f };
				vLocal_813 = { 11,977f, -94,543f, 0.0f };
				STREAMING_LOAD_SCENE_EXT(vLocal_810, vLocal_813, 1);
				iLocal_546 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_326(&iLocal_559) < 2.0f)
			{
				if (GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(Local_4.f_1664) && IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "marston_smoke"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "marston_smoke/01/exit");
					Function_324();
					vLocal_810 = { 14,23f, -93,566f, 0.0f };
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), vLocal_810, 0);
					ADVANCE_TIME_HOURS(1.0f);
					Function_322(1.0f, "Last_Stage().GID_CUTSCENE");
					ENABLE_USE_CONTEXTS(0);
					Function_261(&iLocal_553);
					iLocal_546 = 106;
				}
				else
				{
					vLocal_810 = { -2760,928f, 33,311f, 4265,074f };
					vLocal_813 = { 11,977f, -94,543f, 0.0f };
					STREAMING_LOAD_SCENE_EXT(vLocal_810, vLocal_813, 1);
					DECOR_SET_BOOL(Global_34573, "NoGringoCamera", true);
					DECOR_SET_BOOL(Global_34573, "LeanBack", true);
					GIVE_OBJECT_TO_LAYOUT(Local_4.f_1664, Global_6288);
					SET_PLAYER_CONTROL(0, 0, 1, 1);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
					SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1664, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_4.f_1664), "UseCase1", true, 1);
					vLocal_810 = { 14,23f, -93,566f, 0.0f };
					SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), vLocal_810, 0);
					Function_262(&iLocal_559, 1,75f);
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "exit"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "marston_smoke/01/exit");
			}
			else if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_SCENE();
				ENABLE_USE_CONTEXTS(1);
				Function_207();
				bLocal_574 = true;
			}
			break;
	}
	return;
}

void Function_322(bool bParam0, int iParam1) //Position: 0xE7DB / 59355
{
	Function_323(bParam0);
	return;
}

void Function_323(bool bParam0) //Position: 0xE7E6 / 59366
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

void Function_324() //Position: 0xE803 / 59395
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_221(Local_4.f_736);
	if (!SQUAD_GET(bLocal_551) != Local_4.f_736)
	{
		SQUAD_JOIN(bLocal_551, Local_4.f_736);
	}
	SQUAD_GOALS_CLEAR(Local_4.f_736);
	Function_240(Local_4.f_736);
	Function_325(Local_4.f_736);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			Function_75();
			vVar1 = { StackVal, StackVal, Function_75() };
			Function_75();
			Var4 = { StackVal, StackVal, Function_75() };
			GET_OBJECT_POSITION((*&Local_4 + 1380)[4], &vVar1);
			vVar1.x = (vVar1.x + RAND_FLOAT_RANGE(-2.0f, 2.0f));
			vVar1.f_8 = (vVar1.z + RAND_FLOAT_RANGE(-2.0f, 2.0f));
			GET_OBJECT_ORIENTATION((*&Local_4 + 1380)[4], &Var4);
			Var4.f_4 = (StackVal + RAND_FLOAT_RANGE(-20.0f, 20.0f));
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_712, vVar1, 1, true, 1);
			AI_GOAL_SHOOT_CLEAR(bLocal_712);
			MEMORY_CLEAR_ALL(bLocal_712);
		}
		bVar0++;
	}
	if (IS_ACTOR_VALID(bLocal_549))
	{
		SET_ACTOR_FACTION(bLocal_549, 16);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	return;
}

void Function_325(bool bParam0) //Position: 0xE90B / 59659
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
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

float Function_326(int iParam0) //Position: 0xE952 / 59730
{
	if (Function_328(iParam0))
	{
		if (Function_327(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_327(int iParam0) //Position: 0xEA1A / 59930
{
	return Function_152(*iParam0, 2);
}

bool Function_328(float fParam0) //Position: 0xEA27 / 59943
{
	return Function_152(*fParam0, 1);
}

bool Function_329(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xEA34 / 59956
{
	if (!bParam15)
	{
		Function_337(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_267(iParam2) || iParam2->f_24 < 1))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam11, iParam12, iParam13, iParam14);
				Call_Loc(iParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_261(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_336())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_335(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_261(iParam1 + 4);
						*iParam1 = 1004;
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
					Function_335(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_326(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_326(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(iParam5);
					if (StackVal)
					{
						Function_333(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_335(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_261(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_323(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_331();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(true);
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
				Call_Loc(iParam8);
				if (StackVal)
				{
					Function_330(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam1->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						DESTROY_VOLUME(iParam1->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(iParam9);
				if (StackVal)
				{
					Call_Loc(iParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_267(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_330(bool bParam0) //Position: 0xF048 / 61512
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

void Function_331() //Position: 0xF0ED / 61677
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_332();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_332() //Position: 0xF132 / 61746
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_333(bool bParam0, bool bParam1) //Position: 0xF144 / 61764
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_334(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_334(bool bParam0) //Position: 0xF1C4 / 61892
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == bParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_335(bool bParam0) //Position: 0xF1F3 / 61939
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, false);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_336() //Position: 0xF2AB / 62123
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

void Function_337(var uParam0, int iParam1) //Position: 0xF2E5 / 62181
{
	Function_338(uParam0, iParam1, 0);
	return;
}

void Function_338(var uParam0, bool bParam1, bool bParam2) //Position: 0xF2F3 / 62195
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_62478 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_85(20, 1, 0, 0);
		*uParam0 = 1105;
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
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			if (((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_277(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_85(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_339() //Position: 0xF43F / 62527
{
	switch (bLocal_545)
	{
		case 0x00000063:
			if (Function_375())
			{
				if (Function_368())
				{
					return 1;
				}
			}
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (!bLocal_750)
			{
				if (Function_368())
				{
					if (!iLocal_746)
					{
						SET_TIME_OF_DAY(Global_63405);
						iLocal_746 = 1;
					}
					return 1;
				}
			}
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			vLocal_810 = { -2760,928f, 33,311f, 4265,074f };
			vLocal_813 = { 11,977f, -94,543f, 0.0f };
			STREAMING_LOAD_SCENE_EXT(vLocal_810, vLocal_813, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_340() //Position: 0xF501 / 62721
{
	switch (bLocal_545)
	{
		case 0x00000063:
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[0]);
			DESTROY_VOLUME((*&Local_4 + 768)[0]);
			Function_345(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (!bLocal_750)
			{
				if (!iLocal_746)
				{
					SET_TIME_OF_DAY(Global_63405);
					iLocal_746 = 1;
				}
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[4]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[4]);
				DESTROY_VOLUME((*&Local_4 + 768)[4]);
				STREAMING_UNLOAD_SCENE();
				Function_341(1);
				Function_345(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
				GET_OBJECT_POSITION((*&Local_4 + 1080)[4], &vLocal_810);
				ENABLE_GAME_CAMERA_FOCUS(vLocal_810, -1.0f, 0, 0, 1, 0);
				return 1;
			}
			Function_345(0, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			Function_345(1, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[6]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 768)[6]);
			DESTROY_VOLUME((*&Local_4 + 768)[6]);
			DECOR_SET_BOOL(Global_34573, "NoGringoCamera", true);
			DECOR_SET_BOOL(Global_34573, "LeanBack", true);
			GIVE_OBJECT_TO_LAYOUT(Local_4.f_1664, Global_6288);
			SET_PLAYER_CONTROL(0, 0, 1, 1);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			SNAP_ACTOR_TO_GRINGO(Global_34573, Local_4.f_1664, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(Local_4.f_1664), "UseCase1", true, 1);
			vLocal_810 = { 14,23f, -93,566f, 0.0f };
			SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), vLocal_810, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_341(bool bParam0) //Position: 0xF6D9 / 63193
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!iLocal_743)
		{
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				bLocal_740 = false;
				while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bLocal_740);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1128)[bLocal_740], 0, 1, 1, 1);
						}
					}
					bLocal_740++;
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_740))
			{
				bLocal_740 = false;
				while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_740))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bLocal_740);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1160)[bLocal_740], 0, 1, 1, 1);
						}
					}
					bLocal_740++;
				}
			}
			iLocal_743 = 1;
		}
	}
	SQUAD_GOALS_CLEAR(Local_4.f_736);
	Function_240(Local_4.f_736);
	Function_325(Local_4.f_736);
	Function_344((*&Local_4 + 1560)[0], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[1], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[2], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[3], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[4], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[5], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[6], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[7], Local_4.f_736, 0);
	Function_343(Local_4.f_736, 200.0f);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				Function_342(bLocal_712);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_712, 100.0f);
				SET_ACTOR_POSTURE(bLocal_712, 0);
				SET_ACTOR_VISION_XRAY(bLocal_712, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, true);
			}
		}
		bVar0++;
	}
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_736, false, (*&Local_4 + 832)[11], 1, 2);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 832)[11], 1, 2);
	if (SQUAD_GET(bLocal_551) == Local_4.f_736)
	{
		bLocal_717 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1700, 2, 1, 0, 1, false);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1668), -1.0f, 1086324736);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bLocal_551);
		TASK_PRIORITY_SET(bLocal_551, true);
		TASK_SEQUENCE_PERFORM(bLocal_551, bLocal_717);
		TASK_SEQUENCE_RELEASE(bLocal_717, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_551, 16, false);
		SET_ACTOR_VISION_XRAY(bLocal_551, false);
		ACTOR_POP_NEXT_GAIT(bLocal_551, 2, false);
	}
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_551, true);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_551, true);
	PRINTSTRING(GET_OBJECT_NAME(Local_4.f_736));
	PRINTSTRING(" rebelliously defending hotel and train.");
	PRINTNL();
	iLocal_837 = 1;
	return;
}

void Function_342(bool bParam0) //Position: 0xF9A2 / 63906
{
	if (bLocal_545 < 2)
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 13, true);
	}
	else
	{
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 13, false);
	}
	return;
}

void Function_343(bool bParam0, bool bParam1) //Position: 0xF9C2 / 63938
{
	void fVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	fVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (fVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, bParam1);
		bVar1++;
	}
	return;
}

var Function_344(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFA1B / 64027
{
	var uVar0;
	struct<5> Var3;
	
	GET_OBJECT_POSITION(bParam0, &uVar0);
	GET_OBJECT_ORIENTATION(bParam0, &Var3);
	bVar6 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(false, bParam0, 2, 1, 1);
	if (IS_COVER_LOCATION_VALID(bParam2))
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bParam2, -1.0f, 1086324736);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &uVar0, -1.0f);
	}
	TASK_SEQUENCE_CLOSE();
	bVar7 = SQUAD_GOAL_ADD_GENERAL_TASK(bParam1, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar6);
	TASK_SEQUENCE_RELEASE(bVar6, 1);
	return bVar7;
}

void Function_345(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xFA7C / 64124
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
		bVar0 = Function_49();
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
			if (Function_40())
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
		Function_85(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_294();
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
	Function_330(bParam9);
}

int Function_346() //Position: 0xFB6C / 64364
{
	bool bVar0;
	
	switch (bLocal_545)
	{
		case 0x00000063:
			Function_264(Global_34573, (*&Local_4 + 956)[1], "CUTSCENE_CUSTOM_SET_POSES.SID_INITIALIZE", 0, 1, 0);
			Function_264(bLocal_549, (*&Local_4 + 956)[2], 0, 1, 1, 1);
			if (!iLocal_763)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 0);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				ACTOR_POP_NEXT_GAIT(bLocal_549, 1, false);
				GET_OBJECT_POSITION((*&Local_4 + 956)[4], &vLocal_810);
				ENABLE_GAME_CAMERA_FOCUS(vLocal_810, -1.0f, 0, 1, 1, 0);
				iLocal_763 = 1;
			}
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1676, true, 1, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_549, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			return 1;
			break;
		
		case 0x00000002:
			if (!bLocal_750)
			{
				ENABLE_CHILD_SECTOR("chu_corral01x");
				ENABLE_CHILD_SECTOR("chu_corral01Props01x");
				ENABLE_CHILD_SECTOR("chu_church_int_01x");
				ENABLE_CHILD_SECTOR("chu_cityHall_int_01x");
				ENABLE_CHILD_SECTOR("chu_bank01Props01x");
				Function_264(Global_34573, (*&Local_4 + 1080)[1], "", 0, 0, 0);
				Function_264(bLocal_549, (*&Local_4 + 1080)[3], 0, 1, 1, 1);
				Function_229();
				Function_264(bLocal_551, (*&Local_4 + 1080)[4], 0, 1, 1, 1);
				Function_350();
				Function_341(1);
				return 1;
			}
			Function_265(Global_34573, (*&Local_4 + 1080)[8], 0, 1, 1);
			Function_265(bLocal_551, (*&Local_4 + 1080)[9], 0, 1, 1);
			Function_216();
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, false, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 22, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 3, 2.0f, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 3, false);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_551, 0);
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH(false, Local_4.f_1700, 2, 1, 0, 1, false);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1668), -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_551);
			TASK_PRIORITY_SET(bLocal_551, true);
			TASK_SEQUENCE_PERFORM(bLocal_551, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			SET_ACTOR_VISION_XRAY(bLocal_551, false);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_551, true);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_551, true);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_551, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_551, 2);
			if (IS_OBJECT_VALID(bLocal_777))
			{
				DESTROY_OBJECT(bLocal_777);
			}
			AI_STOP_IGNORING_ACTORS();
			Function_240(Local_4.f_736);
			SQUAD_GOAL_ADD_BATTLE_ALLIES(Local_4.f_736, 0, Global_34573, 4294967295);
			SQUAD_GOALS_CLEAR(Local_4.f_744);
			Function_240(Local_4.f_744);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_744, false, 1, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bLocal_712);
						Function_348(bLocal_712);
					}
				}
				bVar0++;
			}
			AI_ACTOR_FORCE_SPEED(bLocal_551, 4);
			ACTOR_POP_NEXT_GAIT(bLocal_551, 3, false);
			Function_347();
			return 1;
			break;
		
		case 0x00000065:
			ENABLE_CHILD_SECTOR("chu_cantina01Props01x");
			ENABLE_CHILD_SECTOR("chu_corral01x");
			ENABLE_CHILD_SECTOR("chu_corral01Props01x");
			ENABLE_CHILD_SECTOR("chu_bank01x");
			ENABLE_CHILD_SECTOR("chu_bank01Props01x");
			ENABLE_CHILD_SECTOR("chu_church_int_01x");
			ENABLE_CHILD_SECTOR("chu_hotel01Props01x");
			ENABLE_CHILD_SECTOR("chu_hotel01x");
			ENABLE_CHILD_SECTOR("chu_cityHall_int_01x");
			ENABLE_CHILD_SECTOR("chu_market01x");
			ENABLE_CHILD_SECTOR("chu_wall02x");
			ENABLE_CHILD_SECTOR("chu_wall01props01x");
			ENABLE_CHILD_SECTOR("chu_flags01x");
			vLocal_810 = { 14,23f, -93,566f, 0.0f };
			SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), vLocal_810, 0);
			Function_264(bLocal_552, (*&Local_4 + 1276)[6], 0, 1, 1, 1);
			UI_EXCLUDE("LoadingSpinner");
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_347() //Position: 0xFFFA / 65530
{
	bLocal_740 = false;
	while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bLocal_740);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				DESTROY_ACTOR(bLocal_712);
			}
		}
		bLocal_740++;
	}
	DESTROY_OBJECT(Local_4.f_740);
	return;
}

void Function_348(bool bParam0) //Position: 0x1004C / 65612
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_349(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_349(var uParam0, bool bParam1) //Position: 0x103B0 / 66480
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_350() //Position: 0x103D2 / 66514
{
	bool bVar0;
	
	Function_366(&iLocal_823, 30, 0, 4294967295, 4294967295);
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_290((*&Local_4 + 1344)[3]);
	Function_365((*&Local_4 + 1344)[3]);
	bLocal_729 = CREATE_GRINGO_IN_LAYOUT(bLocal_435, "WeaponCrate", "Locked_Footlocker", Function_290((*&Local_4 + 1344)[3]), Function_365((*&Local_4 + 1344)[3]));
	if (!IS_OBJECT_VALID(bLocal_729))
	{
		LOG_ERROR("Failed to create Weapon Crate!");
	}
	else
	{
		DECOR_SET_INT(bLocal_729, "GringoDollarAmt", 20);
	}
	if (!iLocal_746)
	{
		SET_TIME_OF_DAY(Global_63405);
		iLocal_746 = 1;
	}
	ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
	Function_364(Global_34573);
	Function_362();
	Function_257("PostInit_Stage_Three()");
	if (!IS_OBJECT_VALID(Local_4.f_1712))
	{
		Local_4.f_1712 = CREATE_PROP_IN_LAYOUT(Local_4, "lantern05x0", "p_gen_lantern05x", -2681,394f, 36,56072f, 4228,616f, 0.0f, 0.0f, 0.0f, 1);
	}
	if (!IS_OBJECT_VALID(Local_4.f_1716))
	{
		Local_4.f_1716 = CREATE_PROP_IN_LAYOUT(Local_4, "lantern04x0", "p_gen_lantern04x", -2693,217f, 34,08482f, 4233,457f, 0.0f, 0.0f, 0.0f, 1);
	}
	if (!IS_OBJECT_VALID(Local_4.f_1720))
	{
		Local_4.f_1720 = CREATE_PROP_IN_LAYOUT(Local_4, "lantern04x1", "p_gen_lantern04x", -2685,586f, 33,73248f, 4233,18f, 0.0f, 0.0f, 0.0f, 1);
	}
	Function_224(6, 0, 1);
	Function_224(7, 1, 1);
	iLocal_577 = 1;
	AI_IGNORE_ACTOR(Global_34573);
	Function_343(Local_4.f_744, 200.0f);
	Function_361();
	SET_ACTOR_FACTION(bLocal_549, 21);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	Function_238(Local_4.f_728, 19);
	Function_238(Local_4.f_740, 19);
	Function_238(Local_4.f_744, 19);
	Function_360(Local_4.f_728, 8, 0, 0);
	Function_243(Local_4.f_728, 0);
	Function_357(Local_4.f_728, Local_4.f_736, 0);
	Function_357(Local_4.f_744, Local_4.f_736, 0);
	Function_357(Local_4.f_740, Local_4.f_736, 0);
	Function_240(Local_4.f_728);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	Function_354(Local_4.f_728, -1.0f);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, true);
				CLEAR_ACTOR_MAX_SPEED(bLocal_712);
				CLEAR_ACTOR_MAX_SPEED(bLocal_713);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_712);
				Function_353(bLocal_712, 0);
			}
		}
		bVar0++;
	}
	Function_240(Local_4.f_744);
	SQUAD_GOALS_CLEAR(Local_4.f_744);
	Function_354(Local_4.f_744, -1.0f);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				Function_353(bLocal_712, 0);
				if (ACTORS_IN_RANGE(bLocal_712, Global_34573, 2.0f))
				{
					KILL_ACTOR(bLocal_712);
				}
				else
				{
					SET_ACTOR_INVULNERABILITY(bLocal_712, true);
				}
			}
		}
		bVar0++;
	}
	Function_240(Local_4.f_740);
	SQUAD_GOALS_CLEAR(Local_4.f_740);
	Function_351(Local_4.f_740);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, true);
				Function_353(bLocal_712, 0);
			}
		}
		bVar0++;
	}
	Function_360(Local_4.f_736, 8, 0, 0);
	Function_243(Local_4.f_736, 0);
	Function_240(Local_4.f_736);
	SQUAD_GOALS_CLEAR(Local_4.f_736);
	Function_354(Local_4.f_736, -1.0f);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, true);
			}
		}
		bVar0++;
	}
	GET_OBJECT_POSITION((*&Local_4 + 1080)[4], &vLocal_810);
	ENABLE_GAME_CAMERA_FOCUS(vLocal_810, -1.0f, 0, 0, 1, 0);
	return;
}

void Function_351(bool bParam0) //Position: 0x10802 / 67586
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(bParam0);
	Function_240(bParam0);
	Function_325(bParam0);
	Function_344((*&Local_4 + 1160)[0], bParam0, 0);
	Function_344((*&Local_4 + 1160)[1], bParam0, 0);
	Function_344((*&Local_4 + 1160)[2], bParam0, 0);
	Function_352(bParam0, (*&Local_4 + 832)[5], 1, 4294967295);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			Function_342(bLocal_712);
		}
		bVar0++;
	}
	PRINTSTRING(GET_OBJECT_NAME(bParam0));
	PRINTSTRING(" Defending Cantina Outside");
	PRINTNL();
	return;
}

var Function_352(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x108AE / 67758
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, iParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_353(bool bParam0, bool bParam1) //Position: 0x108E9 / 67817
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_354(bool bParam0, bool bParam1) //Position: 0x10909 / 67849
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_356(bVar1, &uVar3);
			bVar2 = FIND_NEAREST_COVER_LOCATION(&uVar3, 3.0f, Function_355(bVar1), 360.0f, 7);
			if (IS_COVER_LOCATION_VALID(bVar2))
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bVar1, bVar2, bParam1, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

var Function_355(bool bParam0) //Position: 0x1097F / 67967
{
	return GET_HEADING(bParam0);
}

void Function_356(bool bParam0, bool bParam1) //Position: 0x1098A / 67978
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_357(bool bParam0, bool bParam1, int iParam2) //Position: 0x10997 / 67991
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar3);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_358(&bVar0, bVar1, iParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_358(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10A12 / 68114
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_359(bParam1);
			vVar0 = { StackVal, StackVal, Function_359(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*bParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*bParam0, bParam1, &vVar0);
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

vector3 Function_359(bool bParam0) //Position: 0x10B1A / 68378
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

void Function_360(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10B84 / 68484
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (iParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(bVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bVar1, bParam1, iParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_361() //Position: 0x10BF4 / 68596
{
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SATCHEL_SET_ENABLED(0);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
	SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk");
	SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury");
	if (!iLocal_744)
	{
		SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(0, 0);
		SET_PLAYER_ALLOW_PICKUP(0, 0);
		SET_PLAYER_MELEE_MODE_SELECTED(0, 0);
		ENABLE_USE_CONTEXTS(0);
		iLocal_744 = 1;
	}
	return;
}

void Function_362() //Position: 0x10C7A / 68730
{
	if (!IS_ACTORSET_VALID(Local_4.f_764))
	{
		Function_363();
		SET_ACTOR_PERMANENT_DEAD((*&Local_4 + 752)[02]);
	}
	return;
}

void Function_363() //Position: 0x10C9A / 68762
{
	Local_4.f_764 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "DeadSoldierset", 0);
	(*&Local_4 + 752)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MexArmyDeadSoldier", 379, -2682,566f, 31,35864f, 4252,642f, 0.0f, 18,82047f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_764, (*&Local_4 + 752)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 752)[02], 8, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 752)[02], -1.0f, 0, 0);
	return;
}

void Function_364(bool bParam0) //Position: 0x10D2A / 68906
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

vector3 Function_365(bool bParam0) //Position: 0x10D4F / 68943
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

void Function_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10D76 / 68982
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_367(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_367(int iParam0) //Position: 0x10D9A / 69018
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

bool Function_368() //Position: 0x112D7 / 70359
{
	switch (bLocal_545)
	{
		case 0x00000063:
			if ((!Function_372() && !Function_398(&bLocal_443)) && Function_369())
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 2)
			{
				Function_341(0);
				Function_366(&iLocal_823, 30, 0, 4294967295, 4294967295);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			if (!Function_372() && !Function_398(&bLocal_469))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			if (!Function_372() && !Function_398(&bLocal_488))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_369() //Position: 0x11388 / 70536
{
	Function_370(&Local_4 + 80, 1196, 2, 0);
	Function_370(&Local_4 + 80, 976, 2, 0);
	Function_370(&Local_4 + 80, 379, 2, 0);
	Function_370(&Local_4 + 80, 380, 2, 0);
	Function_370(&Local_4 + 80, 391, 2, 0);
	Function_370(&Local_4 + 80, 381, 2, 0);
	Function_370(&Local_4 + 80, 392, 2, 0);
	Function_370(&Local_4 + 80, 977, 2, 0);
	Function_370(&Local_4 + 80, 983, 2, 0);
	if (Function_398(&Local_4 + 80))
	{
		return 1;
	}
	return 0;
}

var Function_370(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11410 / 70672
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_172(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_371(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_371(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_371(var uParam0, int iParam1) //Position: 0x114E0 / 70880
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

bool Function_372() //Position: 0x114F1 / 70897
{
	Function_373(&Local_4 + 4, "p_gen_lantern05x", 0, 0);
	Function_373(&Local_4 + 4, "p_gen_lantern04x", 0, 0);
	Function_373(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/reyes_saves", 1, 0);
	Function_373(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/saved_by_reyes", 1, 0);
	Function_373(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/reyes_frees_marston", 1, 0);
	Function_373(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/missionend_marstonsmoke", 1, 0);
	if (Function_398(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_373(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x11655 / 71253
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_374(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_371(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_374(var uParam0, int iParam1, int iParam2) //Position: 0x1168D / 71309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
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

bool Function_375() //Position: 0x11751 / 71505
{
	var uVar0;
	var uVar3;
	var uVar6;
	var uVar9;
	var uVar12;
	
	switch (bLocal_545)
	{
		case 0x00000063:
			if (!Function_386(0))
			{
				return 0;
			}
			if (!IS_ACTOR_VALID(bLocal_549))
			{
				bLocal_549 = Function_378(6, 0, 1, 0, 0, 0, 0, 0, 0);
				return 0;
			}
			if (!Function_372())
			{
				return 0;
			}
			if (!Function_398(&bLocal_443))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (!bLocal_750)
			{
				switch (iLocal_820)
				{
					case 0x00000000:
						Function_322(1.0f, "CUTSCENE_CUSTOM_STREAMING() - SID_THIRD_STAGE.FIRST_SCENE");
						break;
					
					case 0x00000001:
						DISABLE_CHILD_SECTOR("chu_corral01x");
						DISABLE_CHILD_SECTOR("chu_corral01Props01x");
						DISABLE_CHILD_SECTOR("chu_church_int_01x");
						DISABLE_CHILD_SECTOR("chu_cityHall_int_01x");
						DISABLE_CHILD_SECTOR("chu_bank01Props01x");
						if (!IS_OBJECT_VALID(bLocal_779))
						{
							GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar0);
							bLocal_779 = Function_376("nchuparosa", "cityHall01", 1);
						}
						if (!IS_OBJECT_VALID(bLocal_780))
						{
							GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar3);
							bLocal_780 = Function_376("nchuparosa", "cityHall01", 6);
						}
						if (IS_OBJECT_VALID(bLocal_779))
						{
							CLOSE_DOOR_FAST(bLocal_779);
						}
						if (IS_OBJECT_VALID(bLocal_780))
						{
							CLOSE_DOOR_FAST(bLocal_780);
						}
						if (!IS_OBJECT_VALID(bLocal_778))
						{
							GET_OBJECT_POSITION((*&Local_4 + 1080)[5], &uVar6);
							bLocal_778 = FIND_NEAREST_DOOR(&uVar6, 5.0f);
						}
						if (IS_OBJECT_VALID(bLocal_778))
						{
							CLOSE_DOOR_FAST(bLocal_778);
						}
						Function_322(1.0f, "CUTSCENE_CUSTOM_STREAMING() - SID_THIRD_STAGE.SECOND_SCENE");
						break;
					
					default:
						LOG_ERROR("CUTSCENE_CUSTOM_STREAMING() - SID_THIRD_STAGE - invalid iThirdStageSceneStreaming");
						break;
				}
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(Global_34573, 22, false, 1, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 0, 0);
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			}
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			UI_INCLUDE("LoadingSpinner");
			DISABLE_CHILD_SECTOR("chu_cantina01Props01x");
			DISABLE_CHILD_SECTOR("chu_corral01x");
			DISABLE_CHILD_SECTOR("chu_corral01Props01x");
			DISABLE_CHILD_SECTOR("chu_bank01x");
			DISABLE_CHILD_SECTOR("chu_bank01Props01x");
			DISABLE_CHILD_SECTOR("chu_church_int_01x");
			DISABLE_CHILD_SECTOR("chu_hotel01Props01x");
			DISABLE_CHILD_SECTOR("chu_hotel01x");
			DISABLE_CHILD_SECTOR("chu_cityHall_int_01x");
			DISABLE_CHILD_SECTOR("chu_market01x");
			DISABLE_CHILD_SECTOR("chu_wall02x");
			DISABLE_CHILD_SECTOR("chu_wall01props01x");
			DISABLE_CHILD_SECTOR("chu_flags01x");
			if (!IS_OBJECT_VALID(bLocal_779))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar9);
				bLocal_779 = Function_376("nchuparosa", "cityHall01", 1);
			}
			if (!IS_OBJECT_VALID(bLocal_780))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar12);
				bLocal_780 = Function_376("nchuparosa", "cityHall01", 6);
			}
			if (IS_OBJECT_VALID(bLocal_779))
			{
				CLOSE_DOOR_FAST(bLocal_779);
			}
			if (IS_OBJECT_VALID(bLocal_780))
			{
				CLOSE_DOOR_FAST(bLocal_780);
			}
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			vLocal_810 = { -2760,928f, 33,311f, 4265,074f };
			vLocal_813 = { 11,977f, -94,543f, 0.0f };
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(vLocal_810, vLocal_813);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_376(int iParam0, int iParam1, int iParam2) //Position: 0x11C2C / 72748
{
	return Function_377(Global_29006, iParam0, iParam1, iParam2);
}

int Function_377(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x11C3E / 72766
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_81(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_378(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x11CDA / 72922
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
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
	iParam2 = iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_158(&(Global_29008[Global_30621[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(Global_8492[iParam014]))
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
	if (!Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 1;
		STREAMING_REQUEST_ACTOR(StackVal, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		return "";
	}
	if (bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(Global_8492[iParam014]);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
		Function_224(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_385(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_380(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = iParam3;
			vVar3.y = iParam4;
			vVar3.z = iParam5;
			if (Function_73(StackVal, StackVal, vVar3))
			{
				iVar6 = 0;
				while (iVar6 <= Global_3422)
				{
					if (IS_SCRIPT_VALID(Global_3422[iVar640].f_108))
					{
						vVar3 = { StackVal, StackVal, *(&Global_3422[iVar640] + 52) };
					}
					iVar6++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vVar3, 0.0f, 0.0f, 0.0f);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		REFERENCE_ACTOR(bVar1);
		TASK_CLEAR(bVar1);
		TASK_PRIORITY_SET(bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
		Function_379(bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			DECOR_SET_INT(Global_8492[iParam014], "ambientFaction", GET_ACTOR_FACTION(bVar1));
		}
		SET_ACTOR_FACTION(bVar1, 20);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, false);
		SET_ACTOR_ALLOW_DISARM(bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(bVar1, 3);
		SET_ACTOR_IS_COMPANION(bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, false);
		SET_ACTOR_IS_AMBIENT(bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar1, false);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, false);
		Function_353(bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bVar1, 1);
		if (DECOR_CHECK_EXIST(bVar1, "hidden"))
		{
			DECOR_REMOVE(bVar1, "hidden");
		}
		SET_DRAW_ACTOR(bVar1, true);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar1, 1);
		Global_8492[iParam014].f_4 = bVar1;
		return bVar1;
	}
	return "";
}

void Function_379(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x121C4 / 74180
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_CRIPPLE_ENABLE(bParam0, iParam4);
		SET_ACTOR_ALLOW_DISARM(bParam0, bParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "CanBeLasso", bParam3);
		if (IS_ACTOR_RIDING(bParam0))
		{
			bVar0 = GET_MOUNT(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				SET_ALLOW_JACK(bVar0, iParam2);
			}
		}
	}
}

bool Function_380(int iParam0, bool bParam1) //Position: 0x12218 / 74264
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_384(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_16516))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_16516);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_ENUM(bVar2) == iParam0)
					{
						Function_381(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_381(bool bParam0, bool bParam1) //Position: 0x12298 / 74392
{
	Function_383(bParam0);
	Function_382(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_382(bool bParam0) //Position: 0x122BE / 74430
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_383(bool bParam0) //Position: 0x122E2 / 74466
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	return;
}

bool Function_384(int iParam0) //Position: 0x123B1 / 74673
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_385(int iParam0, bool bParam1) //Position: 0x123C8 / 74696
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (GET_ACTOR_ENUM(bVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(bParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(bVar1, bParam1);
					}
					DESTROY_ITERATOR(bVar0);
					LOG_ERROR("found actor in GC!");
					return bVar2;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

bool Function_386(bool bParam0) //Position: 0x1245B / 74843
{
	if (!Global_3366)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

int Function_387() //Position: 0x12489 / 74889
{
	switch (bLocal_545)
	{
		case 0x00000063:
			Function_391(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_290((*&Local_4 + 956)[0]);
			Function_389(StackVal, StackVal, bLocal_435, Function_290((*&Local_4 + 956)[0]), &Local_4 + 768[0], 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (!bLocal_750)
			{
				switch (iLocal_819)
				{
					case 0x00000000:
						Function_366(&iLocal_823, 8, 0, 4294967295, 4294967295);
						Function_391(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						Function_290((*&Local_4 + 1080)[0]);
						Function_389(StackVal, StackVal, bLocal_435, Function_290((*&Local_4 + 1080)[0]), &Local_4 + 768[3], 0, 0, 0, 0, 1, 1);
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
						Function_402(0);
						iLocal_819 = 1;
						iLocal_820 = 0;
						break;
					
					case 0x00000001:
						Function_290((*&Local_4 + 1080)[1]);
						Function_389(StackVal, StackVal, bLocal_435, Function_290((*&Local_4 + 1080)[1]), &Local_4 + 768[4], 0, 0, 0, 0, 1, 1);
						Function_402(0);
						if (SQUAD_IS_VALID(Local_4.f_728))
						{
							bLocal_740 = false;
							while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_728))
							{
								bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bLocal_740);
								if (IS_ACTOR_VALID(bLocal_712))
								{
									if (IS_ACTOR_ALIVE(bLocal_712))
									{
										TASK_POINT_GUN_AT_OBJECT(bLocal_712, Global_34573, -1.0f, 1);
									}
								}
								bLocal_740++;
							}
						}
						if (SQUAD_IS_VALID(Local_4.f_740))
						{
							bLocal_740 = false;
							while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_740))
							{
								bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bLocal_740);
								if (IS_ACTOR_VALID(bLocal_712))
								{
									if (IS_ACTOR_ALIVE(bLocal_712))
									{
										TASK_POINT_GUN_AT_OBJECT(bLocal_712, Global_34573, -1.0f, 1);
									}
								}
								bLocal_740++;
							}
						}
						Function_388(0, 0, 1);
						Function_366(&iLocal_823, 0, 0, 4294967295, 4294967295);
						DYNAMICMIXER_TRIGGERSTATE("DYNAMIC_MIXER_EAR_RING");
						if (!iLocal_746)
						{
							SET_TIME_OF_DAY(Global_63405);
							iLocal_746 = 1;
						}
						iLocal_819 = 2;
						iLocal_820 = 1;
						break;
					
					default:
						LOG_ERROR("CUTSCENE_CUSTOM_SETUP() - SID_THIRD_STAGE - invalid iThirdStageSceneSetup");
						break;
				}
			}
			else
			{
				Function_391(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				Function_290((*&Local_4 + 1344)[6]);
				Function_389(StackVal, StackVal, bLocal_435, Function_290((*&Local_4 + 1344)[6]), &Local_4 + 896[6], 0, 0, 0, 0, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000065:
			Function_391(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_290((*&Local_4 + 1276)[0]);
			Function_389(StackVal, StackVal, bLocal_435, Function_290((*&Local_4 + 1276)[0]), &Local_4 + 768[6], 1, 0, 0, 0, 1, 1);
			Function_264(Global_34573, (*&Local_4 + 1276)[0], 0, 1, 1, 1);
			Function_264(bLocal_551, (*&Local_4 + 1276)[2], 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_388(int iParam0, bool bParam1, bool bParam2) //Position: 0x1276D / 75629
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	if (Global_28179 == iParam0)
	{
		return 1;
	}
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_126(iParam0) && !bParam2)
	{
		return 0;
	}
	Global_28179 = iParam0;
	if (bParam1)
	{
		Function_124(iParam0, 8192);
	}
	DECOR_SET_BOOL(Global_34573, "playerChangeOutfits", true);
	return 1;
}

void Function_389(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x127FF / 75775
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = iParam6;
	vVar2.y = iParam7;
	vVar2.z = iParam8;
	if (bParam5)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(Global_34573, &vParam1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*uParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*uParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (!Global_3380)
		{
			if (IS_ACTOR_VALID(bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar0, bParam0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_390(bVar1, bParam0);
			}
		}
		if (!Function_73(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*uParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*uParam4);
		if (bParam9)
		{
			Global_63117 = *uParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_390(bool bParam0, bool bParam1) //Position: 0x12A6D / 76397
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(bVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_391(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x12AE2 / 76514
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_294();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_49();
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
			if (Function_40())
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
				Function_394(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_394(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_85(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_393()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_393()));
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
	if (Function_392(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x4000000);
	}
	if (Function_392(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x8000000);
	}
}

bool Function_392(int iParam0) //Position: 0x12D8B / 77195
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_393() //Position: 0x12DA7 / 77223
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

vector3 Function_394(bool bParam0) //Position: 0x12E26 / 77350
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_395() //Position: 0x12E37 / 77367
{
	Function_366(&iLocal_823, 0, 0, 4294967295, 4294967295);
	Function_396(1, 0, 0, 0);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1664), true);
	if (IS_ACTOR_VALID(bLocal_552))
	{
		Function_264(bLocal_552, (*&Local_4 + 1276)[6], 0, 1, 1, 1);
	}
	return;
}

void Function_396(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x12E75 / 77429
{
	bool bVar0;
	
	if (bParam0)
	{
		if (bParam2)
		{
			if (!Function_160(GET_WEAPON_IN_HAND(bLocal_549)))
			{
				ACTOR_DRAW_ANY_WEAPON(bLocal_549, iParam3);
			}
		}
		else if (Function_160(GET_WEAPON_IN_HAND(bLocal_549)))
		{
			ACTOR_HOLSTER_WEAPON(bLocal_549, iParam3);
		}
	}
	if (bParam1)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					if (bParam2)
					{
						if (!Function_160(GET_WEAPON_IN_HAND(bLocal_712)))
						{
							ACTOR_DRAW_ANY_WEAPON(bLocal_712, iParam3);
						}
					}
					else if (Function_160(GET_WEAPON_IN_HAND(bLocal_712)))
					{
						ACTOR_HOLSTER_WEAPON(bLocal_712, iParam3);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_397() //Position: 0x12F25 / 77605
{
	Function_370(&Local_4 + 540, 379, 2, 0);
	Function_370(&Local_4 + 540, 380, 2, 0);
	Function_370(&Local_4 + 540, 391, 2, 0);
	Function_370(&Local_4 + 540, 381, 2, 0);
	Function_370(&Local_4 + 540, 392, 2, 0);
	Function_370(&Local_4 + 540, 516, 2, 0);
	Function_370(&Local_4 + 540, 521, 2, 0);
	Function_370(&Local_4 + 540, 529, 2, 0);
	Function_370(&Local_4 + 540, 517, 2, 0);
	Function_370(&Local_4 + 540, 660, 2, 0);
	if (Function_398(&Local_4 + 540))
	{
		return 1;
	}
	return 0;
}

bool Function_398(bool bParam0) //Position: 0x12FC5 / 77765
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_401();
	iVar1 = 0;
	if (!Function_172(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_371(bParam0[iVar03], 8);
		}
		else if (Function_400())
		{
			iVar1 = 1;
			Function_371(bParam0[iVar03], 8);
		}
		Function_371(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_172(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_172(bParam0[03], 8) || iVar1));
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
				Function_371(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_371(bParam0[iVar03], 2);
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
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_371(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_371(bParam0[iVar03], 2);
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
	Function_399();
	return 1;
}

void Function_399() //Position: 0x13340 / 78656
{
	if (!Function_392(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_400() //Position: 0x13380 / 78720
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

void Function_401() //Position: 0x133AB / 78763
{
	if (!Function_392(128))
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

void Function_402(bool bParam0) //Position: 0x133ED / 78829
{
	if (bParam0)
	{
		Function_204(256);
		Function_184(4194304);
	}
	else
	{
		Function_184(256);
		Function_204(4194304);
	}
	Function_161(114702);
	Function_403(9);
	return;
}

void Function_403(int iParam0) //Position: 0x13421 / 78881
{
	Function_404(&Global_28842, iParam0);
	return;
}

void Function_404(var uParam0, var uParam1) //Position: 0x1342F / 78895
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_405() //Position: 0x13452 / 78930
{
	Function_161(114689);
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_218(&Local_4 + 728);
		DESTROY_OBJECT(Local_4.f_728);
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_218(&Local_4 + 744);
		DESTROY_OBJECT(Local_4.f_744);
	}
	if (SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_218(&Local_4 + 740);
		DESTROY_OBJECT(Local_4.f_740);
	}
	if (SQUAD_IS_VALID(Local_4.f_732))
	{
		Function_218(&Local_4 + 732);
		DESTROY_OBJECT(Local_4.f_732);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 664)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 664)[02]);
	}
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		bLocal_740 = false;
		while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_736))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bLocal_740);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					SET_ACTOR_VISION_XRAY(bLocal_712, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, false);
					AI_GOAL_SHOOT_CLEAR(bLocal_712);
				}
			}
			bLocal_740++;
		}
	}
	if (SQUAD_IS_VALID(bLocal_714))
	{
		Function_406(&bLocal_714);
		DESTROY_OBJECT(bLocal_714);
	}
	if (IS_OBJECT_VALID(Local_4.f_1680))
	{
		DESTROY_OBJECT(Local_4.f_1680);
	}
	if (IS_OBJECT_VALID(Local_4.f_1684))
	{
		DESTROY_OBJECT(Local_4.f_1684);
	}
	if (IS_OBJECT_VALID(Local_4.f_1688))
	{
		DESTROY_OBJECT(Local_4.f_1688);
	}
	if (IS_OBJECT_VALID(bLocal_728))
	{
		DESTROY_OBJECT(bLocal_728);
	}
	if (IS_OBJECT_VALID(bLocal_711))
	{
		Function_226(bLocal_711);
	}
	if (IS_BLIP_VALID(bLocal_765))
	{
		REMOVE_BLIP(bLocal_765);
	}
	if (IS_BLIP_VALID(bLocal_766))
	{
		REMOVE_BLIP(bLocal_766);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	Function_224(6, 0, 1);
	if (IS_ACTOR_ALIVE(bLocal_552))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
		}
	}
	Function_216();
	if (IS_OBJECT_VALID(bLocal_777))
	{
		DESTROY_OBJECT(bLocal_777);
	}
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
	SET_ACTOR_FACTION(bLocal_549, 16);
	Function_201(6, 1, 0, 1, 1);
	Function_201(5, 1, 0, 1, 1);
	Function_169(&Local_4 + 4);
	Function_169(&bLocal_443);
	return;
}

void Function_406(int iParam0) //Position: 0x1363F / 79423
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_407(bool bParam0) //Position: 0x136BE / 79550
{
	Function_408(0, 0x40400000);
	Function_192();
	Function_191();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_408(bool bParam0, float fParam1) //Position: 0x136F2 / 79602
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_410();
	Function_409();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_409() //Position: 0x137F0 / 79856
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_410() //Position: 0x13822 / 79906
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

void Function_411() //Position: 0x1391F / 80159
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bLocal_729))
	{
		if (!DECOR_CHECK_EXIST(bLocal_729, "GringoIsDone"))
		{
			if (GRINGO_STAY_ACTIVE(GET_GRINGO_FROM_OBJECT(bLocal_729), 4294967295))
			{
				DECOR_SET_BOOL(bLocal_729, "GringoIsDone", true);
			}
		}
	}
	if (iLocal_546 < 5 && iLocal_546 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 808)[3]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[3]))
			{
				Function_405();
				DESTROY_VOLUME((*&Local_4 + 808)[3]);
			}
		}
		if (iLocal_546 <= 6 && iLocal_546 >= 8)
		{
			if (!Function_455())
			{
				Function_261(&iLocal_553);
				iLocal_724 = 10;
				iLocal_546 = 105;
			}
		}
	}
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			if (IS_VOLUME_VALID((*&Local_4 + 808)[2]))
			{
				Function_454();
				DESTROY_VOLUME((*&Local_4 + 808)[2]);
			}
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_402(0);
			bLocal_547 = Global_30693[0];
			if (!Function_268(bLocal_547))
			{
				Function_266(&Local_436);
			}
			if (iLocal_568[3] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Stage_Five().GID_INITIALIZE");
				}
				if (!Function_453(0))
				{
					Function_388(0, 0, 1);
				}
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_264(Global_34573, (*&Local_4 + 1276)[0], 0, 1, 1, 1);
				Function_264(bLocal_551, (*&Local_4 + 1180)[2], 0, 1, 1, 1);
				Function_261(&iLocal_553);
				iLocal_546 = 1;
			}
			else
			{
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_268(bLocal_547) || bLocal_547 != 4294967295)) && Function_397())
			{
				Function_247();
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000002:
			if (!bLocal_741)
			{
				Function_288(bLocal_545);
				Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[2], Function_292(bLocal_545), 0);
			}
			if (iLocal_568[3] == 0)
			{
				Function_264(Global_34573, (*&Local_4 + 1276)[0], 0, 1, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, ACTOR_GET_BEST_WEAPON_OF_TYPE(Global_34573, 40), 0);
				SET_PLAYER_POSTURE(0, 0, 0);
				ATTACH_PLAYER_TO_COVER(0, 1, 1);
				ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
				Function_264(bLocal_551, (*&Local_4 + 1180)[3], 0, 1, 1, 1);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1204)[bVar0], 0, 1, 1, 1);
						}
					}
					bVar0++;
				}
				Function_347();
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1236)[bVar0], 0, 1, 1, 1);
						}
					}
					bVar0++;
				}
			}
			Function_443();
			Function_261(&iLocal_553);
			iLocal_546 = 3;
			break;
		
		case 0x00000003:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			Function_261(&iLocal_553);
			Function_261(&iLocal_556);
			Function_261(&iLocal_559);
			Function_261(&iLocal_562);
			iLocal_546 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				if (!DECOR_CHECK_EXIST(bLocal_729, "GringoIsDone"))
				{
					if (GRINGO_STAY_ACTIVE(GET_GRINGO_FROM_OBJECT(bLocal_729), 4294967295))
					{
						DECOR_SET_BOOL(bLocal_729, "GringoIsDone", true);
						Function_261(&iLocal_553);
					}
				}
				else if (Function_442() || Function_326(&iLocal_553) < 3.0f)
				{
					if (Function_326(&iLocal_553) < 3.0f)
					{
					}
					Function_322(1.0f, "STAGE 05.GID_FIRST_GOAL");
					Function_441();
					Function_261(&iLocal_553);
					iLocal_546 = 7;
				}
			}
			else if (!HUD_IS_FADING())
			{
				Function_322(1.0f, "STAGE 05.GID_FIRST_GOAL");
				Function_441();
				Function_261(&iLocal_553);
				iLocal_546 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_439("MexArmy05_obj03_2", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_553);
				Function_261(&iLocal_556);
				Function_261(&iLocal_559);
				iLocal_724 = 10;
				iLocal_546 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_431(&iLocal_559, (60.0f * 2.0f), 200.0f, bLocal_551, "MA05_return_rebelleader", "MA05_too_far_rebelleader", &bLocal_575, 0, bLocal_435, Local_4, 325, 1))
			{
				Function_419();
			}
			break;
		
		case 0x00000069:
			Function_290((*&Local_4 + 1276)[7]);
			Function_414(StackVal, StackVal, "$/cutscene/MEXICAN_ARMY_05_END/MEXICAN_ARMY_05_END", &uLocal_709, Function_290((*&Local_4 + 1276)[7]), 1, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
			if (Function_440(&iLocal_553, 3,5f))
			{
				if (IS_BLIP_VALID(bLocal_765))
				{
					REMOVE_BLIP(bLocal_765);
				}
				if (IS_BLIP_VALID(bLocal_766))
				{
					REMOVE_BLIP(bLocal_766);
				}
				Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, "Stage_Five().GID_FADE_OUT");
				Function_261(&iLocal_553);
				iLocal_546 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_412();
				iLocal_568[4] = 1;
				Function_261(&iLocal_553);
				bLocal_545 = 101;
				iLocal_546 = 0;
			}
			break;
	}
	return;
}

void Function_412() //Position: 0x13EB8 / 81592
{
	Function_208();
	Function_413(Local_4.f_728);
	Function_413(Local_4.f_740);
	Function_413(Local_4.f_744);
	Function_413(Local_4.f_748);
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		Function_238(Local_4.f_736, 20);
		bLocal_740 = false;
		while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_736))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bLocal_740);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_712, 0);
				AI_GOAL_SHOOT_CLEAR(bLocal_712);
			}
			bLocal_740++;
		}
	}
	Function_213("Cleanup_Stage_Five()");
	return;
}

void Function_413(bool bParam0) //Position: 0x13F52 / 81746
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				KILL_ACTOR(bLocal_712);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_712)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_712));
			}
		}
		bVar0++;
	}
	return;
}

int Function_414(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x13FA5 / 81829
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_417(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_418()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *uParam1 == 0)
		{
			if (*uParam1 != 5)
			{
				*uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_73(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_415();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*uParam1 = 0;
				break;
		}
	}
	else if ((!Function_417(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_418()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_417(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_415() //Position: 0x141EE / 82414
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &vVar7, &Var10);
			Function_416(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_416(char* cParam0, vector3 vParam1) //Position: 0x14242 / 82498
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_417(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1436A / 82794
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_359(bParam0);
		if (VDIST(Function_359(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_418() //Position: 0x143F4 / 82932
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_419() //Position: 0x14403 / 82947
{
	uLocal_726 = uLocal_726;
	switch (iLocal_724)
	{
		case 0x0000000A:
			if (bLocal_748)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_430();
					iLocal_724 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_429();
				iLocal_724 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_OBJECT_VALID(bLocal_711))
				{
					Function_261(&iLocal_559);
					Function_439("MexArmy05_obj04_a", 7,5f, 1, 2, 0, 0, 0);
				}
				iLocal_724 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_440(&iLocal_559, 5.0f))
			{
				Function_428();
				iLocal_724 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_426(Global_34573, bLocal_711) >= 25.0f)
				{
					Function_425();
					Function_261(&iLocal_559);
					iLocal_724 = 15;
				}
				if (Function_426(Global_34573, bLocal_711) < 50.0f)
				{
					Function_422();
					iLocal_724 = 16;
				}
			}
			break;
		
		case 0x0000000F:
			if (Function_420(&iLocal_559, 7,5f))
			{
				iLocal_724 = 14;
			}
			break;
		
		case 0x00000010:
			if (Function_426(Global_34573, bLocal_711) > ((25.0f + 50.0f) / 2.0f))
			{
				iLocal_724 = 14;
			}
			break;
		
		default:
			break;
	}
	return;
}

bool Function_420(int iParam0, float fParam1) //Position: 0x1453E / 83262
{
	if (Function_440(iParam0, fParam1))
	{
		Function_421(iParam0);
		return 1;
	}
	return 0;
}

void Function_421(int iParam0) //Position: 0x14556 / 83286
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_422() //Position: 0x1456A / 83306
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_AwayFountain", "MexArmy05_AwayFountain", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423(int iParam0) //Position: 0x145BF / 83391
{
	Function_424(0, Global_34573, iParam0, 0);
	Function_424(2, bLocal_549, iParam0, 0);
	Function_424(1, bLocal_551, iParam0, 0);
	Function_424(3, (*&Local_4 + 676)[02], iParam0, 0);
	Function_424(4, (*&Local_4 + 676)[12], iParam0, 0);
	Function_424(5, (*&Local_4 + 676)[22], iParam0, 0);
	Function_424(6, bLocal_759, iParam0, 0);
	return;
}

void Function_424(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1461A / 83482
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_152(uParam2, Function_138(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_425() //Position: 0x1463F / 83519
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_ReyesWorksUp", "MexArmy05_ReyesWorksUp", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_426(bool bParam0, bool bParam1) //Position: 0x14694 / 83604
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_359(bParam0);
			vVar0 = { StackVal, StackVal, Function_359(bParam0) };
			Function_427(bParam1);
			vVar3 = { StackVal, StackVal, Function_427(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_427(bool bParam0) //Position: 0x14734 / 83764
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

void Function_428() //Position: 0x147A0 / 83872
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_BanterWalkFountain_v1_AA", "MexArmy05_BanterWalkFountain_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_BanterWalkFountain_v1_AB", "MexArmy05_BanterWalkFountain_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_BanterWalkFountain_v1_AC", "MexArmy05_BanterWalkFountain_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_BanterWalkFountain_v1_AD", "MexArmy05_BanterWalkFountain_v1_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_BanterWalkFountain_v1_AE", "MexArmy05_BanterWalkFountain_v1_AE", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x14959 / 84313
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_KillAllSoldiersRey", "MexArmy05_KillAllSoldiersRey", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x149BA / 84410
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_KillAllSoldiers", "MexArmy05_KillAllSoldiers", true, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_431(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x14A15 / 84501
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_438(Global_34573, bParam3, iParam2))
	{
		Function_282(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_438(Global_34573, bParam3, bParam1))
	{
		if (!Function_437(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_439(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_436(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_435(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_435(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_437(2))
	{
		Function_434(2);
		if (!Function_433())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_432();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_202(bParam3);
				Function_225(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_435(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_435(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_432() //Position: 0x14BA9 / 84905
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(iVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7,5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

bool Function_433() //Position: 0x14BD4 / 84948
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return DECOR_GET_INT(Global_34573, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_434(bool bParam0) //Position: 0x14C18 / 85016
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_36(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_435(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x14C7B / 85115
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (((GET_OBJECT_TYPE(bVar1) != iParam2 || iParam2 != 4294967295) || ((iParam2 != 15 && GET_OBJECT_TYPE(bVar1) != 24) && iParam3)) && bVar1 == bParam4)
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				if ((GET_BLIP_ICON(bVar2) == 322 && GET_BLIP_ICON(bVar2) == 323) && GET_BLIP_ICON(bVar2) == 324)
				{
					SET_BLIP_VISIBLE(bVar2, bParam1);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

void Function_436(bool bParam0) //Position: 0x14D1C / 85276
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_76(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_437(bool bParam0) //Position: 0x14D7F / 85375
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_152(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_438(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14DC6 / 85446
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
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

void Function_439(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x14ED7 / 85719
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

bool Function_440(int iParam0, float fParam1) //Position: 0x14F2A / 85802
{
	if (Function_328(iParam0))
	{
		if (Function_326(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_441() //Position: 0x14F46 / 85830
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_JonNoFight", "MexArmy05_JonNoFight", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_442() //Position: 0x14F97 / 85911
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	GET_OBJECT_POSITION(bLocal_729, &vLocal_810);
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vLocal_810, 3.0f, "footlocker", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		bVar2 = GET_OBJECT_FROM_PHYSINST(bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar1 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar2);
			if (IS_OBJECT_ANIMATOR_VALID(bVar1))
			{
				if (IS_OBJECT_ANIMATOR_ANIMATION_PLAYING(bVar1, "chest/stay_open"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_443() //Position: 0x1500F / 86031
{
	bool bVar0;
	
	AUDIO_SET_PLAYER_MOOD(2, 0);
	Function_366(&iLocal_823, 32, 0, 4294967295, 4294967295);
	if (!IS_OBJECT_VALID(bLocal_729))
	{
		Function_290((*&Local_4 + 1344)[3]);
		Function_365((*&Local_4 + 1344)[3]);
		bLocal_729 = CREATE_GRINGO_IN_LAYOUT(bLocal_435, "WeaponCrate", "Locked_Footlocker", Function_290((*&Local_4 + 1344)[3]), Function_365((*&Local_4 + 1344)[3]));
		if (!IS_OBJECT_VALID(bLocal_729))
		{
			LOG_ERROR("Failed to create Weapon Crate!");
		}
	}
	Function_362();
	AI_STOP_IGNORING_ACTORS();
	Function_229();
	Function_446(Global_34573);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	Function_224(6, 0, 1);
	Function_224(7, 1, 1);
	if (!SQUAD_IS_VALID(bLocal_714))
	{
		bLocal_714 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_53()));
	}
	iLocal_577 = 1;
	Function_216();
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,75f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,75f);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1.0f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,7f);
	SET_ACTOR_FACTION(bLocal_549, 21);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	Function_238(Local_4.f_728, 19);
	Function_238(Local_4.f_740, 19);
	Function_238(Local_4.f_744, 19);
	Function_360(Local_4.f_728, 8, 0, 0);
	Function_243(Local_4.f_728, 0);
	Function_357(Local_4.f_728, Local_4.f_736, 0);
	Function_357(Local_4.f_744, Local_4.f_736, 0);
	Function_357(Local_4.f_740, Local_4.f_736, 0);
	Function_343(Local_4.f_744, 200.0f);
	Function_343(Local_4.f_740, 200.0f);
	Function_343(Local_4.f_728, 200.0f);
	Function_343(Local_4.f_736, 200.0f);
	Function_360(Local_4.f_736, 8, 0, 0);
	Function_243(Local_4.f_736, 0);
	Function_357(Local_4.f_736, Local_4.f_728, 0);
	Function_357(Local_4.f_736, Local_4.f_740, 0);
	Function_357(Local_4.f_736, Local_4.f_744, 0);
	SQUAD_JOIN(bLocal_551, Local_4.f_736);
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		Function_445();
		iLocal_837 = 3;
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_728, 2696);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_740, 2696);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_744, 2696);
	Function_444(Local_4.f_728, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
	Function_444(Local_4.f_740, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
	Function_444(Local_4.f_744, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					SET_ACTOR_INVULNERABILITY(bLocal_712, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_712);
					CLEAR_ACTOR_MAX_SPEED(bLocal_713);
					MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_712);
					Function_353(bLocal_712, 0);
				}
			}
			bVar0++;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					KILL_ACTOR(bLocal_712);
					Function_353(bLocal_712, 0);
				}
			}
			bVar0++;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_740))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					SET_ACTOR_INVULNERABILITY(bLocal_712, false);
					Function_353(bLocal_712, 0);
				}
			}
			bVar0++;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					SET_ACTOR_INVULNERABILITY(bLocal_712, false);
				}
			}
			bVar0++;
		}
	}
	Function_213("PostInit_Stage_Five()");
	iLocal_833 = 2;
	return;
}

void Function_444(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x153F7 / 87031
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

void Function_445() //Position: 0x154E1 / 87265
{
	var uVar0;
	bool bVar3;
	
	SQUAD_GOALS_CLEAR(Local_4.f_736);
	Function_240(Local_4.f_736);
	Function_325(Local_4.f_736);
	Function_344((*&Local_4 + 1560)[8], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[9], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[10], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[11], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[12], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[13], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[14], Local_4.f_736, 0);
	Function_344((*&Local_4 + 1560)[15], Local_4.f_736, 0);
	Function_352(Local_4.f_736, (*&Local_4 + 832)[12], 1, 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_4.f_736, false, (*&Local_4 + 832)[12], 1, 2);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 832)[12], 1, 2);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_740, 0, (*&Local_4 + 832)[12], 1, 2);
	if (SQUAD_GET(bLocal_551) == Local_4.f_736)
	{
		bLocal_717 = TASK_SEQUENCE_OPEN();
		GET_PATH_POINT(Local_4.f_1704, (GET_PATH_NUM_POINTS(Local_4.f_1704) - 1), &uVar0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1700, 2, 1, 0, 1, false);
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &uVar0, 216,772f, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(bLocal_551);
		TASK_PRIORITY_SET(bLocal_551, true);
		TASK_SEQUENCE_PERFORM(bLocal_551, bLocal_717);
		TASK_SEQUENCE_RELEASE(bLocal_717, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_551, 2, false);
	}
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar3);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				Function_342(bLocal_712);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_712, 100.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 13, false);
			}
		}
		bVar3++;
	}
	return;
}

void Function_446(bool bParam0) //Position: 0x156A6 / 87718
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

void Function_447(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x156CB / 87755
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (iParam3 != Global_34165.f_48 && !Function_452())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_451(0);
	Function_450();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_449(uParam4, iVar0, iVar1);
	Function_448();
}

void Function_448() //Position: 0x15768 / 87912
{
	if (Global_76853)
	{
		UNK_0x6287203C(Global_34165.f_132);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	return;
}

void Function_449(int iParam0, bool bParam1, bool bParam2) //Position: 0x157A9 / 87977
{
	Global_34165.f_28 = 1;
	Global_34165.f_32 = 0;
	if (bParam1)
	{
		Global_34165.f_56++;
	}
	if (bParam2)
	{
		Global_34165.f_60 = 0;
		if (Global_34165.f_132 >= 0)
		{
			Global_34165.f_132 = (Global_34165.f_132 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
		}
	}
	else
	{
		Global_34165.f_132++;
		Global_34165.f_60++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_34165.f_24 = Global_29005;
	}
	else
	{
		Global_34165.f_24 = iParam0;
	}
	if (Function_81(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_450() //Position: 0x1590F / 88335
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_451(bool bParam0) //Position: 0x15933 / 88371
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

bool Function_452() //Position: 0x15962 / 88418
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_453(int iParam0) //Position: 0x1597D / 88445
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

void Function_454() //Position: 0x1598E / 88462
{
	Function_397();
	Function_161(114689);
	if (!iLocal_746)
	{
		iLocal_746 = 1;
	}
	return;
}

bool Function_455() //Position: 0x159AA / 88490
{
	bool bVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	
	Function_463();
	if (!IS_OBJECT_VALID(bLocal_779))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar1);
		bLocal_779 = Function_376("nchuparosa", "cityHall01", 1);
	}
	if (!IS_OBJECT_VALID(bLocal_780))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar4);
		bLocal_780 = Function_376("nchuparosa", "cityHall01", 6);
	}
	Function_461();
	switch (iLocal_834)
	{
		case 0x00000000:
			iVar7 = 0;
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				iVar7 = (iVar7 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728));
			}
			if (SQUAD_IS_VALID(Local_4.f_740))
			{
				iVar7 = (iVar7 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_740));
			}
			if (SQUAD_IS_VALID(Local_4.f_744))
			{
				iVar7 = (iVar7 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_744));
			}
			if (iVar7 >= 4 || Function_460())
			{
				if (SQUAD_IS_VALID(Local_4.f_736))
				{
					Function_445();
					iLocal_837 = 3;
				}
				if (!SQUAD_IS_VALID(Local_4.f_748))
				{
					Function_459();
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_748))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_748, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_712)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_712));
							}
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_712, 0);
							MEMORY_REPORT_POSITION_AUTO(bLocal_712, Global_34573, true);
							TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
						}
						bVar0++;
					}
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_748, 2696);
					bLocal_760 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_748, false);
					bLocal_761 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_748, true);
					bLocal_762 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_748, 2);
					bLocal_759 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_748, 3);
					ADD_BLIP_FOR_ACTOR(bLocal_759, 392, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_759), "MA05_BlipCaptain");
					SET_BLIP_PRIORITY(GET_BLIP_ON_ACTOR(bLocal_759), 3);
					Function_223(1);
				}
				Function_439("MexArmy05_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_562);
				iLocal_834 = 1;
			}
			break;
		
		case 0x00000001:
			Function_456();
			if (IS_VOLUME_VALID((*&Local_4 + 832)[2]) && IS_VOLUME_VALID((*&Local_4 + 832)[3]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[3]))
				{
					if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[3]))
					{
						Function_366(&iLocal_823, 31, 0, 4294967295, 4294967295);
					}
					else
					{
						Function_366(&iLocal_823, 38, 0, 4294967295, 4294967295);
					}
				}
				else
				{
					Function_366(&iLocal_823, 32, 0, 4294967295, 4294967295);
				}
			}
			if (IS_ACTOR_VALID(bLocal_759))
			{
				if (!IS_ACTOR_ALIVE(bLocal_759))
				{
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(bLocal_714))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_714, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							SQUAD_LEAVE(bLocal_712);
							TASK_CLEAR(bLocal_712);
							SQUAD_JOIN(bLocal_712, Local_4.f_736);
						}
						bVar0++;
					}
					SQUAD_GOALS_CLEAR(Local_4.f_736);
					Function_240(Local_4.f_736);
					Function_325(Local_4.f_736);
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_712, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_712, "crowd_cheer", 0);
							SET_ACTION_NODE_FOR_ACTOR(bLocal_712, "crowd_cheer/random_loop");
							AI_GOAL_SHOOT_CLEAR(bLocal_712);
						}
						bVar0++;
					}
					Function_221(Local_4.f_736);
					if (IS_BLIP_VALID(bLocal_765))
					{
						REMOVE_BLIP(bLocal_765);
					}
					if (IS_BLIP_VALID(bLocal_766))
					{
						REMOVE_BLIP(bLocal_766);
					}
					Function_261(&iLocal_559);
					iLocal_834 = 2;
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_456() //Position: 0x15D47 / 89415
{
	var uVar0;
	struct<5> Var3;
	
	if (!Function_328(&iLocal_565))
	{
		Function_261(&iLocal_565);
	}
	if (IS_ACTOR_VALID(bLocal_760))
	{
		if (IS_VOLUME_VALID((*&Local_4 + 932)[0]))
		{
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 932)[0]) || Function_220(bLocal_760, 1.0f, 25.0f, 1, 1, 0)) || MEMORY_GET_IS_VISIBLE(bLocal_760, Global_34573))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_760, 322, 0, 2, 0);
				MEMORY_CONSIDER_AS_ENEMY(bLocal_760, Global_34573);
				bLocal_717 = TASK_SEQUENCE_OPEN();
				GET_PATH_POINT(Local_4.f_1708, (GET_PATH_NUM_POINTS(Local_4.f_1708) - 1), &uVar6);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1708, 2, 1, 0, 1, false);
				TASK_SHOOT_ENEMIES_FROM_POSITION(false, &uVar6, 72,03103f, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_760);
				TASK_PRIORITY_SET(bLocal_760, true);
				TASK_SEQUENCE_PERFORM(bLocal_760, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				DESTROY_VOLUME((*&Local_4 + 932)[0]);
			}
		}
		else
		{
			bLocal_710 = true;
		}
	}
	else
	{
		bLocal_710 = true;
	}
	if (bLocal_710)
	{
		if (IS_OBJECT_VALID(bLocal_779))
		{
			if (IS_DOOR_LOCKED(bLocal_779))
			{
				Function_153(bLocal_779, 0);
			}
		}
		if (IS_OBJECT_VALID(bLocal_780))
		{
			if (IS_DOOR_LOCKED(bLocal_780))
			{
				Function_153(bLocal_780, 0);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_761))
	{
		if (GET_TASK_STATUS(bLocal_761, 0) != 1)
		{
			if (!Function_220(bLocal_761, 1.0f, 25.0f, 1, 1, 0) && !MEMORY_GET_IS_VISIBLE(bLocal_761, Global_34573))
			{
				if (GET_TASK_STATUS(bLocal_761, 6) != 1)
				{
					TASK_STAND_STILL(bLocal_761, -1.0f, 0, 0);
				}
			}
			else
			{
				MEMORY_CONSIDER_AS_ENEMY(bLocal_761, Global_34573);
				ADD_BLIP_FOR_ACTOR(bLocal_761, 322, 0, 2, 0);
				bLocal_717 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &uVar0, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(bLocal_761);
				TASK_PRIORITY_SET(bLocal_761, true);
				TASK_SEQUENCE_PERFORM(bLocal_761, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_762))
	{
		if (GET_TASK_STATUS(bLocal_762, 5) != 1)
		{
			if (((!Function_220(bLocal_762, 1.0f, 25.0f, 1, 1, 0) && !MEMORY_GET_IS_VISIBLE(bLocal_762, Global_34573)) && !Function_220(bLocal_759, 1.0f, 25.0f, 1, 1, 0)) && !MEMORY_GET_IS_VISIBLE(bLocal_759, Global_34573))
			{
				if (GET_TASK_STATUS(bLocal_762, 6) != 1)
				{
					TASK_STAND_STILL(bLocal_762, -1.0f, 0, 0);
				}
			}
			else
			{
				MEMORY_CONSIDER_AS_ENEMY(bLocal_762, Global_34573);
				ADD_BLIP_FOR_ACTOR(bLocal_762, 322, 0, 2, 0);
				TASK_CLEAR(bLocal_762);
				TASK_KILL_CHAR(bLocal_762, Global_34573);
				TASK_PRIORITY_SET(bLocal_759, true);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_759))
	{
		if (GET_TASK_STATUS(bLocal_759, 5) != 1)
		{
			if (((!Function_220(bLocal_759, 1.0f, 25.0f, 1, 1, 0) && !MEMORY_GET_IS_VISIBLE(bLocal_759, Global_34573)) && !Function_220(bLocal_762, 1.0f, 25.0f, 1, 1, 0)) && !MEMORY_GET_IS_VISIBLE(bLocal_762, Global_34573))
			{
				if (GET_TASK_STATUS(bLocal_759, 35) != 1)
				{
					TASK_POINT_GUN_AT_OBJECT(bLocal_759, Global_34573, -1.0f, 1);
				}
			}
			else
			{
				MEMORY_CONSIDER_AS_ENEMY(bLocal_759, Global_34573);
				DESTROY_VOLUME((*&Local_4 + 932)[2]);
				DESTROY_VOLUME((*&Local_4 + 932)[1]);
				Function_458();
				Function_261(&iLocal_565);
				TASK_KILL_CHAR(bLocal_759, Global_34573);
				TASK_PRIORITY_SET(bLocal_759, true);
			}
		}
		else if (Function_440(&iLocal_565, 5.0f))
		{
			Function_457();
			Function_261(&iLocal_565);
		}
	}
	return;
}

void Function_457() //Position: 0x16031 / 90161
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "MexArmy05_EspTauntsJon", "MexArmy05_EspTauntsJon", false, 2, 1, 0, 1);
		Function_423(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x16087 / 90247
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "MexArmy05_EspSpotsJon", "MexArmy05_EspSpotsJon", false, 2, 1, 0, 1);
		Function_423(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459() //Position: 0x160DB / 90331
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_748 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MexArmyCityHall"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Chall1", 391, -2654,59f, 32,173f, 4251,241f, 0.0f, 121,597f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_748);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	Function_245(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Chall2", 392, -2657,579f, 35,673f, 4259,683f, 0.0f, 337,679f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_748);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_245(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Chall3", 381, -2651,532f, 35,678f, 4259,831f, 0.0f, 88,724f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_748);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_245(bVar0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "CptEspinoza", 660, -2649,739f, 35,678f, 4255,851f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_748);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_245(bVar0);
	return;
}

int Function_460() //Position: 0x16221 / 90657
{
	if ((IS_VOLUME_VALID((*&Local_4 + 832)[2]) && IS_VOLUME_VALID((*&Local_4 + 832)[3])) && IS_VOLUME_VALID((*&Local_4 + 832)[13]))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[2]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[3])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[13]))
		{
			return 1;
		}
	}
	return 0;
}

void Function_461() //Position: 0x16281 / 90753
{
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				if (GET_ACTOR_FACTION(GET_LAST_ATTACK_TARGET(Global_34573)) == 20 && GET_ACTOR_FACTION(GET_LAST_ATTACK_TARGET(Global_34573)) == 23)
				{
					if (!Function_328(&iLocal_794))
					{
						Function_261(&iLocal_794);
					}
					fLocal_764 = Function_326(&iLocal_794);
					Function_262(&iLocal_794, (fLocal_764 - 5.0f));
					CLEAR_LAST_ATTACK(Global_34573);
				}
			}
		}
		if (!Function_328(&iLocal_794))
		{
			Function_261(&iLocal_794);
		}
		if (Function_326(&iLocal_794) <= 15.0f)
		{
			Function_441();
			Function_261(&iLocal_794);
		}
		else if (Function_326(&iLocal_794) > 10.0f)
		{
			if (!Function_328(&iLocal_562))
			{
				Function_261(&iLocal_562);
			}
			else if (Function_326(&iLocal_562) < 7.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_462();
					Function_261(&iLocal_562);
				}
			}
		}
	}
	return;
}

void Function_462() //Position: 0x16355 / 90965
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_ReyesShout_gunFight", "MexArmy05_ReyesShout_gunFight", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_463() //Position: 0x163B8 / 91064
{
	var uVar0;
	var uVar3;
	int iVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	
	Function_482(&bLocal_755, 5);
	Function_482(&bLocal_756, 5);
	Function_477();
	Function_476();
	if (!iLocal_747)
	{
		if (!bLocal_710)
		{
			if (!IS_OBJECT_VALID(bLocal_779))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar0);
				bLocal_779 = Function_376("nchuparosa", "cityHall01", 1);
			}
			else if (!IS_DOOR_LOCKED(bLocal_779))
			{
				CLOSE_DOOR_FAST(bLocal_779);
				SET_DOOR_LOCK(bLocal_779, 1);
			}
			if (!IS_OBJECT_VALID(bLocal_780))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1380)[2], &uVar3);
				bLocal_780 = Function_376("nchuparosa", "cityHall01", 6);
			}
			else if (!IS_DOOR_LOCKED(bLocal_780))
			{
				CLOSE_DOOR_FAST(bLocal_780);
				SET_DOOR_LOCK(bLocal_780, 1);
			}
		}
		iVar7 = 0;
		if (SQUAD_IS_VALID(Local_4.f_728))
		{
			iVar7 = (iVar7 + SQUAD_GET_SIZE(Local_4.f_728));
		}
		if (SQUAD_IS_VALID(Local_4.f_744))
		{
			iVar7 = (iVar7 + SQUAD_GET_SIZE(Local_4.f_744));
		}
		if (SQUAD_IS_VALID(Local_4.f_740))
		{
			iVar7 = (iVar7 + SQUAD_GET_SIZE(Local_4.f_740));
		}
		if (iVar7 < 4)
		{
			if (SQUAD_IS_VALID(Local_4.f_736))
			{
				Function_445();
				iLocal_837 = 3;
			}
			iLocal_747 = 1;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_736))
	{
		if (SQUAD_GET_SIZE(Local_4.f_736) >= 0)
		{
			switch (iLocal_837)
			{
				case 0x00000000:
					Function_341(1);
					iLocal_837 = 1;
					break;
				
				case 0x00000001:
					Function_475();
					break;
				
				case 0x00000002:
					Function_474();
					break;
				
				case 0x00000003:
					Function_474();
					break;
			}
		}
		else if (iLocal_837 != 4)
		{
			iLocal_837 = 4;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		if (SQUAD_GET_SIZE(Local_4.f_728) >= 0)
		{
			switch (iLocal_835)
			{
				case 0x00000000:
					if (!bLocal_741 || iLocal_836 != 2)
					{
						iLocal_835 = 2;
						break;
					}
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[5]))
					{
						if (Function_468(Local_4.f_728, Global_34573, 0))
						{
							Function_467(Local_4.f_728, Global_34573, 0);
							Function_240(Local_4.f_728);
							iLocal_835 = 1;
						}
					}
					else if (SQUAD_GET_SIZE(Local_4.f_728) < 4)
					{
						Function_467(Local_4.f_728, Global_34573, 0);
						Function_240(Local_4.f_728);
						iLocal_835 = 1;
					}
					break;
				
				case 0x00000001:
					if ((SQUAD_GET_SIZE(Local_4.f_728) >= 3 || !bLocal_741) || iLocal_836 != 2)
					{
						iLocal_835 = 2;
						break;
					}
					else if (SQUAD_GET_SIZE(Local_4.f_728) >= 4)
					{
						if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[5]))
						{
							iLocal_835 = 0;
							break;
						}
					}
					break;
				
				case 0x00000002:
					if (SQUAD_GET_SIZE(Local_4.f_728) < 3)
					{
						Function_466(Local_4.f_728);
						iLocal_835 = 3;
						Function_445();
						iLocal_837 = 2;
						break;
					}
					break;
			}
		}
		else if (iLocal_835 != 4)
		{
			DESTROY_OBJECT(Local_4.f_728);
			iLocal_835 = 4;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_740))
	{
		if (SQUAD_GET_SIZE(Local_4.f_740) >= 0)
		{
			switch (iLocal_836)
			{
				case 0x00000000:
					iLocal_836 = 1;
					break;
				
				case 0x00000001:
					if ((SQUAD_GET_SIZE(Local_4.f_740) >= 4 || !bLocal_741) || iLocal_835 != 2)
					{
						iLocal_836 = 2;
					}
					break;
				
				case 0x00000002:
					if (SQUAD_GET_SIZE(Local_4.f_740) < 2)
					{
						iLocal_836 = 3;
					}
					break;
			}
		}
		else if (iLocal_836 != 4)
		{
			DESTROY_OBJECT(Local_4.f_740);
			iLocal_836 = 4;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		if (SQUAD_GET_SIZE(Local_4.f_744) < 0 && SQUAD_GET_SIZE(Local_4.f_744) != 1)
		{
			bVar8 = false;
			while (bVar8 <= SQUAD_GET_SIZE(Local_4.f_744))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar8);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						MEMORY_PREFER_WALKING(bLocal_712, true);
						if (SQUAD_IS_VALID(Local_4.f_740))
						{
							SQUAD_JOIN(bLocal_712, Local_4.f_740);
						}
						else if (SQUAD_IS_VALID(Local_4.f_728))
						{
							SQUAD_JOIN(bLocal_712, Local_4.f_728);
						}
					}
				}
				bVar8++;
			}
			if (SQUAD_GET_SIZE(Local_4.f_744) < 0)
			{
				DESTROY_OBJECT(Local_4.f_744);
			}
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		if (SQUAD_GET_SIZE(Local_4.f_744) >= 0)
		{
			switch (iLocal_838)
			{
				case 0x00000000:
					MEMORY_EVERYBODY_FORGET_ABOUT(Global_34573);
					Function_357(Local_4.f_744, Local_4.f_736, 0);
					Function_240(Local_4.f_744);
					SQUAD_GOALS_CLEAR(Local_4.f_744);
					bVar8 = false;
					while (bVar8 <= SQUAD_GET_SIZE(Local_4.f_744))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar8);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								Function_75();
								vVar9 = { StackVal, StackVal, Function_75() };
								Function_75();
								vVar12 = { StackVal, StackVal, Function_75() };
								GET_POSITION(bLocal_712, &vVar9);
								if (SQUAD_GET_SIZE(Local_4.f_736) >= 1)
								{
									bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(Local_4.f_736) - 1)));
									GET_POSITION(bLocal_713, &vVar12);
									MEMORY_REPORT_POSITION(bLocal_712, bLocal_713, &vVar12);
									TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_713, &vVar9);
								}
								else
								{
									GET_POSITION(bLocal_551, &vVar12);
									MEMORY_REPORT_POSITION(bLocal_712, bLocal_551, &vVar12);
									TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_551, &vVar9);
								}
								SET_ACTOR_VISION_XRAY(bLocal_712, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, true);
							}
						}
						bVar8++;
					}
					Function_240(Local_4.f_744);
					Function_344((*&Local_4 + 1544)[0], Local_4.f_744, 0);
					Function_344((*&Local_4 + 1544)[1], Local_4.f_744, 0);
					Function_261(&iLocal_767);
					iLocal_838 = 1;
					break;
				
				case 0x00000001:
					if (Function_440(&iLocal_767, 5.0f))
					{
						if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[5]))
						{
							if (Function_440(&iLocal_767, 5.0f))
							{
								bVar8 = false;
								while (bVar8 <= SQUAD_GET_SIZE(Local_4.f_744))
								{
									bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar8);
									if (IS_ACTOR_VALID(bLocal_712))
									{
										if (IS_ACTOR_ALIVE(bLocal_712))
										{
											Function_75();
											vVar15 = { StackVal, StackVal, Function_75() };
											Function_75();
											vVar18 = { StackVal, StackVal, Function_75() };
											GET_POSITION(bLocal_712, &vVar15);
											if (SQUAD_GET_SIZE(Local_4.f_736) >= 1)
											{
												bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(Local_4.f_736) - 1)));
												GET_POSITION(bLocal_713, &vVar18);
												MEMORY_REPORT_POSITION(bLocal_712, bLocal_713, &vVar18);
												TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_713, &vVar15);
											}
											else
											{
												GET_POSITION(bLocal_551, &vVar18);
												MEMORY_REPORT_POSITION(bLocal_712, bLocal_551, &vVar18);
												TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_551, &vVar15);
											}
											SET_ACTOR_VISION_XRAY(bLocal_712, true);
											COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, true);
										}
									}
									bVar8++;
								}
								Function_261(&iLocal_767);
							}
						}
						else
						{
							bLocal_712 = Function_464(Local_4.f_744, Global_34573, 0, 0);
							TASK_KILL_CHAR(bLocal_712, Global_34573);
							bVar8 = false;
							while (bVar8 <= SQUAD_GET_SIZE(Local_4.f_744))
							{
								bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar8);
								if (IS_ACTOR_VALID(bLocal_712))
								{
									if (IS_ACTOR_ALIVE(bLocal_712))
									{
										if (!GET_TASK_STATUS(bLocal_712, 5) != 1)
										{
											Function_75();
											vVar21 = { StackVal, StackVal, Function_75() };
											Function_75();
											vVar24 = { StackVal, StackVal, Function_75() };
											GET_POSITION(bLocal_712, &vVar21);
											if (!ACTORS_IN_RANGE(Global_34573, bLocal_712, 15.0f))
											{
												if (SQUAD_GET_SIZE(Local_4.f_736) >= 1)
												{
													bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(Local_4.f_736) - 1)));
													GET_POSITION(bLocal_713, &vVar24);
													MEMORY_REPORT_POSITION(bLocal_712, bLocal_713, &vVar24);
													TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_713, &vVar21);
												}
												else
												{
													GET_POSITION(bLocal_551, &vVar24);
													MEMORY_REPORT_POSITION(bLocal_712, bLocal_551, &vVar24);
													TASK_SHOOT_FROM_POSITION(bLocal_712, bLocal_551, &vVar21);
												}
											}
											else
											{
												GET_POSITION(Global_34573, &vVar24);
												MEMORY_REPORT_POSITION(bLocal_712, Global_34573, &vVar24);
												TASK_SHOOT_FROM_POSITION(bLocal_712, Global_34573, &vVar21);
											}
										}
										SET_ACTOR_VISION_XRAY(bLocal_712, true);
										COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, true);
									}
								}
								bVar8++;
							}
							Function_261(&iLocal_767);
						}
					}
					break;
			}
		}
		else if (iLocal_838 != 4)
		{
			DESTROY_OBJECT(Local_4.f_744);
			iLocal_838 = 4;
		}
	}
	return;
}

bool Function_464(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16B16 / 92950
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_465(bVar4, bParam1);
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
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

var Function_465(bool bParam0, bool bParam1) //Position: 0x16BD0 / 93136
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

void Function_466(bool bParam0) //Position: 0x16CC1 / 93377
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(bParam0);
	Function_240(bParam0);
	Function_325(bParam0);
	Function_344((*&Local_4 + 1480)[0], bParam0, 0);
	Function_344((*&Local_4 + 1480)[1], bParam0, 0);
	Function_344((*&Local_4 + 1480)[2], bParam0, 0);
	Function_344((*&Local_4 + 1480)[3], bParam0, 0);
	Function_344((*&Local_4 + 1480)[4], bParam0, 0);
	Function_344((*&Local_4 + 1480)[5], bParam0, 0);
	Function_352(bParam0, (*&Local_4 + 832)[1], 1, 4294967295);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			Function_342(bLocal_712);
		}
		bVar0++;
	}
	PRINTSTRING(GET_OBJECT_NAME(bParam0));
	PRINTSTRING(" Defending Cityhall Outside");
	PRINTNL();
	return;
}

void Function_467(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16D9B / 93595
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
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
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam2)
			{
				GET_POSITION(bParam1, &uVar2);
				MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_468(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16DFA / 93690
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_473(bParam0))
	{
		if (bParam2)
		{
			Function_472(bParam0, bParam1, 0);
			Function_471(bParam0, bParam1);
			return 1;
		}
		if (Function_470(bParam0, bParam1))
		{
			Function_472(bParam0, bParam1, 0);
			Function_471(bParam0, bParam1);
			return 1;
		}
		if (Function_469(bParam0, bParam1, 1))
		{
			Function_472(bParam0, bParam1, 0);
			Function_471(bParam0, bParam1);
			return 1;
		}
	}
	return 0;
}

bool Function_469(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16E6C / 93804
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar0, bParam1))
					{
						if (bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(bVar0, bParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_470(bool bParam0, bool bParam1) //Position: 0x16ED4 / 93908
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(bVar1) == bParam1)
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

void Function_471(bool bParam0, bool bParam1) //Position: 0x16F47 / 94023
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

void Function_472(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16F99 / 94105
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

bool Function_473(bool bParam0) //Position: 0x17004 / 94212
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_474() //Position: 0x1705B / 94299
{
	bool bVar0;
	
	if (Function_328(&iLocal_770))
	{
		if (Function_440(&iLocal_770, 5.0f))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						AI_GOAL_SHOOT_CLEAR(bLocal_712);
						Function_75();
						vLocal_813 = { StackVal, StackVal, Function_75() };
						vLocal_813.x = RAND_FLOAT_RANGE(-5.0f, 5.0f);
						vLocal_813.f_4 = RAND_FLOAT_RANGE(0.0f, 5.0f);
						GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 1380)[6], vLocal_813, &vLocal_810);
						AI_GOAL_SHOOT_AT_COORD(bLocal_712, &vLocal_810);
					}
				}
				bVar0++;
			}
		}
	}
	else
	{
		Function_261(&iLocal_770);
	}
	return;
}

void Function_475() //Position: 0x170F6 / 94454
{
	bool bVar0;
	
	if (Function_328(&iLocal_770))
	{
		if (Function_326(&iLocal_770) <= 5.0f)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						AI_GOAL_SHOOT_CLEAR(bLocal_712);
						Function_75();
						vLocal_813 = { StackVal, StackVal, Function_75() };
						vLocal_813.x = RAND_FLOAT_RANGE(-5.0f, 5.0f);
						vLocal_813.f_4 = RAND_FLOAT_RANGE(0.0f, 2.0f);
						GET_OBJECT_RELATIVE_POSITION((*&Local_4 + 1380)[5], vLocal_813, &vLocal_810);
						AI_GOAL_SHOOT_AT_COORD(bLocal_712, &vLocal_810);
					}
				}
				bVar0++;
			}
			Function_261(&iLocal_770);
		}
	}
	else
	{
		Function_262(&iLocal_770, 4,9f);
	}
	return;
}

void Function_476() //Position: 0x1719D / 94621
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(bLocal_715))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bLocal_715))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_715, bVar0);
			if (!IS_ACTOR_MOUNTED(bLocal_712))
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_712, 20.0f))
				{
					if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_712, 1065353216, 1117126656, 1, 1, 0))
					{
						DESTROY_ACTOR(bLocal_712);
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_477() //Position: 0x1720A / 94730
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if ((Function_481(bLocal_714) + Function_481(Local_4.f_736)) > 4 && !SQUAD_IS_VALID(Local_4.f_748))
	{
		if (!CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), (*&Local_4 + 832)[6], 1.0f, 200.0f, 1, 1, 0))
		{
			bVar0 = bVar0;
			uVar1 = uVar1;
			bVar0 = Function_480(Local_4, Function_53(), 516, Function_53(), 996, -2760f, 32,12549f, 4264f, 0.0f, 211,0689f, 0.0f);
			SQUAD_JOIN(bVar0, bLocal_714);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
			GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 20);
			TASK_PRIORITY_SET(bVar0, true);
			Function_245(bVar0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
			if (!IS_ACTOR_VALID(bLocal_755))
			{
				bLocal_755 = bVar0;
			}
			bVar0 = Function_480(Local_4, Function_53(), 517, Function_53(), 997, -2764f, 32,12549f, 4264f, 0.0f, 201,9168f, 0.0f);
			SQUAD_JOIN(bVar0, bLocal_714);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
			GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 20);
			TASK_PRIORITY_SET(bVar0, true);
			Function_245(bVar0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
			if (!IS_ACTOR_VALID(bLocal_756))
			{
				bLocal_756 = bVar0;
			}
			bVar0 = Function_480(Local_4, Function_53(), 521, Function_53(), 997, -2764f, 32,12549f, 4264f, 0.0f, 201,9168f, 0.0f);
			SQUAD_JOIN(bVar0, bLocal_714);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
			GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 20);
			TASK_PRIORITY_SET(bVar0, true);
			Function_245(bVar0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
			bVar0 = Function_480(Local_4, Function_53(), 529, Function_53(), 996, -2760f, 32,12549f, 4264f, 0.0f, 211,0689f, 0.0f);
			SQUAD_JOIN(bVar0, bLocal_714);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
			GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,5f, 1, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 20);
			TASK_PRIORITY_SET(bVar0, true);
			Function_245(bVar0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
			Function_238(bLocal_714, 20);
			Function_479(bLocal_714, bLocal_551, 1);
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1344)[1], 25.0f, 3, 1, 1);
			TASK_DISMOUNT(false, 1);
			TASK_GO_NEAR_ACTOR(false, bLocal_551, 10.0f, 4);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_714, false, 1, 4294967295);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			bLocal_751 = SQUAD_GOAL_ADD_BATTLE_ALLIES(bLocal_714, 1, bLocal_551, 4294967295);
			SQUAD_BATTLE_ALLIES_SET_OBJECTIVE(bLocal_714, bLocal_751, (*&Local_4 + 1380)[4]);
			if (!SQUAD_IS_VALID(bLocal_715))
			{
				bLocal_715 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_53()));
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_715, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
			Function_478(bLocal_714, &bLocal_715);
		}
	}
	else
	{
		bVar2 = false;
		while (bVar2 <= SQUAD_GET_SIZE(bLocal_714))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_714, bVar2);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					if (ACTORS_IN_RANGE(bLocal_712, bLocal_551, 20.0f))
					{
						SQUAD_LEAVE(bLocal_712);
						SQUAD_JOIN(bLocal_712, Local_4.f_736);
						MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_712);
						MEMORY_PREFER_WALKING(bLocal_712, true);
					}
				}
			}
			bVar2++;
		}
	}
	return;
}

void Function_478(bool bParam0, int iParam1) //Position: 0x17514 / 95508
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
		{
			SQUAD_JOIN(GET_MOUNT(bVar1), *iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_479(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17554 / 95572
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
			Function_358(&bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_480(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x17599 / 95641
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_384(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_384(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

int Function_481(bool bParam0) //Position: 0x176BE / 95934
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_482(var uParam0, bool bParam1) //Position: 0x1770B / 96011
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			if (!_GET_ACTOR_INFINITE_AMMO_FLAG(*uParam0, 4))
			{
				if (_GET_AMMO_AMOUNT(*uParam0, 4, 1) != 0.0f)
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam0);
					GIVE_WEAPON_TO_ACTOR(*uParam0, bParam1, false, 1, 1);
					*uParam0 = "";
					MEMORY_ALLOW_PICKUP_WEAPONS(*uParam0, 1);
					SET_ACTOR_ALLOW_DISARM(*uParam0, true);
				}
			}
			else
			{
				_SET_ACTOR_INFINITE_AMMO_FLAG(*uParam0, 4, false);
				DELETE_ALL_WEAPONS_FROM_ACTOR(*uParam0);
				GIVE_WEAPON_TO_ACTOR(*uParam0, 23, false, 1, 1);
				_SET_ACTOR_AMMO_OF_TYPE(*uParam0, 4, 1.0f, 1);
				ACTOR_SET_DROP_ITEM_ON_DEATH_ENUMERATED(*uParam0, 23, 0);
				MEMORY_ALLOW_PICKUP_WEAPONS(*uParam0, 0);
				SET_ACTOR_ALLOW_DISARM(*uParam0, false);
			}
		}
		else
		{
			*uParam0 = "";
		}
	}
	return;
}

void Function_483() //Position: 0x177A3 / 96163
{
	bool bVar0;
	
	if (iLocal_546 < 5 && iLocal_546 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 808)[3]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[3]))
			{
				Function_405();
				DESTROY_VOLUME((*&Local_4 + 808)[3]);
			}
		}
		if (!Function_490())
		{
			Function_261(&iLocal_553);
			iLocal_724 = 10;
			iLocal_546 = 105;
		}
	}
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			if (IS_VOLUME_VALID((*&Local_4 + 808)[2]))
			{
				Function_489();
				DESTROY_VOLUME((*&Local_4 + 808)[2]);
			}
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_402(0);
			bLocal_547 = Global_30693[0];
			if (!Function_268(bLocal_547))
			{
				Function_266(&Local_436);
			}
			if (iLocal_568[2] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Stage_Four().GID_INITIALIZE");
				}
				if (!Function_453(0))
				{
					Function_388(0, 0, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_264(Global_34573, (*&Local_4 + 1180)[0], 0, 1, 1, 1);
				Function_264(bLocal_551, (*&Local_4 + 1180)[2], 0, 1, 1, 1);
				Function_261(&iLocal_553);
				iLocal_546 = 1;
			}
			else
			{
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_268(bLocal_547) || bLocal_547 != 4294967295)) && Function_488())
			{
				Function_256();
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_488())
			{
				if (!bLocal_741)
				{
					Function_288(bLocal_545);
					Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[2], Function_292(bLocal_545), 0);
				}
				if (iLocal_568[2] == 0)
				{
					Function_264(Global_34573, (*&Local_4 + 1180)[1], 0, 1, 1, 1);
					Function_264(bLocal_551, (*&Local_4 + 1180)[3], 0, 1, 1, 1);
				}
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1236)[bVar0], 0, 1, 1, 1);
						}
					}
					bVar0++;
				}
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1204)[bVar0], 0, 1, 1, 1);
						}
					}
					bVar0++;
				}
				Function_347();
				Function_487();
				Function_261(&iLocal_553);
				iLocal_546 = 3;
			}
			break;
		
		case 0x00000003:
			Function_322(1.0f, "Stage_Four().GID_CUTSCENE");
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			Function_261(&iLocal_553);
			iLocal_546 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_486();
				Function_261(&iLocal_553);
				iLocal_546 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_439("MexArmy05_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_553);
				Function_261(&iLocal_556);
				Function_261(&iLocal_559);
				iLocal_724 = 0;
				iLocal_546 = 8;
			}
			break;
		
		case 0x00000008:
			Function_431(&iLocal_559, (60.0f * 2.0f), 200.0f, bLocal_551, "MA05_return_rebelleader", "MA05_too_far_rebelleader", &bLocal_575, 0, bLocal_435, Local_4, 325, 1);
			Function_485();
			break;
		
		case 0x00000069:
			if (IS_BLIP_VALID(bLocal_765))
			{
				REMOVE_BLIP(bLocal_765);
			}
			if (IS_BLIP_VALID(bLocal_766))
			{
				REMOVE_BLIP(bLocal_766);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_261(&iLocal_553);
			iLocal_546 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_484();
				Function_213("UpdateGetWeaponsBack(CHEST_CLEANUP)");
				iLocal_568[3] = 1;
				Function_261(&iLocal_553);
				bLocal_545 = 4;
				iLocal_546 = 0;
			}
			break;
	}
	return;
}

void Function_484() //Position: 0x17BC0 / 97216
{
	Function_209();
	Function_213("Cleanup_Stage_Four()");
	return;
}

void Function_485() //Position: 0x17BE4 / 97252
{
	switch (iLocal_724)
	{
		case 0x00000000:
			break;
		
		default:
			break;
	}
	return;
}

void Function_486() //Position: 0x17BFE / 97278
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_UntiesJon", "MexArmy05_UntiesJon", false, 1, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x17C4D / 97357
{
	var uVar0;
	bool bVar3;
	
	AUDIO_SET_PLAYER_MOOD(1, 0);
	Function_366(&iLocal_823, 38, 0, 4294967295, 4294967295);
	if (!IS_OBJECT_VALID(bLocal_729))
	{
		Function_290((*&Local_4 + 1344)[3]);
		Function_365((*&Local_4 + 1344)[3]);
		bLocal_729 = CREATE_GRINGO_IN_LAYOUT(bLocal_435, "WeaponCrate", "Locked_Footlocker", Function_290((*&Local_4 + 1344)[3]), Function_365((*&Local_4 + 1344)[3]));
		if (!IS_OBJECT_VALID(bLocal_729))
		{
			LOG_ERROR("Failed to create Weapon Crate!");
		}
		else
		{
			DECOR_SET_INT(bLocal_729, "GringoDollarAmt", 20);
		}
	}
	Function_362();
	AI_STOP_IGNORING_ACTORS();
	Function_229();
	Function_446(Global_34573);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	GIVE_WEAPON_TO_ACTOR(Global_34573, 22, false, 1, 1);
	ACTOR_SET_NEXT_WEAPON(Global_34573, 22);
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	Function_224(6, 0, 1);
	Function_224(7, 1, 1);
	if (!SQUAD_IS_VALID(bLocal_714))
	{
		bLocal_714 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_53()));
	}
	iLocal_577 = 1;
	Function_216();
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,75f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,75f);
	SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1.0f);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,7f);
	SET_ACTOR_FACTION(bLocal_549, 21);
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	Function_238(Local_4.f_728, 19);
	Function_238(Local_4.f_740, 19);
	Function_238(Local_4.f_744, 19);
	Function_360(Local_4.f_728, 8, 0, 0);
	Function_243(Local_4.f_728, 0);
	Function_357(Local_4.f_728, Local_4.f_736, 0);
	Function_357(Local_4.f_744, Local_4.f_736, 0);
	Function_357(Local_4.f_740, Local_4.f_736, 0);
	GET_POSITION(Global_34573, &uVar0);
	Function_466(Local_4.f_728);
	Function_343(Local_4.f_744, 200.0f);
	Function_343(Local_4.f_740, 200.0f);
	Function_343(Local_4.f_728, 200.0f);
	Function_343(Local_4.f_736, 200.0f);
	Function_360(Local_4.f_736, 8, 0, 0);
	Function_243(Local_4.f_736, 0);
	Function_357(Local_4.f_736, Local_4.f_728, 0);
	Function_357(Local_4.f_736, Local_4.f_740, 0);
	Function_357(Local_4.f_736, Local_4.f_744, 0);
	SQUAD_JOIN(bLocal_551, Local_4.f_736);
	Function_341(1);
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar3);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_712);
				CLEAR_ACTOR_MAX_SPEED(bLocal_713);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_712);
				Function_353(bLocal_712, 0);
			}
		}
		bVar3++;
	}
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar3);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, false);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 13, false);
				Function_353(bLocal_712, 0);
			}
		}
		bVar3++;
	}
	if (SQUAD_IS_VALID(Local_4.f_740))
	{
		bVar3 = false;
		while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_740))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar3);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					SET_ACTOR_INVULNERABILITY(bLocal_712, false);
					Function_353(bLocal_712, 0);
				}
			}
			bVar3++;
		}
	}
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar3);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				SET_ACTOR_INVULNERABILITY(bLocal_712, false);
			}
		}
		bVar3++;
	}
	return;
}

bool Function_488() //Position: 0x17FBF / 98239
{
	Function_370(&Local_4 + 416, 379, 2, 0);
	Function_370(&Local_4 + 416, 380, 2, 0);
	Function_370(&Local_4 + 416, 391, 2, 0);
	Function_370(&Local_4 + 416, 381, 2, 0);
	Function_370(&Local_4 + 416, 392, 2, 0);
	Function_370(&Local_4 + 416, 516, 2, 0);
	Function_370(&Local_4 + 416, 521, 2, 0);
	Function_370(&Local_4 + 416, 529, 2, 0);
	Function_370(&Local_4 + 416, 517, 2, 0);
	Function_370(&Local_4 + 416, 660, 2, 0);
	if (Function_398(&Local_4 + 416))
	{
		return 1;
	}
	return 0;
}

void Function_489() //Position: 0x18061 / 98401
{
	Function_488();
	Function_161(114689);
	if (!iLocal_746)
	{
		iLocal_746 = 1;
	}
	return;
}

bool Function_490() //Position: 0x1807D / 98429
{
	Function_463();
	Function_461();
	switch (iLocal_833)
	{
		case 0x00000000:
			if (!IS_BLIP_VALID(bLocal_766))
			{
				bLocal_766 = ADD_BLIP_FOR_OBJECT(bLocal_729, 335, 0f, 2, 0);
				SET_BLIP_NAME(bLocal_766, "BLIP_WEAPON_CACHE");
				SET_BLIP_PRIORITY(bLocal_766, 3);
			}
			if (IS_OBJECT_VALID(bLocal_729))
			{
				if (Function_488())
				{
					Function_444(Local_4.f_728, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
					Function_444(Local_4.f_740, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
					Function_444(Local_4.f_744, 322, 4294967295, 0.0f, 20.0f, 0x3f800000, 2048, 0);
					Function_493(uLocal_730, &bLocal_729);
					Function_224(7, 0, 1);
					Function_262(&iLocal_559, (1920.0f - 5.0f));
					Function_261(&iLocal_556);
					iLocal_833 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (IS_VOLUME_VALID((*&Local_4 + 896)[5]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 896)[5]))
				{
					Function_445();
					DESTROY_VOLUME((*&Local_4 + 896)[5]);
					Function_366(&iLocal_823, 30, 0, 4294967295, 4294967295);
				}
			}
			if (Function_492(Global_34573, bLocal_729, 1,5f))
			{
				Function_491();
			}
			else
			{
				Function_215();
			}
			if (GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(bLocal_729) || DECOR_CHECK_EXIST(bLocal_729, "GringoIsDone"))
			{
				if (!ACTOR_HAS_ANIM_SET(Global_34573, "knl_picklock"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
					SET_ANIM_SET_FOR_ACTOR(Global_34573, "knl_picklock", 0);
				}
				if (IS_BLIP_VALID(bLocal_765))
				{
					REMOVE_BLIP(bLocal_765);
				}
				if (IS_BLIP_VALID(bLocal_766))
				{
					REMOVE_BLIP(bLocal_766);
				}
				Function_491();
				Function_262(&iLocal_559, (1920.0f - 5.0f));
				Function_261(&iLocal_556);
				iLocal_833 = 2;
				break;
			}
			break;
		
		case 0x00000002:
			if (!GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(bLocal_729))
			{
				if (ACTOR_HAS_ANIM_SET(Global_34573, "knl_picklock"))
				{
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				}
				Function_213("UpdateGetWeaponsBack(CHEST_CLEANUP)");
				if (Function_440(&iLocal_553, 5.0f))
				{
					Function_294();
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,75f);
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,75f);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1.0f);
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,7f);
					Function_262(&iLocal_559, (1920.0f - 5.0f));
					Function_261(&iLocal_556);
					Function_215();
					Function_261(&iLocal_559);
					return 0;
				}
				return 1;
			}
			break;
	}
	return 1;
}

int Function_491() //Position: 0x1830A / 99082
{
	if (!ACTOR_HAS_ANIM_SET(Global_34573, "knl_picklock"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "knl_picklock", 0);
	}
	if (!iLocal_742)
	{
		AI_IGNORE_ACTOR(Global_34573);
		AI_DONT_HARM_ACTOR(Global_34573);
		iLocal_742 = 1;
		return 1;
	}
	return 0;
}

bool Function_492(bool bParam0, bool bParam1, float fParam2) //Position: 0x18362 / 99170
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_359(bParam0);
			Function_427(bParam1);
			if (VDIST(Function_359(bParam0), Function_427(bParam1)) >= fParam2)
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

void Function_493(bool bParam0, var uParam1) //Position: 0x1847C / 99452
{
	bool bVar0;
	char* cVar1[32];
	
	bVar0 = false;
	while (bVar0 < 26)
	{
		if (Function_152(bParam0, Function_138(bVar0)))
		{
			strcpy(&cVar1, "Weapon_", 32);
			straddi(&cVar1, bVar0, 32);
			DECOR_SET_BOOL(*uParam1, &cVar1, true);
		}
		bVar0++;
	}
	return;
}

void Function_494() //Position: 0x184C0 / 99520
{
	bool bVar0;
	
	if (iLocal_546 < 5 && iLocal_546 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 808)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[2]))
			{
				Function_489();
				DESTROY_VOLUME((*&Local_4 + 808)[2]);
			}
		}
		if (!Function_502())
		{
			Function_261(&iLocal_553);
			iLocal_546 = 105;
		}
	}
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			if (IS_VOLUME_VALID((*&Local_4 + 808)[1]))
			{
				Function_501();
				DESTROY_VOLUME((*&Local_4 + 808)[1]);
			}
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_ACTOR_HEALTH(bLocal_551, GET_ACTOR_MAX_HEALTH(bLocal_551));
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						SET_ACTOR_HEALTH(bLocal_712, GET_ACTOR_MAX_HEALTH(bLocal_712));
					}
				}
				bVar0++;
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			if (iLocal_568[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Stage_Three().GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_402(0);
				bLocal_547 = Global_30693[0];
				if (!Function_268(bLocal_547))
				{
					Function_266(&Local_436);
				}
				Function_264(Global_34573, (*&Local_4 + 1080)[1], 0, 1, 1, 1);
				Function_264(bLocal_549, (*&Local_4 + 1080)[2], 0, 1, 1, 1);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
					if (IS_ACTOR_VALID(bLocal_712))
					{
						if (IS_ACTOR_ALIVE(bLocal_712))
						{
							Function_264(bLocal_712, (*&Local_4 + 1128)[bVar0], 0, 1, 1, 1);
						}
					}
					bVar0++;
				}
				Function_261(&iLocal_553);
				iLocal_546 = 1;
			}
			else
			{
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								Function_264(bLocal_712, (*&Local_4 + 1128)[bVar0], 0, 1, 1, 1);
							}
						}
						bVar0++;
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_740))
				{
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								Function_264(bLocal_712, (*&Local_4 + 1160)[bVar0], 0, 1, 1, 1);
							}
						}
						bVar0++;
					}
				}
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_268(bLocal_547) || bLocal_547 != 4294967295)) && Function_500())
			{
				if (Function_398(&bLocal_469))
				{
					Function_260();
					Function_261(&iLocal_553);
					iLocal_546 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_498(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_436, bLocal_545))
			{
				Function_261(&iLocal_553);
				iLocal_819 = 0;
				iLocal_820 = 0;
				Function_497();
				if (!bLocal_741)
				{
					Function_288(bLocal_545);
					Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[2], Function_292(bLocal_545), 0);
				}
				iLocal_546 = 3;
			}
			else if (Function_500())
			{
				if (Function_398(&bLocal_469))
				{
					Function_497();
					if (!bLocal_741)
					{
						Function_288(bLocal_545);
						Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[2], Function_292(bLocal_545), 0);
					}
					Function_264(Global_34573, (*&Local_4 + 1080)[1], 0, 1, 1, 1);
					Function_264(bLocal_549, (*&Local_4 + 1080)[3], 0, 1, 1, 1);
					Function_229();
					Function_264(bLocal_551, (*&Local_4 + 1080)[4], 0, 1, 1, 1);
					Function_350();
					Function_261(&iLocal_553);
					iLocal_546 = 4;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_496("$/cutscene/MEXARMY05_CS03_P1/MEXARMY05_CS03_P1", "$/cutscene/MEXARMY05_CS03/MEXARMY05_CS03", &iLocal_538, &Local_436, bLocal_545, 74889, 74889, 71505, 71505, 70359, 70359, 64364, 62721, 62527, 0, 2, 2, 2, 1))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				STREAMING_UNLOAD_SCENE();
				Function_261(&iLocal_553);
				iLocal_546 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_453(0))
			{
				Function_388(0, 0, 1);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			Function_261(&iLocal_553);
			iLocal_546 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (HUD_IS_FADED())
				{
					if (STREAMING_IS_WORLD_LOADED())
					{
						Function_322(1.0f, "Stage_Three().GID_FIRST_GOAL");
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						GET_OBJECT_POSITION((*&Local_4 + 1080)[4], &vLocal_810);
						ENABLE_GAME_CAMERA_FOCUS(vLocal_810, -1.0f, 0, 0, 1, 0);
						Function_261(&iLocal_553);
						iLocal_546 = 7;
					}
				}
				else
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_261(&iLocal_553);
					iLocal_546 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_439("MexArmy05_obj03_1", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_553);
				Function_261(&iLocal_556);
				Function_261(&iLocal_559);
				iLocal_546 = 8;
			}
			break;
		
		case 0x00000008:
			Function_431(&iLocal_559, (60.0f * 2.0f), 200.0f, bLocal_551, "MA05_return_rebelleader", "MA05_too_far_rebelleader", &bLocal_575, 0, bLocal_435, Local_4, 325, 1);
			break;
		
		case 0x00000069:
			if (Function_440(&iLocal_553, 0.0f))
			{
				ACTOR_DISABLE_WEAPON_RENDER(Global_34573, 0, 0);
				Function_261(&iLocal_553);
				iLocal_546 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_495();
				iLocal_568[2] = 1;
				Function_261(&iLocal_553);
				bLocal_545 = 3;
				iLocal_546 = 0;
			}
			break;
	}
	return;
}

void Function_495() //Position: 0x18AA2 / 101026
{
	Function_210();
	Function_224(7, 0, 1);
	Function_364(Global_34573);
	if (IS_OBJECT_VALID(bLocal_777))
	{
		DESTROY_OBJECT(bLocal_777);
	}
	Function_169(&bLocal_469);
	return;
}

bool Function_496(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18) //Position: 0x18ACC / 101068
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_337(iParam2, iParam14);
	switch (*iParam2)
	{
		case 0x000003E8:
			if (iParam4 != 99 && (Function_267(iParam3) || iParam3->f_24 < 1))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam2 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam15, iParam16, 1, 2);
				Call_Loc(uParam5);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_261(iParam2 + 4);
				*iParam2 = 1002;
			}
			else if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_336())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					Call_Loc(uParam5);
					Call_Loc(uParam7);
					Global_63097 = 0;
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					Function_261(iParam2 + 4);
					*iParam2 = 1004;
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
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_326(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_326(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_261(iParam2 + 4);
						*iParam2 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam9);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_323(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam1))
				{
					LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES: 2nd cutscene doesn't exist...");
					*iParam2 = 1105;
					return 0;
				}
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam1, 0, 1, 1, iParam17, iParam18);
				Call_Loc(uParam6);
				Global_63097 = 1;
				Function_261(iParam2 + 4);
				*iParam2 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_326(iParam2 + 4) <= 50.0f)
			{
				LOG_ERROR("GLOBAL_PLAY_BACK_TO_BACK_CUTSCENES - Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam2 = 1105;
				return 0;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_326(iParam2 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (!DECOR_CHECK_EXIST(Global_6289, "streamingtimer"))
				{
					DECOR_SET_FLOAT(Global_6289, "streamingtimer", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_6289, "streamingtimer")) < 2.0f)
				{
					if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
					{
						Call_Loc(uParam8);
						if (StackVal)
						{
							DECOR_REMOVE(Global_6289, "streamingtimer");
							STREAMING_RELEASE_MAIN_POI();
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
							*iParam2 = 1006;
						}
					}
				}
				else
				{
					CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar0, &vVar3);
					STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
				}
			}
			break;
		
		case 0x000003EE:
			Call_Loc(uParam10);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_323(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam2 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(uParam11);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					Function_331();
					if (!IS_OBJECT_VALID(iParam2->f_16))
					{
						HUD_ENABLE(true);
					}
					else
					{
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(uParam12);
				if (StackVal)
				{
					Function_330(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam2->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam2->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam2->f_20);
						}
						DESTROY_VOLUME(iParam2->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam2 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(uParam13);
				if (StackVal)
				{
					Call_Loc(uParam11);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam2 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam4 == 99) && !Function_267(iParam3))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam2 = 1105;
			break;
	}
	return 0;
}

void Function_497() //Position: 0x193D4 / 103380
{
	bool bVar0;
	
	Function_237();
	if (!SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_248();
	}
	Function_396(1, 1, 1, 0);
	Function_251(&(Local_618[317]));
	Function_251(&(Local_618[417]));
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_STAND_STILL(bLocal_549, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
			}
		}
		bVar0++;
	}
	TASK_CLEAR(bLocal_551);
	TASK_PRIORITY_SET(bLocal_551, true);
	TASK_STAND_STILL(bLocal_551, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_4.f_736);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_736))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_736, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TASK_CLEAR(bLocal_712);
				TASK_PRIORITY_SET(bLocal_712, true);
				TASK_CROUCH(bLocal_712, -1.0f);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				Function_264(bLocal_712, (*&Local_4 + 1128)[bVar0], 0, 1, 1, 1);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_740))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				Function_264(bLocal_712, (*&Local_4 + 1160)[bVar0], 0, 1, 1, 1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_498(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x19571 / 103793
{
	if (Function_499(&iParam0) == iParam7 || Function_452())
	{
		return 1;
	}
	return 0;
}

int Function_499(int iParam0) //Position: 0x19590 / 103824
{
	if (Function_267(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_500() //Position: 0x195A8 / 103848
{
	Function_370(&Local_4 + 304, 379, 2, 0);
	Function_370(&Local_4 + 304, 380, 2, 0);
	Function_370(&Local_4 + 304, 391, 2, 0);
	Function_370(&Local_4 + 304, 381, 2, 0);
	Function_370(&Local_4 + 304, 392, 2, 0);
	Function_370(&Local_4 + 304, 516, 2, 0);
	Function_370(&Local_4 + 304, 521, 2, 0);
	Function_370(&Local_4 + 304, 529, 2, 0);
	Function_370(&Local_4 + 304, 517, 2, 0);
	if (Function_398(&Local_4 + 304))
	{
		return 1;
	}
	return 0;
}

bool Function_501() //Position: 0x1963A / 103994
{
	if (Function_500())
	{
		Function_161(114689);
		return 1;
	}
	return 0;
}

bool Function_502() //Position: 0x19650 / 104016
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar27;
	var uVar28;
	
	if (IS_VOLUME_VALID((*&Local_4 + 832)[8]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 832)[8]))
		{
			Function_366(&iLocal_823, 38, 0, 4294967295, 4294967295);
		}
		else
		{
			Function_366(&iLocal_823, 30, 0, 4294967295, 4294967295);
		}
	}
	if (iLocal_832 <= 5)
	{
		Function_290((*&Local_4 + 1344)[6]);
		Function_414(StackVal, StackVal, "$/cutscene/MEXARMY05_CS02_B/MEXARMY05_CS02_B", &uLocal_709, Function_290((*&Local_4 + 1344)[6]), 0, 75.0f, 150.0f, 2, 1, 2, 1, 0, 1);
	}
	if (!IS_ACTION_NODE_PLAYING(Global_34573, "stand_hostage/walk"))
	{
		if (iLocal_832 <= 5)
		{
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk");
		}
	}
	if (IS_OBJECT_VALID(Local_4.f_1712))
	{
		if (Function_492(Global_34573, Local_4.f_1712, 15.0f))
		{
			GET_OBJECT_POSITION(Local_4.f_1712, &vVar0);
			GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, true), &vVar3);
			vVar0.f_4 = (vVar0.y + 0,1f);
			vVar3.f_4 = (vVar3.y + 1,5f);
			Function_506(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 4.0f);
			vVar6 = { StackVal, StackVal, Function_506(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 4.0f) };
			FIRE_PROJECTILE(false, "base_rifle", 0,1f, &vVar6, &vVar0);
		}
	}
	if (IS_OBJECT_VALID(Local_4.f_1716))
	{
		if (Function_492(Global_34573, Local_4.f_1716, 15.0f))
		{
			GET_OBJECT_POSITION(Local_4.f_1716, &vVar9);
			GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, 2), &vVar12);
			vVar12.f_4 = (vVar12.y + 1,5f);
			vVar9.f_4 = (vVar9.y + 0,1f);
			Function_506(StackVal, StackVal, StackVal, StackVal, vVar9, vVar12, 4.0f);
			vVar15 = { StackVal, StackVal, Function_506(StackVal, StackVal, StackVal, StackVal, vVar9, vVar12, 4.0f) };
			FIRE_PROJECTILE(false, "base_rifle", 0,1f, &vVar15, &vVar9);
		}
	}
	if (IS_OBJECT_VALID(Local_4.f_1720))
	{
		if (Function_492(Global_34573, Local_4.f_1720, 15.0f))
		{
			GET_OBJECT_POSITION(Local_4.f_1720, &vVar18);
			GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, 3), &vVar21);
			vVar21.f_4 = (vVar21.y + 1,5f);
			vVar18.f_4 = (vVar18.y + 0,1f);
			Function_506(StackVal, StackVal, StackVal, StackVal, vVar18, vVar21, 4.0f);
			vVar24 = { StackVal, StackVal, Function_506(StackVal, StackVal, StackVal, StackVal, vVar18, vVar21, 4.0f) };
			FIRE_PROJECTILE(false, "base_rifle", 0,1f, &vVar24, &vVar18);
		}
	}
	switch (iLocal_832)
	{
		case 0x00000000:
			strcpy(&cLocal_718, "MexArmy05_obj03_1", 24);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_551, 1);
			Function_341(1);
			Function_466(Local_4.f_728);
			iLocal_832 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (!ACTOR_HAS_ANIM_SET(Global_34573, "stand_hostage"))
			{
				Function_361();
				return 1;
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_551, 2,5f))
			{
				if (iLocal_546 != 8)
				{
					Function_261(&iLocal_553);
					iLocal_546 = 8;
				}
				iLocal_832 = 6;
				return 1;
			}
			Function_261(&iLocal_553);
			iLocal_832 = 2;
			return 1;
			break;
		
		case 0x00000002:
			if (!iLocal_745)
			{
				if (!iLocal_821)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_220(bLocal_551, 1.0f, 24.0f, 1, 1, 0))
						{
							Function_505();
							iLocal_821 = 1;
						}
					}
				}
				if (GET_TASK_STATUS(bLocal_551, 0) != 1)
				{
					AI_STOP_IGNORING_ACTORS();
					Function_240(Local_4.f_744);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_744, true, 1, 3);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					bVar27 = false;
					while (bVar27 <= SQUAD_GET_SIZE(Local_4.f_744))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar27);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								GET_POSITION(bLocal_712, &uVar28);
								TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_712, &uVar28, GET_OBJECT_HEADING((*&Local_4 + 1480)[5]), -1.0f);
								COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_712, 10000.0f);
								COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_712, 0,5f, 1.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 13, true);
								COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_712, 16, true);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 53, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 54, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 59, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 9, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 57, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 56, 0.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 49, 3.0f);
								COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_712, 48, 5.0f);
							}
						}
						bVar27++;
					}
					Function_343(Local_4.f_744, 200.0f);
					if (GET_TASK_STATUS(bLocal_551, 0) != 1)
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_551, 0);
						bLocal_717 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1696, 4, 1, 0, 1, false);
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1344)[6], 4, 0, 1);
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1660), "Usecase1", 4294967295, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_551, bLocal_717);
						TASK_SEQUENCE_RELEASE(bLocal_717, 1);
						SET_ACTOR_CAN_PLAY_GESTURES(bLocal_551, false);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_551, false);
						AI_IGNORE_ACTOR(bLocal_551);
					}
					Function_261(&iLocal_553);
					iLocal_745 = 1;
				}
			}
			else if (!iLocal_822)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_220(bLocal_551, 1.0f, 24.0f, 1, 1, 0))
					{
						Function_504();
						iLocal_822 = 1;
					}
				}
			}
			if (!ACTOR_HAS_ANIM_SET(Global_34573, "stand_hostage"))
			{
				Function_361();
				return 1;
			}
			if (IS_VOLUME_VALID((*&Local_4 + 896)[4]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 896)[4]))
				{
					if (iLocal_546 != 8)
					{
						Function_261(&iLocal_553);
						iLocal_546 = 8;
					}
					iLocal_832 = 3;
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(bLocal_551, 19) == 1)
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_551, "reyes_frees_marston"))
				{
					SET_MOVER_FROZEN(bLocal_551, true);
					Function_503();
					iLocal_832 = 4;
					return 1;
				}
			}
			if (!Function_220(bLocal_551, 1.0f, 200.0f, 1, 1, 0))
			{
				SET_MOVER_FROZEN(bLocal_551, true);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_551, 0);
				SNAP_ACTOR_TO_GRINGO(bLocal_551, Local_4.f_1660, "UseCase1", false, 0, 0);
				TASK_USE_GRINGO(bLocal_551, GET_GRINGO_FROM_OBJECT(Local_4.f_1660), "Usecase1", 4294967295, 1);
				Function_503();
				iLocal_832 = 4;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!ACTOR_HAS_ANIM_SET(Global_34573, "stand_hostage"))
			{
				Function_361();
				return 1;
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 896)[6]))
			{
				if (iLocal_546 != 8)
				{
					Function_261(&iLocal_553);
					iLocal_546 = 8;
				}
				bLocal_750 = true;
				SET_MOVER_FROZEN(bLocal_551, false);
				iLocal_832 = 5;
				return 1;
			}
			if (!Function_328(&iLocal_773))
			{
				Function_261(&iLocal_773);
			}
			else if (Function_326(&iLocal_773) > 0,25f)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_551, "reyes_frees_marston"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_551, 0);
					SNAP_ACTOR_TO_GRINGO(bLocal_551, Local_4.f_1660, "UseCase1", false, 0, 0);
					TASK_USE_GRINGO(bLocal_551, GET_GRINGO_FROM_OBJECT(Local_4.f_1660), "Usecase1", 4294967295, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (Function_329("$/cutscene/MEXARMY05_CS02_B/MEXARMY05_CS02_B", &iLocal_538, &Local_436, &bLocal_545, 74889, 71505, 70359, 64364, 62721, 62527, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_832 = 10;
				return 0;
			}
			return 1;
			break;
	}
	return 1;
}

void Function_503() //Position: 0x19D74 / 105844
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_ArmyHelpIsComing", "MexArmy05_ArmyHelpIsComing", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x19DD1 / 105937
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_FollowReyesSpot", "MexArmy05_FollowReyesSpot", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x19E2C / 106028
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy05_GoToReyes", "MexArmy05_GoToReyes", false, 2, 1, 0, 1);
		Function_423(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

vector3 Function_506(vector3 vParam0, vector3 vParam3, bool bParam6) //Position: 0x19E7B / 106107
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, bParam6);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_507() //Position: 0x19EAD / 106157
{
	bool bVar0;
	
	if (iLocal_546 < 5 && iLocal_546 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 808)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[1]))
			{
				if (Function_501())
				{
					DESTROY_VOLUME((*&Local_4 + 808)[1]);
				}
			}
		}
		Function_531(bLocal_435);
		Function_528();
		Function_522();
		Function_290((*&Local_4 + 1080)[5]);
		Function_414(StackVal, StackVal, "$/cutscene/MEXARMY05_CS03_P1/MEXARMY05_CS03_P1", &uLocal_709, Function_290((*&Local_4 + 1080)[5]), 0, 75.0f, 150.0f, 2, 2, 1, 2, 0, 1);
		if (!Function_521())
		{
			Function_261(&iLocal_553);
			iLocal_546 = 105;
		}
	}
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			if (IS_VOLUME_VALID((*&Local_4 + 808)[0]))
			{
				Function_520();
				DESTROY_VOLUME((*&Local_4 + 808)[0]);
			}
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						SET_ACTOR_HEALTH(bLocal_712, GET_ACTOR_MAX_HEALTH(bLocal_712));
					}
				}
				bVar0++;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_732))
			{
				bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_732, bVar0);
				if (IS_ACTOR_VALID(bLocal_712))
				{
					if (IS_ACTOR_ALIVE(bLocal_712))
					{
						SET_ACTOR_HEALTH(bLocal_712, GET_ACTOR_MAX_HEALTH(bLocal_712));
					}
				}
				bVar0++;
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			if (iLocal_568[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_276(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, "Stage_Two().GID_INITIALIZE");
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_402(1);
				bLocal_547 = Global_30693[0];
				if (!Function_268(bLocal_547))
				{
					Function_266(&Local_436);
				}
				if (Function_289(Local_436) == 0)
				{
					Function_264(Global_34573, (*&Local_4 + 984)[0], 0, 1, 1, 1);
				}
				else
				{
					Function_264(Global_34573, (*&Local_4 + 984)[1], 0, 1, 1, 1);
				}
				Function_261(&iLocal_553);
				iLocal_546 = 1;
			}
			else
			{
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_268(bLocal_547) || bLocal_547 != 4294967295)
				{
					if (Function_519())
					{
						if (Function_398(&bLocal_465))
						{
							Function_263();
							Function_261(&iLocal_553);
							iLocal_546 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_288(bLocal_545);
			Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[2], Function_292(bLocal_545), 4);
			Function_261(&iLocal_553);
			iLocal_546 = 3;
			break;
		
		case 0x00000003:
			Function_514();
			Function_261(&iLocal_553);
			iLocal_546 = 4;
			break;
		
		case 0x00000004:
			if (Function_440(&iLocal_553, 1.0f))
			{
				Function_322(1.0f, "Stage_Two().GID_POST_CUTSCENE");
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
				iLocal_724 = 0;
				Function_261(&iLocal_553);
				iLocal_546 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_513();
				Function_261(&iLocal_553);
				Function_261(&iLocal_559);
				iLocal_546 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_439("MexArmy05_obj02_1", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_553);
				Function_261(&iLocal_556);
				Function_261(&iLocal_559);
				iLocal_546 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_512(&iLocal_559, Global_30693[0], 0, "Chuparosa_return", "Chuparosa_abandoned", &bLocal_575, 0, 0, 0, 330, 1))
			{
				Function_509(&iLocal_559, 1920.0f, &cLocal_718, 7,5f, 2, 0);
			}
			break;
		
		case 0x00000069:
			if (Function_440(&iLocal_553, 1.0f))
			{
				Function_261(&iLocal_553);
				iLocal_546 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_508();
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_568[1] = 1;
				Function_261(&iLocal_553);
				bLocal_545 = 2;
				iLocal_546 = 0;
			}
			break;
	}
	return;
}

void Function_508() //Position: 0x1A2CF / 107215
{
	Function_211();
	Function_219(&Local_4 + 732, 0, 0);
	DESTROY_OBJECT(Local_4.f_732);
	ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
	RELEASE_ACTOR((*&Local_4 + 664)[02]);
	Function_169(&bLocal_465);
	return;
}

int Function_509(int iParam0, float fParam1, char* cParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x1A304 / 107268
{
	if (Function_326(iParam0) <= fParam1)
	{
		if (bParam5)
		{
			Function_294();
		}
		if (!Function_132())
		{
			Function_510(cParam2, fParam3, iParam4);
			Function_261(iParam0);
			return 1;
		}
		Function_262(iParam0, (fParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_510(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A349 / 107337
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_511(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_131(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_439(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_511(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1A3A7 / 107431
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

bool Function_512(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x1A3EE / 107502
{
	if (!Function_81(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (uParam2 && Function_268(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
		{
			Function_282(bParam4);
			*uParam5 = 1;
			return 1;
		}
		if (!Global_3386)
		{
			if (!Function_437(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_439(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
					Function_436(128);
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_435(bParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_435(bParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_437(128))
		{
			Function_434(128);
			Function_434(256);
			if (!Function_433())
			{
				if (bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_432();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_435(bParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_435(bParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
	{
		if (Function_437(256))
		{
			if (Function_326(iParam0) <= 8.0f)
			{
				Function_282(bParam4);
				*uParam5 = 1;
			}
		}
		else if (!Function_437(256))
		{
			if (bParam6)
			{
				Function_294();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_439(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_436(256);
				Function_261(iParam0);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_435(bParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_435(bParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_437(256))
	{
		Function_434(128);
		Function_434(256);
		if (!Function_433())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_432();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_435(bParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_435(bParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_513() //Position: 0x1A6AF / 108207
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_ArriveAtChupa", "MexArmy05_ArriveAtChupa", false, 1, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1A706 / 108294
{
	bool bVar0;
	
	AUDIO_SET_PLAYER_MOOD(0, 0);
	if (iLocal_568[0] == 0)
	{
		Function_517(0, 0, 1);
		Function_264((*&Local_4 + 664)[02], (*&Local_4 + 1380)[3], 0, 1, 1, 1);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					Function_515(bLocal_712, (*&Local_4 + 984)[(13 + bVar0)], 1, 1, 1);
				}
			}
			bVar0++;
		}
		if (Function_289(Local_436) == 0)
		{
			Function_264(bLocal_552, (*&Local_4 + 984)[19], 0, 1, 1, 1);
		}
		else
		{
			Function_264(bLocal_552, (*&Local_4 + 984)[20], 0, 1, 1, 1);
		}
		Function_264(Global_34573, (*&Local_4 + 984)[2], 0, 1, 1, 1);
		Function_264(bLocal_549, (*&Local_4 + 984)[4], 0, 1, 1, 1);
		Function_366(&iLocal_823, 8, 0, 4294967295, 4294967295);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_224(6, 0, 1);
	bLocal_765 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1080)[5], 330, 0f, 2, 0);
	bLocal_717 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 0,1f, 0, 0);
	TASK_VEHICLE_LEAVE(false);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bLocal_549);
	TASK_PRIORITY_SET(bLocal_549, true);
	TASK_SEQUENCE_PERFORM(bLocal_549, bLocal_717);
	TASK_SEQUENCE_RELEASE(bLocal_717, 1);
	SQUAD_GOALS_CLEAR(Local_4.f_728);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				bLocal_717 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 984)[(13 + bVar0)], 2, 0, 1);
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,5f, 4.0f), 0, 0);
				TASK_DISMOUNT(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_712, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				bLocal_713 = GET_MOUNT(bLocal_712);
				CLEAR_ACTOR_MAX_SPEED(bLocal_712);
				CLEAR_ACTOR_MAX_SPEED(bLocal_713);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_712);
			}
		}
		bVar0++;
	}
	return;
}

void Function_515(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1A8D6 / 108758
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
				Function_516(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_516(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x1A9ED / 109037
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_517(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1AAA6 / 109222
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_518(Global_34573, (*&Local_4 + 664)[02], 1))
		{
			SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 664)[02], true);
		}
	}
	if (bParam1)
	{
		if (!Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
		{
			SET_ACTOR_IN_VEHICLE(bLocal_549, (*&Local_4 + 664)[02], false);
		}
	}
	if (bParam2)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
		{
			bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
			if (IS_ACTOR_VALID(bLocal_712))
			{
				if (IS_ACTOR_ALIVE(bLocal_712))
				{
					bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_732, bVar0);
					if (IS_ACTOR_ALIVE(bLocal_713))
					{
						if (GET_MOUNT(bLocal_712) != bLocal_713)
						{
							SET_ACTORS_HORSE(bLocal_712, bLocal_713);
							ACTOR_MOUNT_ACTOR(bLocal_712, bLocal_713);
						}
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

bool Function_518(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1AB6E / 109422
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bParam2) != bParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(bParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

bool Function_519() //Position: 0x1AB95 / 109461
{
	Function_370(&Local_4 + 192, 1196, 2, 0);
	Function_370(&Local_4 + 192, 976, 2, 0);
	Function_370(&Local_4 + 192, 379, 2, 0);
	Function_370(&Local_4 + 192, 380, 2, 0);
	Function_370(&Local_4 + 192, 391, 2, 0);
	Function_370(&Local_4 + 192, 381, 2, 0);
	Function_370(&Local_4 + 192, 392, 2, 0);
	Function_370(&Local_4 + 192, 977, 2, 0);
	Function_370(&Local_4 + 192, 983, 2, 0);
	if (Function_398(&Local_4 + 192))
	{
		return 1;
	}
	return 0;
}

void Function_520() //Position: 0x1AC1D / 109597
{
	Function_519();
	Function_161(114689);
	if (!SQUAD_IS_VALID(Local_4.f_740))
	{
		Function_252();
	}
	return;
}

bool Function_521() //Position: 0x1AC3D / 109629
{
	if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		Function_366(&iLocal_823, 8, 0, 4294967295, 4294967295);
	}
	switch (iLocal_830)
	{
		case 0x00000000:
			strcpy(&cLocal_718, "MexArmy05_obj02_1", 24);
			Function_261(&iLocal_559);
			iLocal_724 = 0;
			iLocal_830 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 896)[3]))
			{
				REMOVE_BLIP(bLocal_765);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_GO_TO_OBJECT(Global_34573, (*&Local_4 + 1080)[0], 1, 1, 1);
				TASK_GO_TO_OBJECT(bLocal_549, (*&Local_4 + 1080)[0], 1, 1, 1);
				SET_ACTOR_INVULNERABILITY(Global_34573, true);
				iLocal_830 = 2;
				return 0;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 1;
}

void Function_522() //Position: 0x1ACF4 / 109812
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	vector3 vVar15;
	var uVar18;
	
	if (IS_ACTOR_RIDING(bLocal_549))
	{
		if (Function_527(GET_MOUNT(bLocal_549), 0) >= 0,5f)
		{
			SET_ACTOR_SPEED(GET_MOUNT(bLocal_549), 0.0f);
			if (GET_TASK_STATUS(bLocal_549, 12) != 1)
			{
				STOP_VEHICLE(GET_MOUNT(bLocal_549));
				TASK_DISMOUNT(bLocal_549, 1);
			}
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bLocal_549))
	{
		if (Function_527(GET_VEHICLE(bLocal_549), 0) >= 0,5f)
		{
			SET_ACTOR_SPEED(GET_VEHICLE(bLocal_549), 0.0f);
			if (GET_TASK_STATUS(bLocal_549, 55) != 1)
			{
				STOP_VEHICLE(GET_VEHICLE(bLocal_549));
				TASK_VEHICLE_LEAVE(bLocal_549);
			}
		}
	}
	else
	{
		if (!ACTORS_IN_RANGE(Global_34573, bLocal_549, 15.0f))
		{
			if (!Function_328(&iLocal_803))
			{
				Function_261(&iLocal_803);
			}
			else if (Function_326(&iLocal_803) < 5.0f)
			{
				GET_VOLUME_CENTER((*&Local_4 + 896)[3], &vVar0);
				GET_POSITION((*&Local_4 + 664)[02], &uVar3);
				if (Function_526(StackVal, StackVal, Global_34573, vVar0) <= (Function_525(&uVar3, &vVar0) + 15.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_549, "MexArmy05_RunsOffInstead", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_261(&iLocal_803);
				}
				else if (StackVal <= Function_526(StackVal, Function_526(StackVal, StackVal, Global_34573, vVar0), bLocal_549, vVar0))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_549, "MexArmy05_NoGo2Church", "", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_261(&iLocal_803);
				}
				else if (ACTORS_IN_RANGE(bLocal_549, Global_34573, 25.0f))
				{
					Function_261(&iLocal_803);
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_261(&iLocal_803);
				}
			}
		}
		else if (Function_440(&iLocal_559, 5.0f))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_549, 7.0f))
			{
				if (iLocal_724 <= 10)
				{
					Function_524();
					iLocal_724 = 10;
				}
			}
		}
		if (IS_OBJECT_VALID(Local_4.f_1692))
		{
			if (GET_TASK_STATUS(bLocal_549, 55) != 1)
			{
				bVar12 = 9999.0f;
				bVar14 = false;
				GET_OBJECT_POSITION(Global_34573, &vVar6);
				bVar13 = false;
				while (bVar13 <= GET_NUM_PATH_POINTS(Local_4.f_1692))
				{
					GET_PATH_POINT(Local_4.f_1692, bVar13, &vVar9);
					if (VDIST(vVar6, vVar9) > bVar12)
					{
						bVar12 = VDIST(vVar6, vVar9);
						bVar14 = bVar13;
					}
					bVar13++;
				}
				if (bLocal_806 != bVar14)
				{
					if (bVar14 + 1 <= GET_NUM_PATH_POINTS(Local_4.f_1692))
					{
						TASK_CLEAR(bLocal_549);
						TASK_FOLLOW_PATH_FROM_POINT(bLocal_549, Local_4.f_1692, true, bVar14 + 1, 0, 0, 1, 0);
					}
					bLocal_806 = bVar14;
				}
				else
				{
					GET_VOLUME_CENTER((*&Local_4 + 896)[3], &vVar15);
					Function_523(StackVal, StackVal, vVar15);
				}
				if (Function_492(bLocal_549, (*&Local_4 + 1080)[5], 1,5f))
				{
					DESTROY_OBJECT(Local_4.f_1692);
					GET_OBJECT_POSITION((*&Local_4 + 1080)[6], &vLocal_810);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1080)[6], &vLocal_813);
					TASK_GO_TO_COORD_AND_STAY(bLocal_549, &vLocal_810, true, vLocal_813.y);
					Function_261(&iLocal_553);
				}
			}
		}
		else if (!IS_DOOR_VALID(bLocal_778))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1080)[5], &uVar18);
			bLocal_778 = FIND_NEAREST_DOOR(&uVar18, 5.0f);
		}
		else if (!IS_DOOR_OPENED(bLocal_778) && !IS_DOOR_OPENING(bLocal_778))
		{
			if (Function_492(bLocal_549, (*&Local_4 + 1080)[5], 0,5f))
			{
				OPEN_DOOR_DIRECTION(bLocal_778, false);
			}
		}
		else if (GET_TASK_STATUS(bLocal_549, 66) != 1)
		{
			if (Function_326(&iLocal_553) < 2.0f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 1080)[6], &vLocal_810);
				GET_OBJECT_ORIENTATION((*&Local_4 + 1080)[6], &vLocal_813);
				TASK_GO_TO_COORD_AND_STAY(bLocal_549, &vLocal_810, true, vLocal_813.y);
				Function_261(&iLocal_553);
			}
		}
	}
	return;
}

void Function_523(vector3 vParam0) //Position: 0x1B072 / 110706
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (GET_TASK_STATUS(bLocal_549, 43) != 1 || GET_TASK_STATUS(bLocal_549, 17) != 1)
	{
		GET_OBJECT_POSITION(Global_34573, &vVar0);
		GET_OBJECT_POSITION(bLocal_549, &vVar3);
		if (VDIST(vVar0, vParam0) > VDIST(vVar3, vParam0))
		{
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, true);
		}
		else
		{
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, true);
		}
	}
	return;
}

void Function_524() //Position: 0x1B0CD / 110797
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_BanterTalkChurch_v1_AA", "MexArmy05_BanterTalkChurch_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_BanterTalkChurch_v1_AB", "MexArmy05_BanterTalkChurch_v1_AB", 2, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_BanterTalkChurch_v1_AC", "MexArmy05_BanterTalkChurch_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_BanterTalkChurch_v1_AD", "MexArmy05_BanterTalkChurch_v1_AD", 2, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_BanterTalkChurch_v1_AE", "MexArmy05_BanterTalkChurch_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_BanterTalkChurch_v1_AF", "MexArmy05_BanterTalkChurch_v1_AF", 2, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_BanterTalkChurch_v1_AG", "MexArmy05_BanterTalkChurch_v1_AG", false, 1, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_525(var uParam0, int iParam1) //Position: 0x1B310 / 111376
{
	return VDIST(*uParam0, *iParam1);
}

float Function_526(bool bParam0, vector3 vParam1) //Position: 0x1B321 / 111393
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_359(bParam0);
		vVar0 = { StackVal, StackVal, Function_359(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

float Function_527(bool bParam0, bool bParam1) //Position: 0x1B39B / 111515
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_528() //Position: 0x1B3BA / 111546
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	switch (iLocal_831)
	{
		case 0x00000000:
			Function_290((*&Local_4 + 1344)[5]);
			if (Function_417(StackVal, StackVal, Global_34573, Function_290((*&Local_4 + 1344)[5]), 80.0f))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1344)[5], &uVar0);
				SQUAD_GOALS_CLEAR(Local_4.f_728);
				Function_240(Local_4.f_728);
				Function_325(Local_4.f_728);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[8], Local_4.f_728, Function_530(), 0);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[9], Local_4.f_728, Function_530(), 0);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[10], Local_4.f_728, Function_530(), 0);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[11], Local_4.f_728, Function_530(), 0);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[12], Local_4.f_728, Function_530(), 0);
				Function_530();
				Function_529(StackVal, StackVal, (*&Local_4 + 1416)[13], Local_4.f_728, Function_530(), 0);
				if (SQUAD_IS_VALID(Local_4.f_744))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_744);
					Function_240(Local_4.f_744);
					Function_325(Local_4.f_744);
					Function_530();
					Function_529(StackVal, StackVal, (*&Local_4 + 1544)[0], Local_4.f_744, Function_530(), 0);
					Function_530();
					Function_529(StackVal, StackVal, (*&Local_4 + 1544)[1], Local_4.f_744, Function_530(), 0);
				}
				Function_240(Local_4.f_740);
				bLocal_717 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[0], 40.0f, 1, 1, 1);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[0], 20.0f, 2, 1, 1);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[0], 4, 1, 1);
				Function_530();
				vVar3 = { StackVal, StackVal, Function_530() };
				TASK_POINT_GUN_AT_COORD(false, &vVar3, -1.0f);
				TASK_SEQUENCE_CLOSE();
				bLocal_752 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
				TASK_SEQUENCE_PERFORM(false, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				bLocal_717 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,2f, 0,4f), 0, 0);
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[1], 40.0f, 1, 1, 1);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[1], 20.0f, 2, 1, 1);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[1], 4, 1, 1);
				Function_530();
				vVar3 = { StackVal, StackVal, Function_530() };
				TASK_POINT_GUN_AT_COORD(false, &vVar3, -1.0f);
				TASK_SEQUENCE_CLOSE();
				bLocal_753 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
				TASK_SEQUENCE_PERFORM(false, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				bLocal_717 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,2f, 0,4f), 0, 0);
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[2], 40.0f, 1, 1, 1);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[2], 20.0f, 2, 1, 1);
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[2], 4, 1, 1);
				Function_530();
				vVar3 = { StackVal, StackVal, Function_530() };
				TASK_POINT_GUN_AT_COORD(false, &vVar3, -1.0f);
				TASK_SEQUENCE_CLOSE();
				bLocal_754 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
				TASK_SEQUENCE_PERFORM(false, bLocal_717);
				TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				iLocal_831 = 2;
			}
			break;
		
		case 0x00000002:
			Function_290((*&Local_4 + 1344)[5]);
			if (Function_417(StackVal, StackVal, Global_34573, Function_290((*&Local_4 + 1344)[5]), 50.0f))
			{
				iLocal_831 = 3;
			}
			break;
		
		case 0x00000003:
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[3], 4, 1, 1);
			Function_530();
			vVar6 = { StackVal, StackVal, Function_530() };
			TASK_POINT_GUN_AT_COORD(false, &vVar6, -1.0f);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_REMOVE(Local_4.f_740, bLocal_752);
			bLocal_752 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[4], 4, 1, 1);
			Function_530();
			vVar6 = { StackVal, StackVal, Function_530() };
			TASK_POINT_GUN_AT_COORD(false, &vVar6, -1.0f);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_REMOVE(Local_4.f_740, bLocal_753);
			bLocal_753 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			iLocal_831 = 5;
			break;
		
		case 0x00000005:
			Function_290((*&Local_4 + 1344)[5]);
			if (Function_417(StackVal, StackVal, Global_34573, Function_290((*&Local_4 + 1344)[5]), 37.0f))
			{
				iLocal_831 = 6;
			}
			break;
		
		case 0x00000006:
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
			Function_530();
			vVar9 = { StackVal, StackVal, Function_530() };
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[5], 4, 1, 1);
			TASK_POINT_GUN_AT_COORD(false, &vVar9, -1.0f);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_REMOVE(Local_4.f_740, bLocal_754);
			bLocal_754 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			iLocal_831 = 8;
			break;
		
		case 0x00000008:
			Function_290((*&Local_4 + 1344)[5]);
			if (Function_417(StackVal, StackVal, Global_34573, Function_290((*&Local_4 + 1344)[5]), 30.0f))
			{
				iLocal_831 = 9;
			}
			break;
		
		case 0x00000009:
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[6], 4, 1, 1);
			Function_530();
			vVar12 = { StackVal, StackVal, Function_530() };
			TASK_POINT_GUN_AT_COORD(false, &vVar12, -1.0f);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_REMOVE(Local_4.f_740, bLocal_752);
			bLocal_752 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			bLocal_717 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 0,75f), 0, 0);
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1416)[7], 4, 1, 1);
			Function_530();
			vVar12 = { StackVal, StackVal, Function_530() };
			TASK_POINT_GUN_AT_COORD(false, &vVar12, -1.0f);
			TASK_SEQUENCE_CLOSE();
			SQUAD_GOAL_REMOVE(Local_4.f_740, bLocal_753);
			bLocal_753 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_740, false, 1, 1);
			TASK_SEQUENCE_PERFORM(false, bLocal_717);
			TASK_SEQUENCE_RELEASE(bLocal_717, 1);
			iLocal_831 = 10;
			break;
		
		case 0x0000000A:
			if ((GET_TASK_STATUS(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, false), 29) != 1 && GET_TASK_STATUS(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, true), 29) != 1) && GET_TASK_STATUS(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_740, 2), 29) != 1)
			{
				iLocal_831 = 11;
			}
			break;
		
		case 0x0000000B:
			break;
	}
	return;
}

var Function_529(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x1B979 / 113017
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	
	GET_OBJECT_POSITION(bParam0, &uVar0);
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_DISMOUNT(false, 0);
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	if (!bParam5)
	{
		TASK_GO_TO_OBJECT(false, bParam0, 2, 1, 1);
	}
	TASK_POINT_GUN_AT_COORD(false, &uParam2, -1.0f);
	TASK_SEQUENCE_CLOSE();
	bVar4 = SQUAD_GOAL_ADD_GENERAL_TASK(bParam1, false, 1, 1);
	TASK_SEQUENCE_PERFORM(false, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	return bVar4;
}

vector3 Function_530() //Position: 0x1B9DC / 113116
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_POSITION((*&Local_4 + 1344)[5], &vVar0);
	vVar3.x = RAND_FLOAT_GAUSSIAN(0.0f, 0,25f);
	vVar3.f_4 = 0.0f;
	vVar3.f_8 = RAND_FLOAT_GAUSSIAN(0.0f, 0,25f);
	return StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal);
}

void Function_531(bool bParam0) //Position: 0x1BA16 / 113174
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		if (IS_ITERATOR_VALID(bVar0))
		{
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				while (IS_OBJECT_VALID(bVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if ((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 379 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 380) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 381) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 382) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 383) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 384) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 385) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 386) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 387) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 388) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 389) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 390) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 391) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 392) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 393) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 394) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 395) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 396) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 580)
						{
							if (GET_LAST_ATTACKER(GET_ACTOR_FROM_OBJECT(bVar1)) == Global_34573)
							{
								Function_282("MexicanSoldier_attacked");
								bLocal_575 = true;
							}
						}
					}
					bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
				}
			}
			DESTROY_ITERATOR(bVar0);
		}
	}
	if (Function_532(0))
	{
		Function_282("MexicanSoldier_attacked");
		bLocal_575 = true;
	}
	return;
}

bool Function_532(int iParam0) //Position: 0x1BBC9 / 113609
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

void Function_533() //Position: 0x1BC3F / 113727
{
	float fVar0;
	float fVar1;
	var uVar2;
	bool bVar5;
	
	if (iLocal_546 < 5 && iLocal_546 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 808)[0]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[0]))
			{
				Function_520();
				DESTROY_VOLUME((*&Local_4 + 808)[0]);
			}
		}
		if (IS_OBJECT_VALID(Local_4.f_1684))
		{
			GET_POSITION((*&Local_4 + 664)[02], &uVar2);
			ESTIMATE_DISTANCE_ALONG_PATH(Local_4.f_1684, &uVar2, &fVar0, &fVar1);
			fLocal_727 = (fVar1 - fVar0);
		}
		Function_531(bLocal_435);
		if (!iLocal_802)
		{
			iLocal_802 = 1;
			bVar5 = Function_376("escalara", "villaWall04", 1);
			if (IS_DOOR_VALID(bVar5))
			{
				if (IS_DOOR_LOCKED(bVar5))
				{
					iLocal_802 = 0;
					SET_DOOR_LOCK(bVar5, 0);
					PRINTSTRING("UNLOCKING VILLA WALL DOOR #1");
					PRINTNL();
				}
				if (!IS_DOOR_OPENED(bVar5))
				{
					iLocal_802 = 0;
					OPEN_DOOR_DIRECTION(bVar5, true);
					PRINTSTRING("OPEN VILLA WALL DOOR #1");
					PRINTNL();
				}
			}
			bVar5 = Function_376("escalara", "villaWall04", 2);
			if (IS_DOOR_VALID(bVar5))
			{
				if (IS_DOOR_LOCKED(bVar5))
				{
					iLocal_802 = 0;
					SET_DOOR_LOCK(bVar5, 0);
					PRINTSTRING("UNLOCKING VILLA WALL DOOR #2");
					PRINTNL();
				}
				if (!IS_DOOR_OPENED(bVar5))
				{
					iLocal_802 = 0;
					OPEN_DOOR_DIRECTION(bVar5, false);
					PRINTSTRING("OPEN VILLA WALL DOOR #2");
					PRINTNL();
				}
			}
		}
		if (!Function_539())
		{
			Function_261(&iLocal_553);
			iLocal_546 = 106;
		}
	}
	switch (iLocal_546)
	{
		case 0x00000000:
			Function_407(0);
			Function_538();
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_402(1);
			bLocal_547 = Global_30685[0];
			if (!Function_268(bLocal_547))
			{
				Function_266(&Local_436);
			}
			Function_517(0, 0, 1);
			Function_261(&iLocal_553);
			if (!Function_267(&Local_436))
			{
				Function_537();
				iLocal_546 = 2;
			}
			else
			{
				iLocal_546 = 1;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_268(bLocal_547) || bLocal_547 != 4294967295)) && Function_369())
			{
				Function_537();
				Function_261(&iLocal_553);
				iLocal_546 = 2;
			}
			break;
		
		case 0x00000002:
			Function_288(bLocal_545);
			Function_447(StackVal, StackVal, Function_288(bLocal_545), bLocal_545, Global_30633[0], Function_292(bLocal_545), 0);
			Function_536();
			Function_261(&iLocal_553);
			iLocal_546 = 5;
			break;
		
		case 0x00000005:
			if (Function_440(&iLocal_553, 1.0f))
			{
				if (!iLocal_763)
				{
					Function_264(Global_34573, (*&Local_4 + 956)[1], "PostInit_Stage_One", 0, 1, 0);
					Function_264(bLocal_549, (*&Local_4 + 956)[2], 0, 1, 1, 1);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2.0f, 0);
					ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					ACTOR_POP_NEXT_GAIT(bLocal_549, 1, false);
					GET_OBJECT_POSITION((*&Local_4 + 956)[4], &vLocal_810);
					ENABLE_GAME_CAMERA_FOCUS(vLocal_810, -1.0f, 0, 1, 1, 0);
					iLocal_763 = 1;
				}
				Function_322(1.0f, "Stage_One().GID_FADE_IN");
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
				Function_261(&iLocal_553);
				iLocal_546 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_535();
				Function_261(&iLocal_553);
				iLocal_546 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_439("MexArmy05_obj01_1", 7,5f, 1, 2, 0, 0, 0);
				Function_261(&iLocal_553);
				Function_261(&iLocal_556);
				Function_261(&iLocal_559);
				iLocal_546 = 8;
			}
			break;
		
		case 0x00000008:
			if (!bLocal_725)
			{
				if (!Function_431(&iLocal_559, 60.0f, 200.0f, bLocal_549, "Henchman_return", "Henchman_abandoned", &bLocal_575, 0, 0, 0, 325, 1))
				{
					Function_509(&iLocal_559, 1920.0f, &cLocal_718, 7,5f, 2, 0);
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SET_ACTOR_INVULNERABILITY(Global_34573, true);
				Function_534();
				iLocal_568[0] = 1;
				Function_261(&iLocal_553);
				bLocal_545 = true;
				iLocal_546 = 0;
			}
			break;
	}
	return;
}

void Function_534() //Position: 0x1C0AD / 114861
{
	Function_212();
	DESTROY_OBJECT(Local_4.f_1680);
	DESTROY_OBJECT(Local_4.f_1684);
	DESTROY_OBJECT(Local_4.f_1688);
	Function_226(bLocal_711);
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
	}
	bLocal_740 = false;
	while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bLocal_740);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_712, true);
			}
		}
		bLocal_740++;
	}
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	return;
}

void Function_535() //Position: 0x1C12B / 114987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_DeSantaSetsOffWag", "MexArmy05_DeSantaSetsOffWag", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536() //Position: 0x1C18A / 115082
{
	bool bVar0;
	
	Function_366(&iLocal_823, 1, 0, 4294967295, 4294967295);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	bLocal_717 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1676, true, 1, 0, 1, false);
	TASK_VEHICLE_ENTER(false, (*&Local_4 + 664)[02], 1, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_549, bLocal_717);
	TASK_SEQUENCE_RELEASE(bLocal_717, 1);
	AI_ACTOR_FORCE_SPEED(bLocal_549, true);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_732, bVar0);
		if (IS_ACTOR_VALID(bLocal_712))
		{
			if (IS_ACTOR_ALIVE(bLocal_712))
			{
				TREAT_AMBIENT_SPEECH_AS_SCRIPTED(bLocal_712, 1);
				if (IS_ACTOR_VALID(bLocal_713))
				{
					SET_ACTORS_HORSE(bLocal_712, bLocal_713);
					bLocal_717 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 0, 0);
					TASK_GO_NEAR_ACTOR(false, bLocal_713, 2.0f, 1);
					TASK_MOUNT(false, bLocal_713, 0, 1, 2, 2147483647);
					TASK_SEQUENCE_CLOSE();
					TASK_PRIORITY_SET(bLocal_712, true);
					TASK_SEQUENCE_PERFORM(bLocal_712, bLocal_717);
					TASK_SEQUENCE_RELEASE(bLocal_717, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_537() //Position: 0x1C280 / 115328
{
	Function_254();
	Function_275();
	Function_269();
	return;
}

void Function_538() //Position: 0x1C28F / 115343
{
	return;
}

bool Function_539() //Position: 0x1C295 / 115349
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_VOLUME_VALID((*&Local_4 + 896)[0]))
	{
		GET_OBJECT_POSITION((*&Local_4 + 664)[02], &vVar0);
		Function_523(StackVal, StackVal, vVar0);
	}
	switch (iLocal_828)
	{
		case 0x00000000:
			strcpy(&cLocal_718, "MexArmy05_obj01_1", 24);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_824 = 1;
			bVar4 = false;
			while (bVar4 <= GET_NUM_AVAILABLE_SEATS((*&Local_4 + 664)[02]))
			{
				ENABLE_VEHICLE_SEAT((*&Local_4 + 664)[02], bVar4, 0);
				bVar4++;
			}
			ENABLE_VEHICLE_SEAT((*&Local_4 + 664)[02], true, 1);
			iLocal_724 = 7;
			iLocal_807 = 4294967295;
			iLocal_828 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_VOLUME_VALID((*&Local_4 + 896)[0]))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 896)[0]))
				{
					bVar3 = false;
					while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_732))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_732, bVar3);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							DECOR_SET_BOOL(bLocal_712, "bNoInjuryEjection", true);
						}
						bVar3++;
					}
					bVar3 = false;
					while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_728))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar3);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								TASK_CLEAR(bLocal_712);
								TASK_PRIORITY_SET(bLocal_712, true);
								bLocal_713 = GET_MOUNT(bLocal_712);
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_712, 20.0f);
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_713, 20.0f);
								TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_712);
								TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_713);
								MEMORY_PREFER_RIDING(bLocal_712, true);
								SET_ACTOR_INVULNERABILITY(bLocal_713, true);
								AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_712, 2);
								AI_SET_NAV_PATHFINDING_ENABLED(bLocal_712, false);
								bVar5 = false;
								while (bVar5 <= SQUAD_GET_SIZE(Local_4.f_728))
								{
									bLocal_713 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar5);
									if (IS_ACTOR_VALID(bLocal_713))
									{
										if (bLocal_712 != bLocal_713)
										{
											AI_AVOID_IGNORE_ACTOR(bLocal_712, bLocal_713);
										}
									}
									bVar5++;
								}
							}
						}
						bVar3++;
					}
					SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.0f);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, (-20.0f - 5.0f), 1, -2.0f);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, (-20.0f - 5.0f), 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, (-20.0f - 5.0f), 1, 2.0f);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, 20.0f, 1, -2.0f);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, 20.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_728, false, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, (*&Local_4 + 664)[02], Local_4.f_1684, 20.0f, 1, 2.0f);
					DESTROY_VOLUME((*&Local_4 + 896)[0]);
				}
			}
			if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				Function_366(&iLocal_823, 11, 0, 4294967295, 4294967295);
				if (!Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 2);
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_549, 24.0f))
			{
				if (Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
				{
					if (!Function_518(Global_34573, (*&Local_4 + 664)[02], 1))
					{
						if (iLocal_807 == 4294967295)
						{
							Function_570();
							iLocal_807 = 0;
						}
						else if (iLocal_807 == 10)
						{
							if (Function_440(&iLocal_556, 10.0f))
							{
								Function_569();
								iLocal_807 = 20;
							}
						}
					}
				}
			}
			if (Function_518(Global_34573, (*&Local_4 + 664)[02], 1) && Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
			{
				Function_294();
				Function_439("MexArmy05_obj01_2", 0x40f00000, 1, 2, 0, 0, 0);
				Function_290((*&Local_4 + 1380)[0]);
				Function_365((*&Local_4 + 1380)[0]);
				bLocal_711 = Function_568(StackVal, StackVal, StackVal, StackVal, bLocal_435, "ChuparosaGateway", Function_290((*&Local_4 + 1380)[0]), Function_365((*&Local_4 + 1380)[0]), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (!IS_OBJECT_VALID(bLocal_711))
				{
					LOG_ERROR("Failed to create 'Chuparosa' gateway!");
				}
				bLocal_776 = ADD_SCRIPT_USE_CONTEXT("pass_coach_skiptodest", true, 6, false, 0, 0, 0, 4294967295, 0);
				Function_224(6, 0, 1);
				if (IS_ACTOR_VALID(bLocal_552))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
					}
				}
				strcpy(&cLocal_718, "MexArmy05_obj01_2", 24);
				iLocal_724 = 4;
				TASK_CLEAR(bLocal_552);
				TASK_PRIORITY_SET(bLocal_552, true);
				TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_552, (*&Local_4 + 664)[02], Local_4.f_1684, 7,5f, 1, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_549, true);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 4);
				TASK_CLEAR(bLocal_549);
				TASK_PRIORITY_SET(bLocal_549, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_549, Local_4.f_1684, 5, 0, 0, 1, false);
				if (iLocal_807 != 10 || iLocal_807 != 20)
				{
					Function_567();
					iLocal_807 = 0;
				}
				Function_261(&iLocal_559);
				Function_261(&iLocal_556);
				if (iLocal_546 != 8)
				{
					Function_261(&iLocal_553);
					iLocal_546 = 8;
				}
				iLocal_828 = 2;
				return 1;
			}
			break;
		
		case 0x00000003:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_549, 24.0f))
			{
				if (Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
				{
					if (!Function_518(Global_34573, (*&Local_4 + 664)[02], 1))
					{
						if (iLocal_807 == 4294967295)
						{
							Function_570();
							iLocal_807 = 0;
						}
						else if (iLocal_807 == 10)
						{
							if (Function_440(&iLocal_556, 10.0f))
							{
								Function_569();
								iLocal_807 = 20;
							}
						}
					}
				}
			}
			if (Function_518(Global_34573, (*&Local_4 + 664)[02], 1) && Function_518(bLocal_549, (*&Local_4 + 664)[02], 0))
			{
				Function_294();
				Function_439("MexArmy05_obj01_2", 0x40f00000, 1, 2, 0, 0, 0);
				Function_290((*&Local_4 + 1380)[0]);
				Function_365((*&Local_4 + 1380)[0]);
				bLocal_711 = Function_568(StackVal, StackVal, StackVal, StackVal, bLocal_435, "ChuparosaGateway", Function_290((*&Local_4 + 1380)[0]), Function_365((*&Local_4 + 1380)[0]), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (!IS_OBJECT_VALID(bLocal_711))
				{
					LOG_ERROR("Failed to create 'Chuparosa' gateway!");
				}
				bLocal_776 = ADD_SCRIPT_USE_CONTEXT("pass_coach_skiptodest", true, 6, false, 0, 0, 0, 4294967295, 0);
				Function_224(6, 0, 1);
				if (IS_ACTOR_VALID(bLocal_552))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
					}
				}
				strcpy(&cLocal_718, "MexArmy05_obj01_2", 24);
				TASK_CLEAR(bLocal_552);
				TASK_PRIORITY_SET(bLocal_552, true);
				TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_552, (*&Local_4 + 664)[02], Local_4.f_1684, 7,5f, 1, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_549, true);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 4);
				TASK_CLEAR(bLocal_549);
				TASK_PRIORITY_SET(bLocal_549, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_549, Local_4.f_1684, 5, 0, 0, 1, false);
				if (iLocal_807 != 10 || iLocal_807 != 20)
				{
					Function_567();
					iLocal_807 = 0;
				}
				Function_261(&iLocal_559);
				Function_261(&iLocal_556);
				if (iLocal_546 != 8)
				{
					Function_261(&iLocal_553);
					iLocal_546 = 8;
				}
				iLocal_828 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (!bLocal_725)
			{
				Function_566();
				if (!IS_OBJECT_VALID(bLocal_711))
				{
					Function_290((*&Local_4 + 1380)[0]);
					Function_365((*&Local_4 + 1380)[0]);
					bLocal_711 = Function_568(StackVal, StackVal, StackVal, StackVal, bLocal_435, "ChuparosaGateway", Function_290((*&Local_4 + 1380)[0]), Function_365((*&Local_4 + 1380)[0]), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (!IS_OBJECT_VALID(bLocal_711))
					{
						LOG_ERROR("Failed to create 'Chuparosa' gateway!");
					}
				}
				else if (Function_492(Global_34573, bLocal_711, 50.0f))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
					}
					SET_PLAYER_ENDLESS_READYMODE(0, 0);
					FORCE_VEHICLE_CINEMATIC_CAMERA(0);
					Function_565(Local_436, 0);
					Function_564(&iLocal_839);
					bLocal_717 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1380)[3], 2, 1, 1);
					TASK_STAND_STILL(false, 0,1f, 0, 0);
					TASK_VEHICLE_LEAVE(false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_549, bLocal_717);
					TASK_SEQUENCE_RELEASE(bLocal_717, 1);
					bVar3 = false;
					while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_728))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar3);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								bLocal_717 = TASK_SEQUENCE_OPEN();
								TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,3f, 0,6f), 0, 0);
								TASK_GO_TO_OBJECT(false, (*&Local_4 + 984)[(13 + bVar3)], 2, 0, 1);
								TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,5f, 4.0f), 0, 0);
								TASK_DISMOUNT(false, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_712, bLocal_717);
								TASK_SEQUENCE_RELEASE(bLocal_717, 1);
								AI_GOAL_SHOOT_CLEAR(bLocal_712);
							}
						}
						bVar3++;
					}
					AI_ACTOR_FORCE_SPEED(bLocal_549, 4);
					Function_261(&iLocal_559);
					Function_439("MexArmy05_obj01_4", 7,5f, 1, 2, 0, 0, 0);
					iLocal_828 = 4;
					return 1;
				}
				if (!Function_518(Global_34573, (*&Local_4 + 664)[02], 1))
				{
					Function_294();
					Function_439("MexArmy05_obj01_1", 0x40f00000, 1, 2, 0, 0, 0);
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
					}
					DESTROY_OBJECT(bLocal_711);
					Function_224(6, 1, 1);
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 5);
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_549, "MexArmy05_JumpsOutWag", "MexArmy05_JumpsOutWag", true, 1, 1, 2, 0, 0, 0, 1000, 0, 0);
					iLocal_807 = 10;
					Function_261(&iLocal_556);
					iLocal_828 = 3;
					return 1;
				}
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_776))
				{
					bLocal_725 = true;
					Function_85(17, 1, 0, 0);
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
					}
					Function_565(Local_436, 0);
					Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, "UpdateGoToChuparosa().RIDETO_CHUPAROSA");
					return 1;
				}
				Function_542();
			}
			else
			{
				Function_540();
			}
			break;
		
		case 0x00000004:
			if ((GATEWAY_UPDATE(bLocal_711) || GET_TASK_STATUS(bLocal_549, 0) != 0) || !IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				Function_564(&iLocal_839);
				Function_565(Local_436, 0);
				STOP_VEHICLE((*&Local_4 + 664)[02]);
				iLocal_807 = 4294967295;
				iLocal_828 = 5;
				return 1;
			}
			return 1;
			break;
		
		case 0x00000005:
			return 0;
			break;
	}
	return 1;
}

void Function_540() //Position: 0x1CD3B / 118075
{
	bool bVar0;
	
	if (HUD_IS_FADED())
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			ABORT_SCRIPTED_CONVERSATION(0);
		}
		if (!iLocal_749)
		{
			if (Function_519())
			{
				Function_161(114689);
				if (!SQUAD_IS_VALID(Local_4.f_740))
				{
					Function_252();
				}
				Function_246(fLocal_727);
				fLocal_727 = 0.0f;
				if (IS_OBJECT_VALID(Local_4.f_1680))
				{
					DESTROY_OBJECT(Local_4.f_1680);
				}
				if (IS_OBJECT_VALID(Local_4.f_1684))
				{
					DESTROY_OBJECT(Local_4.f_1684);
				}
				if (IS_OBJECT_VALID(Local_4.f_1688))
				{
					DESTROY_OBJECT(Local_4.f_1688);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_776))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_776);
				}
				Function_224(6, 0, 1);
				Function_294();
				if (IS_ACTOR_ALIVE(bLocal_552))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_552)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_552));
					}
				}
				bLocal_547 = Global_30693[0];
				if (!Function_268(bLocal_547))
				{
					Function_266(&Local_436);
				}
				if (!Function_518(Global_34573, (*&Local_4 + 664)[02], 1))
				{
					SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_4 + 664)[02], true);
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_549);
				Function_517(1, 1, 1);
				Function_264((*&Local_4 + 664)[02], (*&Local_4 + 984)[5], 0, 1, 1, 1);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					if (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								Function_515(bLocal_712, (*&Local_4 + 984)[(7 + bVar0)], 1, 1, 1);
							}
						}
					}
					bVar0++;
				}
				TASK_CLEAR(bLocal_549);
				TASK_PRIORITY_SET(bLocal_549, true);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_549, 2);
				SQUAD_GOALS_CLEAR(Local_4.f_728);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
				{
					if (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
					{
						bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
						if (IS_ACTOR_VALID(bLocal_712))
						{
							if (IS_ACTOR_ALIVE(bLocal_712))
							{
								TASK_CLEAR(bLocal_712);
								TASK_PRIORITY_SET(bLocal_712, true);
								TASK_STAND_STILL(bLocal_712, -1.0f, 0, 0);
							}
						}
					}
					bVar0++;
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				iLocal_749 = 1;
			}
		}
		else if (STREAMING_IS_WORLD_LOADED() && Function_268(bLocal_547))
		{
			if (iLocal_829 < 1 && iLocal_829 > 15)
			{
				Function_541();
			}
			Function_322(1.0f, "SkipTo_Stage_Two()");
			bLocal_725 = false;
		}
	}
	return;
}

void Function_541() //Position: 0x1CF6B / 118635
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SkipsJourney", "MexArmy05_SkipsJourney", false, 1, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x1CFC0 / 118720
{
	switch (iLocal_829)
	{
		case 0x00000000:
			if (Function_440(&iLocal_559, 5.0f))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_549, 24.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!Function_267(&Local_436))
						{
							Function_563();
						}
						else
						{
							Function_562();
						}
						Function_261(&iLocal_553);
						iLocal_839 = 0;
						iLocal_829 = 1;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (Function_440(&iLocal_553, 5.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_553(&iLocal_839))
					{
						bLocal_740 = false;
						while (bLocal_740 <= SQUAD_GET_SIZE(Local_4.f_728))
						{
							bLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bLocal_740);
							if (IS_ACTOR_VALID(bLocal_712))
							{
								if (IS_ACTOR_ALIVE(bLocal_712))
								{
									AI_SET_NAV_PATHFINDING_ENABLED(bLocal_712, true);
								}
							}
							bLocal_740++;
						}
						TASK_DRAW_HOLSTER_WEAPON(Global_34573, 1);
						Function_552();
						Function_261(&iLocal_553);
						iLocal_829 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_440(&iLocal_553, 5.0f))
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_551();
				Function_261(&iLocal_553);
				iLocal_829 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_420(&iLocal_553, 5.0f))
			{
				Function_550();
			}
			if (Function_553(&iLocal_839))
			{
				if (iLocal_782 >= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_LosesChallenge", "MexArmy05_LosesChallenge", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else if (iLocal_782 <= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_WinsChallenge", "MexArmy05_WinsChallenge", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_TiesChallenge", "MexArmy05_TiesChallenge", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_261(&iLocal_553);
				iLocal_829 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_440(&iLocal_553, 8.0f))
			{
				if (Function_553(&iLocal_839))
				{
					Function_261(&iLocal_553);
					iLocal_829 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_440(&iLocal_553, 10.0f))
			{
				Function_261(&iLocal_553);
				iLocal_839 = 0;
				iLocal_829 = 6;
			}
			break;
		
		case 0x00000006:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				bLocal_757 = Function_549();
				if (IS_ACTOR_VALID(bLocal_757))
				{
					if (Function_553(&iLocal_839))
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						TASK_DRAW_HOLSTER_WEAPON(Global_34573, 1);
						Function_548();
						Function_261(&iLocal_553);
						iLocal_829 = 7;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_547();
				Function_261(&iLocal_553);
				iLocal_829 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_420(&iLocal_553, 5.0f))
			{
				Function_546();
			}
			if (Function_553(&iLocal_839))
			{
				if (iLocal_782 >= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_LosesChallenge2", "MexArmy05_LosesChallenge2", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else if (iLocal_782 <= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_WinsChallenge2", "MexArmy05_WinsChallenge2", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_TiesChallenge2", "MexArmy05_TiesChallenge2", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_261(&iLocal_553);
				iLocal_829 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_440(&iLocal_553, 8.0f))
			{
				if (Function_553(&iLocal_839))
				{
					Function_261(&iLocal_553);
					iLocal_829 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_440(&iLocal_553, 10.0f))
			{
				Function_261(&iLocal_553);
				iLocal_839 = 0;
				iLocal_829 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				bLocal_757 = Function_549();
				if (IS_ACTOR_VALID(bLocal_757))
				{
					if (Function_553(&iLocal_839))
					{
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
						TASK_DRAW_HOLSTER_WEAPON(Global_34573, 1);
						Function_545();
						Function_261(&iLocal_553);
						iLocal_829 = 12;
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_440(&iLocal_553, 5.0f))
			{
				Function_544();
				Function_261(&iLocal_553);
				iLocal_829 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_420(&iLocal_553, 5.0f))
			{
				Function_543();
			}
			if (Function_553(&iLocal_839))
			{
				if (iLocal_782 >= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_LosesChallenge3", "MexArmy05_LosesChallenge3", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else if (iLocal_782 <= iLocal_784)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_WinsChallenge3", "MexArmy05_WinsChallenge3", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_757, "MexArmy05_TiesChallenge3", "MexArmy05_TiesChallenge3", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_261(&iLocal_553);
				iLocal_829 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_440(&iLocal_553, 8.0f))
			{
				if (Function_553(&iLocal_839))
				{
					Function_261(&iLocal_553);
					iLocal_829 = 15;
				}
			}
			break;
		
		case 0x0000000F:
			break;
	}
	return;
}

void Function_543() //Position: 0x1D5B8 / 120248
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AA", "MexArmy05_SharpShootBant_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v3_AB", "MexArmy05_SharpShootBant_v3_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AC", "MexArmy05_SharpShootBant_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v3_AD", "MexArmy05_SharpShootBant_v3_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AE", "MexArmy05_SharpShootBant_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v3_AF", "MexArmy05_SharpShootBant_v3_AF", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AG", "MexArmy05_SharpShootBant_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v3_AH", "MexArmy05_SharpShootBant_v3_AH", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AI", "MexArmy05_SharpShootBant_v3_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v3_AJ", "MexArmy05_SharpShootBant_v3_AJ", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v3_AK", "MexArmy05_SharpShootBant_v3_AK", false, 1, 0, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_544() //Position: 0x1D90B / 121099
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "MexArmy05_AcceptsChallenge3", "MexArmy05_AcceptsChallenge3", false, 2, 1, 0, 1);
		Function_423(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_545() //Position: 0x1D96B / 121195
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_3rdSoldierUp", "MexArmy05_3rdSoldierUp", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x1D9C0 / 121280
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AA", "MexArmy05_SharpShootBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v2_AB", "MexArmy05_SharpShootBant_v2_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AC", "MexArmy05_SharpShootBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v2_AD", "MexArmy05_SharpShootBant_v2_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AE1", "MexArmy05_SharpShootBant_v2_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AE2", "MexArmy05_SharpShootBant_v2_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v2_AF", "MexArmy05_SharpShootBant_v2_AF", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AG1", "MexArmy05_SharpShootBant_v2_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AG2", "MexArmy05_SharpShootBant_v2_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v2_AH", "MexArmy05_SharpShootBant_v2_AH", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AI", "MexArmy05_SharpShootBant_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AJ1", "MexArmy05_SharpShootBant_v2_AJ1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v2_AJ2", "MexArmy05_SharpShootBant_v2_AJ2", false, 1, 0, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1DDB5 / 122293
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy05_AcceptsChallenge2", "MexArmy05_AcceptsChallenge2", false, 2, 1, 0, 1);
		Function_423(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x1DE15 / 122389
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_2ndSoldierUp", "MexArmy05_2ndSoldierUp", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_549() //Position: 0x1DE6A / 122474
{
	var uVar0;
	
	switch (iLocal_829)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return (*&Local_4 + 676)[02];
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			return (*&Local_4 + 676)[12];
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			return (*&Local_4 + 676)[22];
			break;
	}
	return uVar0;
}

void Function_550() //Position: 0x1DEFE / 122622
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AA", "MexArmy05_SharpShootBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v1_AB", "MexArmy05_SharpShootBant_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AC", "MexArmy05_SharpShootBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v1_AD", "MexArmy05_SharpShootBant_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AE", "MexArmy05_SharpShootBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SharpShootBant_v1_AF", "MexArmy05_SharpShootBant_v1_AF", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AG1", "MexArmy05_SharpShootBant_v1_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AG2", "MexArmy05_SharpShootBant_v1_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AH1", "MexArmy05_SharpShootBant_v1_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AH2", "MexArmy05_SharpShootBant_v1_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SharpShootBant_v1_AH3", "MexArmy05_SharpShootBant_v1_AH3", false, 1, 0, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_551() //Position: 0x1E25B / 123483
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "MexArmy05_AcceptsChallenge", "MexArmy05_AcceptsChallenge", false, 2, 1, 0, 1);
		Function_423(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_552() //Position: 0x1E2B9 / 123577
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_1stSoldierUp", "MexArmy05_1stSoldierUp", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_553(int iParam0) //Position: 0x1E30E / 123662
{
	bool bVar0;
	vector3 vVar1;
	
	switch (*iParam0)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(bLocal_757))
			{
				bLocal_757 = Function_549();
			}
			if (IS_ACTOR_VALID(bLocal_757))
			{
				if (IS_ACTOR_ALIVE(bLocal_757))
				{
					Function_561(&bLocal_757);
					vVar1 = { 4.0f, 0.0f, -10.0f };
					TASK_FOLLOW_OBJECT(bLocal_757, (*&Local_4 + 664)[02], &vVar1, 0, 0, 0, 0, 0, 0, 1);
					AI_RIDING_SET_ENABLED(bLocal_757, 0);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_757);
					GIVE_WEAPON_TO_ACTOR(bLocal_757, 42, false, 1, 1);
					ACTOR_PUT_WEAPON_IN_HAND(bLocal_757, 42, 1);
					*iParam0 = 1;
					iLocal_781 = 0;
					iLocal_782 = 0;
					iLocal_783 = 0;
					iLocal_784 = 0;
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_757, 20000.0f);
					STREAMING_REQUEST_ACTOR(1128, true, false);
					SET_ACTOR_VISION_MAX_RANGE(bLocal_757, 200.0f, 1);
					AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bLocal_757, 200.0f);
					AI_PERCEPTION_SET_VISUAL_ID_TIME(bLocal_757, 0,1f);
					AI_SET_WEAPON_MAX_RANGE(bLocal_757, 200.0f);
					AI_SET_SHOTS_PER_BURST(bLocal_757, 1);
					COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_757, 3.0f, 3.0f);
					return 1;
				}
				bLocal_757 = Function_549();
			}
			break;
		
		case 0x00000001:
			Function_559();
			if (Function_558(&iLocal_781, &iLocal_782, &uLocal_785, &bLocal_797, &bLocal_798, 5) && Function_558(&iLocal_783, &iLocal_784, &iLocal_788, &bLocal_799, &bLocal_800, 5))
			{
				*iParam0 = 2;
				return 1;
			}
			if (iLocal_783 <= 5)
			{
				if (!Function_328(&iLocal_791))
				{
					Function_261(&iLocal_791);
				}
				if (Function_440(&iLocal_791, 2.0f))
				{
					bVar0 = Function_556("ShootingChallengeTargets", bLocal_435);
					if (SQUAD_IS_VALID(bVar0))
					{
						if (SQUAD_GET_SIZE(bVar0) >= 0)
						{
							bLocal_758 = Function_555(bVar0, bLocal_757, 0);
							if (IS_ACTOR_VALID(bLocal_758))
							{
								if (IS_ACTOR_ALIVE(bLocal_758))
								{
									Function_261(&iLocal_791);
									AI_GOAL_SHOOT_CLEAR(bLocal_757);
									AI_GOAL_SHOOT_AT_OBJECT(bLocal_757, bLocal_758);
									MEMORY_REPORT_POSITION_AUTO(bLocal_757, bLocal_758, true);
									AI_SET_RANGE_ACCURACY_MODIFIER(bLocal_757, bLocal_758, 2500.0f);
								}
							}
						}
					}
				}
			}
			else
			{
				AI_GOAL_SHOOT_CLEAR(bLocal_757);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_757, 1);
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_554(&bLocal_757);
			if (iLocal_782 >= iLocal_784)
			{
				Function_113(25, 1);
			}
			else if (iLocal_782 <= iLocal_784)
			{
			}
			AI_GOAL_SHOOT_CLEAR(bLocal_757);
			TASK_CLEAR(bLocal_757);
			STREAMING_EVICT_ACTOR(1128, 4294967295);
			*iParam0 = 3;
			return 1;
			break;
	}
	return 0;
}

void Function_554(int iParam0) //Position: 0x1E533 / 124211
{
	if (IS_OBJECT_VALID(bLocal_797))
	{
		DESTROY_OBJECT(bLocal_797);
	}
	if (IS_OBJECT_VALID(bLocal_798))
	{
		DESTROY_OBJECT(bLocal_798);
	}
	if (IS_ACTOR_VALID(*iParam0))
	{
		if (IS_ACTOR_ALIVE(*iParam0))
		{
			STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(*iParam0);
		}
	}
	if (IS_OBJECT_VALID(bLocal_799))
	{
		DESTROY_OBJECT(bLocal_799);
	}
	if (IS_OBJECT_VALID(bLocal_800))
	{
		DESTROY_OBJECT(bLocal_800);
	}
	return;
}

var Function_555(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1E58D / 124301
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(iVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4)))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_426(bVar4, bParam1);
			if (fVar3 > fVar2 || bVar1 != 4294967295)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return bVar4;
	}
	return "";
}

var Function_556(bool bParam0, bool bParam1) //Position: 0x1E629 / 124457
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("FIND_NAMED_SQUAD_IN_LAYOUT: Invalid layoutref passed in.");
		return bVar0;
	}
	bVar2 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar2, 25);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3) && !bVar1)
	{
		bVar4 = GET_OBJECT_NAME(bVar3);
		if (STRING_CONTAINS_STRING(bVar4, bParam0) || Function_557(bParam0, bVar4))
		{
			bVar1 = true;
			bVar0 = GET_SQUAD_FROM_OBJECT(bVar3);
		}
		else
		{
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

int Function_557(char* cParam0, bool bParam1) //Position: 0x1E6D1 / 124625
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, bParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

int Function_558(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x1E6FC / 124668
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Function_328(iParam2) && *iParam0 <= iParam5)
	{
		return 1;
	}
	if (IS_OBJECT_VALID(*bParam3))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(*bParam3))
		{
			if (*iParam0 <= iParam5)
			{
				Function_261(iParam2);
				*iParam0++;
			}
			else if (Function_328(iParam2))
			{
				Function_421(iParam2);
			}
			EVENT_TRAP_CLEAR_EVENTS(*bParam3);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*bParam3);
		}
	}
	if (Function_328(iParam2))
	{
		if (Function_440(iParam2, 0,1f))
		{
			Function_421(iParam2);
		}
		else if (IS_OBJECT_VALID(*bParam4))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(*bParam4))
			{
				bVar0 = CREATE_OBJECT_ITERATOR(Local_4);
				ITERATE_IN_EVENT_TRAP(bVar0, *bParam4);
				bVar1 = START_OBJECT_ITERATOR(bVar0);
				bVar3 = GET_EVENT_FROM_OBJECT(bVar1);
				if (IS_EVENT_VALID(bVar3))
				{
					bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar3);
					if (IS_OBJECT_VALID(bVar2))
					{
						bVar4 = GET_ACTOR_FROM_OBJECT(bVar2);
						if (IS_ACTOR_VALID(bVar4))
						{
							if (!IS_ACTOR_HUMAN(bVar4))
							{
								*iParam1++;
								PRINTSTRING("Total hits = ");
								PRINTINT(*iParam1);
								PRINTNL();
							}
						}
					}
				}
				DESTROY_ITERATOR(bVar0);
				Function_421(iParam2);
			}
			EVENT_TRAP_CLEAR_EVENTS(*bParam4);
			EVENT_TRAP_CLEAR_TRAP_FLAG(*bParam4);
		}
	}
	return 0;
}

void Function_559() //Position: 0x1E811 / 124945
{
	bool bVar0;
	var uVar1;
	vector3 vVar4;
	var uVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	bVar0 = Function_556("ShootingChallengeTargets", bLocal_435);
	if (!SQUAD_IS_VALID(bVar0))
	{
		bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_435, "ShootingChallengeTargets"));
	}
	if (SQUAD_GET_SIZE(bVar0) <= 4)
	{
		if (IS_POPSET_VALID(Global_30750[7]))
		{
			if (STREAMING_IS_ACTOR_LOADED(1128, 4294967295))
			{
				bVar11 = 1128;
				if (Function_560())
				{
					if (GET_OBJECT_RELATIVE_POSITION(Global_34573, 15.0f, 0.0f, -75.0f, &uVar1))
					{
						if (FIND_GROUND_INTERSECTION(&uVar1, 25.0f, &vVar4, &uVar7))
						{
							if (!WOULD_ACTOR_BE_VISIBLE(bVar11, &vVar4, -1.0f))
							{
								bVar12 = CREATE_ACTOR_IN_LAYOUT(bLocal_435, Function_53(), bVar11, vVar4, 0.0f, 0.0f, 0.0f);
								if (IS_ACTOR_VALID(bVar12))
								{
									SQUAD_JOIN(bVar12, bVar0);
									GET_OBJECT_RELATIVE_POSITION(Global_34573, -35.0f, 25.0f, -75.0f, &uVar1);
									bVar10 = TASK_SEQUENCE_OPEN();
									TASK_BIRD_FLY_NEAR_COORD(0, &uVar1, 5.0f, -1.0f, 1106263409);
									TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar12, bVar10);
									TASK_SEQUENCE_RELEASE(bVar10, 1);
									ACTOR_CAN_BE_HARDLOCKED(bVar12);
									SET_ACTOR_HARDLOCK_BIAS(bVar12, -2000.0f, 0);
								}
							}
							else
							{
								GET_OBJECT_RELATIVE_POSITION(Global_34573, -15.0f, 0.0f, -75.0f, &uVar1);
								if (FIND_GROUND_INTERSECTION(&uVar1, 25.0f, &vVar4, &uVar7))
								{
									if (!WOULD_ACTOR_BE_VISIBLE(bVar11, &vVar4, -1.0f))
									{
										bVar12 = CREATE_ACTOR_IN_LAYOUT(bLocal_435, Function_53(), bVar11, vVar4, 0.0f, 0.0f, 0.0f);
										if (IS_ACTOR_VALID(bVar12))
										{
											SQUAD_JOIN(bVar12, bVar0);
											GET_OBJECT_RELATIVE_POSITION(Global_34573, 35.0f, 25.0f, -75.0f, &uVar1);
											bVar10 = TASK_SEQUENCE_OPEN();
											TASK_BIRD_FLY_NEAR_COORD(0, &uVar1, 5.0f, -1.0f, 1106263409);
											TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
											TASK_SEQUENCE_CLOSE();
											TASK_SEQUENCE_PERFORM(bVar12, bVar10);
											TASK_SEQUENCE_RELEASE(bVar10, 1);
											ACTOR_CAN_BE_HARDLOCKED(bVar12);
											SET_ACTOR_HARDLOCK_BIAS(bVar12, -2000.0f, 0);
										}
									}
								}
							}
						}
					}
				}
				else if (GET_OBJECT_RELATIVE_POSITION(Global_34573, -15.0f, 0.0f, -75.0f, &uVar1))
				{
					if (FIND_GROUND_INTERSECTION(&uVar1, 25.0f, &vVar4, &uVar7))
					{
						if (!WOULD_ACTOR_BE_VISIBLE(bVar11, &vVar4, -1.0f))
						{
							bVar12 = CREATE_ACTOR_IN_LAYOUT(bLocal_435, Function_53(), bVar11, vVar4, 0.0f, 0.0f, 0.0f);
							if (IS_ACTOR_VALID(bVar12))
							{
								SQUAD_JOIN(bVar12, bVar0);
								GET_OBJECT_RELATIVE_POSITION(Global_34573, 35.0f, 25.0f, -75.0f, &uVar1);
								bVar10 = TASK_SEQUENCE_OPEN();
								TASK_BIRD_FLY_NEAR_COORD(0, &uVar1, 5.0f, -1.0f, 1106263409);
								TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bVar12, bVar10);
								TASK_SEQUENCE_RELEASE(bVar10, 1);
								ACTOR_CAN_BE_HARDLOCKED(bVar12);
								SET_ACTOR_HARDLOCK_BIAS(bVar12, -2000.0f, 0);
							}
						}
						else
						{
							GET_OBJECT_RELATIVE_POSITION(Global_34573, 15.0f, 0.0f, -75.0f, &uVar1);
							if (FIND_GROUND_INTERSECTION(&uVar1, 25.0f, &vVar4, &uVar7))
							{
								if (!WOULD_ACTOR_BE_VISIBLE(bVar11, &vVar4, -1.0f))
								{
									bVar12 = CREATE_ACTOR_IN_LAYOUT(bLocal_435, Function_53(), bVar11, vVar4, 0.0f, 0.0f, 0.0f);
									if (IS_ACTOR_VALID(bVar12))
									{
										SQUAD_JOIN(bVar12, bVar0);
										GET_OBJECT_RELATIVE_POSITION(Global_34573, -35.0f, 25.0f, -75.0f, &uVar1);
										bVar10 = TASK_SEQUENCE_OPEN();
										TASK_BIRD_FLY_NEAR_COORD(0, &uVar1, 5.0f, -1.0f, 1106263409);
										TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar12, bVar10);
										TASK_SEQUENCE_RELEASE(bVar10, 1);
										ACTOR_CAN_BE_HARDLOCKED(bVar12);
										SET_ACTOR_HARDLOCK_BIAS(bVar12, -2000.0f, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	bVar10 = false;
	while (bVar10 <= SQUAD_GET_SIZE(bVar0))
	{
		bVar12 = SQUAD_GET_ACTOR_BY_INDEX(bVar0, bVar10);
		if ((GET_TASK_STATUS(bVar12, 81) != 4 || GET_TASK_STATUS(bVar12, 25) != 1) || !ACTORS_IN_RANGE(Global_34573, bVar12, 100.0f))
		{
			if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar12, 1.0f, 200.0f, 1, 1, 0))
			{
				DESTROY_ACTOR(bVar12);
			}
		}
		bVar10++;
	}
	return;
}

bool Function_560() //Position: 0x1EBB6 / 125878
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_561(var uParam0) //Position: 0x1EBC9 / 125897
{
	if (IS_OBJECT_VALID(bLocal_797))
	{
		DESTROY_OBJECT(bLocal_797);
	}
	bLocal_797 = CREATE_EVENT_TRAP(Function_53(), 6, Global_34573);
	EVENT_TRAP_ON_PERPETRATOR(bLocal_797, Global_34573);
	EVENT_TRAP_STORE_EVENTS(bLocal_797, 1);
	if (IS_OBJECT_VALID(bLocal_798))
	{
		DESTROY_OBJECT(bLocal_798);
	}
	bLocal_798 = CREATE_EVENT_TRAP(Function_53(), 5, Global_34573);
	EVENT_TRAP_ON_PERPETRATOR(bLocal_798, Global_34573);
	EVENT_TRAP_STORE_EVENTS(bLocal_798, 1);
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(*uParam0);
		}
	}
	if (IS_OBJECT_VALID(bLocal_799))
	{
		DESTROY_OBJECT(bLocal_799);
	}
	bLocal_799 = CREATE_EVENT_TRAP(Function_53(), 6, *uParam0);
	EVENT_TRAP_ON_PERPETRATOR(bLocal_799, *uParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_799, 1);
	if (IS_OBJECT_VALID(bLocal_800))
	{
		DESTROY_OBJECT(bLocal_800);
	}
	bLocal_800 = CREATE_EVENT_TRAP(Function_53(), 5, *uParam0);
	EVENT_TRAP_ON_PERPETRATOR(bLocal_800, *uParam0);
	EVENT_TRAP_STORE_EVENTS(bLocal_800, 1);
	return;
}

void Function_562() //Position: 0x1EC97 / 126103
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v2_AA1", "MexArmy05_SantaSetOffChup_v2_AA1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v2_AA2", "MexArmy05_SantaSetOffChup_v2_AA2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v2_AA3", "MexArmy05_SantaSetOffChup_v2_AA3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v2_AB", "MexArmy05_SantaSetOffChup_v2_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v2_AC1", "MexArmy05_SantaSetOffChup_v2_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v2_AC2", "MexArmy05_SantaSetOffChup_v2_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v2_AD", "MexArmy05_SantaSetOffChup_v2_AD", 2, 1, 0, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x1EED6 / 126678
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AA", "MexArmy05_SantaSetOffChup_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v1_AB", "MexArmy05_SantaSetOffChup_v1_AB", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AC", "MexArmy05_SantaSetOffChup_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v1_AD", "MexArmy05_SantaSetOffChup_v1_AD", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AE1", "MexArmy05_SantaSetOffChup_v1_AE1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AE2", "MexArmy05_SantaSetOffChup_v1_AE2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v1_AF", "MexArmy05_SantaSetOffChup_v1_AF", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AG1", "MexArmy05_SantaSetOffChup_v1_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AG2", "MexArmy05_SantaSetOffChup_v1_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AG3", "MexArmy05_SantaSetOffChup_v1_AG3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AH1", "MexArmy05_SantaSetOffChup_v1_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AH2", "MexArmy05_SantaSetOffChup_v1_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AH3", "MexArmy05_SantaSetOffChup_v1_AH3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy05_SantaSetOffChup_v1_AI", "MexArmy05_SantaSetOffChup_v1_AI", 2, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AJ1", "MexArmy05_SantaSetOffChup_v1_AJ1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaSetOffChup_v1_AJ2", "MexArmy05_SantaSetOffChup_v1_AJ2", false, 1, 0, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_564(int iParam0) //Position: 0x1F3D4 / 127956
{
	if (*iParam0 <= 2)
	{
		*iParam0 = 2;
	}
	return 1;
}

void Function_565(int iParam0, int iParam1) //Position: 0x1F3E6 / 127974
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_566() //Position: 0x1F401 / 128001
{
	if (iLocal_824)
	{
		if (IS_PLAYER_WEAPON_ZOOMED(Global_34573) || IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_328(&iLocal_825))
			{
				Function_421(&iLocal_825);
			}
			iLocal_824 = 0;
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
		}
	}
	else if (!IS_PLAYER_WEAPON_ZOOMED(Global_34573) && !IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_328(&iLocal_825))
		{
			if (Function_326(&iLocal_825) < 3.0f)
			{
				iLocal_824 = 1;
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				Function_421(&iLocal_825);
			}
		}
		else
		{
			Function_261(&iLocal_825);
		}
	}
	else if (Function_328(&iLocal_825))
	{
		Function_421(&iLocal_825);
	}
	return;
}

void Function_567() //Position: 0x1F486 / 128134
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_JonBakOnWag", "MexArmy05_JonBakOnWag", false, 1, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_568(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x1F4D9 / 128217
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_569() //Position: 0x1F5A4 / 128420
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaWaitJonBakWag", "MexArmy05_SantaWaitJonBakWag", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_570() //Position: 0x1F605 / 128517
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy05_SantaWaitJonGetWag", "MexArmy05_SantaWaitJonGetWag", false, 2, 1, 0, 1);
		Function_423(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571() //Position: 0x1F666 / 128614
{
	switch (iLocal_546)
	{
		case 0x00000006:
			Function_595(&Local_436, 1);
			bLocal_435 = CREATE_LAYOUT(Function_53());
			Function_594();
			Function_129(&(Global_29008[Global_30693[0]]), 384);
			Function_593("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_823 = 0;
			iLocal_546 = 7;
			break;
		
		case 0x00000007:
			if (Function_585())
			{
				if (!Function_267(&Local_436))
				{
					iLocal_546 = 8;
				}
				else
				{
					iLocal_546 = 10;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_329("$/cutscene/MEXICAN_ARMY_05/MEXICAN_ARMY_05", &iLocal_538, &Local_436, &bLocal_545, 74889, 71505, 70359, 64364, 62721, 62527, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_546 = 9;
			}
			break;
		
		case 0x0000000A:
			if (!Function_386(0))
			{
			}
			else if (!IS_ACTOR_VALID(bLocal_549))
			{
				bLocal_549 = Function_378(6, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if (!Function_372())
			{
			}
			else if (!Function_398(&bLocal_443))
			{
			}
			else
			{
				iLocal_546 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_548 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_224(6, 1, 1);
			SET_CRIPPLE_ENABLE(bLocal_549, 0);
			SET_ACTOR_FACTION(bLocal_549, 20);
			TASK_PRIORITY_SET(bLocal_549, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_549, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_549, 50.0f);
			SET_ACTOR_HEALTH(bLocal_549, GET_ACTOR_MAX_HEALTH(bLocal_549));
			SET_ACTOR_INVULNERABILITY(bLocal_550, true);
			TELEPORT_ACTOR(bLocal_550, &vLocal_816, 1, 1, 1);
			SET_ACTOR_INVULNERABILITY(bLocal_551, true);
			TELEPORT_ACTOR(bLocal_551, &vLocal_816, 1, 1, 1);
			SET_WEAPONENUM_LOCKED(23, 0);
			RESET_ACTOR_GAITS(bLocal_552, 0);
			TASK_PRIORITY_SET(bLocal_552, true);
			TASK_STAND_STILL(bLocal_552, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_552, 50.0f);
			SET_ACTOR_HEALTH(bLocal_552, GET_ACTOR_MAX_HEALTH(bLocal_552));
			SET_ALLOW_RIDE_BY_AI(bLocal_552, 0);
			Function_576();
			Function_575(&iLocal_553);
			Function_575(&iLocal_556);
			Function_575(&iLocal_559);
			bLocal_545 = false;
			iLocal_546 = 0;
			Function_573(&Local_436, &bLocal_545, &iLocal_546);
			if (bLocal_545 != 3 && Function_452())
			{
				bLocal_545 = 4;
			}
			Function_572(StackVal, StackVal, StackVal, StackVal, StackVal, Function_579(), Local_436);
			switch (bLocal_545)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_572(struct<25> Param0) //Position: 0x1F8DD / 129245
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_545 = false;
			break;
		
		case 0x00000002:
			bLocal_545 = 2;
			break;
		
		case 0x00000003:
			bLocal_545 = 2;
			break;
		
		case 0x00000004:
			bLocal_545 = 101;
			break;
	}
}

void Function_573(int iParam0, var uParam1, int iParam2) //Position: 0x1F923 / 129315
{
	if (Function_267(iParam0))
	{
		*uParam1 = Function_499(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_574();
	}
	return;
}

void Function_574() //Position: 0x1F957 / 129367
{
	if (Global_34165.f_112 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
		PRINTNL();
	}
	return;
}

void Function_575(int iParam0) //Position: 0x1F9A8 / 129448
{
	if (!Function_328(iParam0))
	{
		Function_262(iParam0, 0.0f);
	}
	return;
}

void Function_576() //Position: 0x1F9BD / 129469
{
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1664), false);
	Function_577(&uLocal_578, bLocal_435);
	Function_230(&(Local_618[017]), bLocal_549, "Henchman", 1, 0x5f5e100, 1);
	return;
}

int Function_577(var uParam0, bool bParam1) //Position: 0x1F9F8 / 129528
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_578(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_578(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_578(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_578(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_578(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x200C9 / 131273
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	*iParam0 = CREATE_EVENT_TRAP(bParam2, iParam3, bParam1);
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(*iParam0, 1);
	iParam0->f_4 = iParam3;
	iParam0->f_8 = 0;
	Function_76(iParam0 + 8, iParam4);
	return 1;
}

var Function_579() //Position: 0x2018C / 131468
{
	var uVar0;
	
	Function_584(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("MexArmy05_layout");
	Local_4.f_804 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 768)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -4358,198f, 45,83279f, 4347,65f, 0.0f, 0.0f, 0.0f, 38,38605f, 15.0f, 23,214f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[0]);
	(*&Local_4 + 768)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2761,152f, 36,05588f, 4272,286f, 0.0f, 15.0f, 0.0f, 35.0f, 10.0f, 25.0f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[1]);
	(*&Local_4 + 768)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StreamCutscene03Vol", 2, -2680,412f, 32,88824f, 4272,541f, 0.0f, 44,79451f, 0.0f, 18,89951f, 6,8524f, 23,45358f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[2]);
	(*&Local_4 + 768)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03aVol", 2, -2663,863f, 33,91087f, 4275,911f, 0.0f, 44,79451f, 0.0f, 26,45846f, 6,8524f, 26,28844f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[3]);
	(*&Local_4 + 768)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03bVol", 2, -2683,96f, 33,91087f, 4254,758f, 0.0f, 0.0f, 0.0f, 21,05999f, 6,8524f, 22,37768f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[4]);
	(*&Local_4 + 768)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -2707,594f, 37,86937f, 4251,423f, 0.0f, 31,80815f, 0.0f, 32.0f, 13,667f, 26,35474f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[5]);
	(*&Local_4 + 768)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05Vol", 2, -2679,229f, 33,05297f, 4254,275f, 0.0f, -253,107f, 0.0f, 34,84369f, 7,352834f, 23,57888f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[6]);
	(*&Local_4 + 768)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneEndVol", 2, -2666,953f, 34,94742f, 4246,544f, 0.0f, -328,5638f, 0.0f, 48,2231f, 7,352834f, 26,44645f);
	ADD_TO_VOLUME_SET(Local_4.f_804, (*&Local_4 + 768)[7]);
	Local_4.f_828 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "PreInitVol_set");
	(*&Local_4 + 808)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit02Vol", 2, -2764.0f, 32,12549f, 4272f, 0.0f, 0.0f, 0.0f, 27,22138f, 37,32679f, 35,13795f);
	ADD_TO_VOLUME_SET(Local_4.f_828, (*&Local_4 + 808)[0]);
	(*&Local_4 + 808)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit03Vol", 2, -2828.0f, 30.0f, 4354.0f, 0.0f, 0.0f, 0.0f, 8.0f, 100.0f, 512.0f);
	ADD_TO_VOLUME_SET(Local_4.f_828, (*&Local_4 + 808)[1]);
	(*&Local_4 + 808)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit04Vol", 2, -2828.0f, 30.0f, 4354.0f, 0.0f, 0.0f, 0.0f, 8.0f, 100.0f, 512.0f);
	ADD_TO_VOLUME_SET(Local_4.f_828, (*&Local_4 + 808)[2]);
	(*&Local_4 + 808)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PreInit05Vol", 2, -2828.0f, 30.0f, 4354.0f, 0.0f, 0.0f, 0.0f, 8.0f, 100.0f, 512.0f);
	ADD_TO_VOLUME_SET(Local_4.f_828, (*&Local_4 + 808)[3]);
	Local_4.f_892 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ActionVol_set");
	(*&Local_4 + 832)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MexArmySoldierWanderVol", 2, -2749,722f, 36,05588f, 4266,645f, 0.0f, 15.0f, 0.0f, 10.0f, 10.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[0]);
	(*&Local_4 + 832)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallLower", 2, -2658,822f, 32,61111f, 4255,709f, 0.0f, -10,42627f, 0.0f, 26,06491f, 2,614239f, 17,75332f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[1]);
	(*&Local_4 + 832)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallInner", 2, -2656,165f, 38,55117f, 4256,198f, 0.0f, -10,42627f, 0.0f, 16,19585f, 14,40545f, 10,95343f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[2]);
	(*&Local_4 + 832)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallUpper", 2, -2658,184f, 38,24548f, 4254,721f, 0.0f, -10,42627f, 0.0f, 26,06491f, 4,245365f, 21,93224f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[3]);
	(*&Local_4 + 832)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Station", 2, -2687,379f, 34,79777f, 4225,306f, 0.0f, -11,31435f, 0.0f, 26,06491f, 6,103529f, 17,75332f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[4]);
	(*&Local_4 + 832)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cantina", 2, -2687,863f, 32,24561f, 4283,114f, 0.0f, -1,220891f, 0.0f, 32,80858f, 18,9649f, 19,20368f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[5]);
	(*&Local_4 + 832)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ReinforcementVol", 2, -2764,318f, 34,79777f, 4270,779f, 0.0f, 15,47377f, 0.0f, 19,19139f, 11,65572f, 18,2028f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[6]);
	(*&Local_4 + 832)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallTop", 2, -2659,666f, 42,54604f, 4253,799f, 0.0f, -10,42627f, 0.0f, 9,429176f, 4,245365f, 10,77878f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[7]);
	(*&Local_4 + 832)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SafeVol", 2, -2719,679f, 38,73067f, 4226,607f, 0.0f, 31,7567f, 0.0f, 30,67031f, 14,16903f, 17,75332f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[8]);
	(*&Local_4 + 832)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CantinaMusicLarge", 2, -2689,229f, 32,24561f, 4289,811f, 0.0f, -1,220891f, 0.0f, 39,50169f, 18,9649f, 22,64585f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[9]);
	(*&Local_4 + 832)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CantinaMusicSmall", 2, -2692,165f, 25,74546f, 4288,671f, 0.0f, -1,220891f, 0.0f, 23,43145f, 18,9649f, 12,92031f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[10]);
	(*&Local_4 + 832)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChupeosaRebelVol", 2, -2702,684f, 38,40274f, 4234,979f, 0.0f, 30,93523f, 0.0f, 78,45542f, 13,64452f, 46,55896f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[11]);
	(*&Local_4 + 832)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChupeosaRebelVol2", 2, -2706,159f, 38,26133f, 4260,99f, 0.0f, 80,12353f, 0.0f, 78,45542f, 13,64452f, 46,55896f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[12]);
	(*&Local_4 + 832)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallClimb", 2, -2649,234f, 36,62703f, 4246,583f, 0.0f, -10,42627f, 0.0f, 7,738351f, 4,245365f, 4,649303f);
	ADD_TO_VOLUME_SET(Local_4.f_892, (*&Local_4 + 832)[13]);
	Local_4.f_928 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TriggerVol_set");
	(*&Local_4 + 896)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonVol", 2, -4386,654f, 38,55857f, 4368,706f, 0.0f, 33,32446f, 0.0f, 41,68365f, 19,05114f, 18,32319f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[0]);
	(*&Local_4 + 896)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShotgunChallenge1Trigger", 2, -4195,594f, 34,97765f, 4445,906f, 0.0f, 55,67705f, 0.0f, 212,9251f, 91,97815f, 159,8072f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[1]);
	(*&Local_4 + 896)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SearchChurchInsideVol", 2, -2666,139f, 34,21308f, 4282,815f, 0.0f, 46,4f, 0.0f, 5,708756f, 6,100423f, 8,656281f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[2]);
	(*&Local_4 + 896)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SearchChurchOutsideVol", 2, -2667,615f, 33,51516f, 4281,385f, 0.0f, 136,4f, 0.0f, 16,60688f, 4,776367f, 5,677278f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[3]);
	(*&Local_4 + 896)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Slaughter2Vol", 2, -2730,202f, 34,21308f, 4229,522f, 0.0f, 90,56847f, 0.0f, 61,35348f, 17,44213f, 61,27917f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[4]);
	(*&Local_4 + 896)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RebelFightVol", 2, -2697,027f, 32,95792f, 4240,249f, 0.0f, 127,4914f, 0.0f, 30.0f, 10.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[5]);
	(*&Local_4 + 896)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutFreeVol", 2, -2729,774f, 37,90995f, 4224,843f, 0.0f, 121,644f, 0.0f, 4,387764f, 3,501634f, 9,376304f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 896)[6]);
	Local_4.f_948 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CityHallVol_set");
	(*&Local_4 + 932)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CityHallEntered", 2, -2666,922f, 32,88165f, 4254,217f, 0.0f, -11,3544f, 0.0f, 6,914968f, 3,986189f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 932)[0]);
	(*&Local_4 + 932)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EspSpotsJonVol", 2, -2655,281f, 36,58858f, 4254,727f, 0.0f, -11,3544f, 0.0f, 2,217592f, 6,29762f, 12,80382f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 932)[1]);
	(*&Local_4 + 932)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EspTauntsJonVol", 2, -2651,182f, 37,36221f, 4257,132f, 0.0f, -11,3544f, 0.0f, 6,914968f, 3.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 932)[2]);
	Local_4.f_952 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 956)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -4368,016f, 39,21352f, 4355,825f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[0], Local_4.f_952);
	(*&Local_4 + 956)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -4346,386f, 39,21354f, 4349,454f, 0.0f, 159,029f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[1], Local_4.f_952);
	(*&Local_4 + 956)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -4350,243f, 39,21407f, 4353,604f, 0.0f, 112,7471f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[2], Local_4.f_952);
	(*&Local_4 + 956)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -4377,349f, 38,76468f, 4347,836f, 0.0f, 114,79f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[3], Local_4.f_952);
	(*&Local_4 + 956)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerLook01", -4349,392f, 39,2146f, 4355,035f, 0.0f, 159,029f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 956)[4], Local_4.f_952);
	Local_4.f_980 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 984)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02A", -2769,766f, 31,97549f, 4284,676f, 0.0f, -35,24351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[0], Local_4.f_980);
	(*&Local_4 + 984)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02B", -2756,991f, 32,12549f, 4274,208f, 0.0f, 120,5728f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[1], Local_4.f_980);
	(*&Local_4 + 984)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -2753,833f, 31,97549f, 4269,258f, 0.0f, -70,15337f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[2], Local_4.f_980);
	(*&Local_4 + 984)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -2769,766f, 31,97549f, 4284,676f, 0.0f, -35,24351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[3], Local_4.f_980);
	(*&Local_4 + 984)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -2754,607f, 31,97549f, 4267,972f, 0.0f, -70,15337f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[4], Local_4.f_980);
	(*&Local_4 + 984)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "SupplyWagonStart02", -2769,766f, 31,97549f, 4284,676f, 0.0f, -35,24351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[5], Local_4.f_980);
	(*&Local_4 + 984)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "SupplyWagonEnd02", -2760.0f, 32,12549f, 4280f, 0.0f, -12,60571f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[6], Local_4.f_980);
	(*&Local_4 + 984)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier01Start02", -2758,567f, 32,12549f, 4269,651f, 0.0f, -43,8771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[7], Local_4.f_980);
	(*&Local_4 + 984)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier02Start02", -2757,67f, 31,97549f, 4270,937f, 0.0f, -47,27243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[8], Local_4.f_980);
	(*&Local_4 + 984)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier03Start02", -2757,418f, 32,12549f, 4272,538f, 0.0f, -25,68773f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[9], Local_4.f_980);
	(*&Local_4 + 984)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier04Start02", -2774,997f, 31,99348f, 4290,888f, 0.0f, -34,55626f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[10], Local_4.f_980);
	(*&Local_4 + 984)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier05Start02", -2774,361f, 31,97549f, 4291,269f, 0.0f, -34,86771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[11], Local_4.f_980);
	(*&Local_4 + 984)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier06Start02", -2773,73f, 31,97549f, 4291,646f, 0.0f, -34,74877f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[12], Local_4.f_980);
	(*&Local_4 + 984)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier01Ride02", -2741,543f, 32,29229f, 4258,457f, 0.0f, 38,622f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[13], Local_4.f_980);
	(*&Local_4 + 984)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier02Ride02", -2738,509f, 32,47507f, 4257,492f, 0.0f, 101,2543f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[14], Local_4.f_980);
	(*&Local_4 + 984)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier03Ride02", -2736f, 32,54227f, 4256f, 0.0f, 88,32633f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[15], Local_4.f_980);
	(*&Local_4 + 984)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier04Ride02", -2758,36f, 32,12549f, 4281,64f, 0.0f, 112,9129f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[16], Local_4.f_980);
	(*&Local_4 + 984)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier05Ride02", -2758,015f, 32,12549f, 4284f, 0.0f, 99,58827f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[17], Local_4.f_980);
	(*&Local_4 + 984)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier06Ride02", -2757,69f, 32,12549f, 4286,31f, 0.0f, 96,26133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[18], Local_4.f_980);
	(*&Local_4 + 984)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02A", -2766,54f, 32,12549f, 4289,46f, 0.0f, -34,55523f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[19], Local_4.f_980);
	(*&Local_4 + 984)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02B", -2755,072f, 32,12549f, 4274,721f, 0.0f, 195,6775f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[20], Local_4.f_980);
	(*&Local_4 + 984)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", -2755,072f, 32,12549f, 4274,721f, 0.0f, 195,6775f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[21], Local_4.f_980);
	Local_4.f_1076 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03a", -2670,537f, 31,27f, 4278,717f, 0.0f, -135,9471f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[0], Local_4.f_1076);
	(*&Local_4 + 1080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03b", -2684,263f, 31,53608f, 4251,573f, 0.0f, 4,458973f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[1], Local_4.f_1076);
	(*&Local_4 + 1080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -2684,273f, 31,54063f, 4250,149f, 0.0f, 3,286603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[2], Local_4.f_1076);
	(*&Local_4 + 1080)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -4347,461f, 42,02354f, 4343,023f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[3], Local_4.f_1076);
	(*&Local_4 + 1080)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderEnd03", -2728,946f, 36,40929f, 4237,007f, 0.0f, 230,4138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[4], Local_4.f_1076);
	(*&Local_4 + 1080)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Preload_MEXARMY05_CS03_P1", -2674,945f, 31,26868f, 4274,71f, 0.0f, 226,5895f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[5], Local_4.f_1076);
	(*&Local_4 + 1080)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionPostDoor", -2672,312f, 31,26664f, 4274,771f, 0.0f, 203,8967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[6], Local_4.f_1076);
	(*&Local_4 + 1080)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionFlee03", -2667,209f, 31,38693f, 4254,305f, 0.0f, 3,286603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[7], Local_4.f_1076);
	(*&Local_4 + 1080)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartCutfree", -2727,907f, 36,37716f, 4223,379f, 0.0f, -59,73991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[8], Local_4.f_1076);
	(*&Local_4 + 1080)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartCutfree", -2726,588f, 36,37716f, 4223,212f, 0.0f, -58,97343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[9], Local_4.f_1076);
	Local_4.f_1124 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03MexArmySoldierSet", Local_4, 8, 0);
	(*&Local_4 + 1128)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier01End03", -2665,033f, 31,38693f, 4247,257f, 0.0f, 56,66253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[0], Local_4.f_1124);
	(*&Local_4 + 1128)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier02End03", -2666,568f, 31,38693f, 4248,73f, 0.0f, 56,66253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[1], Local_4.f_1124);
	(*&Local_4 + 1128)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier03End03", -2668,69f, 31,38693f, 4254,044f, 0.0f, 57,3689f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[2], Local_4.f_1124);
	(*&Local_4 + 1128)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier04End03", -2669,424f, 31,38693f, 4258,144f, 0.0f, 57,39982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[3], Local_4.f_1124);
	(*&Local_4 + 1128)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier05End03", -2667,995f, 36,8988f, 4261,891f, 0.0f, 57,38922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[4], Local_4.f_1124);
	(*&Local_4 + 1128)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier06End03", -2668,032f, 36,89932f, 4249,878f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1128)[5], Local_4.f_1124);
	Local_4.f_1156 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03MexArmySweeperSet", Local_4, 8, 0);
	(*&Local_4 + 1160)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySweeper01Start03", -2687,556f, 31,39143f, 4275,435f, 0.0f, -0,09788182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[0], Local_4.f_1156);
	(*&Local_4 + 1160)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySweeper02Start03", -2689,948f, 31,18631f, 4275,064f, 0.0f, -0,09788182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[1], Local_4.f_1156);
	(*&Local_4 + 1160)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySweeper03Start03", -2698,832f, 31,18631f, 4274,655f, 0.0f, 0,608492f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1160)[2], Local_4.f_1156);
	Local_4.f_1176 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1180)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -2729,197f, 36,40929f, 4224,498f, 0.0f, 125,1849f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[0], Local_4.f_1176);
	(*&Local_4 + 1180)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -2729,197f, 36,40929f, 4224,498f, 0.0f, 126,7027f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[1], Local_4.f_1176);
	(*&Local_4 + 1180)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderStart04", -2730,646f, 36,40929f, 4225,364f, 0.0f, -411,9243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[2], Local_4.f_1176);
	(*&Local_4 + 1180)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderEnd04", -2730,646f, 36,40929f, 4225,364f, 0.0f, -47,64543f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1180)[3], Local_4.f_1176);
	Local_4.f_1200 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04MexArmySoldierSet", Local_4, 8, 0);
	(*&Local_4 + 1204)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier01End04", -2665,033f, 31,38693f, 4247,257f, 0.0f, 56,66253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[0], Local_4.f_1200);
	(*&Local_4 + 1204)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier02End04", -2666,568f, 31,38693f, 4248,73f, 0.0f, 56,66253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[1], Local_4.f_1200);
	(*&Local_4 + 1204)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier03End04", -2668,69f, 31,38693f, 4254,044f, 0.0f, 57,3689f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[2], Local_4.f_1200);
	(*&Local_4 + 1204)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier04End04", -2669,424f, 31,38693f, 4258,144f, 0.0f, 57,39982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[3], Local_4.f_1200);
	(*&Local_4 + 1204)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier05End04", -2667,995f, 36,8988f, 4261,891f, 0.0f, 57,38922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[4], Local_4.f_1200);
	(*&Local_4 + 1204)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "MexArmySoldier06End04", -2668,032f, 36,89932f, 4249,878f, 0.0f, 92,38266f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1204)[5], Local_4.f_1200);
	Local_4.f_1232 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04RebelSoldierSet", Local_4, 8, 0);
	(*&Local_4 + 1236)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier01End04", -2697,999f, 32,1896f, 4231,332f, -179,1726f, -383,8094f, 182,3213f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[0], Local_4.f_1232);
	(*&Local_4 + 1236)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier02End04", -2716,259f, 32,13002f, 4243,681f, 0,820917f, -517,2311f, 2,337602f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[1], Local_4.f_1232);
	(*&Local_4 + 1236)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier03End04", -2691,945f, 32,50169f, 4232,613f, 0,7606596f, -545,6668f, 2,730442f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[2], Local_4.f_1232);
	(*&Local_4 + 1236)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier04End04", -2706,087f, 32,17834f, 4236,917f, 3,136167f, -463,9734f, -0,3882104f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[3], Local_4.f_1232);
	(*&Local_4 + 1236)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier05End04", -2675,583f, 32,34564f, 4225,896f, 0,7678028f, -549,6482f, 2,784017f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[4], Local_4.f_1232);
	(*&Local_4 + 1236)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier06End04", -2708,607f, 32,08835f, 4238,95f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[5], Local_4.f_1232);
	(*&Local_4 + 1236)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier07End04", -2687,583f, 32,68472f, 4231,868f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[6], Local_4.f_1232);
	(*&Local_4 + 1236)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelSoldier08End04", -2717,468f, 32,50984f, 4244,825f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[7], Local_4.f_1232);
	Local_4.f_1272 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 1276)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -2690,785f, 31,35864f, 4249,248f, 0.0f, 247,4834f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[0], Local_4.f_1272);
	(*&Local_4 + 1276)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -2678,493f, 31,52968f, 4254,051f, 0.0f, -253,107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[1], Local_4.f_1272);
	(*&Local_4 + 1276)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -2631,095f, 30,48215f, 4239,168f, 0.0f, -253,107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[2], Local_4.f_1272);
	(*&Local_4 + 1276)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -2631,095f, 30,48215f, 4239,168f, 0.0f, -253,107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[3], Local_4.f_1272);
	(*&Local_4 + 1276)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderStart05", -2679,964f, 31,53811f, 4254,444f, 0.0f, 284,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[4], Local_4.f_1272);
	(*&Local_4 + 1276)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderEnd05", -2679,964f, 31,53811f, 4254,444f, 0.0f, 284,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[5], Local_4.f_1272);
	(*&Local_4 + 1276)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -2758,97f, 31,9755f, 4273,166f, 0.0f, -219,7498f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[6], Local_4.f_1272);
	(*&Local_4 + 1276)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Preload_MEXICAN_ARMY_05_END", -2679,964f, 31,53811f, 4254,444f, 0.0f, 284,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[7], Local_4.f_1272);
	(*&Local_4 + 1276)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerLook05", -2757,534f, 32,12549f, 4273,388f, 0.0f, -253,107f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1276)[8], Local_4.f_1272);
	Local_4.f_1316 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneEndSet", Local_4, 8, 0);
	(*&Local_4 + 1320)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartEnd", -2678,493f, 31,3475f, 4246,233f, 0.0f, -90,61508f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1320)[0], Local_4.f_1316);
	(*&Local_4 + 1320)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndEnd", -2678,493f, 31,3475f, 4248,305f, 0.0f, -183,6414f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1320)[1], Local_4.f_1316);
	(*&Local_4 + 1320)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderStartEnd", -2676,003f, 31,3475f, 4244,544f, 0.0f, 284,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1320)[2], Local_4.f_1316);
	(*&Local_4 + 1320)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderEndEnd", -2646,204f, 31,16331f, 4235,996f, 0.0f, 284,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1320)[3], Local_4.f_1316);
	Local_4.f_1340 = CREATE_OBJECTSET_IN_LAYOUT("ActionFlagSet", Local_4, 8, 0);
	(*&Local_4 + 1344)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "BackupRideFlag", -2693,002f, 31,60321f, 4242,018f, 0.0f, 315,4996f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[0], Local_4.f_1340);
	(*&Local_4 + 1344)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "BackupSweeperFlag", -2664.0f, 31,44596f, 4237,267f, 0.0f, -147,3411f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[1], Local_4.f_1340);
	(*&Local_4 + 1344)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SearchChurchInsideFlag", -2656,881f, 31,27157f, 4277,717f, 0.0f, -43,6f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[2], Local_4.f_1340);
	(*&Local_4 + 1344)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MolotovCrateFlag", -2689,051f, 31,377f, 4247,747f, 0.0f, 37,83577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[3], Local_4.f_1340);
	(*&Local_4 + 1344)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "ShotgunFlag", -2692,067f, 31,20789f, 4269,864f, 0.0f, -361,8174f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[4], Local_4.f_1340);
	(*&Local_4 + 1344)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PreFightAimFlag", -2676.0f, 31,9332f, 4273,369f, 0.0f, -361,8174f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[5], Local_4.f_1340);
	(*&Local_4 + 1344)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelLeaderFleeFlag", -2730,646f, 36,40929f, 4225,364f, -1,86122f, -425,9991f, 4,355724f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1344)[6], Local_4.f_1340);
	Local_4.f_1376 = CREATE_OBJECTSET_IN_LAYOUT("TriggerFlagSet", Local_4, 8, 0);
	(*&Local_4 + 1380)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "ChuparosaGatewayFlag", -2754,2f, 31,97549f, 4268,647f, 0.0f, 284,8053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[0], Local_4.f_1376);
	(*&Local_4 + 1380)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "TownCenterGatewayFlag", -2680,162f, 31,54584f, 4255,579f, 0.0f, -17,1219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[1], Local_4.f_1376);
	(*&Local_4 + 1380)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallFront", -2665,139f, 31,38194f, 4254,656f, 0.0f, -17,1219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[2], Local_4.f_1376);
	(*&Local_4 + 1380)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "ChuparosaWagonDest", -2764f, 32,12549f, 4260f, 0.0f, 365,2155f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[3], Local_4.f_1376);
	(*&Local_4 + 1380)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag", -2679,79f, 31,41068f, 4253,97f, 0.0f, -17,1219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[4], Local_4.f_1376);
	(*&Local_4 + 1380)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "FountainTarget", -2680,162f, 31,54584f, 4255,579f, 0.0f, -17,1219f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[5], Local_4.f_1376);
	(*&Local_4 + 1380)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallTarget", -2671,667f, 31,24331f, 4253,685f, 0.0f, 79,93624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1380)[6], Local_4.f_1376);
	Local_4.f_1412 = CREATE_OBJECTSET_IN_LAYOUT("SweeperCover02Set", Local_4, 8, 0);
	(*&Local_4 + 1416)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove1Cover1", -2692,334f, 32,83341f, 4232,681f, 0.0f, -175,2379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[0], Local_4.f_1412);
	(*&Local_4 + 1416)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove1Cover2", -2698,021f, 32,83341f, 4231,433f, 0.0f, -173,5607f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[1], Local_4.f_1412);
	(*&Local_4 + 1416)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove1Cover3", -2700,372f, 32,83341f, 4231,051f, 0.0f, -178,0883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[2], Local_4.f_1412);
	(*&Local_4 + 1416)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove2Cover1", -2682,926f, 31,84319f, 4245,777f, 0.0f, -167,2175f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[3], Local_4.f_1412);
	(*&Local_4 + 1416)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove2Cover2", -2675,555f, 31,9403f, 4253,963f, 0.0f, -172,9872f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[4], Local_4.f_1412);
	(*&Local_4 + 1416)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove3Cover3", -2682,358f, 32,04148f, 4260,397f, 0.0f, -158,2547f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[5], Local_4.f_1412);
	(*&Local_4 + 1416)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove4Cover1", -2686,084f, 31,76312f, 4271,965f, 0.0f, 222,557f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[6], Local_4.f_1412);
	(*&Local_4 + 1416)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "SweeperMove4Cover2", -2676,865f, 31,74286f, 4268,508f, 0.0f, -137,3212f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[7], Local_4.f_1412);
	(*&Local_4 + 1416)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos1", -2709,802f, 33,37761f, 4271,959f, 0.0f, -92,70387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[8], Local_4.f_1412);
	(*&Local_4 + 1416)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos2", -2709,802f, 33,37761f, 4269,855f, 0.0f, -92,70387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[9], Local_4.f_1412);
	(*&Local_4 + 1416)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos3", -2692,61f, 31,84319f, 4247,959f, 0.0f, -135,1751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[10], Local_4.f_1412);
	(*&Local_4 + 1416)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos4", -2670,152f, 31,87148f, 4260,038f, 0.0f, -135,1751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[11], Local_4.f_1412);
	(*&Local_4 + 1416)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos5", -2667,725f, 31,87148f, 4262,048f, 0.0f, -135,1751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[12], Local_4.f_1412);
	(*&Local_4 + 1416)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierPos6", -2677,039f, 31,84319f, 4248,605f, 0.0f, -135,1751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[13], Local_4.f_1412);
	Local_4.f_1476 = CREATE_OBJECTSET_IN_LAYOUT("CityHallOutFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1480)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut1", -2666,675f, 31,38693f, 4247,627f, 0.0f, 397,0502f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[0], Local_4.f_1476);
	(*&Local_4 + 1480)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut2", -2669,296f, 31,38693f, 4251,586f, 0.0f, 27,84224f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[1], Local_4.f_1476);
	(*&Local_4 + 1480)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut3", -2669,997f, 31,38693f, 4256,622f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[2], Local_4.f_1476);
	(*&Local_4 + 1480)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut4", -2669,635f, 31,38693f, 4260,345f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[3], Local_4.f_1476);
	(*&Local_4 + 1480)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut5", -2667,283f, 31,38693f, 4262,503f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[4], Local_4.f_1476);
	(*&Local_4 + 1480)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallOut6", -2663,858f, 31,38693f, 4246,69f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1480)[5], Local_4.f_1476);
	Local_4.f_1508 = CREATE_OBJECTSET_IN_LAYOUT("CityHallInsideFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1512)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside1", -2654,636f, 32,17332f, 4251,201f, 0.0f, 397,0502f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[0], Local_4.f_1508);
	(*&Local_4 + 1512)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside2", -2669,731f, 35,67227f, 4259,454f, 0.0f, 128,5916f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[1], Local_4.f_1508);
	(*&Local_4 + 1512)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside3", -2669,791f, 35,67227f, 4253,85f, 0.0f, 72,03103f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[2], Local_4.f_1508);
	(*&Local_4 + 1512)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside4", -2659,691f, 31,38693f, 4253,22f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[3], Local_4.f_1508);
	(*&Local_4 + 1512)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside5", -2663,034f, 31,38693f, 4258,684f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[4], Local_4.f_1508);
	(*&Local_4 + 1512)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CityHallInside6", -2667,84f, 35,67227f, 4248,622f, 0.0f, 35,62225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[5], Local_4.f_1508);
	Local_4.f_1540 = CREATE_OBJECTSET_IN_LAYOUT("SniperFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1544)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "SniperCHFlag1", -2667,115f, 35,67227f, 4262,159f, 0.0f, -199,6477f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1544)[0], Local_4.f_1540);
	(*&Local_4 + 1544)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "SniperCHFlag2", -2669,145f, 35,67227f, 4260,888f, 0.0f, -235,1403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1544)[1], Local_4.f_1540);
	Local_4.f_1556 = CREATE_OBJECTSET_IN_LAYOUT("RebelFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1560)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag1", -2697,999f, 32,1896f, 4231,332f, -179,1726f, -383,8094f, 182,3213f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[0], Local_4.f_1556);
	(*&Local_4 + 1560)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag2", -2716,259f, 32,13002f, 4243,681f, 0,820917f, -517,2311f, 2,337602f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[1], Local_4.f_1556);
	(*&Local_4 + 1560)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag3", -2691,945f, 32,50169f, 4232,613f, 0,7606596f, -545,6668f, 2,730442f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[2], Local_4.f_1556);
	(*&Local_4 + 1560)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag4", -2706,087f, 32,17834f, 4236,917f, 3,136167f, -463,9734f, -0,3882104f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[3], Local_4.f_1556);
	(*&Local_4 + 1560)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag5", -2675,583f, 32,34564f, 4225,896f, 0,7678028f, -549,6482f, 2,784017f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[4], Local_4.f_1556);
	(*&Local_4 + 1560)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag6", -2708,607f, 32,08835f, 4238,95f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[5], Local_4.f_1556);
	(*&Local_4 + 1560)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag7", -2687,583f, 32,68472f, 4231,868f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[6], Local_4.f_1556);
	(*&Local_4 + 1560)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelCoverFlag8", -2717,468f, 32,50984f, 4244,825f, 0,862535f, -511,3525f, 2,241787f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[7], Local_4.f_1556);
	(*&Local_4 + 1560)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag01", -2700,875f, 31,12157f, 4268,182f, 0.0f, -65,66492f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[8], Local_4.f_1556);
	(*&Local_4 + 1560)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag02", -2689,948f, 31,18631f, 4275,064f, 0.0f, -2,764541f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[9], Local_4.f_1556);
	(*&Local_4 + 1560)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag03", -2673,417f, 31,44778f, 4269,033f, 0.0f, -48,72158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[10], Local_4.f_1556);
	(*&Local_4 + 1560)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag04", -2670,797f, 31,44778f, 4271,472f, 0.0f, -48,72158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[11], Local_4.f_1556);
	(*&Local_4 + 1560)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag05", -2687,556f, 31,39143f, 4275,435f, 0.0f, -27,60438f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[12], Local_4.f_1556);
	(*&Local_4 + 1560)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag06", -2691,651f, 31,35864f, 4250,021f, 0.0f, -135,26f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[13], Local_4.f_1556);
	(*&Local_4 + 1560)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag07", -2690,773f, 31,36996f, 4261,212f, 0.0f, -63,81322f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[14], Local_4.f_1556);
	(*&Local_4 + 1560)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelEndFlag08", -2693,503f, 31,3659f, 4254,365f, 0.0f, -82,06239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[15], Local_4.f_1556);
	Local_4.f_1628 = CREATE_OBJECTSET_IN_LAYOUT("CityHallFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1632)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "ChallFlag01", -2654,59f, 32,173f, 4251,241f, 0.0f, 121,597f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[0], Local_4.f_1628);
	(*&Local_4 + 1632)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "ChallFlag02", -2657,579f, 35,673f, 4259,683f, 0.0f, 337,679f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[1], Local_4.f_1628);
	(*&Local_4 + 1632)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "ChallFlag03", -2651,532f, 35,678f, 4259,831f, 0.0f, 88,724f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[2], Local_4.f_1628);
	(*&Local_4 + 1632)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CptEspinozaFlag", -2649,739f, 35,678f, 4255,851f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[3], Local_4.f_1628);
	Local_4.f_1652 = CREATE_GRINGO_IN_LAYOUT(Local_4, "reyes_saves", "reyes_saves", -2719,284f, 36,40929f, 4240,319f, 0.0f, -151,8606f, 0.0f);
	Local_4.f_1656 = CREATE_GRINGO_IN_LAYOUT(Local_4, "saved_by_reyes", "saved_by_reyes", -2688,084f, 31,84319f, 4252,468f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1660 = CREATE_GRINGO_IN_LAYOUT(Local_4, "reyes_frees_marston", "reyes_frees_marston", -2733,005f, 36,40929f, 4226,936f, 0.0f, 31,34496f, 0.0f);
	Local_4.f_1664 = CREATE_GRINGO_IN_LAYOUT(Local_4, "player_smoking_lean", "MissionEnd_MarstonSmoke", -2758,624f, 32,12549f, 4265,434f, 0.0f, -254,4815f, 0.0f);
	Local_4.f_1668 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "reyes_fight_coverLow", -2692,841f, 31,48885f, 4252,002f, 0.0f, -108,3009f, 0.0f, 4);
	Local_4.f_1672 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "rebel_fight_coverLow", -2692,553f, 31,37846f, 4260,079f, 0.0f, -64,11f, 0.0f, 4);
}

vector3 Åá»AhÊØEÎ}Å~´AVbE°»Å@AG<E§Å A$nE¨0ÅÀSA·E¯ÅATAoÄE´¾Å~ÀDAÆ,E¼Å~@dAºaEÆyÅ}À¤AN(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x24F0B / 151307
{
	int iVar13;
	var uVar52;
	var uVar56318;
	
	return StackVal, StackVal, "" * -31019;
}

var @Ù"EöûÅ^C<@Ù,EËÅ]À~@Øø)EÅ]5n@ÓÝE)Å\£2@¿>èE/ÈÅ[ÿ«@¸QYE)Å[lv@¸0LEÞÅZØ´@¸
/E ÅZIà@·Ú<EáDÅYÃ@·Ý)E´ªÅY6º@·®,E}¶ÅX¼0@·£ÊECÅX?·@·7E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x2523F / 152127
{
	int iVar50365;
	
	return StackVal;
}

vector3 A$pEDrÅH×_@üdEÃÅI)µ@ÿkÈE»mÅIL½AéEÛxÅIh(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x25FF3 / 155635
{
	int iVar14294;
	var uVar31857;
	var uVar33364;
	var uVar34432;
	var uVar50304;
	
}

struct<8> B ×E:Å()B ×E¸'Å(p"B ×EËàÅ(MFB ×Eà
,Ç:D¤;oReyesToFight2  p   0Å(LàB PEàÅ(äAûÎ?Eî[Å(§>Aù^E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x264D7 / 156887
{
	return StackVal, FloatToInt(StackVal);
	Local_4.f_1704 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, 1878737400, 7 * -31388);
}

void Function_584(int iParam0, int iParam1) //Position: 0x2666F / 157295
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

bool Function_585() //Position: 0x266B8 / 157368
{
	struct<9> Var0;
	
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_386(0))
		{
			return 0;
		}
		if (!Function_372())
		{
			return 0;
		}
		if (!Function_398(&bLocal_443))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_549))
		{
			bLocal_549 = Function_378(6, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_551))
		{
			bLocal_551 = Function_378(7, 0, 1, vLocal_816.x, vLocal_816.y, vLocal_816.z, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_550))
		{
			bLocal_550 = Function_378(5, 0, 1, vLocal_816.x, vLocal_816.y, vLocal_816.z, 0, 0, 0);
			return 0;
		}
		if (!Function_592())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_552))
		{
			GET_OBJECT_POSITION((*&Local_4 + 956)[3], &vVar0);
			GET_OBJECT_ORIENTATION((*&Local_4 + 956)[3], &Var3);
			bLocal_552 = Function_586(StackVal, 1, 1, vVar0.x, vVar0.y, vVar0.z, 1, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_586(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x26796 / 157590
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381 || Function_281(1))
	{
		Function_591(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_592())
		{
			return "";
		}
	}
	if (!Function_589())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_290(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_290(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_290(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_290(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_588(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_588(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_40() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_73(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_587(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_40() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_587(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x26AEE / 158446
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_588(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x26B2B / 158507
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

bool Function_589() //Position: 0x26BC6 / 158662
{
	if (Function_590() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_590() //Position: 0x26BDC / 158684
{
	return Global_12976.f_152;
}

void Function_591(var uParam0, bool bParam1, bool bParam2) //Position: 0x26BE7 / 158695
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_76(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_76(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_592() //Position: 0x26C14 / 158740
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_593(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x26C34 / 158772
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_367(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_594() //Position: 0x26C50 / 158800
{
	Function_373(&bLocal_443, "nMexArmy05", 10, 0);
	Function_373(&bLocal_443, "Locked_footLocker", 1, 0);
	Function_373(&bLocal_443, "p_gen_knife02x", 0, 0);
	Function_373(&bLocal_443, "crowd_cheer", 5, 0);
	Function_373(&bLocal_443, "custom/crowd_cheer", 8, 0);
	Function_373(&bLocal_443, "knl_picklock", 5, 0);
	Function_373(&bLocal_443, "custom/knl_picklock", 8, 0);
	Function_373(&bLocal_465, "wait_at_door", 1, 0);
	Function_373(&bLocal_469, "stand_hostage", 5, 0);
	Function_373(&bLocal_469, "custom/stand_hostage", 8, 0);
	Function_373(&bLocal_469, "reyes_saves_martson", 5, 0);
	Function_373(&bLocal_469, "custom/reyes_saves_martson", 8, 0);
	Function_373(&bLocal_469, "reyes_frees_marston", 5, 0);
	Function_373(&bLocal_469, "custom/reyes_frees_marston", 8, 0);
	Function_373(&bLocal_488, "marston_smoke", 5, 0);
	Function_373(&bLocal_488, "custom/marston_smoke", 8, 0);
	Function_370(&bLocal_488, 534, 2, 0);
	Function_370(&bLocal_488, 529, 2, 0);
	Function_370(&bLocal_488, 521, 2, 0);
	Function_370(&bLocal_488, 517, 2, 0);
	Function_370(&bLocal_488, 537, 2, 0);
	Function_370(&bLocal_488, 535, 2, 0);
	Function_370(&bLocal_488, 523, 2, 0);
	Function_370(&bLocal_488, 522, 2, 0);
	Function_370(&bLocal_488, 531, 2, 0);
	Function_370(&bLocal_488, 538, 2, 0);
	Function_370(&bLocal_488, 533, 2, 0);
	Function_370(&bLocal_488, 518, 2, 0);
	return;
}

void Function_595(int iParam0, bool bParam1) //Position: 0x26EB9 / 159417
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_601(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_267(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_13(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_22(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_267(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_199();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_294();
	Function_332();
	Function_282("");
	Function_600(0);
	Function_599();
	Function_192();
	Function_191();
	ENABLE_JOURNAL_REPLAY(0);
	Function_598();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_408(0, 0x40400000);
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_597(13);
	Function_597(14);
	Function_597(25);
	Function_597(24);
	Function_597(12);
	Function_597(27);
	Function_597(26);
	Function_597(15);
	Function_596();
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

void Function_596() //Position: 0x272DD / 160477
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(bVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(bVar1, Global_16516))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_16516);
			}
			RELEASE_OBJECT_REF(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_597(int iParam0) //Position: 0x27351 / 160593
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_598() //Position: 0x27371 / 160625
{
	bool bVar0;
	
	bVar0 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	bVar0 = GET_LASSO_TARGET(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DETACH_LASSO(bVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	return;
}

void Function_599() //Position: 0x273AE / 160686
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_600(int iParam0) //Position: 0x273C2 / 160706
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_195())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_601(int iParam0, int iParam1) //Position: 0x273F7 / 160759
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_602(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_602(int iParam0) //Position: 0x27479 / 160889
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

bool Function_603(int iParam0) //Position: 0x274C7 / 160967
{
	switch (iParam0->f_16)
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
			if (*iParam0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (*iParam0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_604(iParam0, 1);
			return 1;
		}
	}
	Function_604(iParam0, 0);
	return 0;
}

void Function_604(int iParam0, bool bParam1) //Position: 0x2754E / 161102
{
	if (bParam1)
	{
		*iParam0 = 0;
	}
	iParam0->f_4 = "";
	iParam0->f_8 = 4294967295;
	iParam0->f_12 = 0;
	iParam0->f_16 = 0;
	return;
}

bool Function_605(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x27572 / 161138
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	struct<16> Var18;
	
	if (*iParam2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(bParam3))
	{
		Function_604(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_624(&bParam3);
				ITERATE_IN_EVENT_TRAP(bParam3, (*uParam1)[iVar03]);
				bVar1 = START_OBJECT_ITERATOR(bParam3);
				while (IS_OBJECT_VALID(bVar1))
				{
					bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
					if (IS_EVENT_VALID(bVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
							if (IS_OBJECT_VALID(bVar4))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(bVar4);
							}
						}
						else
						{
							bVar5 = GET_EVENT_TARGET_AS_PHYSINST(bVar2);
							if (IS_PHYSINST_VALID(bVar5))
							{
								bVar6 = GET_OBJECT_FROM_PHYSINST(bVar5);
								if (IS_OBJECT_VALID(bVar6))
								{
									if (GET_OBJECT_TYPE(bVar6) == 15)
									{
										bVar3 = GET_ACTOR_FROM_OBJECT(bVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(bVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								bVar8 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar8))
								{
									bVar9 = GET_ACTOR_FROM_OBJECT(bVar8);
									if (IS_ACTOR_VALID(bVar9))
									{
										if (bVar9 == Global_34573)
										{
											iVar7 = 2;
										}
										else if (bVar9 == GET_MOUNT(Global_34573))
										{
											iVar7 = 2;
										}
										else if (bVar9 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								bVar11 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar11))
								{
									bVar12 = GET_ACTOR_FROM_OBJECT(bVar11);
									if (IS_ACTOR_VALID(bVar12))
									{
										if (bVar12 == GET_MOUNT(Global_34573))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								bVar14 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar14))
								{
									bVar15 = GET_ACTOR_FROM_OBJECT(bVar14);
									if (IS_ACTOR_VALID(bVar15))
									{
										if (bVar15 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(bVar1))
							{
								iVar16 = 0;
								while (iVar16 <= *uParam0)
								{
									if (IS_OBJECT_VALID((*uParam0)[iVar1617]))
									{
										if ((StackVal && uParam0[iVar1617]->f_40) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_623(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_623(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_609(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_152(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_604(iParam2, 0);
														return 0;
													}
													if (Function_152(bVar17, 2))
													{
														Function_608(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_607(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_152(bVar17, 4))
													{
														Function_608(&bVar17);
														strcpy(&Var18, "", 64);
														Function_606(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_282(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_607(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
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
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar1 = OBJECT_ITERATOR_NEXT(bParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
				EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
			}
		}
		iVar0++;
	}
	Function_604(iParam2, 0);
	return 0;
}

void Function_606(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x2790B / 162059
{
	memcpy(cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_607(var uParam0, int iParam1, bool bParam2) //Position: 0x279F6 / 162294
{
	switch (iParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			uParam0->f_12 = 1;
			break;
	}
	switch (iParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_36(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_36(&bParam2, 2);
			break;
	}
	Function_36(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_608(bool bParam0) //Position: 0x27A6C / 162412
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_609(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x27A8E / 162446
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam2))
	{
		return 0;
	}
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar1 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return 0;
			}
			return Function_620(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_613(iParam0, uParam1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000019:
			bVar3 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (!SQUAD_IS_VALID(bVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bVar3))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bVar3, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = Function_620(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_610(iParam0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar4 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (!IS_OBJECTSET_VALID(bVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(bVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar4);
				if (IS_OBJECT_VALID(bVar5))
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar1))
					{
						bVar2 = Function_620(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_610(iParam0, bVar2);
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

var Function_610(int iParam0, bool bParam1) //Position: 0x27BD8 / 162776
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_152(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_612(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_611(16);
			}
		}
	}
	else if (Function_152(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_612(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_611(256);
			}
		}
	}
	return bParam1;
}

bool Function_611(int iParam0) //Position: 0x27D0B / 163083
{
	return 2 | iParam0;
}

int Function_612(int iParam0) //Position: 0x27D15 / 163093
{
	return 4 | iParam0;
}

int Function_613(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x27D1F / 163103
{
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_619(iParam0, iParam1, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_611(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_614(iParam0, iParam1, 0, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_611(16);
		}
	}
	return 0;
}

int Function_614(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x27DD1 / 163281
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_618(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_617(iVar0, 3, 1, bParam3))
			{
				if (!Function_623(iParam0, 8, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_617(iVar0, 2, 1, bParam3))
			{
				if (!Function_623(iParam0, 32, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_617(iVar0, 1, 1, bParam3))
			{
				if (!Function_623(iParam0, 64, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_617(iVar0, 3, 1, bParam3))
			{
				if (!Function_623(iParam0, 128, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_617(iVar0, 1, 1, bParam3))
			{
				if (!Function_623(iParam0, 1024, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_617(iVar0, 1, 1, bParam3))
			{
				if (!Function_623(iParam0, 1024, 1))
				{
					return Function_616(64, 1024, bParam2);
				}
			}
			return Function_615(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_615(int iParam0, int iParam1, bool bParam2) //Position: 0x27F8B / 163723
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_616(int iParam0, int iParam1, bool bParam2) //Position: 0x27FA0 / 163744
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_617(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x27FB5 / 163765
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_618(int iParam0) //Position: 0x27FD2 / 163794
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
		if ((fVar3 - 10.0f) > (*iParam0 + 44)[iVar0])
		{
			iVar2++;
		}
		if ((*iParam0 + 44)[iVar0] > fVar4)
		{
			fVar4 = (*iParam0 + 44)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*iParam0 + 44)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_619(var uParam0, int iParam1, bool bParam2) //Position: 0x28042 / 163906
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_618(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_617(iVar0, 3, 1, bParam2))
			{
				if (!Function_623(uParam0, 8, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000009:
			if (Function_617(iVar0, 3, 1, bParam2))
			{
				if (!Function_623(uParam0, 8, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x0000006E:
			if (Function_617(iVar0, 2, 1, bParam2))
			{
				if (!Function_623(uParam0, 16, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x0000005B:
			if (Function_617(iVar0, 2, 1, bParam2))
			{
				if (!Function_623(uParam0, 32, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000031:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(uParam0, 64, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000007:
			if (Function_617(iVar0, 3, 1, bParam2))
			{
				if (!Function_623(uParam0, 128, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000008:
			if (Function_617(iVar0, 2, 1, bParam2))
			{
				if (!Function_623(uParam0, 256, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000014:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(uParam0, 512, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000018:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(uParam0, 512, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000057:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(uParam0, 1024, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000058:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(uParam0, 1024, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_620(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2825D / 164445
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam2 == bParam3)
	{
		bVar0 = true;
	}
	switch (iParam0->f_32)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_619(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_623(iParam0, 2, 1))
					{
						return Function_612(8);
					}
					return Function_611(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_623(iParam0, 4, 1))
					{
						return Function_612(16);
					}
					return Function_611(16);
				}
			}
			if (iParam0->f_36)
			{
				if (GET_MOST_RECENT_MOUNT(bParam2) == bParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(bParam3))
						{
							return Function_614(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_623(iParam0, 2, 1))
						{
							return Function_612(128);
						}
						return Function_611(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_623(iParam0, 4, 1))
						{
							return Function_612(256);
						}
						return Function_611(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_614(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_623(iParam0, 2, 1))
					{
						return Function_612(8);
					}
					return Function_611(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_623(iParam0, 4, 1))
					{
						return Function_612(16);
					}
					return Function_611(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_622(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_623(iParam0, 2, 1))
					{
						return Function_612(8);
					}
					return Function_611(8);
				}
				if (!Function_623(iParam0, 4, 1))
				{
					return Function_612(16);
				}
				return Function_611(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_614(iParam0, uParam1, 1, bParam5);
							if (Function_152(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_621(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_611(128);
							}
							if (!Function_623(iParam0, 2, 1))
							{
								return Function_612(8);
							}
							return Function_611(8);
						}
						if (iParam4 == 2)
						{
							if (Function_621(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_611(256);
							}
							if (!Function_623(iParam0, 4, 1))
							{
								return Function_612(16);
							}
							return Function_611(16);
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

bool Function_621(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2851C / 165148
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_622(int iParam0, var uParam1, bool bParam2) //Position: 0x285D5 / 165333
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_618(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_617(iVar0, 2, 1, bParam2))
			{
				if (!Function_623(iParam0, 16, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x0000005B:
			if (Function_617(iVar0, 2, 1, bParam2))
			{
				if (!Function_623(iParam0, 32, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000057:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(iParam0, 1024, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		case 0x00000058:
			if (Function_617(iVar0, 1, 1, bParam2))
			{
				if (!Function_623(iParam0, 1024, 1))
				{
					return Function_612(64);
				}
			}
			return Function_611(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_623(int iParam0, bool bParam1, bool bParam2) //Position: 0x286E9 / 165609
{
	if (bParam2)
	{
		if (!Function_152(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_152(iParam0->f_40, bParam1);
}

int Function_624(bool bParam0) //Position: 0x28711 / 165649
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_625(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x28742 / 165698
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_40())
	{
		*uParam9 = 1;
		*uParam10 = 0;
		*iParam11 = 0;
	}
	if (((Global_3381 && Global_63096) && !HUD_IS_FADED()) && iParam7 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

