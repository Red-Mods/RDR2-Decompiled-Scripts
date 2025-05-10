//Decompiled with MagicRDR v1.0
//Function Count : 613
//Statics Count : 1026
//Natives Count : 816
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1961> Local_4 = { 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_495 = 0;
	iLocal_496 = 0;
	iLocal_497 = 0;
	iLocal_498 = 0;
	iLocal_499 = 0;
	iLocal_500 = 0;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_1011 = 0;
	iLocal_1012 = 0;
	Local_547 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1019 };
	iLocal_633 = 99;
	iLocal_634 = 6;
	Local_626 = 1000;
	while (Function_315())
	{
		Function_225();
		WAIT(false);
	}
	Function_1();
	LOG_ERROR("Should never reach ENDSCRIPT");
	return;
}

void Function_1() //Position: 0x8A / 138
{
	if (!bLocal_938)
	{
		SET_WEAPONENUM_LOCKED(23, 1);
	}
	AUDIO_SET_PLAYER_MOOD(0, 0);
	RESET_PLAYER_TARGET_WEIGHT();
	Function_224();
	SET_DUST_LEVEL_MODIFIER(0);
	AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Function_219();
	ENABLE_CHILD_SECTOR("tes_stables01x");
	ENABLE_CHILD_SECTOR("tes_stables01props01x");
	ENABLE_CHILD_SECTOR("tes_house01x");
	ENABLE_CHILD_SECTOR("tes_house01props01x");
	Function_218();
	Function_215(6, 1, 0, 1, 1);
	Function_214(bLocal_546);
	Function_214(Local_4);
	Function_213();
	Function_187(bLocal_939, 1, 1, 0, 0, 1, 1, 1);
	Function_183(&bLocal_554);
	Function_183(&bLocal_585);
	Function_182();
	Function_181();
	Function_180();
	Function_178();
	RELEASE_LAYOUT_REF(bLocal_546);
	if (bLocal_938)
	{
		Function_168(Global_30685[2], &Global_6785, &Global_7910, 1);
		Function_24(Local_547, 1, 1, 1, 0);
	}
	else if (bLocal_939)
	{
		Function_20(Local_547);
	}
	else
	{
		Function_2(Local_547);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x19A / 410
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x1BB / 443
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1D6 / 470
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1F7 / 503
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x20D / 525
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

void Function_7(int iParam0) //Position: 0x2A9 / 681
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x2CA / 714
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

void Function_9() //Position: 0x310 / 784
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x329 / 809
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x37C / 892
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

struct<16> Function_12(int iParam0) //Position: 0x4A0 / 1184
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x4C5 / 1221
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4E5 / 1253
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x4FC / 1276
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x517 / 1303
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x75E / 1886
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x787 / 1927
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

bool Function_19(int iParam0) //Position: 0x7AB / 1963
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x7C0 / 1984
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x7DE / 2014
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

struct<16> Function_22(int iParam0) //Position: 0x884 / 2180
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x8AE / 2222
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB04 / 2820
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
		Function_163(&(Global_3422[iVar240]));
		Function_162(4194304);
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

void Function_25() //Position: 0xBF1 / 3057
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

int Function_26(int iParam0, bool bParam1) //Position: 0xC21 / 3105
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

int Function_27(int iParam0) //Position: 0xC5E / 3166
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC78 / 3192
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC8E / 3214
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF85 / 3973
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

void Function_31(char* cParam0, int iParam1) //Position: 0xFF1 / 4081
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1028 / 4136
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

bool Function_33(var uParam0, int iParam1) //Position: 0x10A0 / 4256
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x10B3 / 4275
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

int Function_35(int iParam0) //Position: 0x1154 / 4436
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
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

void Function_36(int iParam0, bool bParam1) //Position: 0x1191 / 4497
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11A4 / 4516
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

void Function_38(int iParam0, int iParam1) //Position: 0x13B6 / 5046
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x13F0 / 5104
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

bool Function_40() //Position: 0x1432 / 5170
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x143B / 5179
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

void Function_42() //Position: 0x148C / 5260
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

void Function_43() //Position: 0x14BF / 5311
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

void Function_44() //Position: 0x15C5 / 5573
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

void Function_45() //Position: 0x15F8 / 5624
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

void Function_46() //Position: 0x1786 / 6022
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

void Function_47() //Position: 0x193A / 6458
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1948 / 6472
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

var Function_49() //Position: 0x1B39 / 6969
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1B4E / 6990
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BE9 / 7145
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E84 / 7812
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

bool Function_53() //Position: 0x24B1 / 9393
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x24B9 / 9401
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x24CA / 9418
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x25BF / 9663
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x25D8 / 9688
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x263D / 9789
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x264F / 9807
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2661 / 9825
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

int Function_61(int iParam0) //Position: 0x2791 / 10129
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x27A0 / 10144
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x27D9 / 10201
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2816 / 10262
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x29B0 / 10672
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

int Function_66(bool bParam0) //Position: 0x2BCA / 11210
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2C0B / 11275
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

struct<8> Function_68() //Position: 0x2C94 / 11412
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

struct<8> Function_69() //Position: 0x2D2B / 11563
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

void Function_70() //Position: 0x2DAA / 11690
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2DD0 / 11728
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

void Function_72() //Position: 0x2FDA / 12250
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

bool Function_73(vector3 vParam0) //Position: 0x307B / 12411
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3093 / 12435
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

vector3 Function_75() //Position: 0x317A / 12666
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x3183 / 12675
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3192 / 12690
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x31A8 / 12712
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x326F / 12911
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x328C / 12940
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

bool Function_81(int iParam0) //Position: 0x3768 / 14184
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x377E / 14206
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x379D / 14237
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x37B7 / 14263
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x381E / 14366
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

void Function_86() //Position: 0x3A3E / 14910
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3ABE / 15038
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3E10 / 15888
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

int Function_89(int iParam0) //Position: 0x3E93 / 16019
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3EAD / 16045
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3EDB / 16091
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4179 / 16761
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

void Function_93(int iParam0, int iParam1) //Position: 0x433C / 17212
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x459A / 17818
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

int Function_95() //Position: 0x471F / 18207
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

void Function_96() //Position: 0x47BE / 18366
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

void Function_97(int iParam0) //Position: 0x486D / 18541
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

var Function_98(int iParam0) //Position: 0x48CB / 18635
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

int Function_99(int iParam0, bool bParam1) //Position: 0x495A / 18778
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

var Function_100(int iParam0, int iParam1) //Position: 0x4AF7 / 19191
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

void Function_101() //Position: 0x4B38 / 19256
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4B4E / 19278
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B8E / 19342
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4BCE / 19406
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4BDD / 19421
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

int Function_106(int iParam0) //Position: 0x4DA5 / 19877
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

var Function_107() //Position: 0x4E3A / 20026
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4E5F / 20063
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x531A / 21274
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

var Function_110(int iParam0) //Position: 0x562F / 22063
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x56D2 / 22226
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

int Function_112(int iParam0, bool bParam1) //Position: 0x58CD / 22733
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A69 / 23145
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5B34 / 23348
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
			Function_160(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_157(Global_30668[0]);
			Function_146(0);
			Function_144(2, 1);
			Function_144(0, 1);
			Function_144(1, 1);
			break;
		
		case 0x00000003:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_157(Global_30668[0]);
			Function_157(Global_30640[0]);
			Function_142(0, 1);
			Function_142(15, 1);
			Function_142(9, 1);
			Function_142(12, 1);
			Function_142(16, 1);
			Function_144(3, 1);
			break;
		
		case 0x00000005:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_155(21, bParam2, 4);
			Function_157(Global_30668[0]);
			Function_144(39, 1);
			break;
		
		case 0x00000007:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_141(4))
					{
						Function_131(4, 0, 0, 1);
					}
				}
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_157(Global_30640[0]);
			Function_157(Global_30668[2]);
			Function_130(&(Global_29008[Global_30668[2]]), 32768);
			Function_129(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_155(9, bParam2, 4);
			Function_157(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_157(Global_30640[0]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_157(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_157(Global_30640[1]);
			Function_157(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_157(Global_30679[0]);
			Function_157(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_157(Global_30658[5]);
			Function_157(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_155(21, bParam2, 4);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[4]);
			Function_128(&Global_76847, 0x2000000);
			Function_128(&Global_76847, 0x4000000);
			Function_128(&Global_76847, 4096);
			Function_128(&Global_76847, 8);
			Function_128(&Global_76847, 8388608);
			Function_128(&Global_76847, 524288);
			Function_128(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_129(&(Global_29008[Global_30640[4]]), 256);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_157(Global_30640[0]);
			Function_157(Global_30640[5]);
			Function_155(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_157(Global_30658[3]);
			Function_130(&(Global_29008[Global_30658[3]]), 32768);
			Function_129(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_155(9, bParam2, 4);
			Function_157(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_130(&(Global_29008[Global_30679[1]]), 32768);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_155(12, bParam2, 4);
			Function_129(&(Global_29008[Global_30679[1]]), 256);
			Function_157(Global_30668[3]);
			Function_157(Global_30693[0]);
			Function_157(Global_30685[0]);
			Function_146(4);
			Function_142(13, 1);
			Function_142(1, 1);
			Function_142(18, 1);
			Function_144(34, 1);
			Function_144(44, 1);
			Function_144(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_155(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_157(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_157(Global_30693[0]);
			Function_157(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_157(Global_30685[0]);
			Function_157(Global_30693[0]);
			Function_157(Global_30693[1]);
			Function_157(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_155(23, bParam2, 3);
			Function_142(23, 1);
			Function_157(Global_30685[0]);
			Function_157(Global_30685[2]);
			Function_130(&(Global_29008[Global_30685[2]]), 32768);
			Function_129(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_155(19, bParam2, 4);
			Function_157(Global_30685[0]);
			Function_157(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_155(24, bParam2, 3);
			Function_142(24, 1);
			Function_157(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_157(Global_30685[0]);
			Function_157(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_157(Global_30693[12]);
			Function_157(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_157(Global_30693[12]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_155(25, bParam2, 10);
			Function_157(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_155(13, bParam2, 4);
			Function_157(Global_30693[2]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_141(8))
				{
					Function_131(8, 0, 0, 1);
				}
			}
			Function_157(Global_30685[0]);
			Function_146(9);
			Function_142(7, 1);
			Function_142(11, 1);
			Function_142(3, 1);
			Function_142(20, 1);
			Function_144(57, 1);
			break;
		
		case 0x0000002A:
			Function_155(2, bParam2, 4);
			Function_157(Global_30717[0]);
			Function_157(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_157(Global_30717[0]);
			Function_157(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_155(17, bParam2, 4);
			Function_157(Global_30723[0]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_126(15))
				{
					Function_121(15, 0, 1);
				}
			}
			Function_129(&(Global_29008[Global_30717[1]]), 256);
			Function_146(11);
			Function_157(Global_30717[1]);
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_157(Global_30717[1]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_157(Global_30717[1]);
			Function_115(11);
			Function_146(12);
			Global_16537[1121].f_40 = 0;
			Function_144(56, 1);
			if (!bParam2)
			{
				if (!Function_141(9))
				{
					Function_131(9, 0, 0, 0);
				}
				if (!Function_141(10))
				{
					Function_131(10, 0, 0, 1);
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

void Function_115(int iParam0) //Position: 0x6424 / 25636
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6593 / 26003
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6699 / 26265
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x66C6 / 26310
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

var Function_119(vector3 vParam0) //Position: 0x671D / 26397
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x676B / 26475
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x67BF / 26559
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
		if (!Function_141(bParam0))
		{
			Function_131(bParam0, 1, 0, 0);
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

void Function_122() //Position: 0x695D / 26973
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6963 / 26979
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6A07 / 27143
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6A5C / 27228
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A72 / 27250
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6AC3 / 27331
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

void Function_128(var uParam0, int iParam1) //Position: 0x6AF0 / 27376
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6AFF / 27391
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6B16 / 27414
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6B25 / 27429
{
	struct<8> Var0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_140(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_141(bParam0))
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
		Function_134(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_133() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_133() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_132(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C6F / 27759
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

bool Function_133() //Position: 0x6CBA / 27834
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6CE7 / 27879
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
			if (Function_138(bParam0, Function_139(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_137(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_136(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_135(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_135(int iParam0) //Position: 0x6E97 / 28311
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6EEE / 28398
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

var Function_137(int iParam0) //Position: 0x6F13 / 28435
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6F69 / 28521
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

bool Function_139(bool bParam0) //Position: 0x6FC8 / 28616
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6FD4 / 28628
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6FF0 / 28656
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

int Function_142(int iParam0, int iParam1) //Position: 0x7042 / 28738
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x70B5 / 28853
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7111 / 28945
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x7182 / 29058
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x71DC / 29148
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_154(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_154(Global_16537[iParam021].f_72, 0);
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
			Function_132("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_131(14, 1, 0, 0);
				Function_147(14, 1, 0, 0, 0);
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
			Function_132("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7488 / 29832
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
	if (!Function_140(3) || uParam3)
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
			Function_132(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_138(bParam0, bParam1))
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
		Function_134(bParam0);
		if (StackVal && !Function_153(((((!Function_133() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_153((((Function_133() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_149();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_148(3, bParam1);
				break;
			
			case 0x00000005:
				Function_148(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_148(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_148(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_148(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_148(2, SHIFT_LEFT(bParam1, 18));
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

void Function_148(int iParam0, bool bParam1) //Position: 0x7717 / 30487
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

void Function_149() //Position: 0x7776 / 30582
{
	if (Function_125(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_150(int iParam0, int iParam1) //Position: 0x77F1 / 30705
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
					if (Function_151(13) && iVar16)
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
					if (Function_151(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(23) && iVar17)
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
					if (Function_151(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(27) && iVar18)
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
					if (Function_151(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(49) && iVar15)
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
					if (Function_151(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_151(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_151(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(15) && iVar19)
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

int Function_151(int iParam0) //Position: 0x83ED / 33773
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8402 / 33794
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8451 / 33873
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x845E / 33886
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x84AF / 33967
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_156(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_160(bParam0, 0, 0);
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

bool Function_156(int iParam0, int iParam1) //Position: 0x851D / 34077
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8530 / 34096
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_159(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_130(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_158(iParam0);
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

var Function_158(int iParam0) //Position: 0x862F / 34351
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8687 / 34439
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x86A3 / 34467
{
	if (!Function_161(bParam0))
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

bool Function_161(int iParam0) //Position: 0x86FA / 34554
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x870C / 34572
{
	bool bVar0;
	
	if (Function_153(bParam0, 1) && Function_153(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_163(int iParam0) //Position: 0x8740 / 34624
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
			Function_164(4, 0, 0);
		}
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87A7 / 34727
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
		Function_165(Global_16524, bVar0, 1);
	}
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8884 / 34948
{
	int iVar0;
	
	Function_167(bParam0);
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
	Function_166();
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

void Function_166() //Position: 0x89FD / 35325
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8A09 / 35337
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

void Function_168(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x8A4F / 35407
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_40())
	{
		return;
	}
	Function_130(&(Global_29008[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= *uParam1)
	{
		iVar1 = iVar0;
		if (Function_177(uParam1[iVar02], 1))
		{
			Function_174(uParam1, uParam2, iVar1, 0);
		}
		Function_172(uParam1, uParam2, iVar1, 0);
		Function_169(uParam1[iVar02], uParam2[iVar03], 0);
		bVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar2, iParam3, false, false, 0);
		uParam1[iVar02]->f_4 = bVar2;
		iVar0++;
	}
}

void Function_169(var uParam0, var uParam1, int iParam2) //Position: 0x8ACF / 35535
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&bVar0, Function_171(Global_29007), false, false, 0);
	}
	else
	{
		ADD_TIME(&bVar0, iParam2, false, false, 0);
	}
	uParam0->f_4 = bVar0;
	Function_170(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x8B22 / 35618
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_171(int iParam0) //Position: 0x8B31 / 35633
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

void Function_172(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8B65 / 35685
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_170(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_171(Global_29007), Function_173(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_177(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_177(uParam0[iParam22], 1) && !bParam3)
	{
		Function_170(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_171(Global_29007), Function_173(Global_29007), false, 0);
	}
}

int Function_173(int iParam0) //Position: 0x8CB4 / 36020
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

void Function_174(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x8CDF / 36063
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_177(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_176(uParam0[iVar02], 8);
	}
	Function_176(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_175(StackVal);
	if (bParam3)
	{
		Function_172(uParam0, uParam1, uParam2, 0);
	}
}

int Function_175(bool bParam0) //Position: 0x8D79 / 36217
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

void Function_176(var uParam0, int iParam1) //Position: 0x8E13 / 36371
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(int iParam0, int iParam1) //Position: 0x8E2A / 36394
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178() //Position: 0x8E46 / 36422
{
	Function_179();
	return;
}

void Function_179() //Position: 0x8E4F / 36431
{
	Function_183(&Local_4 + 4);
	Function_183(&Local_4 + 320);
	Function_183(&Local_4 + 360);
	Function_183(&Local_4 + 496);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_180() //Position: 0x8E79 / 36473
{
	Function_183(&Local_4 + 496);
	return;
}

void Function_181() //Position: 0x8E87 / 36487
{
	Function_183(&Local_4 + 360);
	return;
}

void Function_182() //Position: 0x8E95 / 36501
{
	Function_183(&Local_4 + 320);
	return;
}

void Function_183(bool bParam0) //Position: 0x8EA3 / 36515
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_184(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0x8EC9 / 36553
{
	if (Function_186(uParam0[iParam13], 4))
	{
		if (Function_186(uParam0[iParam13], 1))
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
			Function_185(uParam0[iParam13], 1);
			Function_185(uParam0[iParam13], 2);
			Function_185(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x8FF7 / 36855
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_186(var uParam0, bool bParam1) //Position: 0x9011 / 36881
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x902E / 36910
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_212());
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
	Function_211();
	CLEAR_PRINTED_OBJECTIVE();
	Function_218();
	Function_209(0);
	Function_208();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_207();
	Function_206();
	Function_211();
	ENABLE_JOURNAL_REPLAY(1);
	Function_205(1);
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
		Function_204(Global_34573);
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
	Function_203(Global_28178);
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
	Function_202(1178687);
	Function_200(33039);
	Function_199(0x218003f);
	Function_198(4194560);
	Function_197();
	Function_196();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_193(0, 1, 1);
	}
	else
	{
		Function_193(0, 1, 1);
	}
	Function_192();
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
	Function_188();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_188() //Position: 0x921F / 37407
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
		if (Function_191() > 3)
		{
			bVar0 *= 2;
		}
		Function_189(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_189(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9275 / 37493
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_190((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_190(bool bParam0) //Position: 0x92BB / 37563
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_191() //Position: 0x92E0 / 37600
{
	return Global_12976.f_156;
}

void Function_192() //Position: 0x92EB / 37611
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_129(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_193(int iParam0, bool bParam1, int iParam2) //Position: 0x9315 / 37653
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
			Function_130(&(Global_29008[Global_29006]), 131072);
			Function_129(&(Global_29008[Global_29006]), 2097152);
			Function_194(Global_29006);
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
				if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_129(&(Global_29008[iVar0]), 2097155);
					Function_130(&(Global_29008[iVar0]), 262144);
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

void Function_194(int iParam0) //Position: 0x9420 / 37920
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_195())
			{
				return;
			}
		}
		if (!Function_159(&(Global_29008[iParam0]), 2048))
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

bool Function_195() //Position: 0x949F / 38047
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_196() //Position: 0x94FC / 38140
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

void Function_197() //Position: 0x9522 / 38178
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

void Function_198(int iParam0) //Position: 0x9548 / 38216
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_199(int iParam0) //Position: 0x9565 / 38245
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_200(int iParam0) //Position: 0x9578 / 38264
{
	Function_201(&Global_28842, iParam0);
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0x9586 / 38278
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_202(bool bParam0) //Position: 0x95A1 / 38305
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_203(int iParam0) //Position: 0x95CE / 38350
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

void Function_204(bool bParam0) //Position: 0x9695 / 38549
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

void Function_205(bool bParam0) //Position: 0x9711 / 38673
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

void Function_206() //Position: 0x9785 / 38789
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

void Function_207() //Position: 0x97C6 / 38854
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

void Function_208() //Position: 0x9807 / 38919
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_209(int iParam0) //Position: 0x981B / 38939
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_210())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_210() //Position: 0x9857 / 38999
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

void Function_211() //Position: 0x987C / 39036
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

int Function_212() //Position: 0x98A7 / 39079
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_213() //Position: 0x98C1 / 39105
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_214(bool bParam0) //Position: 0x98CA / 39114
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

int Function_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9922 / 39202
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
		Function_217(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_216(StackVal);
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

void Function_216(bool bParam0) //Position: 0x9C40 / 40000
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

void Function_217(bool bParam0) //Position: 0x9C6C / 40044
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_218() //Position: 0x9C81 / 40065
{
	Global_8722 = 0.0f;
	return;
}

void Function_219() //Position: 0x9C8B / 40075
{
	if (!bLocal_938)
	{
		if (IS_OBJECT_VALID(bLocal_521))
		{
			DESTROY_OBJECT(bLocal_521);
		}
		if (IS_OBJECT_VALID(bLocal_522))
		{
			DESTROY_OBJECT(bLocal_522);
		}
		if (IS_OBJECT_VALID(bLocal_523))
		{
			DESTROY_OBJECT(bLocal_523);
		}
		if (IS_OBJECT_VALID(bLocal_524))
		{
			DESTROY_OBJECT(bLocal_524);
		}
		if (IS_OBJECT_VALID(bLocal_525))
		{
			DESTROY_OBJECT(bLocal_525);
		}
		if (IS_OBJECT_VALID(bLocal_526))
		{
			DESTROY_OBJECT(bLocal_526);
		}
	}
	if (IS_ACTOR_VALID(bLocal_950))
	{
		RELEASE_ACTOR(bLocal_950);
	}
	if (IS_ACTOR_VALID(bLocal_924))
	{
		DESTROY_ACTOR(bLocal_924);
	}
	if (IS_ACTOR_VALID(bLocal_923))
	{
		RELEASE_ACTOR(bLocal_923);
	}
	if (IS_ACTOR_VALID(bLocal_973))
	{
		SET_ACTOR_FACTION(bLocal_973, 21);
		SET_ACTOR_FACTION(bLocal_923, 21);
		CLEAR_ACTOR_PROOF_ALL(bLocal_973);
		SQUAD_LEAVE(bLocal_973);
		TASK_PRIORITY_SET(bLocal_973, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_973, true);
		GIVE_WEAPON_TO_ACTOR(bLocal_973, 40, false, 1, 1);
		Function_75();
		Function_223(StackVal, StackVal, bLocal_973, Function_75(), 0, 0, 2, 1);
	}
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		Function_222(&Local_4 + 632);
		DESTROY_OBJECT(Local_4.f_632);
	}
	if (SQUAD_IS_VALID(Local_4.f_760))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_760))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bLocal_966);
			if (IS_ACTOR_VALID(bLocal_971))
			{
				SET_ACTOR_PERMANENT(bLocal_971, 0);
			}
			bLocal_966++;
		}
		Function_220(&Local_4 + 760, 1, 0);
		DESTROY_OBJECT(Local_4.f_760);
	}
	if (SQUAD_IS_VALID(Local_4.f_744))
	{
		Function_222(&Local_4 + 744);
		DESTROY_OBJECT(Local_4.f_744);
	}
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_222(&Local_4 + 800);
		DESTROY_OBJECT(Local_4.f_800);
	}
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		Function_222(&Local_4 + 728);
		DESTROY_OBJECT(Local_4.f_728);
	}
	if (SQUAD_IS_VALID(Local_4.f_804))
	{
		Function_222(&Local_4 + 804);
		DESTROY_OBJECT(Local_4.f_804);
	}
	if (SQUAD_IS_VALID(bLocal_518))
	{
		Function_220(&bLocal_518, 1, 0);
		DESTROY_OBJECT(bLocal_518);
	}
	if (SQUAD_IS_VALID(bLocal_519))
	{
		Function_220(&bLocal_519, 1, 0);
		DESTROY_OBJECT(bLocal_519);
	}
	if (SQUAD_IS_VALID(bLocal_520))
	{
		Function_220(&bLocal_520, 1, 0);
		DESTROY_OBJECT(bLocal_520);
	}
	if (IS_OBJECT_VALID(Local_4.f_1960))
	{
		DESTROY_OBJECT(Local_4.f_1960);
	}
	if (IS_OBJECT_VALID(Local_4.f_1856))
	{
		DESTROY_OBJECT(Local_4.f_1856);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 732)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 732)[02]);
	}
	return;
}

void Function_220(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9ECD / 40653
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
				if (!Function_221(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_221(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9F49 / 40777
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_222(bool bParam0) //Position: 0x9F63 / 40803
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_223(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x9FAA / 40874
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_73(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

void Function_224() //Position: 0xA0B2 / 41138
{
	iLocal_541 = iLocal_540;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_538;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_RELEASE_HANDLE(iLocal_541, 1);
	}
	iLocal_541 = iLocal_535;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_536;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_539;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_543;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_542;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_544;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	iLocal_541 = iLocal_545;
	if (FIRE_IS_HANDLE_VALID(iLocal_541))
	{
		FIRE_SET_DECAY_RATE(iLocal_541, 0,001f);
		FIRE_SET_EXPIRE_ALLOWED(iLocal_541, 0);
		FIRE_RELEASE_INFINITE_HANDLE(iLocal_541, 300.0f);
	}
	return;
}

void Function_225() //Position: 0xA239 / 41529
{
	var uVar0[9];
	vector3 vVar10;
	int iVar13;
	
	if (!Function_314())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "S2: Bad Omens";
	uVar0[4] = "S3: Paint it Red";
	uVar0[5] = "Last Stage";
	uVar0[6] = "Dismount De Santa";
	uVar0[7] = "Win Race";
	uVar0[8] = "nLose Race";
	iVar13 = Function_300(&uLocal_619, &uVar0, &Local_547 + 4, 1, 0);
	if (Function_299(&iVar13, &iLocal_633, &iLocal_634, &Local_626))
	{
		Function_292();
		Function_291();
	}
	switch (iVar13)
	{
		case 0x00000000:
			Function_292();
			Function_291();
			if (Function_289(StackVal, StackVal, Global_34573, *(&Local_4 + 1100[16]), 100.0f))
			{
				GET_PATH_POINT(Local_4.f_1932, 5, &vVar10);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, vVar10, 1, true, 1);
			}
			Function_288(&bLocal_938, 8);
			break;
		
		case 0x00000001:
			Function_292();
			Function_291();
			Function_284(iLocal_633);
			Function_280(StackVal, StackVal, 5, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
			break;
		
		case 0x00000002:
			Function_292();
			Function_291();
			Function_276(4);
			Function_1();
			break;
		
		case 0x00000003:
			Function_292();
			Function_291();
			Function_275(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_274();
			Local_626 = 1000;
			iLocal_633 = 1;
			Function_273(0);
			break;
		
		case 0x00000004:
			Function_292();
			Function_291();
			Function_275(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_272();
			Local_626 = 1000;
			iLocal_633 = 2;
			Function_273(0);
			break;
		
		case 0x00000005:
			Function_292();
			Function_291();
			Function_275(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_271();
			Local_626 = 1000;
			iLocal_633 = 101;
			Function_273(0);
			break;
		
		case 0x00000006:
			Function_292();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_921, "default_character_Main/Ride/Riding/Spurring/PoorlyTimed3");
			break;
		
		case 0x00000007:
			Function_292();
			Function_231();
			iLocal_932 = 5;
			ABORT_SCRIPTED_CONVERSATION(0);
			if (IS_OBJECT_VALID(bLocal_951))
			{
				Function_230(bLocal_951);
			}
			Function_211();
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
			Function_228(6, 0, 1);
			Function_226(&iLocal_926);
			iLocal_502 = 1;
			break;
		
		case 0x00000008:
			Function_292();
			Function_231();
			iLocal_932 = 5;
			ABORT_SCRIPTED_CONVERSATION(0);
			if (IS_OBJECT_VALID(bLocal_951))
			{
				Function_230(bLocal_951);
			}
			Function_211();
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
			Function_228(6, 0, 1);
			Function_226(&iLocal_926);
			iLocal_502 = 2;
			break;
	}
	return;
}

void Function_226(int iParam0) //Position: 0xA4F7 / 42231
{
	Function_227(iParam0, 0.0f);
	return;
}

void Function_227(int iParam0, bool bParam1) //Position: 0xA503 / 42243
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_228(int iParam0, bool bParam1, bool bParam2) //Position: 0xA524 / 42276
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
						Function_216(bVar1);
					}
				}
				Function_229(bVar0);
			}
		}
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xA61B / 42523
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

void Function_230(bool bParam0) //Position: 0xA647 / 42567
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

bool Function_231() //Position: 0xA6D1 / 42705
{
	bool bVar0;
	
	if (!iLocal_943)
	{
		if (Function_263())
		{
			Function_260();
			Function_258();
			Function_248();
			if (!IS_ACTORSET_VALID(Local_4.f_928))
			{
				Function_247();
			}
			SQUAD_SET_FACTION(Local_4.f_728, 21);
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0.0f);
			SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,25f);
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 0.0f);
			SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,25f);
			SQUAD_GOALS_CLEAR(Local_4.f_632);
			Function_246(Local_4.f_632);
			GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, false), 0.0f, 0.0f, 3.0f, &vLocal_974);
			TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false), &vLocal_974, 1, 1, 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, false), -1.0f, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false), bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, true), 0.0f, 0.0f, 3.0f, &vLocal_974);
			TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, true), &vLocal_974, 1, 1, 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, true), -1.0f, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, true), bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, 2), 0.0f, 0.0f, 3.0f, &vLocal_974);
			TELEPORT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2), &vLocal_974, 1, 1, 1);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, 2), -1.0f, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2), bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 3), -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_924, -1.0f, 0, 0);
			Function_245(Local_4.f_632, 0);
			DESTROY_OBJECT(Local_4.f_1960);
			DESTROY_OBJECT(Local_4.f_1856);
			if (!IS_ACTOR_VALID(bLocal_923))
			{
				Function_244();
				bLocal_923 = (*&Local_4 + 648)[02];
				ACTOR_MOUNT_ACTOR(bLocal_921, bLocal_923);
				MEMORY_PREFER_RIDING(bLocal_921, true);
			}
			Function_232();
			iLocal_941 = 0;
			iLocal_943 = 1;
			return 1;
		}
	}
	return 1;
	return 0;
}

void Function_232() //Position: 0xA897 / 43159
{
	Function_242();
	if (IS_ACTOR_VALID(bLocal_921))
	{
		Function_237(&(Local_795[017]), bLocal_921, "Henchman", 1, 0x5f5e100, 1);
		Function_233(&(Local_795[017]), 2);
		if (!IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(bLocal_921)))
		{
			if (IS_ACTOR_VALID(bLocal_923))
			{
				SET_MOST_RECENT_MOUNT(bLocal_921, bLocal_923);
			}
		}
	}
	if (IS_ACTOR_VALID(bLocal_924))
	{
		Function_237(&(Local_795[117]), bLocal_924, "Ma01_Captain", 1, 0x5f5e100, 1);
		Function_233(&(Local_795[117]), 2);
		if (!IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(bLocal_924)))
		{
			if (IS_ACTOR_VALID(bLocal_925))
			{
				SET_MOST_RECENT_MOUNT(bLocal_924, bLocal_925);
			}
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		Function_237(&(Local_795[217]), Local_4.f_632, "MexicanSoldier", 1, 0x5f5e100, 1);
		Function_233(&(Local_795[217]), 2);
	}
	if (SQUAD_IS_VALID(Local_4.f_760))
	{
		Function_237(&(Local_795[317]), Local_4.f_760, "MA01_Prisoners", 0, 0x5f5e100, 1);
		Function_233(&(Local_795[317]), 2);
	}
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_237(&(Local_795[417]), Local_4.f_800, "MA01_Prisoners", 0, 0x5f5e100, 1);
		Function_233(&(Local_795[417]), 2);
	}
	if (SQUAD_IS_VALID(Local_4.f_804))
	{
		Function_237(&(Local_795[517]), Local_4.f_804, "MA01_Horses", 0, 0x5f5e100, 1);
		Function_233(&(Local_795[517]), 2);
	}
	else if (IS_ACTOR_VALID(bLocal_923))
	{
		Function_237(&(Local_795[517]), bLocal_923, "Henchman_horse", 0, 0x5f5e100, 1);
		Function_233(&(Local_795[517]), 2);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 732)[02]))
	{
		Function_237(&(Local_795[617]), (*&Local_4 + 732)[02], "MA01_Horses", 0, 0x5f5e100, 1);
		Function_233(&(Local_795[617]), 2);
	}
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0xAAAD / 43693
{
	if (iParam1 != 100000000)
	{
		Function_236(iParam0, iParam1);
	}
	else
	{
		Function_234(iParam0, 1);
	}
	return;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xAACD / 43725
{
	iParam0->f_40 = 0;
	Function_235(iParam0, 2, bParam1);
	Function_235(iParam0, 4, bParam1);
	Function_235(iParam0, 8, bParam1);
	Function_235(iParam0, 16, bParam1);
	Function_235(iParam0, 32, bParam1);
	Function_235(iParam0, 64, bParam1);
	Function_235(iParam0, 128, bParam1);
	Function_235(iParam0, 256, bParam1);
	Function_235(iParam0, 512, bParam1);
	Function_235(iParam0, 1024, bParam1);
	return;
}

void Function_235(int iParam0, int iParam1, bool bParam2) //Position: 0xAB33 / 43827
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

void Function_236(int iParam0, bool bParam1) //Position: 0xAB6F / 43887
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_237(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xAB9A / 43930
{
	if (!Function_241(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_240(iParam0, bParam2))
	{
		return 0;
	}
	Function_239(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_238(iParam0, iParam4, iParam5);
	return 1;
}

void Function_238(var uParam0, int iParam1, int iParam2) //Position: 0xABD6 / 43990
{
	if (iParam1 != 100000000)
	{
		Function_235(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_234(uParam0, iParam2);
	}
	return;
}

void Function_239(var uParam0, int iParam1) //Position: 0xABF9 / 44025
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_240(int iParam0, bool bParam1) //Position: 0xAC05 / 44037
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

bool Function_241(int iParam0, bool bParam1) //Position: 0xAC8E / 44174
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

void Function_242() //Position: 0xAE1A / 44570
{
	Function_243(&(Local_795[017]));
	Function_243(&(Local_795[117]));
	Function_243(&(Local_795[217]));
	Function_243(&(Local_795[317]));
	Function_243(&(Local_795[417]));
	Function_243(&(Local_795[517]));
	Function_243(&(Local_795[617]));
	return;
}

void Function_243(int iParam0) //Position: 0xAE5F / 44639
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

void Function_244() //Position: 0xAF13 / 44819
{
	(*&Local_4 + 648)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CompanionHorse", 977, -4370,921f, 39,18808f, 4352,919f, 0.0f, 150,9545f, 0.0f);
	ACCESSORIZE_HORSE((*&Local_4 + 648)[02], 3);
	SET_ACTOR_FACTION((*&Local_4 + 648)[02], 20);
	return;
}

void Function_245(bool bParam0, int iParam1) //Position: 0xAF6A / 44906
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

void Function_246(bool bParam0) //Position: 0xAFA1 / 44961
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

void Function_247() //Position: 0xAFD3 / 45011
{
	Local_4.f_928 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "nClonesset", 0);
	(*&Local_4 + 892)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier01Clone", 391, -3232.0f, 37,14496f, 4539,051f, 0.0f, -89,32286f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_928, (*&Local_4 + 892)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 892)[02], true);
	TASK_STAND_STILL((*&Local_4 + 892)[02], -1.0f, 0, 0);
	AI_IGNORE_ACTOR((*&Local_4 + 892)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[02], 1);
	(*&Local_4 + 892)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Soldier02Clone", 392, -3232.0f, 37,14496f, 4538,005f, 0.0f, -67,52042f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_928, (*&Local_4 + 892)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[12], 1);
	TASK_PRIORITY_SET((*&Local_4 + 892)[12], true);
	TASK_STAND_STILL((*&Local_4 + 892)[12], -1.0f, 0, 0);
	AI_IGNORE_ACTOR((*&Local_4 + 892)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[12], 1);
	(*&Local_4 + 892)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DeSantaClone", 556, -3232.0f, 37,14496f, 4537,024f, 0.0f, -64,45458f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_928, (*&Local_4 + 892)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[22], 1);
	TASK_PRIORITY_SET((*&Local_4 + 892)[22], true);
	TASK_STAND_STILL((*&Local_4 + 892)[22], -1.0f, 0, 0);
	AI_IGNORE_ACTOR((*&Local_4 + 892)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[22], 1);
	(*&Local_4 + 892)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CaptainClone", 660, -3232.0f, 37,14496f, 4540.0f, 21,60168f, 95,69497f, 20,32903f);
	ADD_ACTORSET_MEMBER(Local_4.f_928, (*&Local_4 + 892)[32]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[32], 20);
	TASK_PRIORITY_SET((*&Local_4 + 892)[32], true);
	TASK_STAND_STILL((*&Local_4 + 892)[32], -1.0f, 0, 0);
	AI_IGNORE_ACTOR((*&Local_4 + 892)[32]);
	SET_ACTOR_FACTION((*&Local_4 + 892)[32], 1);
	return;
}

void Function_248() //Position: 0xB20D / 45581
{
	bool bVar0;
	bool bVar1;
	
	Function_257();
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_728))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bVar0);
		TASK_CLEAR(bVar1);
		SET_ACTOR_FACTION(bVar1, 19);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, 4);
		TASK_CROUCH(bVar1, -1.0f);
		bVar0++;
	}
	GET_OBJECT_POSITION((*&Local_4 + 1348)[22], &vLocal_974);
	Function_256(StackVal, StackVal, "p_gen_barrelsmall01x", vLocal_974, 1.0f);
	Function_253(&Local_4 + 1924);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_4 + 660)[42], 20, 0.0f);
	if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1924)))
	{
		TASK_HIDE_AT_COVER((*&Local_4 + 660)[42], GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1924), -1.0f, 6.0f, 0);
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_728, 2696);
	SQUAD_SET_FACTION(Local_4.f_728, 21);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_728, 0);
	Function_251();
	Function_249();
	return;
}

void Function_249() //Position: 0xB2EB / 45803
{
	bool bVar0;
	bool bVar1;
	
	Function_250();
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_840))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_840, bVar0);
		TASK_CLEAR(bVar1);
		SET_ACTOR_FACTION(bVar1, 19);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, 4);
		TASK_CROUCH(bVar1, -1.0f);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		GIVE_WEAPON_TO_ACTOR(bVar1, 43, false, 1, 1);
		bVar0++;
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_840, 2696);
	SQUAD_SET_FACTION(Local_4.f_840, 21);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_840, 0);
	return;
}

void Function_250() //Position: 0xB368 / 45928
{
	Local_4.f_840 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "MidLeftHouseRebels"));
	(*&Local_4 + 812)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MLHRebel01", 521, -3255,057f, 38,31208f, 4539,454f, 0.0f, 156,675f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[02], Local_4.f_840);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 812)[02], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 812)[02], 21);
	SET_ACTOR_FACTION((*&Local_4 + 812)[02], 19);
	(*&Local_4 + 812)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MLHRebel02", 522, -3256,073f, 38,30597f, 4537,707f, 0.0f, 159,966f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[12], Local_4.f_840);
	SET_ACTOR_FACTION((*&Local_4 + 812)[12], 21);
	SET_ACTOR_FACTION((*&Local_4 + 812)[12], 19);
	(*&Local_4 + 812)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MLHRebel03", 523, -3253,41f, 38,33291f, 4537,442f, 0.0f, -231,7177f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 812)[22], Local_4.f_840);
	SET_ACTOR_FACTION((*&Local_4 + 812)[22], 21);
	SET_ACTOR_FACTION((*&Local_4 + 812)[22], 19);
	return;
}

void Function_251() //Position: 0xB4BB / 46267
{
	bool bVar0;
	bool bVar1;
	
	Function_252();
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_888))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_888, bVar0);
		TASK_CLEAR(bVar1);
		SET_ACTOR_FACTION(bVar1, 19);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, true);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, 4);
		TASK_CROUCH(bVar1, -1.0f);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		GIVE_WEAPON_TO_ACTOR(bVar1, 43, false, 1, 1);
		bVar0++;
	}
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_888, 2696);
	SQUAD_SET_FACTION(Local_4.f_888, 21);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_888, 0);
	return;
}

void Function_252() //Position: 0xB538 / 46392
{
	Local_4.f_888 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "RearRebels"));
	(*&Local_4 + 844)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RearSniper", 529, -3244,914f, 41,45444f, 4540,25f, 0.0f, -252,9317f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 844)[02], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[02], 12, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 844)[02], 21);
	SET_ACTOR_FACTION((*&Local_4 + 844)[02], 19);
	(*&Local_4 + 844)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RearRebel1", 524, -3240,869f, 38,26306f, 4539,958f, 0.0f, 159,966f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 844)[12], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[12], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 844)[12], 21);
	SET_ACTOR_FACTION((*&Local_4 + 844)[12], 19);
	(*&Local_4 + 844)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RearRebel2", 525, -3241,887f, 38,26306f, 4539,083f, 0.0f, -170,5726f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 844)[22], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[22], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 844)[22], 21);
	SET_ACTOR_FACTION((*&Local_4 + 844)[22], 19);
	(*&Local_4 + 844)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RearRebel3", 526, -3243,685f, 39,24794f, 4561,038f, 0.0f, 14,90359f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 844)[32], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[32], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 844)[32], 21);
	SET_ACTOR_FACTION((*&Local_4 + 844)[32], 19);
	(*&Local_4 + 844)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "RearRebel4", 527, -3242,921f, 39,24794f, 4562,129f, 0.0f, 3,449078f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 844)[42], Local_4.f_888);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[42], 43, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 844)[42], 21);
	SET_ACTOR_FACTION((*&Local_4 + 844)[42], 19);
	return;
}

void Function_253(int iParam0) //Position: 0xB78D / 46989
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_255(*iParam0);
	vVar0 = { StackVal, StackVal, Function_255(*iParam0) };
	Function_254(*iParam0);
	vVar3 = { StackVal, StackVal, Function_254(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

vector3 Function_254(bool bParam0) //Position: 0xB859 / 47193
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

vector3 Function_255(bool bParam0) //Position: 0xB880 / 47232
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

void Function_256(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xB8A7 / 47271
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		bVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, fParam4, bParam0, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
		iVar1++;
	}
}

void Function_257() //Position: 0xB8E2 / 47330
{
	Local_4.f_728 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "ChurchRebels"));
	(*&Local_4 + 660)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel01", 521, -3268.0f, 38,54577f, 4553,581f, 0.0f, -47,15805f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[02], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[02], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[02], 19);
	(*&Local_4 + 660)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel02", 522, -3265,274f, 38,14893f, 4537,274f, 0.0f, 159,966f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[12], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[12], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[12], 19);
	(*&Local_4 + 660)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel03", 523, -3259,048f, 39,1528f, 4560.0f, 0.0f, -49,94727f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[22], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[22], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[22], 19);
	(*&Local_4 + 660)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel04", 524, -3257,698f, 39,1528f, 4560f, 0.0f, 14,90359f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[32], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[32], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[32], 19);
	(*&Local_4 + 660)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel05", 525, -3276.0f, 38,1489f, 4543,207f, 0.0f, 146,7507f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[42], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[42], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[42], 19);
	(*&Local_4 + 660)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel06", 526, -3259,438f, 42,39035f, 4558,939f, 0.0f, 62,74254f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[52], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[52], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[52], 19);
	(*&Local_4 + 660)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel07", 527, -3258,801f, 38,98337f, 4567,236f, 137,7531f, 84,53684f, 139,937f);
	SQUAD_JOIN((*&Local_4 + 660)[62], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[62], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[62], 19);
	(*&Local_4 + 660)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ChurchRebel08", 528, -3257,412f, 39,06739f, 4565,631f, 0.0f, 62,74254f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 660)[72], Local_4.f_728);
	SET_ACTOR_FACTION((*&Local_4 + 660)[72], 21);
	SET_ACTOR_FACTION((*&Local_4 + 660)[72], 19);
	return;
}

void Function_258() //Position: 0xBC0C / 48140
{
	bool bVar0;
	bool bVar1;
	
	Function_259();
	Function_237(&(Local_795[417]), Local_4.f_760, "MA01_Prisoners", 1, 0x5f5e100, 1);
	Function_233(&(Local_795[417]), 2);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_760))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bVar0);
		TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
		SET_ACTOR_FACTION(bVar1, 1);
		SET_ANIM_SET_FOR_ACTOR(bVar1, "knl_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(bVar1, "knl_hostage/cower_mid");
		SET_ACTOR_ONE_SHOT_DEATH(bVar1, true);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		SET_ACTOR_PERMANENT(bVar1, 1);
		bVar0++;
	}
	return;
}

void Function_259() //Position: 0xBCBD / 48317
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_760 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nPrisoners"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nPrisoner1", 521, -3300,594f, 39,05015f, 4555,264f, 0.0f, -73,01725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_760);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nPrisoner2", 523, -3299,334f, 39,15283f, 4561,367f, -5,997895f, -69,16182f, 5,432081f);
	SQUAD_JOIN(bVar0, Local_4.f_760);
	SET_ACTOR_FACTION(bVar0, 21);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nPrisoner3", 522, -3299,03f, 39,2028f, 4566,031f, 0.0f, -73,01725f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_760);
	SET_ACTOR_FACTION(bVar0, 21);
	return;
}

void Function_260() //Position: 0xBDA3 / 48547
{
	Function_262();
	bLocal_924 = (*&Local_4 + 748)[02];
	SET_ACTOR_FACTION(bLocal_924, 20);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_924, 0.0f);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_924, false);
	Function_237(&(Local_795[217]), bLocal_924, "Ma01_Captain", 1, 0x5f5e100, 1);
	Function_261();
	bLocal_966 = false;
	while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
	{
		bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
		if (IS_ACTOR_VALID(bLocal_971))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_971, true);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
			GIVE_WEAPON_TO_ACTOR(bLocal_971, 41, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(bLocal_971, 40, false, 1, 1);
		}
		bLocal_966++;
	}
	Function_237(&(Local_795[317]), Local_4.f_632, "MexicanSoldier", 1, 0x5f5e100, 1);
	Function_233(&(Local_795[317]), 2);
	SQUAD_SET_FACTION(Local_4.f_632, 20);
	return;
}

void Function_261() //Position: 0xBE85 / 48773
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Soldiers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSoldier01", 391, -3301,122f, 39,08475f, 4565,962f, 0.0f, 270,6772f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSoldier02", 392, -3302,9f, 38,91334f, 4556,205f, 0.0f, -67,52042f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSoldier03", 393, -3301,1f, 38,96244f, 4561,593f, 0.0f, -64,45458f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSoldier04", 393, -3298,909f, 38,72824f, 4542,097f, 21,60168f, 95,69497f, 20,32903f);
	SQUAD_JOIN(bVar0, Local_4.f_632);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	return;
}

void Function_262() //Position: 0xC064 / 49252
{
	(*&Local_4 + 748)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Vile_Captain", 660, -3300.0f, 38,85654f, 4549,914f, -3,933938f, 102,0515f, -4,15322f);
	SET_ACTOR_FACTION((*&Local_4 + 748)[02], 20);
	return;
}

bool Function_263() //Position: 0xC0B4 / 49332
{
	Function_270(&Local_4 + 360, 521, 2, 0);
	Function_270(&Local_4 + 360, 522, 2, 0);
	Function_270(&Local_4 + 360, 523, 2, 0);
	Function_270(&Local_4 + 360, 524, 2, 0);
	Function_270(&Local_4 + 360, 525, 2, 0);
	Function_270(&Local_4 + 360, 526, 2, 0);
	Function_270(&Local_4 + 360, 527, 2, 0);
	Function_270(&Local_4 + 360, 528, 2, 0);
	Function_270(&Local_4 + 360, 1196, 2, 0);
	Function_270(&Local_4 + 360, 996, 2, 0);
	Function_270(&Local_4 + 360, 529, 2, 0);
	if (Function_264(&Local_4 + 360))
	{
		return 1;
	}
	return 0;
}

bool Function_264(bool bParam0) //Position: 0xC162 / 49506
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_269();
	iVar1 = 0;
	if (!Function_186(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_268(bParam0[iVar03], 8);
		}
		else if (Function_267())
		{
			iVar1 = 1;
			Function_268(bParam0[iVar03], 8);
		}
		Function_268(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_186(bParam0[iVar03], 4))
		{
			if (!Function_186(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_186(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_186(bParam0[03], 8) || iVar1));
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
				Function_268(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_186(bParam0[iVar03], 4))
		{
			if (!Function_186(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_268(bParam0[iVar03], 2);
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
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_268(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_268(bParam0[iVar03], 2);
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
	Function_265();
	return 1;
}

void Function_265() //Position: 0xC4DD / 50397
{
	if (!Function_266(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_266(int iParam0) //Position: 0xC51D / 50461
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_267() //Position: 0xC539 / 50489
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

void Function_268(var uParam0, int iParam1) //Position: 0xC564 / 50532
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_269() //Position: 0xC575 / 50549
{
	if (!Function_266(128))
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

var Function_270(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC5B7 / 50615
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_186(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_268(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_268(uParam0[iVar03], 8);
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

void Function_271() //Position: 0xC687 / 50823
{
	Function_162(2);
	Function_162(1);
	Function_162(4);
	Function_130(&(Global_29008[Global_30685[2]]), 256);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	return;
}

void Function_272() //Position: 0xC6B1 / 50865
{
	bool bVar0;
	
	Function_211();
	if (!SQUAD_IS_VALID(Local_4.f_760))
	{
		Local_4.f_760 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, Function_53()));
		Function_243(&(Local_795[417]));
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(false, (*&Local_4 + 1348)[1], 2, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_924, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1348)[1], 5.0f, 2, 0, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_921, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
	CLEAR_ACTOR_MAX_SPEED(bLocal_923);
	CLEAR_ACTOR_MIN_SPEED(bLocal_923);
	CLEAR_ACTOR_MAX_SPEED(bLocal_921);
	CLEAR_ACTOR_MIN_SPEED(bLocal_921);
	return;
}

void Function_273(int iParam0) //Position: 0xC756 / 51030
{
	char* cVar0[32];
	
	Function_226(&iLocal_926);
	iLocal_634 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_633)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "POST CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_274() //Position: 0xC8FB / 51451
{
	Function_211();
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
	TASK_STAND_STILL(bLocal_921, -1.0f, 0, 0);
	return;
}

void Function_275(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC913 / 51475
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

void Function_276(int iParam0) //Position: 0xC93C / 51516
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_279("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_278(2) || Function_278(8)) || Function_278(9)) || Function_278(10))
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
		Function_279("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_279("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_279("");
	}
	else if (iParam0 == 8)
	{
		Function_277();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_277();
	}
	return;
}

void Function_277() //Position: 0xCA33 / 51763
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_278(int iParam0) //Position: 0xCA3F / 51775
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

void Function_279(bool bParam0) //Position: 0xCA75 / 51829
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_280(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xCADF / 51935
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_281(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_276(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_281(vector3 vParam0, var uParam3, var uParam4) //Position: 0xCB1C / 51996
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_283(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_282(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_282(int iParam0) //Position: 0xCB9F / 52127
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

var Function_283(vector3 vParam0, bool bParam3) //Position: 0xD04D / 53325
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

vector3 Function_284(bool bParam0) //Position: 0xD0B8 / 53432
{
	Function_285(bParam0 + 1);
	return StackVal, StackVal, Function_285(bParam0 + 1);
}

vector3 Function_285(bool bParam0) //Position: 0xD0C5 / 53445
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_4 + 1100[16]);
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_4 + 1100[26]);
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_4 + 1100[26]);
		
		case 0x00000065:
			return StackVal, StackVal, *(&Local_4 + 1100[46]);
		
		default:
	}
	return StackVal, StackVal, *(&Local_4 + 1100[46]);
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, StackVal, *(&Local_4 + 1100[16]);
}

int Function_286(bool bParam0) //Position: 0xD18F / 53647
{
	return Function_287(bParam0 + 1);
}

int Function_287(bool bParam0) //Position: 0xD19C / 53660
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal;
		
		case 0x00000001:
			return StackVal;
		
		case 0x00000002:
			return StackVal;
		
		case 0x00000065:
			return StackVal;
		
		default:
	}
	return StackVal;
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_288(bool bParam0, int iParam1) //Position: 0xD272 / 53874
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_276(iParam1);
	*bParam0 = 1;
	return;
}

bool Function_289(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD295 / 53909
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_290(bParam0);
		if (VDIST(Function_290(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_290(bool bParam0) //Position: 0xD31F / 54047
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

void Function_291() //Position: 0xD389 / 54153
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_292() //Position: 0xD39E / 54174
{
	Function_294();
	Function_293(10, 3);
	return;
}

void Function_293(int iParam0, int iParam1) //Position: 0xD3AD / 54189
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

void Function_294() //Position: 0xD4E4 / 54500
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_298())
	{
		Function_297(10, 3);
	}
	else
	{
		Function_295();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_295() //Position: 0xD52F / 54575
{
	Function_296(25, 2);
	return;
}

void Function_296(int iParam0, int iParam1) //Position: 0xD53B / 54587
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

void Function_297(int iParam0, int iParam1) //Position: 0xD739 / 55097
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

bool Function_298() //Position: 0xD870 / 55408
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
				if (!Function_153(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_299(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD8D7 / 55511
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_292();
			Function_291();
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
		Function_279("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_300(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD97D / 55677
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_313(&Var15, &Var0);
	uVar20 = Function_312(*uParam1, &Var15);
	Function_311(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_310(uParam0, uVar20);
	Function_308(StackVal, uParam0, Var15.f_12);
	Function_306(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_305(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_302(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_301(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_301(int iParam0, int iParam1, int iParam2) //Position: 0xDA44 / 55876
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

bool Function_302(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xDAA0 / 55968
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
				Function_304(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_304(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_301(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_303(bParam1->f_32);
	}
	else
	{
		Function_303(bParam1->f_32);
	}
	return 0;
}

void Function_303(bool bParam0) //Position: 0xDC26 / 56358
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

void Function_304(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xDC60 / 56416
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

var Function_305(int iParam0, var uParam1, int iParam2) //Position: 0xDD0E / 56590
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_306(var uParam0, int iParam1, int iParam2) //Position: 0xDD32 / 56626
{
	switch (Function_307())
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

int Function_307() //Position: 0xDDCE / 56782
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

void Function_308(var uParam0, int iParam1, int iParam2) //Position: 0xDE0A / 56842
{
	switch (Function_309(uParam0))
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

int Function_309(int iParam0) //Position: 0xDEA2 / 56994
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_153(*iParam0, 0x40000000))
		{
			Function_76(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_153(*iParam0, 0x40000000))
		{
			Function_76(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_153(*iParam0, 0x20000000))
		{
			Function_76(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_153(*iParam0, 0x20000000))
		{
			Function_76(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(iParam0, 0x20000000);
	return 0;
}

var Function_310(var uParam0, int iParam1) //Position: 0xDFED / 57325
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

void Function_311(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE13C / 57660
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

var Function_312(int iParam0, int iParam1) //Position: 0xE1CF / 57807
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_313(var uParam0, var uParam1) //Position: 0xE1E9 / 57833
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

bool Function_314() //Position: 0xE237 / 57911
{
	return Global_30920;
}

bool Function_315() //Position: 0xE240 / 57920
{
	if (IS_EXITFLAG_SET())
	{
		Function_284(iLocal_633);
		Function_280(StackVal, StackVal, 4, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
		return 0;
	}
	Function_612(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_547, iLocal_633, iLocal_634, &bLocal_940, &bLocal_938, &bLocal_939);
	Function_609();
	if (iLocal_633 == 99 && iLocal_633 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_284(iLocal_633);
			Function_280(StackVal, StackVal, 1, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
			return 1;
		}
		if (Function_608(2048))
		{
			Function_284(iLocal_633);
			Function_280(StackVal, StackVal, 3, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
			return 1;
		}
		if (Function_588(&Local_795, &uLocal_755, &uLocal_915, cLocal_920, iLocal_941))
		{
			if (Function_575(&uLocal_915))
			{
				Function_284(iLocal_633);
				Function_280(StackVal, StackVal, 5, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
				return 1;
			}
		}
		Function_574();
	}
	switch (iLocal_633)
	{
		case 0x00000063:
			Function_524();
			break;
		
		case 0x00000000:
			Function_488();
			break;
		
		case 0x00000001:
			Function_432();
			break;
		
		case 0x00000002:
			Function_368();
			break;
		
		case 0x00000065:
			Function_319();
			break;
		
		case 0x00000064:
			if (Function_318(&bLocal_939))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_317(&iLocal_633, &iLocal_634, &Local_626))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_938)
	{
		Function_288(&bLocal_938, 8);
		Function_1();
		return 0;
	}
	if (bLocal_939 && iLocal_633 == 100)
	{
		Function_284(iLocal_633);
		Function_280(StackVal, StackVal, 5, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
	}
	if (bLocal_940)
	{
		Function_316(&bLocal_940, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_316(var uParam0, int iParam1) //Position: 0xE3CA / 58314
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_276(iParam1);
	*uParam0 = 1;
	return;
}

bool Function_317(var uParam0, var uParam1, int iParam2) //Position: 0xE3ED / 58349
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

bool Function_318(int iParam0) //Position: 0xE42D / 58413
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_319() //Position: 0xE440 / 58432
{
	Function_366();
	switch (iLocal_634)
	{
		case 0x00000000:
			Function_362(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (!iLocal_934[2])
			{
				Function_275(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_359();
				bLocal_635 = Function_358(StackVal, StackVal, *(&Local_4 + 1100[46]), 0, 1, 1);
				if (!Function_357(bLocal_635))
				{
					Function_356(&Local_547);
				}
				Function_355();
				Function_273(1);
			}
			else
			{
				Function_273(2);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_357(bLocal_635) || bLocal_635 != 4294967295))
			{
				Function_273(2);
			}
			break;
		
		case 0x00000002:
			Function_354(1.0f);
			Function_350();
			Function_273(6);
			break;
		
		case 0x00000006:
			if (Function_320("$/cutscene/MexArmy01_CS04/MexArmy01_CS04", &Local_626, &Local_547, &iLocal_633, 63436, 63413, 62208, 61893, 61633, 61626, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (IS_ACTOR_VALID(bLocal_973))
				{
					SET_ACTOR_FACTION(bLocal_973, 21);
					SET_ACTOR_FACTION(bLocal_923, 21);
					CLEAR_ACTOR_PROOF_ALL(bLocal_973);
					SQUAD_LEAVE(bLocal_973);
					TASK_PRIORITY_SET(bLocal_973, 2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_973, true);
					GIVE_WEAPON_TO_ACTOR(bLocal_973, 40, false, 1, 1);
					Function_75();
					Function_223(StackVal, StackVal, bLocal_973, Function_75(), 0, 0, 2, 1);
				}
				Function_226(&iLocal_926);
				Function_354(1.0f);
				Function_273(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_938 = true;
			}
			break;
	}
	return;
}

bool Function_320(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xE5C3 / 58819
{
	if (!bParam15)
	{
		Function_332(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*bParam3 != 99 && (Function_331(iParam2) || iParam2->f_24 < 1))
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
				Function_226(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_330())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_329(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(iParam1 + 4);
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
					Function_329(1);
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
						Function_324(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_329(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(iParam1 + 4);
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
						Function_354(1.0f);
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
						Function_322();
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
					Function_321(1);
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
			if ((HUD_IS_FADED() && *bParam3 == 99) && !Function_331(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_321(bool bParam0) //Position: 0xEBD7 / 60375
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

void Function_322() //Position: 0xEC7C / 60540
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_323();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_323() //Position: 0xECC1 / 60609
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_324(bool bParam0, bool bParam1) //Position: 0xECD3 / 60627
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
			if ((bVar3 == Global_34573 && !Function_325(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_325(bool bParam0) //Position: 0xED53 / 60755
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

float Function_326(int iParam0) //Position: 0xED82 / 60802
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

bool Function_327(int iParam0) //Position: 0xEE4A / 61002
{
	return Function_153(*iParam0, 2);
}

bool Function_328(int iParam0) //Position: 0xEE57 / 61015
{
	return Function_153(*iParam0, 1);
}

int Function_329(bool bParam0) //Position: 0xEE64 / 61028
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

bool Function_330() //Position: 0xEF1C / 61212
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

bool Function_331(int iParam0) //Position: 0xEF56 / 61270
{
	return iParam0->f_20;
}

void Function_332(var uParam0, int iParam1) //Position: 0xEF60 / 61280
{
	Function_333(uParam0, iParam1, 0);
	return;
}

void Function_333(var uParam0, bool bParam1, bool bParam2) //Position: 0xEF6E / 61294
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
			Function_275(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_275(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_334() //Position: 0xF0BA / 61626
{
	return 1;
}

int Function_335() //Position: 0xF0C1 / 61633
{
	Function_336(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_336(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xF0D5 / 61653
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
		Function_291();
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
	Function_321(bParam9);
}

int Function_337() //Position: 0xF1C5 / 61893
{
	Function_338(Global_34573, (*&Local_4 + 1756)[0], 0, 0, 0);
	GET_OBJECT_POSITION((*&Local_4 + 1756)[1], &vLocal_974);
	ENABLE_GAME_CAMERA_FOCUS(vLocal_974, -1.0f, 0, 0, 1, 0);
	return 1;
}

void Function_338(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xF1F9 / 61945
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

int Function_339() //Position: 0xF300 / 62208
{
	if (Function_340() && Function_263())
	{
		return 1;
	}
	return 0;
}

bool Function_340() //Position: 0xF313 / 62227
{
	Function_270(&Local_4 + 4, 391, 2, 0);
	Function_270(&Local_4 + 4, 392, 2, 0);
	Function_270(&Local_4 + 4, 393, 2, 0);
	Function_270(&Local_4 + 4, 976, 2, 0);
	Function_270(&Local_4 + 4, 977, 2, 0);
	Function_270(&Local_4 + 4, 660, 2, 0);
	Function_270(&Local_4 + 4, 247, 2, 0);
	Function_270(&Local_4 + 4, 240, 2, 0);
	Function_270(&Local_4 + 4, 239, 2, 0);
	Function_270(&Local_4 + 4, 250, 2, 0);
	Function_270(&Local_4 + 4, 986, 2, 0);
	Function_270(&Local_4 + 4, 991, 2, 0);
	Function_270(&Local_4 + 4, 989, 2, 0);
	Function_270(&Local_4 + 4, 987, 2, 0);
	Function_270(&Local_4 + 4, 556, 2, 0);
	Function_341(&Local_4 + 4, "p_gen_molotovCrate01x", 0, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/pickup_molotov", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/mex_cry_overbody", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/mex_prayer_oldwoman", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/oldf_pray", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/soldier_banging_on_door", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/tense_with_guns", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stool_sit_attach_indef", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_341(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand_indef", 1, 0);
	if (Function_264(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_341(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF6B9 / 63161
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_342(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_268(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_342(var uParam0, int iParam1, int iParam2) //Position: 0xF6F1 / 63217
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_186(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_268(uParam0[iVar03], 4);
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

int Function_343() //Position: 0xF7B5 / 63413
{
	if (!Function_340() && Function_263())
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int Function_344() //Position: 0xF7CC / 63436
{
	Function_362(0);
	Function_347(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 996)[1], 1, 1, 1, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
	Function_345(StackVal, StackVal, bLocal_546, vLocal_974, &Local_4 + 996[1], 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_345(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xF815 / 63509
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
				Function_346(bVar1, bParam0);
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

void Function_346(bool bParam0, bool bParam1) //Position: 0xFA83 / 64131
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

void Function_347(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xFAF8 / 64248
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
	Function_291();
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
				Function_349(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_349(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_348()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_348()));
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
	if (Function_266(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_266(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_348() //Position: 0xFDA1 / 64929
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

vector3 Function_349(bool bParam0) //Position: 0xFE20 / 65056
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_350() //Position: 0xFE31 / 65073
{
	if (!IS_ACTOR_VALID(bLocal_973))
	{
		bLocal_973 = CREATE_ACTOR_IN_LAYOUT(Local_4, "nSoldier04", 393, -3298,587f, 39,34971f, 4571,171f, 21,60168f, 95,69497f, 20,32903f);
		SET_ACTOR_FACTION(bLocal_973, 20);
		TASK_PRIORITY_SET(bLocal_973, true);
		TASK_STAND_STILL(bLocal_973, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(bLocal_973, 0, 0);
	}
	vLocal_655[09].f_28 = 1;
	vLocal_655[09].f_24 = 0;
	vLocal_655[19].f_28 = 1;
	vLocal_655[19].f_32 = 1;
	vLocal_655[19].f_24 = 0;
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[09], false);
	SET_DOOR_AUTO_CLOSE(vLocal_655[09], 0);
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[19], true);
	SET_DOOR_AUTO_CLOSE(vLocal_655[19], 0);
	Function_351();
	AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
	if (IS_ACTOR_VALID(bLocal_921))
	{
		Function_215(6, 1, 0, 1, 1);
	}
	return;
}

bool Function_351() //Position: 0xFF16 / 65302
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	if (!Function_357(Global_30685[2]))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!IS_DOOR_VALID(vLocal_655[iVar09]))
		{
			vLocal_655[iVar09] = Function_352("tesoroAzul", &vLocal_655[iVar09] + 4, vLocal_655[iVar09].f_20);
		}
		if (IS_DOOR_VALID(vLocal_655[iVar09]))
		{
			if (vLocal_655[iVar09].f_24)
			{
				if (!IS_DOOR_LOCKED(vLocal_655[iVar09]))
				{
					Function_120(vLocal_655[iVar09], 1);
				}
			}
			else if (IS_DOOR_LOCKED(vLocal_655[iVar09]))
			{
				Function_154(vLocal_655[iVar09], 1);
				if (vLocal_655[iVar09].f_28)
				{
					if (!IS_DOOR_OPENED(vLocal_655[iVar09]) && !IS_DOOR_OPENING(vLocal_655[iVar09]))
					{
						OPEN_DOOR_DIRECTION(vLocal_655[iVar09], vLocal_655[iVar09].f_32);
					}
				}
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

int Function_352(var uParam0, var uParam1, int iParam2) //Position: 0x10008 / 65544
{
	return Function_353(Global_29006, uParam0, uParam1, iParam2);
}

int Function_353(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x1001A / 65562
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

void Function_354(bool bParam0) //Position: 0x100B6 / 65718
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

void Function_355() //Position: 0x100D3 / 65747
{
	Function_162(2);
	Function_162(1);
	Function_162(4);
	Function_130(&(Global_29008[Global_30685[2]]), 256);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1100[46]), 1, true, 1);
	Function_193(1, 0, 1);
	return;
}

void Function_356(int iParam0) //Position: 0x10122 / 65826
{
	if (!Function_331(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_193(1, 0, 1);
		}
	}
	return;
}

bool Function_357(bool bParam0) //Position: 0x1013D / 65853
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_358(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0x10159 / 65881
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && iParam3))
				{
					iVar1 = iVar0;
					if (!(StackVal != 6 && iParam4))
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
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_359() //Position: 0x101E9 / 66025
{
	Function_199(256);
	Function_162(13);
	if (iLocal_633 >= 0)
	{
		Function_162(2);
		Function_162(1);
		Function_162(4);
		Function_130(&(Global_29008[Global_30685[2]]), 256);
	}
	Function_360(4);
	return;
}

void Function_360(int iParam0) //Position: 0x10222 / 66082
{
	Function_361(&Global_28842, iParam0);
	return;
}

void Function_361(var uParam0, int iParam1) //Position: 0x10230 / 66096
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_362(bool bParam0) //Position: 0x10253 / 66131
{
	Function_363(0, 0x40400000);
	Function_207();
	Function_206();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_363(bool bParam0, float fParam1) //Position: 0x10287 / 66183
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
	Function_365();
	Function_364();
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

void Function_364() //Position: 0x10385 / 66437
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_365() //Position: 0x103B7 / 66487
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

void Function_366() //Position: 0x104B4 / 66740
{
	if (!Function_367(iLocal_634))
	{
		return;
	}
	return;
}

bool Function_367(int iParam0) //Position: 0x104C5 / 66757
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_368() //Position: 0x104FC / 66812
{
	bool bVar0;
	vector3 vVar1;
	
	Function_428();
	switch (iLocal_634)
	{
		case 0x00000000:
			Function_362(0);
			Function_427(bLocal_921);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 996)[2]))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
			}
			if (!iLocal_934[1])
			{
				Function_275(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_359();
				bLocal_635 = Function_358(StackVal, StackVal, *(&Local_4 + 1100[36]), 0, 1, 1);
				if (!Function_357(bLocal_635))
				{
					Function_356(&Local_547);
				}
				Function_426();
				Function_273(1);
			}
			else
			{
				Function_273(2);
			}
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && (Function_357(bLocal_635) || bLocal_635 != 4294967295)) && Function_425()) && Function_264(&bLocal_585))
			{
				if (Function_351())
				{
					Function_273(2);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_547, iLocal_633))
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_285(iLocal_633);
				Function_417(StackVal, StackVal, Function_285(iLocal_633), iLocal_633, Global_30633[0], Function_287(iLocal_633), 0);
				Function_273(3);
			}
			else if (Function_406())
			{
				Function_404();
				Function_403();
				Function_338(bLocal_924, (*&Local_4 + 1644)[18], 1, 1, 1);
				Function_338(bLocal_921, (*&Local_4 + 1644)[19], 1, 1, 1);
				Function_338(Global_34573, (*&Local_4 + 1644)[0], 0, 0, 0);
				GET_OBJECT_POSITION((*&Local_4 + 1644)[25], &vLocal_974);
				ENABLE_GAME_CAMERA_FOCUS(vLocal_974, -1.0f, 0, 0, 1, 0);
				SET_GAME_CAMERA_DRIFTZ(-1.0f);
				Function_285(iLocal_633);
				Function_417(StackVal, StackVal, Function_285(iLocal_633), iLocal_633, Global_30633[0], Function_287(iLocal_633), 0);
				Function_273(4);
			}
			break;
		
		case 0x00000003:
			if (Function_320("$/cutscene/MexArmy01_CS03_B/MexArmy01_CS03_B", &Local_626, &Local_547, &iLocal_633, 77113, 76963, 76940, 76823, 76803, 76788, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(&iLocal_926);
				Function_354(1.0f);
				Function_273(4);
			}
			break;
		
		case 0x00000004:
			Function_396();
			Function_354(1.0f);
			Function_273(6);
			break;
		
		case 0x00000006:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_326(&iLocal_926) < 7.0f)
			{
				bLocal_945 = true;
				if (!_GET_AMMO_AMOUNT(Global_34573, 4, 0) < 0.0f || GET_WEAPON_IN_HAND(Global_34573) != 23)
				{
					bLocal_953 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1348)[11], 335, 0f, 2, 0);
					SET_BLIP_NAME(bLocal_953, "MA01_FireBottlesBlip");
					if (!iLocal_981)
					{
						Function_395();
						iLocal_981 = 1;
					}
					else
					{
						Function_394();
					}
					Function_393("MexArmy01_obj02a");
					Function_392(&iLocal_995);
				}
				Function_273(7);
			}
			break;
		
		case 0x00000007:
			if (!Function_372())
			{
				GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vVar1);
				bVar0 = Function_371(StackVal, StackVal, Global_34573, vVar1);
				if (bVar0 < 150.0f)
				{
					Function_279("MexArmy01_tesoroAbandon");
					bLocal_939 = true;
				}
				else if (bVar0 < 75.0f)
				{
					if (!IS_BLIP_VALID(bLocal_952))
					{
						Function_393("MexArmy01_tesoroReturnObj");
						bLocal_952 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1348)[1], 330, 0f, 2, 0);
					}
				}
				else if (IS_BLIP_VALID(bLocal_952))
				{
					REMOVE_BLIP(bLocal_952);
				}
			}
			else
			{
				Function_226(&iLocal_926);
				Function_273(106);
			}
			break;
		
		case 0x0000006A:
			if (Function_326(&iLocal_926) <= 5.0f)
			{
				Function_370();
				Function_369();
				iLocal_934[2] = 1;
				iLocal_633 = 101;
				Function_273(0);
			}
			break;
	}
	return;
}

void Function_369() //Position: 0x108A6 / 67750
{
	Function_242();
	return;
}

void Function_370() //Position: 0x108AF / 67759
{
	if (!FIRE_IS_HANDLE_VALID(iLocal_540))
	{
		iLocal_540 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_540, (*&Local_4 + 1064)[3], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_540, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_540, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_538))
	{
		iLocal_538 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_538, (*&Local_4 + 1064)[1], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_538, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_538, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_535))
	{
		iLocal_535 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_535, (*&Local_4 + 1064)[4], 10, 1);
		FIRE_SET_MAX_FLAMES(iLocal_535, 10);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_535, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_536))
	{
		iLocal_536 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_536, (*&Local_4 + 1064)[2], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_536, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_536, 0,75f);
		bLocal_527 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_546, "BackBuildFire", "script_dwelling01fire_MexArmy01", -3280.0f, 39.0f, 4561.0f);
		UNK_0x6745191B(bLocal_527, 0.0f, 0.0f, 0.0f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_539))
	{
		iLocal_539 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_539, (*&Local_4 + 932)[3], 10, 1);
		FIRE_SET_MAX_FLAMES(iLocal_539, 10);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_542))
	{
		iLocal_542 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_542, (*&Local_4 + 932)[3], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_542, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_542, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_543))
	{
		iLocal_543 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_543, (*&Local_4 + 932)[5], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_543, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_543, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_544))
	{
		iLocal_544 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_544, (*&Local_4 + 1064)[5], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_544, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_544, 0,75f);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_545))
	{
		iLocal_545 = FIRE_CREATE_HANDLE();
		FIRE_CREATE_IN_VOLUME(iLocal_545, (*&Local_4 + 1064)[6], 5, 1);
		FIRE_SET_MAX_FLAMES(iLocal_545, 5);
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_545, 0,75f);
	}
	return;
}

bool Function_371(bool bParam0, vector3 vParam1) //Position: 0x10AD8 / 68312
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_290(bParam0);
		vVar0 = { StackVal, StackVal, Function_290(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

bool Function_372() //Position: 0x10B52 / 68434
{
	Function_391();
	Function_390();
	Function_388();
	if ((Function_378("SWBuilding:", (*&Local_4 + 932)[3], (*&Local_4 + 1448)[0], &iLocal_496, &iLocal_499, &uLocal_503, &uLocal_515, &bLocal_527, "SWHouseFire", "script_dwelling01fire_MexArmy01", -3280.0f, 39.0f, 4561.0f, &uLocal_530) && Function_378("NEBuilding:", (*&Local_4 + 932)[4], (*&Local_4 + 1448)[1], &iLocal_497, &iLocal_500, &uLocal_506, &bLocal_516, &bLocal_528, "NEHouseFire", "script_dwelling03fire_MexArmy01", -3243.0f, 38.0f, 4538.0f, &uLocal_531)) && Function_378("SEBuilding:", (*&Local_4 + 932)[5], (*&Local_4 + 1448)[2], &iLocal_498, &iLocal_501, &uLocal_509, &bLocal_517, &bLocal_529, "SEHouseFire", "script_dwelling02fire_MexArmy01", -3246.0f, 39.0f, 4561.0f, &uLocal_532))
	{
		if (IS_BLIP_VALID(bLocal_953))
		{
			REMOVE_BLIP(bLocal_953);
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		return 1;
	}
	if (Function_377())
	{
		if (IS_BLIP_VALID(bLocal_953))
		{
			Function_279("MA01_FireBottlesDestroyed");
			Function_284(iLocal_633);
			Function_280(StackVal, StackVal, 5, &bLocal_939, &iLocal_633, Function_286(iLocal_633), Function_284(iLocal_633), 0);
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_546, "PlayerFlees"))
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1020)[5]))
		{
			Function_374();
			DECOR_SET_BOOL(bLocal_546, "PlayerFlees", true);
		}
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1020)[5]))
	{
		DECOR_REMOVE(bLocal_546, "PlayerFlees");
	}
	Function_373();
	return 0;
}

void Function_373() //Position: 0x10D8C / 69004
{
	if (GET_TASK_STATUS(bLocal_973, 0) != 1)
	{
		switch (iLocal_968)
		{
			case 0x00000001:
				GET_VOLUME_CENTER((*&Local_4 + 1064)[0], &vLocal_974);
				bLocal_966 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1348)[14], 0,5f, 1, 1, 1);
				TASK_FACE_COORD(false, &vLocal_974, 0);
				TASK_SHOOT_AT_COORD(false, &vLocal_974, 5.0f);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_973, bLocal_966);
				TASK_SEQUENCE_RELEASE(bLocal_966, 1);
				AI_SET_SHOTS_PER_BURST(bLocal_973, 1);
				AI_SET_FIRE_DELAY(bLocal_973, 4.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_973, 16, true);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_973, 3.0f, 5.0f);
				SET_ACTOR_PROOF(bLocal_973, 16);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_973, 1);
				iLocal_968 = 2;
				break;
			
			case 0x00000002:
				GET_OBJECT_POSITION((*&Local_4 + 1348)[21], &vLocal_974);
				bLocal_966 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1348)[15], 0,5f, 1, 1, 1);
				TASK_FACE_COORD(false, &vLocal_974, 0);
				TASK_SHOOT_AT_COORD(false, &vLocal_974, 5.0f);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_973, bLocal_966);
				TASK_SEQUENCE_RELEASE(bLocal_966, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_973, 16, true);
				AI_SET_SHOTS_PER_BURST(bLocal_973, 1);
				AI_SET_FIRE_DELAY(bLocal_973, 4.0f);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_973, 3.0f, 5.0f);
				SET_ACTOR_PROOF(bLocal_973, 16);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_973, 1);
				iLocal_968 = 3;
				break;
			
			case 0x00000003:
				GET_VOLUME_CENTER((*&Local_4 + 1064)[3], &vLocal_974);
				bLocal_966 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1348)[16], 0,5f, 1, 1, 1);
				TASK_FACE_COORD(false, &vLocal_974, 0);
				TASK_SHOOT_AT_COORD(false, &vLocal_974, 5.0f);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_973, bLocal_966);
				TASK_SEQUENCE_RELEASE(bLocal_966, 1);
				AI_SET_SHOTS_PER_BURST(bLocal_973, 1);
				AI_SET_FIRE_DELAY(bLocal_973, 4.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_973, 16, true);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_973, 3.0f, 5.0f);
				SET_ACTOR_PROOF(bLocal_973, 16);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_973, 1);
				iLocal_968 = 4;
				break;
			
			case 0x00000004:
				GET_VOLUME_CENTER((*&Local_4 + 1064)[2], &vLocal_974);
				bLocal_966 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1348)[17], 0,5f, 1, 1, 1);
				TASK_FACE_COORD(false, &vLocal_974, 0);
				TASK_SHOOT_AT_COORD(false, &vLocal_974, 5.0f);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_973, bLocal_966);
				TASK_SEQUENCE_RELEASE(bLocal_966, 1);
				AI_SET_SHOTS_PER_BURST(bLocal_973, 1);
				AI_SET_FIRE_DELAY(bLocal_973, 4.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_973, 16, true);
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bLocal_973, 3.0f, 5.0f);
				SET_ACTOR_PROOF(bLocal_973, 16);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_973, 1);
				iLocal_968 = 1;
				break;
			
			default:
				iLocal_968 = 1;
				break;
			}
	}
	return;
}

void Function_374() //Position: 0x10FE6 / 69606
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_TriesToLeaveTes", "MexArmy01_TriesToLeaveTes", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375(int iParam0) //Position: 0x11042 / 69698
{
	Function_376(0, Global_34573, iParam0, 0);
	Function_376(1, bLocal_921, iParam0, 0);
	Function_376(2, bLocal_924, iParam0, 0);
	Function_376(4, bLocal_973, iParam0, 0);
	return;
}

void Function_376(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x11070 / 69744
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_377() //Position: 0x11095 / 69781
{
	bLocal_966 = false;
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
	{
		if (!iLocal_1008)
		{
			iLocal_1008 = 1;
		}
	}
	if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_521)))
	{
		if (IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(bLocal_524)) || !IS_PHYSINST_VALID(GET_PHYSINST_FROM_OBJECT(bLocal_524)))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_521), false);
		}
	}
	else
	{
		bLocal_966++;
	}
	if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_522)))
	{
		if (IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(bLocal_525)) || !IS_PHYSINST_VALID(GET_PHYSINST_FROM_OBJECT(bLocal_525)))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_522), false);
		}
	}
	else
	{
		bLocal_966++;
	}
	if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bLocal_523)))
	{
		if (IS_PROP_BROKEN(GET_PHYSINST_FROM_OBJECT(bLocal_526)) || !IS_PHYSINST_VALID(GET_PHYSINST_FROM_OBJECT(bLocal_526)))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_523), false);
		}
		if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(bLocal_523))
		{
			if (!iLocal_1008)
			{
				iLocal_1008 = 1;
			}
		}
	}
	else
	{
		bLocal_966++;
	}
	if (iLocal_1008)
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
		{
			iLocal_1008 = 0;
		}
	}
	if (bLocal_966 == 3)
	{
		return 1;
	}
	return 0;
}

bool Function_378(bool bParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, int iParam5, int iParam6, var uParam7, bool bParam8, bool bParam9, vector3 vParam10, var uParam13) //Position: 0x11199 / 70041
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar2 = false;
	iVar3 = 4;
	if (Function_386(Global_34573, bParam1) >= 15.0f)
	{
		switch (iLocal_969)
		{
			case 0x00000001:
				if (ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 23))
				{
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_132("MexArmy01_throwTutorial1", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_969 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if (ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 23))
				{
					if (IS_PLAYER_WEAPON_ZOOMED(Global_34573))
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_132("MexArmy01_throwTutorial2", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_969 = 3;
					}
				}
				break;
			
			case 0x00000003:
				if (ACTOR_HAS_WEAPON_IN_HAND(Global_34573, 23))
				{
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_132("MexArmy01_throwTutorial3", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_969 = 4;
					}
				}
				break;
			}
	}
	switch (*uParam3)
	{
		case 0x00000000:
			switch (*uParam4)
			{
				case 0x00000000:
					iVar0 = 0;
					if (COUNT_FLAMES_IN_VOLUME(bParam1) >= iVar3)
					{
						if (!iLocal_947)
						{
							Function_384(38, 0, 4294967295, 4294967295);
							iLocal_947 = 1;
						}
						bVar2 = true;
						*uParam13 = 1;
						PRINTSTRING("Fire found in ");
						PRINTSTRING(bParam0);
						PRINTNL();
						Function_226(&iLocal_1001);
					}
					else if (COUNT_FLAMES_IN_VOLUME(bParam1) >= 0)
					{
						if (!Function_328(&iLocal_998))
						{
							Function_226(&iLocal_998);
						}
						else if (Function_326(&iLocal_998) < 3.0f)
						{
							Function_383();
							Function_226(&iLocal_1001);
							Function_392(&iLocal_998);
						}
					}
					else if (!Function_328(&iLocal_1001))
					{
						Function_226(&iLocal_1001);
					}
					else if (Function_326(&iLocal_1001) < 10.0f)
					{
						Function_382();
						Function_226(&iLocal_1001);
					}
					if (bVar2)
					{
						bVar1 = GET_BLIP_ON_OBJECT(bParam2);
						if (IS_BLIP_VALID(bVar1))
						{
							REMOVE_BLIP(bVar1);
						}
						if (iLocal_501 != 0)
						{
							iVar0++;
						}
						if (iLocal_500 != 0)
						{
							iVar0++;
						}
						if (iLocal_499 != 0)
						{
							iVar0++;
						}
						if (iVar0 == 0)
						{
							PRINTSTRING(bParam0);
							PRINTSTRING(" FireNum = FIRST_FIRE");
							PRINTNL();
							Function_381();
							Function_392(&iLocal_998);
							*uParam4 = 1;
							return 0;
						}
						if (iVar0 == 1)
						{
							PRINTSTRING(bParam0);
							PRINTSTRING(" FireNum = SECOND_FIRE");
							PRINTNL();
							Function_380();
							Function_392(&iLocal_998);
							*uParam4 = 2;
							return 0;
						}
						if (iVar0 == 2)
						{
							PRINTSTRING(bParam0);
							PRINTSTRING(" FireNum = THIRD_FIRE");
							PRINTNL();
							Function_392(&iLocal_998);
							*uParam4 = 3;
							return 0;
						}
					}
					if (bLocal_945)
					{
						if (Function_379())
						{
							bVar1 = GET_BLIP_ON_OBJECT(bParam2);
							if (IS_BLIP_VALID(bVar1))
							{
								REMOVE_BLIP(bVar1);
							}
							if (!IS_BLIP_VALID(bLocal_953))
							{
								if (!Function_328(&iLocal_995))
								{
									Function_226(&iLocal_995);
								}
								else if (Function_326(&iLocal_995) < 5.0f)
								{
									bLocal_953 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1348)[11], 335, 0f, 2, 0);
									SET_BLIP_NAME(bLocal_953, "MA01_FireBottlesBlip");
									if (!iLocal_981)
									{
										Function_395();
										iLocal_981 = 1;
									}
									else
									{
										Function_394();
									}
									Function_393("MexArmy01_obj02a");
									Function_392(&iLocal_995);
								}
							}
						}
						else if (IS_BLIP_VALID(bLocal_952))
						{
							bVar1 = GET_BLIP_ON_OBJECT(bParam2);
							if (IS_BLIP_VALID(bVar1))
							{
								REMOVE_BLIP(bVar1);
							}
							if (IS_BLIP_VALID(bLocal_953))
							{
								ACTOR_ADD_WEAPON_AMMO(Global_34573, 23, 6.0f);
								REMOVE_BLIP(bLocal_953);
							}
						}
						else
						{
							if (Function_328(&iLocal_995))
							{
								Function_392(&iLocal_995);
							}
							bVar1 = GET_BLIP_ON_OBJECT(bParam2);
							if (!IS_BLIP_VALID(bVar1))
							{
								bVar1 = ADD_BLIP_FOR_OBJECT(bParam2, 330, 0f, 2, 0);
								SET_BLIP_NAME(bVar1, "MA01_RebelHideout");
								Function_229((*&Local_4 + 1348)[11]);
							}
							if (iLocal_501 != 0)
							{
								iVar0++;
							}
							if (iLocal_500 != 0)
							{
								iVar0++;
							}
							if (iLocal_499 != 0)
							{
								iVar0++;
							}
							if (iVar0 == 0)
							{
								Function_393("MexArmy01_obj02b");
							}
							else if (iVar0 == 1)
							{
								Function_393("MexArmy01_obj02b_alt");
							}
							else if (iVar0 == 2)
							{
								Function_393("MexArmy01_obj02b_last");
							}
						}
					}
					return 0;
					break;
				
				case 0x00000001:
					if (*uParam13)
					{
						Function_226(iParam5);
						*iParam6 = 5.0f;
						PRINTSTRING(bParam0);
						PRINTSTRING(" BurnState = START_FIRE_GO");
						PRINTNL();
						if (!bParam1 != (*&Local_4 + 932)[3])
						{
							*uParam7 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_546, bParam8, bParam9, vParam10);
							UNK_0x6745191B(*uParam7, 0.0f, 0.0f, 0.0f);
						}
						else
						{
							if (!FIRE_IS_HANDLE_VALID(iLocal_539))
							{
								iLocal_539 = FIRE_CREATE_HANDLE();
							}
							FIRE_CREATE_IN_VOLUME(iLocal_539, bParam1, 5, 1);
							FIRE_SET_MAX_FLAMES(iLocal_539, 10);
							FIRE_SET_DECAY_RATE(iLocal_539, 0,5f);
							FIRE_SET_GROW_RATE(iLocal_539, 2.0f);
							FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, 0,75f);
						}
						*uParam3 = 5;
						return 0;
					}
					break;
				
				case 0x00000002:
					if (*uParam13)
					{
						Function_226(iParam5);
						*iParam6 = 1.0f;
						PRINTSTRING(bParam0);
						PRINTSTRING(" BurnState = START_FIRE_GO");
						PRINTNL();
						if (!bParam1 != (*&Local_4 + 932)[3])
						{
							*uParam7 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_546, bParam8, bParam9, vParam10);
							UNK_0x6745191B(*uParam7, 0.0f, 0.0f, 0.0f);
						}
						else
						{
							if (!FIRE_IS_HANDLE_VALID(iLocal_539))
							{
								iLocal_539 = FIRE_CREATE_HANDLE();
							}
							FIRE_CREATE_IN_VOLUME(iLocal_539, bParam1, 5, 1);
							FIRE_SET_MAX_FLAMES(iLocal_539, 10);
							FIRE_SET_DECAY_RATE(iLocal_539, 0,5f);
							FIRE_SET_GROW_RATE(iLocal_539, 2.0f);
							FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, 0,75f);
						}
						*uParam3 = 5;
						return 0;
					}
					break;
				
				case 0x00000003:
					if (*uParam13)
					{
						Function_226(iParam5);
						*iParam6 = 1.0f;
						PRINTSTRING(bParam0);
						PRINTSTRING(" BurnState = START_FIRE_GO");
						PRINTNL();
						if (!bParam1 != (*&Local_4 + 932)[3])
						{
							*uParam7 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_546, bParam8, bParam9, vParam10);
							UNK_0x6745191B(*uParam7, 0.0f, 0.0f, 0.0f);
						}
						else
						{
							if (!FIRE_IS_HANDLE_VALID(iLocal_539))
							{
								iLocal_539 = FIRE_CREATE_HANDLE();
							}
							FIRE_CREATE_IN_VOLUME(iLocal_539, bParam1, 5, 1);
							FIRE_SET_MAX_FLAMES(iLocal_539, 10);
							FIRE_SET_DECAY_RATE(iLocal_539, 0,5f);
							FIRE_SET_GROW_RATE(iLocal_539, 2.0f);
							FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, 0,75f);
						}
						*uParam3 = 5;
						return 0;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (Function_326(iParam5) <= *iParam6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_379() //Position: 0x1185E / 71774
{
	if (!IS_BLIP_VALID(bLocal_952))
	{
		if (_GET_AMMO_AMOUNT(Global_34573, 4, 0) < 0.0f || GET_WEAPON_IN_HAND(Global_34573) != 23)
		{
			if (iLocal_969 == 0)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_132("MexArmy01_throwTutorial0", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_969 = 1;
				}
			}
			return 0;
		}
		return 1;
	}
	if (IS_BLIP_VALID(bLocal_953))
	{
		ACTOR_ADD_WEAPON_AMMO(Global_34573, 23, 6.0f);
		REMOVE_BLIP(bLocal_953);
	}
	return 0;
}

void Function_380() //Position: 0x118DF / 71903
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_BurnLastBuild", "MexArmy01_BurnLastBuild", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_381() //Position: 0x11937 / 71991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_Burn2ndBuild", "MexArmy01_Burn2ndBuild", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_382() //Position: 0x1198D / 72077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_WaitJonBurnBuilds", "MexArmy01_WaitJonBurnBuilds", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_383() //Position: 0x119ED / 72173
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_BuildingLit", "MexArmy01_BuildingLit", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x11A41 / 72257
{
	AUDIO_MUSIC_SET_MOOD(Function_385(iParam0), iParam1, iParam2, iParam3);
}

var Function_385(int iParam0) //Position: 0x11A57 / 72279
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

float Function_386(bool bParam0, bool bParam1) //Position: 0x11F94 / 73620
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_290(bParam0);
		vVar0 = { StackVal, StackVal, Function_290(bParam0) };
		Function_387(bParam1);
		vVar3 = { StackVal, StackVal, Function_387(bParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_387(bool bParam0) //Position: 0x12011 / 73745
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_388() //Position: 0x12022 / 73762
{
	if (IS_STRING_VALID(bLocal_949))
	{
		if (Function_328(&iLocal_929))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_326(&iLocal_929) < 5.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_392(&iLocal_929);
				Function_389(bLocal_949, 0x40f00000, 1, 2, 0, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void Function_389(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x12069 / 73833
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

void Function_390() //Position: 0x120BC / 73916
{
	if (Function_328(&iLocal_512))
	{
		if (Function_326(&iLocal_512) < 3.0f)
		{
			Function_226(&iLocal_512);
			iLocal_946 = 1;
		}
		else
		{
			iLocal_946 = 0;
		}
	}
	else
	{
		Function_226(&iLocal_512);
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_537))
	{
		if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[0]) >= 3)
		{
			iLocal_537 = FIRE_CREATE_HANDLE();
			FIRE_CREATE_IN_VOLUME(iLocal_537, (*&Local_4 + 1064)[0], 5, 1);
			FIRE_SET_MAX_FLAMES(iLocal_537, 5);
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_537, 0,5f);
			FIRE_SET_OWNER(iLocal_537, 0);
			FIRE_SET_DECAY_RATE(iLocal_537, 0,25f);
			FIRE_SET_GROW_RATE(iLocal_537, 2.0f);
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[0], 4, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[0], 4, 1);
			}
		}
	}
	else if (iLocal_946)
	{
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_537, RAND_FLOAT_RANGE(0,5f, 0,95f));
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_540))
	{
		if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[3]) >= 3)
		{
			iLocal_540 = FIRE_CREATE_HANDLE();
			FIRE_CREATE_IN_VOLUME(iLocal_540, (*&Local_4 + 1064)[3], 5, 1);
			FIRE_SET_MAX_FLAMES(iLocal_540, 5);
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_540, 0,5f);
			FIRE_SET_OWNER(iLocal_540, 0);
			FIRE_SET_DECAY_RATE(iLocal_540, 0,25f);
			FIRE_SET_GROW_RATE(iLocal_540, 2.0f);
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[3], 4, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[3], 4, 1);
			}
		}
	}
	else if (iLocal_946)
	{
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_540, RAND_FLOAT_RANGE(0,5f, 0,95f));
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_538))
	{
		if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[1]) >= 3)
		{
			iLocal_538 = FIRE_CREATE_HANDLE();
			FIRE_CREATE_IN_VOLUME(iLocal_538, (*&Local_4 + 1064)[1], 5, 1);
			FIRE_SET_MAX_FLAMES(iLocal_538, 5);
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_538, 0,5f);
			FIRE_SET_OWNER(iLocal_538, 0);
			FIRE_SET_DECAY_RATE(iLocal_538, 0,25f);
			FIRE_SET_GROW_RATE(iLocal_538, 2.0f);
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[1], 4, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[1], 4, 1);
			}
		}
	}
	else if (iLocal_946)
	{
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_538, RAND_FLOAT_RANGE(0,5f, 0,95f));
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_535))
	{
		if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[4]) >= 3)
		{
			iLocal_535 = FIRE_CREATE_HANDLE();
			FIRE_CREATE_IN_VOLUME(iLocal_535, (*&Local_4 + 1064)[4], 5, 1);
			FIRE_SET_MAX_FLAMES(iLocal_535, 10);
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_535, 0,25f);
			FIRE_SET_OWNER(iLocal_535, 0);
			FIRE_SET_DECAY_RATE(iLocal_535, 0,25f);
			FIRE_SET_GROW_RATE(iLocal_535, 2.0f);
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[4], 4, 1);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1020)[1], 4, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[4], 4, 1);
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1020)[1], 4, 1);
			}
		}
	}
	else if (iLocal_946)
	{
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_535, RAND_FLOAT_RANGE(0,1f, 0,5f));
	}
	if (iLocal_633 == 2)
	{
		if (!FIRE_IS_HANDLE_VALID(iLocal_536))
		{
			if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[2]) >= 3)
			{
				iLocal_536 = FIRE_CREATE_HANDLE();
				FIRE_CREATE_IN_VOLUME(iLocal_536, (*&Local_4 + 1064)[2], 5, 1);
				FIRE_SET_MAX_FLAMES(iLocal_536, 5);
				FIRE_SET_TARGET_FILL_PERCENT(iLocal_536, 0,5f);
				FIRE_SET_OWNER(iLocal_536, 0);
				FIRE_SET_DECAY_RATE(iLocal_536, 0,25f);
				FIRE_SET_GROW_RATE(iLocal_536, 2.0f);
				bLocal_527 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_546, "BackBuildFire", "script_dwelling01fire_MexArmy01", -3280.0f, 39.0f, 4561.0f);
				UNK_0x6745191B(bLocal_527, 0.0f, 0.0f, 0.0f);
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[2], 4, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[2], 4, 1);
				}
			}
		}
		else if (iLocal_946)
		{
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_536, RAND_FLOAT_RANGE(0,5f, 0,95f));
		}
		if (!FIRE_IS_HANDLE_VALID(iLocal_543))
		{
			if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 932)[5]) >= 3)
			{
				iLocal_543 = FIRE_CREATE_HANDLE();
				FIRE_CREATE_IN_VOLUME(iLocal_543, (*&Local_4 + 932)[5], 5, 1);
				FIRE_SET_MAX_FLAMES(iLocal_543, 5);
				FIRE_SET_TARGET_FILL_PERCENT(iLocal_543, 0,5f);
				FIRE_SET_OWNER(iLocal_543, 0);
				FIRE_SET_DECAY_RATE(iLocal_543, 0,25f);
				FIRE_SET_GROW_RATE(iLocal_543, 2.0f);
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[5], 4, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[5], 4, 1);
				}
			}
		}
		else if (iLocal_946)
		{
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_543, RAND_FLOAT_RANGE(0,5f, 0,95f));
		}
		if (!FIRE_IS_HANDLE_VALID(iLocal_542))
		{
			if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 932)[4]) >= 3)
			{
				iLocal_542 = FIRE_CREATE_HANDLE();
				FIRE_CREATE_IN_VOLUME(iLocal_542, (*&Local_4 + 932)[4], 5, 1);
				FIRE_SET_MAX_FLAMES(iLocal_542, 5);
				FIRE_SET_TARGET_FILL_PERCENT(iLocal_542, 0,5f);
				FIRE_SET_OWNER(iLocal_542, 0);
				FIRE_SET_DECAY_RATE(iLocal_542, 0,25f);
				FIRE_SET_GROW_RATE(iLocal_542, 2.0f);
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[4], 4, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[4], 4, 1);
				}
			}
		}
		else if (iLocal_946)
		{
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_542, RAND_FLOAT_RANGE(0,5f, 0,95f));
		}
		if (!FIRE_IS_HANDLE_VALID(iLocal_539))
		{
			if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 932)[3]) >= 3)
			{
				iLocal_539 = FIRE_CREATE_HANDLE();
				FIRE_CREATE_IN_VOLUME(iLocal_539, (*&Local_4 + 932)[3], 10, 1);
				FIRE_SET_MAX_FLAMES(iLocal_539, 10);
				FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, 0,5f);
				FIRE_SET_OWNER(iLocal_539, 0);
				FIRE_SET_DECAY_RATE(iLocal_539, 0,25f);
				FIRE_SET_GROW_RATE(iLocal_539, 2.0f);
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[3], 4, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[3], 4, 1);
				}
			}
		}
		else if (iLocal_946)
		{
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_539, RAND_FLOAT_RANGE(0,5f, 0,95f));
		}
		if (!FIRE_IS_HANDLE_VALID(iLocal_545))
		{
			if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[6]) >= 3)
			{
				iLocal_545 = FIRE_CREATE_HANDLE();
				FIRE_CREATE_IN_VOLUME(iLocal_545, (*&Local_4 + 1064)[6], 5, 1);
				FIRE_SET_MAX_FLAMES(iLocal_545, 5);
				FIRE_SET_TARGET_FILL_PERCENT(iLocal_545, 0,5f);
				FIRE_SET_OWNER(iLocal_545, 0);
				FIRE_SET_DECAY_RATE(iLocal_545, 0,25f);
				FIRE_SET_GROW_RATE(iLocal_545, 2.0f);
				if (SQUAD_IS_VALID(Local_4.f_728))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[6], 4, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[6], 4, 1);
				}
			}
		}
		else if (iLocal_946)
		{
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_545, RAND_FLOAT_RANGE(0,5f, 0,95f));
		}
	}
	if (!FIRE_IS_HANDLE_VALID(iLocal_544))
	{
		if (COUNT_FLAMES_IN_VOLUME((*&Local_4 + 1064)[5]) >= 3)
		{
			iLocal_544 = FIRE_CREATE_HANDLE();
			FIRE_CREATE_IN_VOLUME(iLocal_544, (*&Local_4 + 1064)[5], 5, 1);
			FIRE_SET_MAX_FLAMES(iLocal_544, 5);
			FIRE_SET_TARGET_FILL_PERCENT(iLocal_544, 0,5f);
			FIRE_SET_OWNER(iLocal_544, 0);
			FIRE_SET_DECAY_RATE(iLocal_544, 0,25f);
			FIRE_SET_GROW_RATE(iLocal_544, 2.0f);
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_728, 0, (*&Local_4 + 1064)[5], 4, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_632, 0, (*&Local_4 + 1064)[5], 4, 1);
			}
		}
	}
	else if (iLocal_946)
	{
		FIRE_SET_TARGET_FILL_PERCENT(iLocal_544, RAND_FLOAT_RANGE(0,5f, 0,95f));
	}
	return;
}

void Function_391() //Position: 0x12888 / 75912
{
	if (!iLocal_980)
	{
		if (IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 2)))
		{
			if (!IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3)))
			{
				if (GET_TASK_STATUS(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3), 54) != 1)
				{
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3), (*&Local_4 + 732)[02], 2, 1, 0);
					bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4);
					TASK_POINT_GUN_AT_OBJECT(bLocal_971, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, false), -1.0f, 0);
				}
			}
		}
		if (IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3)))
		{
			if (!IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4)))
			{
				if (GET_TASK_STATUS(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4), 0) != 1)
				{
					bLocal_966 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, (*&Local_4 + 732)[02], 0, 2, 0);
					TASK_FOLLOW_PATH(false, Local_4.f_1936, 4, 0, 0, 1, false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4), bLocal_966);
					TASK_SEQUENCE_RELEASE(bLocal_966, 1);
				}
			}
		}
		if (IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4)))
		{
			bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false);
			if (GET_TASK_STATUS(bLocal_972, 26) != 1)
			{
				vLocal_974 = { 2.0f, 0.0f, 6.0f };
				TASK_FOLLOW_OBJECT(bLocal_972, (*&Local_4 + 732)[02], &vLocal_974, 0, 0, 0, 0, 0, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_972, 2);
			}
			bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, true);
			if (GET_TASK_STATUS(bLocal_972, 26) != 1)
			{
				vLocal_974 = { -2.0f, 0.0f, 6.0f };
				TASK_FOLLOW_OBJECT(bLocal_972, (*&Local_4 + 732)[02], &vLocal_974, 0, 0, 0, 0, 0, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_972, 2);
			}
			bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2);
			if (GET_TASK_STATUS(bLocal_972, 26) != 1)
			{
				vLocal_974 = { 2.0f, 0.0f, 12.0f };
				TASK_FOLLOW_OBJECT(bLocal_972, (*&Local_4 + 732)[02], &vLocal_974, 0, 0, 0, 0, 0, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_972, 2);
			}
			bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 3);
			if (GET_TASK_STATUS(bLocal_972, 26) != 1)
			{
				vLocal_974 = { -2.0f, 0.0f, 12.0f };
				TASK_FOLLOW_OBJECT(bLocal_972, (*&Local_4 + 732)[02], &vLocal_974, 0, 0, 0, 0, 0, 0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_972, 2);
			}
			iLocal_980 = 1;
		}
	}
	return;
}

void Function_392(int iParam0) //Position: 0x12A85 / 76421
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_393(bool bParam0) //Position: 0x12A99 / 76441
{
	if (!IS_STRING_VALID(bLocal_949))
	{
		if (!Function_328(&iLocal_929))
		{
			Function_226(&iLocal_929);
		}
		bLocal_949 = bParam0;
	}
	else if (!STRINGS_ARE_EQUAL(bLocal_949, bParam0))
	{
		if (!Function_328(&iLocal_929))
		{
			Function_226(&iLocal_929);
		}
		bLocal_949 = bParam0;
	}
	return;
}

void Function_394() //Position: 0x12AE2 / 76514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_RunsOutOfBottles", "MexArmy01_RunsOutOfBottles", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x12B40 / 76608
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_PikUpFireBottles", "MexArmy01_PikUpFireBottles", false, 1, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_396() //Position: 0x12B9E / 76702
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "MexArmy01_KeepEyeOnJon", "MexArmy01_KeepEyeOnJon", false, 2, 1, 0, 1);
		Function_375(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_397() //Position: 0x12BF4 / 76788
{
	if (Function_406())
	{
		return 1;
	}
	return 0;
}

int Function_398() //Position: 0x12C03 / 76803
{
	Function_336(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_399() //Position: 0x12C17 / 76823
{
	Function_338(Global_34573, (*&Local_4 + 1644)[0], 0, 0, 0);
	Function_403();
	ENABLE_CHILD_SECTOR("tes_stables01x");
	ENABLE_CHILD_SECTOR("tes_stables01props01x");
	ENABLE_CHILD_SECTOR("tes_house01x");
	ENABLE_CHILD_SECTOR("tes_house01props01x");
	return 1;
}

int Function_400() //Position: 0x12C8C / 76940
{
	if (Function_340() && Function_425())
	{
		Function_406();
		return 1;
	}
	return 0;
}

int Function_401() //Position: 0x12CA3 / 76963
{
	if (!Function_340() && Function_263())
	{
	}
	else
	{
		DISABLE_CHILD_SECTOR("tes_stables01x");
		DISABLE_CHILD_SECTOR("tes_stables01props01x");
		DISABLE_CHILD_SECTOR("tes_house01x");
		DISABLE_CHILD_SECTOR("tes_house01props01x");
		CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
		Function_404();
		GET_OBJECT_POSITION((*&Local_4 + 1644)[25], &vLocal_974);
		CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vLocal_974, -2,25f, 4294967295);
		return 1;
	}
	return 0;
}

int Function_402() //Position: 0x12D39 / 77113
{
	Function_362(0);
	Function_347(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 996)[3], 1, 1, 1, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
	Function_345(StackVal, StackVal, bLocal_546, vLocal_974, &Local_4 + 996[3], 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_403() //Position: 0x12D82 / 77186
{
	ABORT_SCRIPTED_CONVERSATION(0);
	iLocal_947 = 0;
	AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	iLocal_980 = 0;
	if (!SQUAD_IS_VALID(Local_4.f_760))
	{
		Function_258();
	}
	if (SQUAD_IS_VALID(Local_4.f_760))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_760))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bLocal_966);
			if (IS_ACTOR_VALID(bLocal_971))
			{
				if (IS_ACTOR_ALIVE(bLocal_971))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT_DEAD(bLocal_971);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT(bLocal_971, 1);
				}
			}
			bLocal_966++;
		}
	}
	bLocal_966 = false;
	while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
	{
		bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_971, true);
		bLocal_966++;
	}
	SQUAD_GOALS_CLEAR(Local_4.f_800);
	Function_246(Local_4.f_800);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, false);
	SET_ACTOR_IN_VEHICLE(bLocal_971, (*&Local_4 + 732)[02], 5);
	TASK_STAND_STILL(bLocal_971, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, true);
	SET_ACTOR_IN_VEHICLE(bLocal_971, (*&Local_4 + 732)[02], 4);
	TASK_STAND_STILL(bLocal_971, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 2);
	SET_ACTOR_IN_VEHICLE(bLocal_971, (*&Local_4 + 732)[02], 3);
	TASK_STAND_STILL(bLocal_971, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3);
	TASK_USE_GRINGO(bLocal_971, GET_GRINGO_FROM_OBJECT(Local_4.f_1872), "UseCase1", 4294967295, 1);
	GET_OBJECT_POSITION(Local_4.f_1872, &vLocal_974);
	TELEPORT_ACTOR(bLocal_971, &vLocal_974, 1, 1, 1);
	SNAP_ACTOR_TO_GRINGO(bLocal_971, Local_4.f_1872, "UseCase1", true, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, false);
	Function_338(bLocal_971, (*&Local_4 + 1644)[12], 1, 1, 1);
	bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false);
	ACTOR_MOUNT_ACTOR(bLocal_972, bLocal_971);
	TASK_STAND_STILL(bLocal_972, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, true);
	Function_338(bLocal_971, (*&Local_4 + 1644)[13], 1, 1, 1);
	bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, true);
	ACTOR_MOUNT_ACTOR(bLocal_972, bLocal_971);
	TASK_STAND_STILL(bLocal_972, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, 2);
	Function_338(bLocal_971, (*&Local_4 + 1644)[14], 1, 1, 1);
	bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2);
	ACTOR_MOUNT_ACTOR(bLocal_972, bLocal_971);
	TASK_STAND_STILL(bLocal_972, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, 3);
	Function_338(bLocal_971, (*&Local_4 + 1644)[15], 1, 1, 1);
	bLocal_972 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 3);
	ACTOR_MOUNT_ACTOR(bLocal_972, bLocal_971);
	TASK_STAND_STILL(bLocal_972, -1.0f, 0, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, 4);
	Function_338(bLocal_971, (*&Local_4 + 1644)[10], 1, 1, 1);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_924, true);
	bLocal_966 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1956, true, 1, 0, 0, false);
	TASK_MOUNT(false, bLocal_971, 1, 1, 1, 2147483647);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1936, 4, 0, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_924, bLocal_966);
	TASK_SEQUENCE_RELEASE(bLocal_966, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_924);
	SET_MOST_RECENT_MOUNT(bLocal_924, bLocal_971);
	SET_ALLOW_RIDE_BY_PLAYER(bLocal_971, 0);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, 5);
	Function_338(bLocal_971, (*&Local_4 + 1644)[11], 1, 1, 1);
	AI_SET_NAV_PATHFINDING_ENABLED(bLocal_921, true);
	bLocal_966 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1956, true, 1, 0, 0, false);
	TASK_MOUNT(false, bLocal_971, 1, 1, 1, 2147483647);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1936, 4, 0, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_921, bLocal_966);
	TASK_SEQUENCE_RELEASE(bLocal_966, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
	SET_ALLOW_RIDE_BY_PLAYER(bLocal_971, 0);
	SET_MOST_RECENT_MOUNT(bLocal_921, bLocal_971);
	bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 4);
	Function_338(bLocal_971, (*&Local_4 + 1644)[16], 1, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
	GIVE_WEAPON_TO_ACTOR(bLocal_971, 40, false, 1, 1);
	TASK_POINT_GUN_AT_OBJECT(bLocal_971, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, 3), -1.0f, 0);
	bLocal_973 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 5);
	Function_338(bLocal_973, (*&Local_4 + 1644)[7], 1, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_973);
	GIVE_WEAPON_TO_ACTOR(bLocal_973, 23, false, 1, 1);
	bLocal_966 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_973, bLocal_966);
	TASK_SEQUENCE_RELEASE(bLocal_966, 1);
	CLEAR_ACTOR_MAX_SPEED(bLocal_921);
	CLEAR_ACTOR_MIN_SPEED(bLocal_921);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
	Function_232();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	Function_183(&bLocal_585);
	return;
}

void Function_404() //Position: 0x131D7 / 78295
{
	iLocal_932 = 0;
	if (IS_OBJECT_VALID(Local_4.f_1960))
	{
		DESTROY_OBJECT(Local_4.f_1960);
	}
	if (IS_OBJECT_VALID(Local_4.f_1856))
	{
		DESTROY_OBJECT(Local_4.f_1856);
	}
	Function_228(6, 0, 1);
	Function_405(30.0f);
	vLocal_655[09].f_28 = 1;
	vLocal_655[09].f_24 = 0;
	vLocal_655[19].f_28 = 1;
	vLocal_655[19].f_32 = 1;
	vLocal_655[19].f_24 = 0;
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[09], false);
	SET_DOOR_AUTO_CLOSE(vLocal_655[09], 0);
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[19], true);
	SET_DOOR_AUTO_CLOSE(vLocal_655[19], 0);
	vLocal_655[29].f_28 = 1;
	vLocal_655[29].f_24 = 0;
	SET_DOOR_AUTO_CLOSE(vLocal_655[09], 0);
	vLocal_655[39].f_28 = 1;
	vLocal_655[39].f_32 = 1;
	vLocal_655[39].f_24 = 0;
	SET_DOOR_AUTO_CLOSE(vLocal_655[19], 0);
	Function_351();
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[29], false);
	SET_DOOR_AUTO_CLOSE(vLocal_655[29], 0);
	OPEN_DOOR_DIRECTION_FAST(vLocal_655[39], true);
	SET_DOOR_AUTO_CLOSE(vLocal_655[39], 0);
	if (FIRE_IS_HANDLE_VALID(iLocal_543))
	{
		FIRE_RELEASE_HANDLE(iLocal_543, 0);
		FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 932)[5]);
		UNK_0x7246F438(bLocal_529);
		RESET_RMPTFX_IN_VOLUME((*&Local_4 + 932)[5]);
		DESTROY_OBJECT(bLocal_529);
	}
	if (FIRE_IS_HANDLE_VALID(iLocal_542))
	{
		FIRE_RELEASE_HANDLE(iLocal_542, 0);
		FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 932)[4]);
		UNK_0x7246F438(bLocal_528);
		RESET_RMPTFX_IN_VOLUME((*&Local_4 + 932)[4]);
		DESTROY_OBJECT(bLocal_528);
	}
	if (FIRE_IS_HANDLE_VALID(iLocal_539))
	{
		FIRE_RELEASE_HANDLE(iLocal_539, 0);
		FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 932)[3]);
		RESET_RMPTFX_IN_VOLUME((*&Local_4 + 932)[3]);
	}
	if (!SQUAD_IS_VALID(Local_4.f_632))
	{
		Local_4.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Soldiers"));
		Function_237(&(Local_795[317]), Local_4.f_632, "MexicanSoldier", 1, 0x5f5e100, 1);
		Function_233(&(Local_795[317]), 2);
	}
	Function_246(Local_4.f_632);
	SQUAD_GOALS_CLEAR(Local_4.f_632);
	SET_WEAPONENUM_LOCKED(23, 0);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_922)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_922));
	}
	Function_211();
	iLocal_944 = 0;
	return;
}

void Function_405(float fParam0) //Position: 0x133EA / 78826
{
	if (Global_8722 < 0,1f)
	{
		return;
	}
	Global_8722 = fParam0;
	return;
}

bool Function_406() //Position: 0x13402 / 78850
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	if (!iLocal_944)
	{
		if (Function_425())
		{
			Function_409();
			GET_OBJECT_POSITION((*&Local_4 + 1348)[11], &vVar0);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[11], &vVar3);
			bLocal_524 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_molotovCrate01x", vVar0, vVar3, 1);
			bLocal_521 = CREATE_GRINGO_IN_LAYOUT(Local_4, Function_53(), "pickup_molotov", vVar0, vVar3);
			GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bLocal_521), "UseCase1", 1);
			GET_OBJECT_POSITION((*&Local_4 + 1348)[12], &vVar0);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[12], &vVar3);
			bLocal_525 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_molotovCrate01x", vVar0, vVar3, 1);
			bLocal_522 = CREATE_GRINGO_IN_LAYOUT(Local_4, Function_53(), "pickup_molotov", vVar0, vVar3);
			GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bLocal_522), "UseCase1", 1);
			GET_OBJECT_POSITION((*&Local_4 + 1348)[13], &vVar0);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[13], &vVar3);
			bLocal_526 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_molotovCrate01x", vVar0, vVar3, 1);
			bLocal_523 = CREATE_GRINGO_IN_LAYOUT(Local_4, Function_53(), "pickup_molotov", vVar0, vVar3);
			GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bLocal_523), "UseCase1", 1);
			bVar7 = false;
			while (bVar7 <= SQUAD_GET_SIZE(Local_4.f_632))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bVar7);
				SET_ACTOR_GRINGO_RESTRICTION(bVar6, GET_GRINGO_FROM_OBJECT(bLocal_521));
				SET_ACTOR_GRINGO_RESTRICTION(bVar6, GET_GRINGO_FROM_OBJECT(bLocal_522));
				SET_ACTOR_GRINGO_RESTRICTION(bVar6, GET_GRINGO_FROM_OBJECT(bLocal_523));
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar6, 200.0f);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar6, true);
				bVar7++;
			}
			if (!SQUAD_IS_VALID(Local_4.f_800))
			{
				Function_408();
				Function_237(&(Local_795[417]), Local_4.f_800, "MA01_Prisoners", 1, 0x5f5e100, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_760))
			{
				bLocal_966 = false;
				while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_760))
				{
					bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bLocal_966);
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
							SET_ACTOR_PERMANENT_DEAD(bLocal_971);
						}
						else
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
							SET_ACTOR_PERMANENT(bLocal_971, 1);
						}
					}
					bLocal_966++;
				}
			}
			else if (!SQUAD_IS_VALID(Local_4.f_808))
			{
				Function_407();
			}
			iLocal_941 = 0;
			iLocal_944 = 1;
			return 1;
		}
	}
	return 1;
	return 0;
}

void Function_407() //Position: 0x136B5 / 79541
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_808 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "DeadPrisoners"));
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "Prisoner1Dead", 521, -3300,594f, 39,05015f, 4555,264f, 0.0f, -73,01725f, 0.0f, "dead_ground_male");
	SQUAD_JOIN(bVar0, Local_4.f_808);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 21);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "Prisoner2Dead", 523, -3299,334f, 39,15283f, 4561,367f, -5,997895f, -69,16182f, 5,432081f, "dead_ground_male");
	SQUAD_JOIN(bVar0, Local_4.f_808);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 21);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_4, "Prisoner3dead", 522, -3299,03f, 39,2028f, 4566,031f, 0.0f, -73,01725f, 0.0f, "dead_ground_male");
	SQUAD_JOIN(bVar0, Local_4.f_808);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 21);
	return;
}

void Function_408() //Position: 0x137F0 / 79856
{
	Local_4.f_800 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nTheLadies"));
	(*&Local_4 + 764)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nCallGirl1", 247, -3281,231f, 39,96267f, 4563,181f, 0.0f, -57,42085f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[02], Local_4.f_800);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[02]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 764)[02], false);
	TASK_PRIORITY_SET((*&Local_4 + 764)[02], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[02]);
	TASK_STAND_STILL((*&Local_4 + 764)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 764)[02], 21);
	(*&Local_4 + 764)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Farmer1", 240, -3282,862f, 39,96267f, 4560,752f, 0.0f, -53,07516f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[12], Local_4.f_800);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[12]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 764)[12], false);
	TASK_PRIORITY_SET((*&Local_4 + 764)[12], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[12]);
	TASK_STAND_STILL((*&Local_4 + 764)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 764)[12], 21);
	(*&Local_4 + 764)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nCallGirl2", 239, -3280,934f, 39,96267f, 4560,862f, 0.0f, -53,77593f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[22], Local_4.f_800);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[22]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 764)[22], false);
	TASK_PRIORITY_SET((*&Local_4 + 764)[22], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[22]);
	TASK_STAND_STILL((*&Local_4 + 764)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 764)[22], 21);
	(*&Local_4 + 764)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Beggar1", 250, -3279,53f, 39,96267f, 4561,11f, 0.0f, -58,14891f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 764)[32], Local_4.f_800);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[32]);
	MEMORY_ALLOW_SHOOTING((*&Local_4 + 764)[32], false);
	TASK_PRIORITY_SET((*&Local_4 + 764)[32], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 764)[32]);
	TASK_STAND_STILL((*&Local_4 + 764)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 764)[32], 21);
	return;
}

void Function_409() //Position: 0x13A33 / 80435
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(bLocal_924))
	{
		Function_262();
		bLocal_924 = (*&Local_4 + 748)[02];
		SET_ACTOR_FACTION(bLocal_924, 20);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_924, 0.0f);
		Function_237(&(Local_795[217]), bLocal_924, "Ma01_Captain", 1, 0x5f5e100, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_632))
	{
		Function_261();
	}
	Function_416();
	if (!SQUAD_IS_VALID(Local_4.f_632))
	{
		Local_4.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Soldiers"));
	}
	bVar2 = CREATE_ACTORSET_IN_LAYOUT(bLocal_546, "tempset", 0);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_744))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_744, bVar0);
		TASK_CLEAR(bVar1);
		ADD_ACTORSET_MEMBER(bVar2, bVar1);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(bVar2))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(bVar2, bVar0);
		SQUAD_LEAVE(bVar1);
		SQUAD_JOIN(bVar1, Local_4.f_632);
		bVar0++;
	}
	DESTROY_ACTORSET(bVar2);
	DESTROY_OBJECT(Local_4.f_744);
	while (SQUAD_GET_SIZE(Local_4.f_632) <= 6)
	{
		bVar1 = CREATE_ACTOR_IN_LAYOUT(bLocal_546, Function_53(), 391, -3301,122f, 39,08475f, 4565,962f, 0.0f, 270,6772f, 0.0f);
		SQUAD_JOIN(bVar1, Local_4.f_632);
		SET_ACTOR_FACTION(bVar1, 20);
		SET_CRIPPLE_ENABLE(bVar1, 0);
		SET_ACTOR_FACTION(bVar1, 20);
		TASK_PRIORITY_SET(bVar1, true);
		TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(bVar1, 0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar1, true);
		SET_ACTOR_FACTION(bVar1, 20);
	}
	Function_237(&(Local_795[317]), Local_4.f_632, "MexicanSoldier", 1, 0x5f5e100, 1);
	Function_233(&(Local_795[317]), 2);
	SQUAD_SET_FACTION(Local_4.f_632, 20);
	Function_411();
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], false, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], true, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], 2, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], 3, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], 4, 0);
	ENABLE_VEHICLE_SEAT((*&Local_4 + 732)[02], 5, 0);
	Function_410();
	return;
}

void Function_410() //Position: 0x13C42 / 80962
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_804 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BackupHorses"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse1", 986, -3304,359f, 38,80549f, 4526,768f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse2", 991, -3305,537f, 38,80549f, 4526,446f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse3", 989, -3306,424f, 38,80549f, 4526,203f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse4", 987, -3307,414f, 38,80549f, 4525,932f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse5", 986, -3308,201f, 38,80549f, 4525,717f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "Backuphorse6", 991, -3309,037f, 38,80549f, 4525,488f, 0.0f, -196,4111f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_804);
	ACCESSORIZE_HORSE(bVar0, 3);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	return;
}

void Function_411() //Position: 0x13E1C / 81436
{
	(*&Local_4 + 732)[02] = Function_412(Local_4, "nFireWagon", 1196, 996, -3306,805f, 38,95125f, 4547,032f, 0.0f, 178,5717f, 0.0f, 1, 976, 976, 976, 4);
	return;
}

var Function_412(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x13E62 / 81506
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
			if (Function_415(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_414(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_413(bVar16, &iVar1))
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

bool Function_413(int iParam0, int iParam1) //Position: 0x14097 / 82071
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

var Function_414(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x140C9 / 82121
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_415(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x140E1 / 82145
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

void Function_416() //Position: 0x14108 / 82184
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_744 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BackupSoldiers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "BackSoldier01", 391, -3300.0f, 38,87502f, 4541,937f, 0.0f, 60,38958f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_744);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "BackSoldier02", 391, -3303,743f, 39,12699f, 4536,172f, 0.0f, 60,38958f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_744);
	SET_ACTOR_FACTION(bVar0, 20);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	TASK_PRIORITY_SET(bVar0, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FACTION(bVar0, 20);
	return;
}

void Function_417(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0x14214 / 82452
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (bParam3 != Global_34165.f_48 && !Function_422())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_421(0);
	Function_420();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_419(uParam4, iVar0, iVar1);
	Function_418();
}

void Function_418() //Position: 0x142B1 / 82609
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

void Function_419(int iParam0, bool bParam1, bool bParam2) //Position: 0x142F2 / 82674
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

void Function_420() //Position: 0x14458 / 83032
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_421(bool bParam0) //Position: 0x1447C / 83068
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

bool Function_422() //Position: 0x144AB / 83115
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_423(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x144C6 / 83142
{
	if (Function_424(&iParam0) == iParam7 || Function_422())
	{
		return 1;
	}
	return 0;
}

int Function_424(int iParam0) //Position: 0x144E5 / 83173
{
	if (Function_331(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_425() //Position: 0x144FD / 83197
{
	Function_270(&Local_4 + 496, 521, 2, 0);
	Function_270(&Local_4 + 496, 522, 2, 0);
	Function_270(&Local_4 + 496, 523, 2, 0);
	Function_270(&Local_4 + 496, 524, 2, 0);
	Function_270(&Local_4 + 496, 525, 2, 0);
	Function_270(&Local_4 + 496, 526, 2, 0);
	Function_270(&Local_4 + 496, 527, 2, 0);
	Function_270(&Local_4 + 496, 528, 2, 0);
	Function_270(&Local_4 + 496, 1196, 2, 0);
	Function_270(&Local_4 + 496, 996, 2, 0);
	Function_270(&Local_4 + 496, 529, 2, 0);
	if (Function_264(&Local_4 + 496))
	{
		return 1;
	}
	return 0;
}

void Function_426() //Position: 0x145AB / 83371
{
	if (!IS_ACTOR_VALID(bLocal_924))
	{
		Function_262();
		bLocal_924 = (*&Local_4 + 748)[02];
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_924, 0.0f);
		Function_237(&(Local_795[217]), bLocal_924, "Ma01_Captain", 1, 0x5f5e100, 1);
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1100[36]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_921, *(&Local_4 + 1100[86]), 1, true, 1);
	Function_338(bLocal_924, (*&Local_4 + 1348)[1], 1, 1, 1);
	Function_162(2);
	Function_162(1);
	Function_162(4);
	Function_130(&(Global_29008[Global_30685[2]]), 256);
	Function_193(1, 0, 1);
	return;
}

void Function_427(bool bParam0) //Position: 0x14666 / 83558
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

void Function_428() //Position: 0x14686 / 83590
{
	if (!Function_367(iLocal_634))
	{
		return;
	}
	if (IS_ACTOR_VALID(bLocal_973))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
		Function_429(StackVal, StackVal, "$/cutscene/MexArmy01_CS04/MexArmy01_CS04", &uLocal_948, vLocal_974, 84424, 1, 100.0f, 200.0f, 2, 1, 2, 2, 0, 1);
	}
	Function_351();
	return;
}

int Function_429(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x146FF / 83711
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_289(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_430()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
	{
		if (!bParam6 && (HUD_IS_FADED() || HUD_IS_FADING()))
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
		if ((iParam14 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam9, iParam10, iParam11, iParam12);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(iParam5);
				if (StackVal)
				{
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
	else if ((!Function_289(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_430()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_289(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

int Function_430() //Position: 0x149B9 / 84409
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_431() //Position: 0x149C8 / 84424
{
	if (IS_ACTOR_VALID(bLocal_973))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy05", bLocal_973);
	}
	return 1;
}

void Function_432() //Position: 0x149F4 / 84468
{
	bool bVar0;
	vector3 vVar1;
	
	Function_486();
	switch (iLocal_634)
	{
		case 0x00000000:
			Function_362(0);
			Function_427(bLocal_921);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(40);
			if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 996)[2]))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
			}
			if (!iLocal_934[0])
			{
				Function_275(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				iLocal_502 = 1;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_359();
				bLocal_635 = Function_358(StackVal, StackVal, *(&Local_4 + 1100[26]), 0, 1, 1);
				if (!Function_357(bLocal_635))
				{
					Function_356(&Local_547);
				}
				Function_485();
				Function_273(1);
			}
			else
			{
				Function_273(2);
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_357(bLocal_635) || bLocal_635 != 4294967295)) && Function_263())
			{
				if (Function_351())
				{
					Function_273(2);
				}
			}
			break;
		
		case 0x00000002:
			if (Function_231())
			{
				Function_484();
				if (Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_547, iLocal_633))
				{
					Function_273(3);
				}
				else
				{
					Function_483();
					Function_273(4);
				}
				Function_285(iLocal_633);
				Function_417(StackVal, StackVal, Function_285(iLocal_633), iLocal_633, Global_30633[0], Function_287(iLocal_633), 0);
			}
			break;
		
		case 0x00000003:
			if (Function_320("$/cutscene/MexArmy01_CS02/MexArmy01_CS02", &Local_626, &Local_547, &iLocal_633, 97932, 97504, 97485, 97475, 97455, 97448, 0, 1, 1, 2, 2, 0, 1))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(&iLocal_926);
				Function_354(1.0f);
				Function_273(4);
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					if (((IS_ACTOR_USING_COVER(bLocal_924) && IS_ACTOR_USING_COVER(bLocal_921)) && IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_921, "coverpistolright/hide/")) || Function_326(&iLocal_926) < 3.0f)
					{
						if (Function_326(&iLocal_926) < 3.0f)
						{
						}
						if (!IS_ACTOR_USING_COVER(bLocal_921))
						{
						}
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_921, "coverpistolright/hide/"))
						{
						}
						if (!IS_ACTOR_USING_COVER(bLocal_924))
						{
						}
						Function_474();
						Function_354(1.0f);
						Function_273(16);
					}
				}
			}
			else
			{
				Function_273(16);
			}
			break;
		
		case 0x00000010:
			Function_354(1.0f);
			Function_393("MA01_RebelSearchObj");
			iLocal_982 = 0;
			Function_273(6);
			break;
		
		case 0x00000006:
			if (!Function_437())
			{
				GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vVar1);
				bVar0 = Function_371(StackVal, StackVal, Global_34573, vVar1);
				if (bVar0 < 150.0f)
				{
					Function_279("MexArmy01_tesoroAbandon");
					bLocal_939 = true;
				}
				else if (bVar0 < 75.0f)
				{
					if (!IS_BLIP_VALID(bLocal_952))
					{
						if (Function_436())
						{
							Function_435("MexArmy01_JonTriesRunOut", 2);
						}
						else
						{
							Function_434("MexArmy01_JonRunsOutTes", 2);
						}
						Function_393("MexArmy01_tesoroReturnObj");
						bLocal_952 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1348)[1], 330, 0f, 2, 0);
					}
				}
				else if (IS_BLIP_VALID(bLocal_952))
				{
					REMOVE_BLIP(bLocal_952);
				}
			}
			else
			{
				Function_273(106);
				Function_226(&iLocal_926);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_433();
				iLocal_934[1] = 1;
				iLocal_633 = 2;
				Function_273(0);
			}
			break;
	}
	return;
}

void Function_433() //Position: 0x14D7B / 85371
{
	Function_242();
	return;
}

void Function_434(bool bParam0, int iParam1) //Position: 0x14D84 / 85380
{
	if (!bLocal_1009 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_921, bParam0, Function_53(), false, 0, 1, 3, iParam1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else
	{
		SAY_SINGLE_LINE_STRING(bLocal_921, bParam0, false, true, 3, 0, true, false);
	}
	return;
}

void Function_435(bool bParam0, int iParam1) //Position: 0x14DCC / 85452
{
	if (!bLocal_1009 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_924, bParam0, Function_53(), false, 0, 1, 3, iParam1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else
	{
		SAY_SINGLE_LINE_STRING(bLocal_924, bParam0, false, true, 3, 0, true, false);
	}
	return;
}

bool Function_436() //Position: 0x14E14 / 85524
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_437() //Position: 0x14E27 / 85543
{
	bool bVar0;
	
	Function_390();
	Function_388();
	switch (iLocal_495)
	{
		case 0x00000000:
			iLocal_947 = 0;
			Function_393("MA01_RebelSearchObj");
			vLocal_655[09].f_24 = 0;
			vLocal_655[19].f_24 = 0;
			iLocal_495 = 1;
			break;
		
		case 0x00000001:
			iLocal_946 = 0;
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				bLocal_966 = false;
				while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
				{
					if (!iLocal_946)
					{
						bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
						if (IS_ACTOR_IN_VOLUME(bLocal_971, (*&Local_4 + 964)[4]))
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_971, "default_character_Main/Melee/DoorKick/DoorKick_Wlk/DoorKickHnd");
							iLocal_946 = 1;
						}
					}
					bLocal_966++;
				}
			}
			if (iLocal_946 || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 964)[4]))
			{
				Function_384(8, 0, 4294967295, 4294967295);
				vLocal_655[09].f_28 = 1;
				vLocal_655[09].f_24 = 0;
				SET_DOOR_AUTO_CLOSE(vLocal_655[09], 0);
				vLocal_655[19].f_28 = 1;
				vLocal_655[19].f_32 = 1;
				vLocal_655[19].f_24 = 0;
				SET_DOOR_AUTO_CLOSE(vLocal_655[19], 0);
				OPEN_DOOR_DIRECTION(vLocal_655[09], vLocal_655[09].f_32);
				OPEN_DOOR_DIRECTION(vLocal_655[19], vLocal_655[19].f_32);
				if (SQUAD_IS_VALID(Local_4.f_632))
				{
					bLocal_966 = false;
					while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
					{
						bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
						AI_SET_NAV_PATHFINDING_ENABLED(bLocal_971, true);
						if (bLocal_966 == 1)
						{
							if (IS_ACTOR_USING_COVER(bLocal_971))
							{
								bLocal_967 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_PATH(false, Local_4.f_1948, 1, 1, 0, 1, false);
								TASK_GO_TO_OBJECT(false, (*&Local_4 + 1468)[(14 + bLocal_966)], 1, 0, 1);
								TASK_STAND_STILL(false, 1.0f, 0, 0);
								TASK_POINT_GUN_AT_OBJECT(false, (*&Local_4 + 1348)[1], -1.0f, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_971, bLocal_967);
								TASK_SEQUENCE_RELEASE(bLocal_967, 1);
							}
						}
						bLocal_966++;
					}
				}
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				AUDIO_SET_PLAYER_MOOD(1, 0);
				Function_226(&iLocal_926);
				iLocal_495 = 2;
			}
			break;
		
		case 0x00000002:
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				iLocal_946 = 1;
				bLocal_966 = false;
				while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
				{
					bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
					if (GET_TASK_STATUS(bLocal_971, 35) != 1)
					{
						iLocal_946 = 0;
					}
					bLocal_966++;
				}
			}
			bLocal_971 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (!IS_ACTOR_VALID(bLocal_971))
			{
				bLocal_971 = GET_LAST_ATTACK_TARGET(Global_34573);
			}
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[7]))
			{
				if ((((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1020)[7]) || SQUAD_GET(bLocal_971) != Local_4.f_728) || iLocal_946) || Function_473()) || Function_471())
				{
					Function_470();
					SET_PLAYER_TARGET_WEIGHT(10.0f);
					Function_243(&(Local_795[217]));
					iLocal_941 = 1;
					if (IS_OBJECT_VALID(bLocal_951))
					{
						DESTROY_OBJECT(bLocal_951);
					}
					SQUAD_SET_FACTION(Local_4.f_728, 19);
					SQUAD_GOALS_CLEAR(Local_4.f_728);
					Function_246(Local_4.f_728);
					Function_469(Local_4.f_728);
					if (SQUAD_IS_VALID(Local_4.f_728))
					{
						bLocal_966 = false;
						while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_728))
						{
							bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, bLocal_966);
							SET_ACTOR_FACTION(bLocal_971, 19);
							bLocal_966++;
						}
					}
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_728, 0);
					Function_468(Local_4.f_728, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					bLocal_971 = (*&Local_4 + 660)[02];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[3]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[6], &vLocal_974);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1468)[6], &Local_977);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_971, &vLocal_974, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[12];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[3]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[7], &vLocal_974);
					Function_467(StackVal, StackVal, bLocal_971, vLocal_974, 2.0f, 0, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[22];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[2]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[8], &vLocal_974);
					Function_467(StackVal, StackVal, bLocal_971, vLocal_974, 2.0f, 0, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[32];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[2]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[9], &vLocal_974);
					Function_467(StackVal, StackVal, bLocal_971, vLocal_974, 2.0f, 0, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[42];
					GET_OBJECT_POSITION((*&Local_4 + 1468)[10], &vLocal_974);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1468)[10], &Local_977);
					TASK_OVERRIDE_CLEAR_POSTURE(bLocal_971);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bLocal_971, 20, 1.0f);
					bLocal_966 = TASK_SEQUENCE_OPEN();
					TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1924), 5.0f, 1086324736);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &vLocal_974, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_971, bLocal_966);
					TASK_SEQUENCE_RELEASE(bLocal_966, 1);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					AI_GOAL_SHOOT_AT_OBJECT(bLocal_971, Global_34573);
					bLocal_971 = (*&Local_4 + 660)[52];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[1]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[11], &vLocal_974);
					GET_OBJECT_ORIENTATION((*&Local_4 + 1468)[11], &Local_977);
					TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_971, &vLocal_974, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[62];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[0]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[12], &vLocal_974);
					Function_467(StackVal, StackVal, bLocal_971, vLocal_974, 2.0f, 0, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					bLocal_971 = (*&Local_4 + 660)[72];
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_971, (*&Local_4 + 1020)[0]);
					GET_OBJECT_POSITION((*&Local_4 + 1468)[13], &vLocal_974);
					Function_467(StackVal, StackVal, bLocal_971, vLocal_974, 2.0f, 0, -1.0f);
					MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
					SQUAD_GOAL_ADD_COMBAT(Local_4.f_728, 1, 4294967295, 0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 660)[42], "xxMexArmy01_ShoutAbuseAtJon", Global_34573, 1, 0, 0, 0, 0);
					DECOR_REMOVE(bLocal_924, "AiCoverDontPeek");
					DECOR_REMOVE(bLocal_921, "AiCoverDontPeek");
					iLocal_495 = 3;
					Function_226(&iLocal_926);
				}
				else if (Function_326(&iLocal_926) < 10.0f)
				{
					if (Function_436())
					{
						Function_435("MexArmy01_EspinozaWaits", 2);
					}
					else
					{
						Function_434("MexArmy01_WaitingJonEnterTes", 2);
					}
					Function_226(&iLocal_926);
				}
			}
			break;
		
		case 0x00000003:
			Function_470();
			if (Function_326(&iLocal_926) < 4.0f)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_921, 0);
				Function_466(bLocal_921, Local_4.f_728, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_921, 16, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_921, 13, false);
				SET_ACTOR_VISION_MAX_RANGE(bLocal_921, 200.0f, 1);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bLocal_921, 200.0f);
				AI_PERCEPTION_SET_VISUAL_ID_TIME(bLocal_921, 0,1f);
				AI_SET_WEAPON_MAX_RANGE(bLocal_921, 200.0f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_924, 0);
				Function_466(bLocal_924, Local_4.f_728, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_924, 16, true);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_924, 13, false);
				SET_ACTOR_VISION_MAX_RANGE(bLocal_924, 200.0f, 1);
				AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bLocal_924, 200.0f);
				AI_PERCEPTION_SET_VISUAL_ID_TIME(bLocal_924, 0,1f);
				AI_SET_WEAPON_MAX_RANGE(bLocal_924, 200.0f);
				Function_253(&Local_4 + 1916);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,75f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 0,75f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,25f);
				SQUAD_GOALS_CLEAR(Local_4.f_632);
				Function_246(Local_4.f_632);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_632, 0);
				Function_465((*&Local_4 + 1468)[2], Local_4.f_632, 3, 0, 0);
				Function_465((*&Local_4 + 1468)[3], Local_4.f_632, 3, 0, 0);
				Function_465((*&Local_4 + 1468)[4], Local_4.f_632, 3, 0, 0);
				Function_465((*&Local_4 + 1468)[5], Local_4.f_632, 3, 0, 0);
				Function_464(Local_4.f_632, Local_4.f_728);
				Function_226(&iLocal_992);
				iLocal_495 = 4;
				Function_226(&iLocal_926);
			}
			break;
		
		case 0x00000004:
			Function_462();
			Function_470();
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[3]))
			{
				if (Function_386(Global_34573, (*&Local_4 + 1020)[3]) >= 8.0f || FIRE_IS_HANDLE_VALID(iLocal_538))
				{
					bLocal_971 = (*&Local_4 + 660)[02];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_KILL_CHAR(bLocal_971, Global_34573);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					bLocal_971 = (*&Local_4 + 660)[12];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_971, -1.0f);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					Function_246(Local_4.f_632);
					Function_465((*&Local_4 + 1468)[18], Local_4.f_632, 2, 0, 0);
					Function_465((*&Local_4 + 1468)[19], Local_4.f_632, 2, 0, 0);
					DESTROY_VOLUME((*&Local_4 + 1020)[3]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[2]))
			{
				if (Function_386(Global_34573, (*&Local_4 + 1020)[2]) >= 15.0f || FIRE_IS_HANDLE_VALID(iLocal_545))
				{
					bLocal_971 = (*&Local_4 + 660)[22];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_971, -1.0f);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					bLocal_971 = (*&Local_4 + 660)[32];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_KILL_CHAR(bLocal_971, Global_34573);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					Function_246(Local_4.f_632);
					Function_465((*&Local_4 + 1468)[20], Local_4.f_632, 2, 0, 0);
					Function_465((*&Local_4 + 1468)[21], Local_4.f_632, 2, 0, 0);
					DESTROY_VOLUME((*&Local_4 + 1020)[2]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[8]))
			{
				if (Function_386(Global_34573, (*&Local_4 + 1020)[8]) >= 15.0f || FIRE_IS_HANDLE_VALID(iLocal_539))
				{
					bLocal_971 = (*&Local_4 + 660)[42];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_971, -1.0f);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					Function_465((*&Local_4 + 1468)[22], Local_4.f_632, 1, 0, 0);
					DESTROY_VOLUME((*&Local_4 + 1020)[8]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[1]))
			{
				if ((Function_386(Global_34573, (*&Local_4 + 1020)[1]) >= 8.0f || Function_461() >= 3) || FIRE_IS_HANDLE_VALID(iLocal_535))
				{
					bLocal_971 = (*&Local_4 + 660)[52];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_KILL_CHAR(bLocal_971, Global_34573);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					DESTROY_VOLUME((*&Local_4 + 1020)[1]);
				}
			}
			if (IS_VOLUME_VALID((*&Local_4 + 1020)[0]))
			{
				if ((Function_461() >= 3 || Function_386(Global_34573, (*&Local_4 + 1020)[0]) >= 15.0f) || FIRE_IS_HANDLE_VALID(iLocal_535))
				{
					bLocal_971 = (*&Local_4 + 660)[62];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_971, -1.0f);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					bLocal_971 = (*&Local_4 + 660)[72];
					if (IS_ACTOR_VALID(bLocal_971))
					{
						if (IS_ACTOR_ALIVE(bLocal_971))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_971);
							TASK_CLEAR(bLocal_971);
							TASK_KILL_CHAR(bLocal_971, Global_34573);
							SAY_SINGLE_LINE_CONTEXT(bLocal_971, 24, Global_34573, 0, 1, 2, 4294967295, 4294967295, 0, 1);
						}
					}
					Function_246(Local_4.f_632);
					Function_465((*&Local_4 + 1468)[23], Local_4.f_632, 1, 0, 0);
					Function_465((*&Local_4 + 1468)[24], Local_4.f_632, 1, 0, 0);
					DESTROY_VOLUME((*&Local_4 + 1020)[0]);
				}
			}
			if (!bLocal_985)
			{
				if (Function_460() <= 3)
				{
					Function_459();
				}
			}
			else if (!bLocal_984)
			{
				if (Function_460() <= 3)
				{
					Function_456();
				}
			}
			if (Function_453())
			{
				Function_439();
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_495 = 5;
			}
			break;
		
		case 0x00000005:
			RESET_PLAYER_TARGET_WEIGHT();
			ACTOR_START_FORCE_HOLSTER(bLocal_921, 1, 0);
			ACTOR_START_FORCE_HOLSTER(bLocal_924, 1, 0);
			AUDIO_SET_PLAYER_MOOD(0, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_232();
			iLocal_495 = 6;
			break;
		
		case 0x00000006:
			if (SQUAD_IS_VALID(Local_4.f_632))
			{
				SQUAD_GOALS_CLEAR(Local_4.f_632);
				Function_246(Local_4.f_632);
				Function_469(Local_4.f_632);
			}
			if (SQUAD_IS_VALID(Local_4.f_728))
			{
				SQUAD_GOALS_CLEAR(Local_4.f_728);
				Function_246(Local_4.f_728);
				Function_469(Local_4.f_728);
			}
			if (!SQUAD_IS_VALID(Local_4.f_800))
			{
				Function_408();
				bLocal_966 = false;
				while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_800))
				{
					bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, bLocal_966);
					TASK_STAND_STILL(bLocal_971, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_971, true);
					bLocal_966++;
				}
			}
			TASK_CLEAR(bLocal_924);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1576)[4], 0,5f, 1, 0, 1);
			TASK_GO_NEAR_OBJECT(false, Local_4.f_1908, 0,5f, 1, 0, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1908), "Usecase1", true, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_924, bVar0, 4294967295);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_CLEAR(bLocal_921);
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1644)[2], 1.0f, 1, 0, 1);
			TASK_STAND_STILL(false, 3.0f, 0, 0);
			TASK_GO_NEAR_OBJECT(false, Local_4.f_1900, 0,5f, 1, 0, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1900), "Usecase1", true, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_921, bVar0, 4294967295);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
			CLEAR_ACTOR_MAX_SPEED(bLocal_921);
			CLEAR_ACTOR_MIN_SPEED(bLocal_921);
			Function_393("MA01_TownMeetingObj");
			if (IS_OBJECT_VALID(bLocal_951))
			{
				DESTROY_OBJECT(bLocal_951);
			}
			if (FIRE_IS_HANDLE_VALID(iLocal_545))
			{
				FIRE_RELEASE_HANDLE(iLocal_545, 0);
			}
			if (FIRE_IS_HANDLE_VALID(iLocal_536))
			{
				FIRE_RELEASE_HANDLE(iLocal_536, 0);
			}
			GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
			Function_75();
			bLocal_951 = Function_438(StackVal, StackVal, StackVal, StackVal, bLocal_546, "TownCenterGateway", vLocal_974, Function_75(), Global_34573, 4.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			ADD_BLIP_FOR_OBJECT(bLocal_951, 330, 0f, 2, 0);
			SQUAD_GOALS_CLEAR(Local_4.f_632);
			Function_246(Local_4.f_632);
			Function_469(Local_4.f_632);
			iLocal_970 = 0;
			bLocal_966 = false;
			while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
			{
				bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
				if (IS_ACTOR_VALID(bLocal_971))
				{
					if (IS_ACTOR_ALIVE(bLocal_971))
					{
						switch (iLocal_970)
						{
							case 0x00000000:
								MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bLocal_971);
								MEMORY_ALLOW_PICKUP_WEAPONS(bLocal_971, 0);
								DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
								GIVE_WEAPON_TO_ACTOR(bLocal_971, 9, false, 1, 1);
								ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_971, 5, 1);
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1880, 0,5f, 1, 0, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1880), "Usecase1", true, 1);
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1904, 0,5f, 1, 0, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1904), "Usecase1", true, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_971, bVar0, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_970 = 1;
								break;
							
							case 0x00000001:
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1896, 0,5f, 1, 0, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1896), "Usecase1", true, 1);
								TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1644)[7], 0,5f, 1, 0, 1);
								TASK_STAND_STILL(false, 7.0f, 1, 0);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_971, bVar0, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_970 = 2;
								break;
							
							case 0x00000002:
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1644)[8], 0,5f, 1, 0, 1);
								TASK_STAND_STILL(false, 5.0f, 1, 0);
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1888, 0,5f, 1, 0, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1888), "Usecase1", true, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_971, bVar0, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_970 = 3;
								break;
							
							case 0x00000003:
								MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bLocal_971);
								MEMORY_ALLOW_PICKUP_WEAPONS(bLocal_971, 0);
								DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
								GIVE_WEAPON_TO_ACTOR(bLocal_971, 9, false, 1, 1);
								ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_971, 5, 1);
								bVar0 = TASK_SEQUENCE_OPEN();
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1884, 0,5f, 1, 0, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1884), "Usecase1", true, 1);
								TASK_GO_NEAR_OBJECT(false, Local_4.f_1912, 0,5f, 1, 0, 1);
								TASK_DRAW_HOLSTER_WEAPON(false, 1);
								TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_1912), "Usecase1", true, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_971, bVar0, 4294967295);
								TASK_SEQUENCE_RELEASE(bVar0, 1);
								iLocal_970 = 4;
								break;
							}
						}
				}
				bLocal_966++;
			}
			Function_226(&iLocal_926);
			iLocal_495 = 7;
			break;
		
		case 0x00000007:
			Function_264(&bLocal_585);
			if (Function_326(&iLocal_926) < 7.0f)
			{
				if (GATEWAY_UPDATE(bLocal_951))
				{
					if (FIRE_IS_HANDLE_VALID(iLocal_536))
					{
						FIRE_RELEASE_HANDLE(iLocal_536, 0);
					}
					SQUAD_GOALS_CLEAR(Local_4.f_632);
					Function_246(Local_4.f_632);
					Function_469(Local_4.f_632);
					DESTROY_OBJECT(bLocal_951);
					Function_406();
					Function_216(bLocal_924);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool Function_438(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x15FE8 / 90088
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_439() //Position: 0x160B3 / 90291
{
	if (IS_OBJECT_VALID(Local_626.f_16))
	{
		if (!STRINGS_ARE_EQUAL(GET_OBJECT_NAME(Local_626.f_16), "MexArmy01_CSMidtro"))
		{
			DESTROY_OBJECT(Local_626.f_16);
			Local_626.f_16 = Function_440(Local_4, 0, Global_34573, 0, 1, 0);
		}
	}
	else
	{
		Function_440(Local_4, 0, Global_34573, 0, 1, 0);
	}
	return;
}

var Function_440(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5) //Position: 0x16111 / 90385
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 11, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "MexArmy01_CSMidtro", 11, 1);
	}
	Function_441(&bVar0, uParam2);
	if (iParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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

void Function_441(var uParam0, char* cParam1) //Position: 0x16193 / 90515
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_452(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_451(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_450(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_449(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_448(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_447(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_446(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_445(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_444(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 9);
	Function_443(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 10);
	Function_442(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 7, 8, 6,5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 8, 1.0f, 3);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 3,25f, 4);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 6, 2.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 4,5f, 6);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 9, 10, 6.0f, 7, 0);
	return;
}

void Function_442(int iParam0) //Position: 0x162BD / 90813
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3265,363f, 38,66244f, 4548,08f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,118338f, -1,852677f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_443(int iParam0) //Position: 0x16363 / 90979
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3262,289f, 38,82296f, 4545,759f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,140355f, -2,507873f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 65.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_444(int iParam0) //Position: 0x16409 / 91145
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3267,027f, 39,4872f, 4545,66f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,003214f, 1,847875f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 80.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_445(int iParam0) //Position: 0x164AF / 91311
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 17.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3271,206f, 39,48768f, 4549,94f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,055094f, 2,701708f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 80.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_446(int iParam0) //Position: 0x16555 / 91477
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3259,947f, 39,34365f, 4547,418f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,054586f, -2,765813f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_447(int iParam0) //Position: 0x165FB / 91643
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3255,027f, 39,71241f, 4552,901f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,035092f, 1,018973f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_448(int iParam0) //Position: 0x166A1 / 91809
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3254,257f, 39,57262f, 4551,321f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,054341f, 1,559681f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 67,6f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_449(int iParam0) //Position: 0x16747 / 91975
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3254,163f, 39,70638f, 4552,788f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,034768f, 1,146272f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_450(int iParam0) //Position: 0x167ED / 92141
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 26,00001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3275,277f, 40,08963f, 4553,412f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,029311f, 2,962716f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_451(int iParam0) //Position: 0x16893 / 92307
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3255,22f, 39,58528f, 4551,055f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,045062f, 1,973235f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_452(var uParam0) //Position: 0x16935 / 92469
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -3255,59f, 39,60927f, 4551,232f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,777407f, 2,591826f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

bool Function_453() //Position: 0x169D7 / 92631
{
	if (!IS_BLIP_VALID(bLocal_952))
	{
		Function_473();
		Function_471();
		if (SQUAD_IS_VALID(Local_4.f_728))
		{
			if (Function_461() < 0)
			{
				Function_455(Local_4.f_728);
				DESTROY_OBJECT(Local_4.f_728);
				Function_455(Local_4.f_840);
				DESTROY_OBJECT(Local_4.f_840);
				Function_455(Local_4.f_888);
				DESTROY_OBJECT(Local_4.f_888);
				return 1;
			}
			if (!iLocal_947)
			{
				if (Function_461() < 2)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
					iLocal_947 = 1;
				}
			}
			if (SQUAD_GET_SIZE(Local_4.f_728) >= 0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, false))))
				{
					Function_468(Local_4.f_728, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
			}
			if (bLocal_985)
			{
				if (SQUAD_IS_VALID(Local_4.f_840))
				{
					if (SQUAD_GET_SIZE(Local_4.f_840) >= 0)
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_840, false))))
						{
							Function_468(Local_4.f_840, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
					}
				}
			}
			if (bLocal_984)
			{
				if (SQUAD_IS_VALID(Local_4.f_888))
				{
					if (SQUAD_GET_SIZE(Local_4.f_888) >= 0)
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_888, false))))
						{
							Function_468(Local_4.f_888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
					}
				}
			}
		}
	}
	else if (SQUAD_IS_VALID(Local_4.f_728))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728) >= 0)
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_728, false))))
			{
				Function_454(Local_4.f_728);
			}
		}
	}
	return 0;
}

void Function_454(bool bParam0) //Position: 0x16B62 / 93026
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
			Function_216(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_455(bool bParam0) //Position: 0x16B99 / 93081
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
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_456() //Position: 0x16BDD / 93149
{
	SQUAD_GOALS_CLEAR(Local_4.f_888);
	Function_246(Local_4.f_888);
	GET_OBJECT_POSITION((*&Local_4 + 1820)[0], &vLocal_974);
	bLocal_1010 = FIND_NEAREST_DOOR(&vLocal_974, 3.0f);
	if (IS_DOOR_VALID(bLocal_1010))
	{
		OPEN_DOOR_DIRECTION(bLocal_1010, true);
	}
	GET_OBJECT_POSITION((*&Local_4 + 1820)[1], &vLocal_974);
	bLocal_1010 = FIND_NEAREST_DOOR(&vLocal_974, 3.0f);
	if (IS_DOOR_VALID(bLocal_1010))
	{
		OPEN_DOOR_DIRECTION(bLocal_1010, true);
	}
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 844)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 844)[02], 42, 1,5f, 1, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1820)[2], &vLocal_974);
	fLocal_964 = Function_457((*&Local_4 + 844)[02], Global_34573);
	bLocal_966 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &vLocal_974, fLocal_964, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 844)[02], bLocal_966);
	TASK_SEQUENCE_RELEASE(bLocal_966, 1);
	Function_469(Local_4.f_888);
	if (SQUAD_IS_VALID(Local_4.f_888))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_888))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_888, bLocal_966);
			SET_ACTOR_FACTION(bLocal_971, 19);
			MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
			bLocal_966++;
		}
	}
	SQUAD_SET_FACTION(Local_4.f_888, 19);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_888, 0);
	Function_468(Local_4.f_888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_4.f_888, 1, 4294967295, 0);
	Function_465((*&Local_4 + 1820)[3], Local_4.f_888, 0, bLocal_533, 0);
	Function_465((*&Local_4 + 1820)[4], Local_4.f_888, 0, bLocal_533, 0);
	Function_465((*&Local_4 + 1820)[5], Local_4.f_888, 1, 0, 0);
	Function_465((*&Local_4 + 1820)[6], Local_4.f_888, 1, 0, 0);
	Function_465((*&Local_4 + 1820)[7], Local_4.f_888, 1, 0, 0);
	Function_468(Local_4.f_888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	bLocal_984 = true;
	return;
}

bool Function_457(bool bParam0, bool bParam1) //Position: 0x16DC4 / 93636
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_POSITION(bParam1, &vVar3);
		Function_458(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, &uVar6);
		return UNK_0x9C40E671(&uVar6);
	}
	return 0.0f;
}

void Function_458(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x16DFD / 93693
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_459() //Position: 0x16E20 / 93728
{
	SQUAD_GOALS_CLEAR(Local_4.f_840);
	Function_246(Local_4.f_840);
	GET_OBJECT_POSITION((*&Local_4 + 1820)[0], &vLocal_974);
	bLocal_1010 = FIND_NEAREST_DOOR(&vLocal_974, 3.0f);
	if (IS_DOOR_VALID(bLocal_1010))
	{
		OPEN_DOOR_DIRECTION(bLocal_1010, true);
	}
	GET_OBJECT_POSITION((*&Local_4 + 1820)[1], &vLocal_974);
	bLocal_1010 = FIND_NEAREST_DOOR(&vLocal_974, 3.0f);
	if (IS_DOOR_VALID(bLocal_1010))
	{
		OPEN_DOOR_DIRECTION(bLocal_1010, true);
	}
	SQUAD_SET_FACTION(Local_4.f_840, 19);
	Function_469(Local_4.f_840);
	if (SQUAD_IS_VALID(Local_4.f_840))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_840))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_840, bLocal_966);
			SET_ACTOR_FACTION(bLocal_971, 19);
			MEMORY_REPORT_POSITION_AUTO(bLocal_971, Global_34573, true);
			bLocal_966++;
		}
	}
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_840, 0);
	Function_468(Local_4.f_840, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	SQUAD_GOAL_ADD_COMBAT(Local_4.f_840, 1, 4294967295, 0);
	Function_465((*&Local_4 + 1796)[1], Local_4.f_840, 0, bLocal_533, 0);
	Function_465((*&Local_4 + 1796)[2], Local_4.f_840, 0, bLocal_533, 0);
	Function_465((*&Local_4 + 1796)[0], Local_4.f_840, 1, 0, 0);
	Function_468(Local_4.f_840, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	bLocal_985 = true;
	return;
}

int Function_460() //Position: 0x16F72 / 94066
{
	bLocal_966 = false;
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728));
	}
	if (bLocal_985)
	{
		if (SQUAD_IS_VALID(Local_4.f_840))
		{
			bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_840));
		}
	}
	if (bLocal_984)
	{
		if (SQUAD_IS_VALID(Local_4.f_888))
		{
			bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_888));
		}
	}
	return bLocal_966;
}

int Function_461() //Position: 0x16FD9 / 94169
{
	bLocal_966 = false;
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_728));
	}
	if (SQUAD_IS_VALID(Local_4.f_840))
	{
		bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_840));
	}
	if (SQUAD_IS_VALID(Local_4.f_888))
	{
		bLocal_966 = (bLocal_966 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_888));
	}
	return bLocal_966;
}

void Function_462() //Position: 0x17034 / 94260
{
	if (SQUAD_IS_VALID(Local_4.f_728))
	{
		if (Function_463(Local_4.f_728) >= 0)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (SQUAD_GET(GET_LAST_ATTACK_TARGET(Global_34573)) == Local_4.f_728)
					{
						if (!Function_328(&iLocal_992))
						{
							Function_226(&iLocal_992);
						}
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (RAND_INT_RANGE(false, 5) >= 4)
							{
								Function_435("MexArmy01_EspShoutsEnc", 0);
							}
							else if (Function_436())
							{
								Function_435("MexArmy01_EspTaunts", 0);
							}
						}
						bLocal_964 = Function_326(&iLocal_992);
						Function_227(&iLocal_992, (bLocal_964 - 5.0f));
						CLEAR_LAST_ATTACK(Global_34573);
					}
				}
			}
			if (Function_326(&iLocal_992) <= 15.0f)
			{
				if (Function_436())
				{
					Function_435("MexArmy01_JonNoShootRebsEsp", 0);
				}
				else
				{
					Function_434("MexArmy01_JonNoShootRebs", 0);
				}
				Function_226(&iLocal_992);
			}
		}
	}
	return;
}

int Function_463(bool bParam0) //Position: 0x17150 / 94544
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

void Function_464(bool bParam0, bool bParam1) //Position: 0x1719D / 94621
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_IDENTIFY(bVar2, bVar3);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_465(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x17220 / 94752
{
	var uVar0;
	struct<5> Var3;
	
	GET_OBJECT_POSITION(bParam0, &uVar0);
	GET_OBJECT_ORIENTATION(bParam0, &Var3);
	bVar6 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_GO_NEAR_OBJECT(false, bParam0, 0,5f, 2, 1, 1);
	if (!IS_VOLUME_VALID(bParam3))
	{
		if (bParam4)
		{
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &uVar0, -1.0f);
		}
		else
		{
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		}
	}
	else
	{
		TASK_KILL_CHAR(false, Global_34573);
	}
	TASK_SEQUENCE_CLOSE();
	bVar7 = SQUAD_GOAL_ADD_GENERAL_TASK(bParam1, bParam2, 1, 1);
	TASK_SEQUENCE_PERFORM(false, bVar6);
	TASK_SEQUENCE_RELEASE(bVar6, 1);
	return bVar7;
}

void Function_466(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17297 / 94871
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
				MEMORY_IDENTIFY(bParam0, bVar1);
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_467(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x172EC / 94956
{
	bool bVar0;
	
	bVar0 = FIND_NEAREST_COVER_LOCATION(&uParam1, bParam4, GET_HEADING(bParam0), 120.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(bParam0));
		PRINTSTRING(", shooting from position instead.");
		PRINTNL();
		TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uParam1, 0.0f, bParam6);
		TASK_PRIORITY_SET(bParam0, bParam5);
	}
	else
	{
		TASK_SHOOT_ENEMIES_FROM_COVER(bParam0, bVar0, bParam6, 1086324736);
		TASK_PRIORITY_SET(bParam0, bParam5);
	}
}

void Function_468(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x17394 / 95124
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

void Function_469(bool bParam0) //Position: 0x1747E / 95358
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

void Function_470() //Position: 0x174C5 / 95429
{
	if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920)))
	{
		GET_COVER_LOCATION_BASE_POSITION(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920), &vLocal_974);
		if (Function_371(StackVal, StackVal, Global_34573, vLocal_974) < 3.0f)
		{
			if (!GET_TASK_STATUS(bLocal_921, 27) != 1)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_921, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920), -1.0f, 1086324736);
			}
		}
		else if (!GET_TASK_STATUS(bLocal_921, 18) != 1)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1468)[0], &vLocal_974);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1468)[0], &Local_977);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_921, &vLocal_974, -1.0f);
		}
	}
	if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916)))
	{
		GET_COVER_LOCATION_BASE_POSITION(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916), &vLocal_974);
		if (Function_371(StackVal, StackVal, Global_34573, vLocal_974) < 3.0f)
		{
			if (!GET_TASK_STATUS(bLocal_924, 27) != 1)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_924, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916), -1.0f, 1086324736);
			}
		}
		else if (!GET_TASK_STATUS(bLocal_924, 18) != 1)
		{
			GET_OBJECT_POSITION((*&Local_4 + 1468)[1], &vLocal_974);
			GET_OBJECT_ORIENTATION((*&Local_4 + 1468)[1], &Local_977);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_924, &vLocal_974, -1.0f);
		}
	}
	return;
}

int Function_471() //Position: 0x175E3 / 95715
{
	if (!bLocal_985)
	{
		iLocal_946 = 0;
		if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
		{
			bLocal_971 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (SQUAD_GET(bLocal_971) == Local_4.f_840)
			{
				iLocal_946 = 1;
			}
		}
		if (!iLocal_946)
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				bLocal_971 = GET_LAST_ATTACK_TARGET(Global_34573);
				if (SQUAD_GET(bLocal_971) == Local_4.f_840)
				{
					iLocal_946 = 1;
				}
			}
		}
		if ((iLocal_946 || Function_472(Global_34573, (*&Local_4 + 932)[3], 15.0f)) || FIRE_IS_HANDLE_VALID(iLocal_536))
		{
			Function_459();
			return 1;
		}
	}
	return 1;
	return 0;
}

int Function_472(bool bParam0, int iParam1, float fParam2) //Position: 0x17677 / 95863
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_387(iParam1);
		Function_290(bParam0);
		if (VDIST(Function_387(iParam1), Function_290(bParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

int Function_473() //Position: 0x17701 / 96001
{
	if (!bLocal_984)
	{
		iLocal_946 = 0;
		if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
		{
			bLocal_971 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
			if (SQUAD_GET(bLocal_971) == Local_4.f_888)
			{
				iLocal_946 = 1;
			}
		}
		if (!iLocal_946)
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				bLocal_971 = GET_LAST_ATTACK_TARGET(Global_34573);
				if (SQUAD_GET(bLocal_971) == Local_4.f_888)
				{
					iLocal_946 = 1;
				}
			}
		}
		if ((((iLocal_946 || Function_472(Global_34573, (*&Local_4 + 932)[5], 15.0f)) || Function_472(Global_34573, (*&Local_4 + 932)[4], 15.0f)) || FIRE_IS_HANDLE_VALID(iLocal_542)) || FIRE_IS_HANDLE_VALID(iLocal_543))
		{
			Function_456();
			return 1;
		}
	}
	return 1;
	return 0;
}

void Function_474() //Position: 0x177B0 / 96176
{
	if (IS_ACTORSET_VALID(Local_4.f_928))
	{
		bLocal_966 = false;
		while (bLocal_966 <= GET_ACTORSET_SIZE(Local_4.f_928))
		{
			bLocal_971 = GET_ACTOR_FROM_ACTORSET(Local_4.f_928, bLocal_966);
			Function_338(bLocal_971, (*&Local_4 + 1576)[1], 1, 1, 1);
			bLocal_966++;
		}
		Function_475(&Local_4 + 928);
		DESTROY_ACTORSET(Local_4.f_928);
	}
	if (SQUAD_IS_VALID(Local_4.f_760))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_760))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bLocal_966);
			if (IS_ACTOR_VALID(bLocal_971))
			{
				if (IS_ACTOR_ALIVE(bLocal_971))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT_DEAD(bLocal_971);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT(bLocal_971, 1);
				}
			}
			bLocal_966++;
		}
	}
	else
	{
		Function_407();
	}
	SET_DUST_LEVEL_MODIFIER(4294967294);
	if (!DECOR_CHECK_EXIST(bLocal_924, "AiCoverDontPeek"))
	{
		DECOR_SET_BOOL(bLocal_924, "AiCoverDontPeek", true);
	}
	if (!DECOR_CHECK_EXIST(bLocal_921, "AiCoverDontPeek"))
	{
		DECOR_SET_BOOL(bLocal_921, "AiCoverDontPeek", true);
	}
	SQUAD_GOALS_CLEAR(Local_4.f_632);
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		SQUAD_SET_FACTION(Local_4.f_632, 20);
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_971, 0);
			if (GET_WEAPON_IN_HAND(bLocal_971) != 9)
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
				GIVE_WEAPON_TO_ACTOR(bLocal_971, 9, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_971, 9, 0);
			}
			if (!IS_ACTOR_USING_COVER(bLocal_971))
			{
				Function_338(bLocal_971, (*&Local_4 + 1576)[(5 + bLocal_966)], 1, 1, 1);
			}
			if (bLocal_966 == 1)
			{
				if (!IS_ACTOR_USING_COVER(bLocal_971))
				{
					bLocal_967 = TASK_SEQUENCE_OPEN();
					DECOR_SET_BOOL(bLocal_971, "AiCoverDontPeek", true);
					Function_253(&Local_4 + 1928);
					TASK_HIDE_AT_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1928), 5.0f, 6.0f, 0);
					TASK_FOLLOW_PATH(false, Local_4.f_1948, 1, 1, 0, 1, false);
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1468)[(14 + bLocal_966)], 1, 0, 1);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_POINT_GUN_AT_OBJECT(false, (*&Local_4 + 1348)[1], -1.0f, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_971, bLocal_967);
					TASK_SEQUENCE_RELEASE(bLocal_967, 1);
				}
			}
			else
			{
				bLocal_967 = TASK_SEQUENCE_OPEN();
				if (bLocal_966 == 0)
				{
					DECOR_SET_BOOL(bLocal_971, "AiCoverDontPeek", true);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_FOLLOW_PATH(false, Local_4.f_1952, 1, 1, 0, 1, false);
				}
				else if (bLocal_966 == 1)
				{
					DECOR_SET_BOOL(bLocal_971, "AiCoverDontPeek", true);
					Function_253(&Local_4 + 1928);
					TASK_HIDE_AT_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1928), 5.0f, 6.0f, 0);
					TASK_FOLLOW_PATH(false, Local_4.f_1948, 1, 1, 0, 1, false);
				}
				else if (bLocal_966 == 2)
				{
					TASK_FOLLOW_PATH(false, Local_4.f_1948, 1, 1, 0, 1, false);
				}
				else
				{
					TASK_FOLLOW_PATH(false, Local_4.f_1952, 1, 1, 0, 1, false);
				}
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1468)[(14 + bLocal_966)], 1, 0, 1);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_POINT_GUN_AT_OBJECT(false, (*&Local_4 + 1348)[1], -1.0f, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_971, bLocal_967);
				TASK_SEQUENCE_RELEASE(bLocal_967, 1);
			}
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_971, false);
			SET_DRAW_ACTOR(bLocal_971, true);
			ACTOR_DISABLE_WEAPON_RENDER(bLocal_971, 5, 0);
			SET_ACTOR_FACTION(bLocal_971, 20);
			MEMORY_CONSIDER_AS(bLocal_971, Global_34573, false);
			bLocal_966++;
		}
	}
	if (!IS_ACTOR_USING_COVER(bLocal_921))
	{
		Function_338(bLocal_921, (*&Local_4 + 1348)[2], 1, 1, 1);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_921, 0);
		if (GET_WEAPON_IN_HAND(bLocal_921) != 40)
		{
			GIVE_WEAPON_TO_ACTOR(bLocal_921, 40, false, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bLocal_921, 40, 0);
		}
		if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920)))
		{
			TASK_HIDE_AT_COVER(bLocal_921, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920), -1.0f, 6.0f, 0);
		}
	}
	SET_DRAW_ACTOR(bLocal_921, true);
	ACTOR_DISABLE_WEAPON_RENDER(bLocal_921, 1, 0);
	if (!IS_ACTOR_USING_COVER(bLocal_924))
	{
		Function_338(bLocal_924, (*&Local_4 + 1348)[3], 1, 1, 1);
		if (GET_WEAPON_IN_HAND(bLocal_924) != 40)
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_924);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_924, 0);
			GIVE_WEAPON_TO_ACTOR(bLocal_924, 40, false, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bLocal_924, 40, 0);
		}
		Function_253(&Local_4 + 1916);
		if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916)))
		{
			TASK_HIDE_AT_COVER(bLocal_924, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916), -1.0f, 6.0f, 0);
		}
	}
	SET_DRAW_ACTOR(bLocal_924, true);
	ACTOR_DISABLE_WEAPON_RENDER(bLocal_924, 1, 0);
	if (IS_OBJECT_VALID(bLocal_951))
	{
		DESTROY_OBJECT(bLocal_951);
	}
	Function_338(Global_34573, (*&Local_4 + 1576)[4], 0, 0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
	ENABLE_GAME_CAMERA_FOCUS(vLocal_974, -1.0f, 0, 0, 1, 0);
	Function_232();
	return;
}

void Function_475(var uParam0) //Position: 0x17C61 / 97377
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*uParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_476() //Position: 0x17CA8 / 97448
{
	return 1;
}

int Function_477() //Position: 0x17CAF / 97455
{
	Function_336(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_478() //Position: 0x17CC3 / 97475
{
	Function_474();
	return 1;
}

int Function_479() //Position: 0x17CCD / 97485
{
	if (Function_340() && Function_263())
	{
		return 1;
	}
	return 0;
}

int Function_480() //Position: 0x17CE0 / 97504
{
	if (!Function_340() && Function_263())
	{
	}
	else
	{
		if (!IS_ACTORSET_VALID(Local_4.f_928))
		{
			Function_247();
		}
		if (((Function_481((*&Local_4 + 892)[02], 1, 0x41700000) && Function_481((*&Local_4 + 892)[12], 1, 0x41700000)) && Function_481((*&Local_4 + 892)[22], 1, 0x41700000)) && Function_481((*&Local_4 + 892)[32], 1, 0x41700000))
		{
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			if (ACTOR_IS_GRABBED_BY_CUTSCENE(bLocal_921))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_921, false);
			}
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy04", (*&Local_4 + 892)[12]);
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy05", (*&Local_4 + 892)[02]);
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("COMPANION_MexicanHenchman", (*&Local_4 + 892)[22]);
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MISC_MexArmyCpt", (*&Local_4 + 892)[32]);
			Function_483();
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_481(bool bParam0, bool bParam1, float fParam2) //Position: 0x17DEF / 97775
{
	float fVar0;
	bool bVar1;
	
	if (Function_40() || !bParam1)
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
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

int Function_482() //Position: 0x17E8C / 97932
{
	Function_362(0);
	Function_347(1, 0, 1, 1, 1, 1, 1, (*&Local_4 + 996)[2], 1, 1, 1, 1);
	GET_OBJECT_POSITION((*&Local_4 + 1576)[4], &vLocal_974);
	Function_345(StackVal, StackVal, bLocal_546, vLocal_974, &Local_4 + 996[2], 0, 0.0f, 0.0f, 0.0f, 0, 1);
	return 1;
}

void Function_483() //Position: 0x17ED5 / 98005
{
	if (SQUAD_IS_VALID(Local_4.f_760))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_760))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, bLocal_966);
			if (IS_ACTOR_VALID(bLocal_971))
			{
				if (IS_ACTOR_ALIVE(bLocal_971))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT_DEAD(bLocal_971);
					CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_971);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_971, 1);
					SET_ACTOR_PERMANENT(bLocal_971, 1);
					CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_971);
				}
			}
			bLocal_966++;
		}
	}
	else
	{
		Function_407();
	}
	CLEAR_ACTOR_MAX_SPEED(bLocal_921);
	CLEAR_ACTOR_MIN_SPEED(bLocal_921);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
	MEMORY_PREFER_RIDING(bLocal_921, false);
	SET_DUST_LEVEL_MODIFIER(4294967294);
	DECOR_SET_BOOL(bLocal_924, "AiCoverDontPeek", true);
	DECOR_SET_BOOL(bLocal_921, "AiCoverDontPeek", true);
	SQUAD_GOALS_CLEAR(Local_4.f_632);
	Function_246(Local_4.f_632);
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		bLocal_966 = false;
		while (bLocal_966 <= SQUAD_GET_SIZE(Local_4.f_632))
		{
			bLocal_971 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, bLocal_966);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_971, 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_971);
			GIVE_WEAPON_TO_ACTOR(bLocal_971, 9, false, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bLocal_971, 9, 0);
			Function_338(bLocal_971, (*&Local_4 + 1576)[(5 + bLocal_966)], 1, 1, 1);
			bLocal_967 = TASK_SEQUENCE_OPEN();
			if (bLocal_966 == 0)
			{
				DECOR_SET_BOOL(bLocal_971, "AiCoverDontPeek", true);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
			}
			else if (bLocal_966 == 1)
			{
				DECOR_SET_BOOL(bLocal_971, "AiCoverDontPeek", true);
				Function_253(&Local_4 + 1928);
				TASK_HIDE_AT_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1928), -1.0f, 6.0f, 0);
			}
			else
			{
				TASK_STAND_STILL(false, -1.0f, 0, 0);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_971, bLocal_967);
			TASK_SEQUENCE_RELEASE(bLocal_967, 1);
			SET_DRAW_ACTOR(bLocal_971, false);
			ACTOR_DISABLE_WEAPON_RENDER(bLocal_971, 5, 1);
			bLocal_966++;
		}
	}
	Function_338(bLocal_921, (*&Local_4 + 1348)[2], 1, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_921, 0);
	GIVE_WEAPON_TO_ACTOR(bLocal_921, 40, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(bLocal_921, 40, 0);
	if (!IS_ACTOR_USING_COVER(bLocal_921))
	{
		if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920)))
		{
			TASK_HIDE_AT_COVER(bLocal_921, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1920), -1.0f, 6.0f, 0);
		}
	}
	SET_DRAW_ACTOR(bLocal_921, false);
	ACTOR_DISABLE_WEAPON_RENDER(bLocal_921, 1, 1);
	Function_338(bLocal_924, (*&Local_4 + 1348)[3], 1, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_924);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_924, 0);
	GIVE_WEAPON_TO_ACTOR(bLocal_924, 40, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(bLocal_924, 40, 0);
	if (!IS_ACTOR_USING_COVER(bLocal_924))
	{
		Function_253(&Local_4 + 1916);
		if (IS_COVER_LOCATION_VALID(GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916)))
		{
			TASK_HIDE_AT_COVER(bLocal_924, GET_COVER_LOCATION_FROM_OBJECT(Local_4.f_1916), -1.0f, 6.0f, 0);
		}
	}
	SET_DRAW_ACTOR(bLocal_924, false);
	ACTOR_DISABLE_WEAPON_RENDER(bLocal_924, 1, 1);
	if (IS_OBJECT_VALID(bLocal_951))
	{
		DESTROY_OBJECT(bLocal_951);
	}
	return;
}

void Function_484() //Position: 0x181A4 / 98724
{
	Function_384(7, 0, 4294967295, 4294967295);
	vLocal_655[29].f_28 = 0;
	vLocal_655[29].f_24 = 1;
	SET_DOOR_AUTO_CLOSE(vLocal_655[09], 0);
	vLocal_655[39].f_28 = 0;
	vLocal_655[39].f_32 = 1;
	vLocal_655[39].f_24 = 1;
	SET_DOOR_AUTO_CLOSE(vLocal_655[19], 0);
	Function_228(6, 0, 1);
	Function_405(30.0f);
	MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
	MEMORY_PREFER_WALKING(bLocal_921, true);
	ACTOR_PUT_WEAPON_IN_HAND(bLocal_921, 40, 0);
	ACTOR_PUT_WEAPON_IN_HAND(bLocal_924, 40, 0);
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_922)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_922));
	}
	if (IS_OBJECT_VALID(Local_4.f_1960))
	{
		DESTROY_OBJECT(Local_4.f_1960);
	}
	if (IS_OBJECT_VALID(Local_4.f_1856))
	{
		DESTROY_OBJECT(Local_4.f_1856);
	}
	Function_232();
	Function_211();
	return;
}

void Function_485() //Position: 0x18262 / 98914
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1100[26]), 1, true, 1);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_921, *(&Local_4 + 1100[76]), 1, true, 1);
	Function_162(2);
	Function_162(1);
	Function_162(4);
	Function_130(&(Global_29008[Global_30685[2]]), 256);
	Function_193(1, 0, 1);
	return;
}

void Function_486() //Position: 0x182C9 / 99017
{
	if (!Function_367(iLocal_634))
	{
		return;
	}
	if (SQUAD_IS_VALID(Local_4.f_632) && SQUAD_IS_VALID(Local_4.f_800))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vLocal_974);
		Function_429(StackVal, StackVal, "$/cutscene/MexArmy01_CS03_B/MexArmy01_CS03_B", &uLocal_948, vLocal_974, 99153, 1, 100.0f, 200.0f, 2, 1, 2, 2, 0, 1);
	}
	Function_351();
	return;
}

int Function_487() //Position: 0x18351 / 99153
{
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false)))
		{
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy04", SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false));
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, false)))
		{
			CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MISC_PeasnatGirl01", SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, false));
		}
	}
	return 1;
}

void Function_488() //Position: 0x183CF / 99279
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	Function_522();
	switch (iLocal_634)
	{
		case 0x00000000:
			Function_362(0);
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_427(bLocal_921);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[2]);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(6);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_359();
			bLocal_635 = Function_358(StackVal, StackVal, *(&Local_4 + 1100[16]), 0, 1, 1);
			if (!Function_357(bLocal_635))
			{
				Function_356(&Local_547);
			}
			Function_521();
			Function_273(1);
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_357(bLocal_635) || bLocal_635 != 4294967295)) && Function_520())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1100[16]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_921, *(&Local_4 + 1100[66]), 1, true, 1);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_921, false);
				Function_273(2);
			}
			break;
		
		case 0x00000002:
			if (Function_519())
			{
				Function_285(iLocal_633);
				Function_417(StackVal, StackVal, Function_285(iLocal_633), iLocal_633, Global_30633[0], Function_287(iLocal_633), 0);
				Function_273(3);
			}
			break;
		
		case 0x00000003:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_354(1.0f);
			Function_518();
			Function_273(6);
			break;
		
		case 0x00000006:
			if (!Function_510())
			{
				fVar0 = Function_509(Global_34573, bLocal_921);
				if (iLocal_932 == 0)
				{
					if (!HUD_IS_FADING())
					{
						Function_232();
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_921, true);
						AI_RIDING_SET_ENABLED(bLocal_921, 0);
						TASK_MOUNT(bLocal_921, bLocal_923, 0, 1, 2, 2147483647);
						SET_ANIMAL_CAN_ATTACK(bLocal_921, 0);
						SET_ANIMAL_CAN_ATTACK(bLocal_923, 0);
						ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_921, -1.0f, -1.0f, 4, 1, 0);
						Function_508();
						if (IS_ACTOR_VALID(bLocal_922))
						{
							Function_393("MexArmy01_obj00");
						}
						else
						{
							Function_393("horse_find");
						}
						Function_228(6, 0, 1);
						if (!IS_BLIP_VALID(bLocal_954))
						{
							bLocal_954 = ADD_BLIP_FOR_ACTOR(bLocal_922, 334, 0.0f, 2, 0);
						}
						Function_226(&iLocal_926);
						Function_506();
						iLocal_932 = 1;
					}
				}
				else if (iLocal_932 == 1)
				{
					if (!IS_ACTOR_VALID(bLocal_922))
					{
						if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_923))
						{
							SET_ALLOW_RIDE_BY_PLAYER(bLocal_923, 0);
							Function_232();
						}
					}
					else if (IS_ACTOR_DEAD(bLocal_922))
					{
						if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_923))
						{
							SET_ALLOW_RIDE_BY_PLAYER(bLocal_923, 0);
							Function_232();
						}
					}
					if (!iLocal_1006)
					{
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_921))
						{
							TASK_OVERRIDE_SET_MOVETYPE(bLocal_921, true);
							MEMORY_PREFER_RIDING(bLocal_921, true);
							if (!IS_ACTOR_RIDING(Global_34573))
							{
								Function_434("MexArmy01_WaitingJonMountHors", 2);
								Function_226(&iLocal_958);
							}
							iLocal_1006 = 1;
						}
					}
					else if (!Function_328(&iLocal_958))
					{
						Function_226(&iLocal_958);
					}
					else if (Function_326(&iLocal_958) < 15.0f)
					{
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
					}
					if (!IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_922))
						{
							Function_393("MexArmy01_obj00");
						}
						else
						{
							Function_393("horse_find");
						}
					}
					else
					{
						if (!DECOR_CHECK_EXIST(bLocal_546, "MusicSetDramatic"))
						{
							Function_384(10, 0, 4294967295, 4294967295);
							DECOR_SET_BOOL(bLocal_546, "MusicSetDramatic", true);
						}
						Function_393("MexArmy01_obj00a");
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_921))
						{
							Function_232();
							if (GET_LASSO_TARGET(Global_34573) == GET_MOUNT(bLocal_921))
							{
								DETACH_LASSO(Global_34573);
							}
							if (IS_BLIP_VALID(bLocal_954))
							{
								REMOVE_BLIP(bLocal_954);
							}
							MEMORY_PREFER_RIDING(bLocal_921, true);
							TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
							Function_226(&iLocal_926);
							iLocal_932 = 2;
						}
						else if (GET_MOUNT(Global_34573) == bLocal_923)
						{
							bLocal_923 = bLocal_922;
							TASK_MOUNT(bLocal_921, bLocal_923, 0, 1, 2, 2147483647);
							bLocal_922 = GET_MOUNT(Global_34573);
							Function_504(bLocal_922, 0);
							Function_232();
						}
						else if (GET_MOUNT(Global_34573) != bLocal_922)
						{
							bLocal_922 = GET_MOUNT(Global_34573);
							Function_504(bLocal_922, 0);
						}
					}
				}
				else if (iLocal_932 == 2)
				{
					if (Function_326(&iLocal_926) < 5.0f)
					{
						if (fVar0 > 20.0f)
						{
							Function_497();
						}
						else
						{
							iLocal_932 = 3;
						}
						if (iLocal_1004)
						{
							Function_393("MexArmy01_obj00a");
							iLocal_932 = 3;
						}
					}
				}
				else if (iLocal_932 == 3)
				{
					Function_494();
					if (fVar0 < 20.0f)
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[3]))
						{
							Function_493();
							Function_393("MexArmy01_obj01");
							AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
							if (!IS_OBJECT_VALID(bLocal_951))
							{
								GET_OBJECT_POSITION((*&Local_4 + 1348)[0], &vVar1);
								GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[0], &vVar4);
								bLocal_951 = Function_438(StackVal, StackVal, StackVal, StackVal, Local_4, Function_53(), vVar1, vVar4, Global_34573, 4.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
								ADD_BLIP_FOR_OBJECT(bLocal_951, 330, 0f, 2, 0);
								Function_491(StackVal, StackVal, vVar1, 0, 48, 1);
							}
							Function_226(&iLocal_926);
							iLocal_932 = 4;
						}
					}
					else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 964)[3]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
						Function_490();
						Function_393("MexArmy01_obj01");
						Function_226(&iLocal_926);
						iLocal_932 = 4;
					}
				}
				else if (iLocal_932 == 4)
				{
					Function_494();
					if (Function_326(&iLocal_926) < 6.0f || !ACTORS_IN_RANGE(Global_34573, bLocal_921, 20.0f))
					{
						Function_393("MexArmy01_obj01");
						AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
						if (!IS_OBJECT_VALID(bLocal_951))
						{
							GET_OBJECT_POSITION((*&Local_4 + 1348)[0], &vVar1);
							GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[0], &vVar4);
							bLocal_951 = Function_438(StackVal, StackVal, StackVal, StackVal, Local_4, Function_53(), vVar1, vVar4, Global_34573, 4.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
							ADD_BLIP_FOR_OBJECT(bLocal_951, 330, 0f, 2, 0);
							Function_491(StackVal, StackVal, vVar1, 0, 48, 1);
						}
						REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_921);
						TASK_OVERRIDE_SET_MOVETYPE(bLocal_921, 3);
						Function_157(Global_30685[2]);
						iLocal_932 = 5;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_489();
				iLocal_934[0] = 1;
				iLocal_633 = 1;
				Function_273(0);
			}
			break;
	}
	return;
}

void Function_489() //Position: 0x18A08 / 100872
{
	Function_242();
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_4 + 964)[2]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 964)[2]);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST((*&Local_4 + 964)[2]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 964)[2]);
	}
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_921, true);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_921);
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Function_211();
	return;
}

void Function_490() //Position: 0x18A56 / 100950
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_SantaSpeedsUpPace", "MexArmy01_SantaSpeedsUpPace", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x18AB5 / 101045
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_492(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_492(bool bParam0) //Position: 0x18B71 / 101233
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_493() //Position: 0x18BB1 / 101297
{
	if (iLocal_1004)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	else
	{
		ABORT_SCRIPTED_CONVERSATION(1);
	}
	iLocal_1004 = 0;
	Function_392(&iLocal_986);
	return;
}

void Function_494() //Position: 0x18BD4 / 101332
{
	if (!iLocal_982)
	{
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (!iLocal_983)
			{
				if (Function_326(&iLocal_992) < 3.0f)
				{
					PAUSE_SCRIPTED_CONVERSATION(1, 0);
					Function_434("MexArmy01_GetsOffHorsTesoro", 1);
					bLocal_1009 = true;
					iLocal_983 = 1;
				}
			}
			else if (!Function_328(&iLocal_986))
			{
				Function_226(&iLocal_986);
			}
			else if (Function_326(&iLocal_986) < 10.0f)
			{
				Function_434("MexArmy01_NoGetOnHorsTesoro", 0);
				Function_226(&iLocal_986);
			}
		}
		else if (iLocal_983)
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_921, 12.0f))
			{
				if (!Function_328(&iLocal_986))
				{
					Function_226(&iLocal_986);
				}
				else if (Function_326(&iLocal_986) < 3.0f)
				{
					RESTART_SCRIPTED_CONVERSATION();
					bLocal_1009 = false;
					Function_434("MexArmy01_ThrownOffHorsTesoro", 2);
					iLocal_983 = 0;
					Function_226(&iLocal_986);
				}
			}
		}
		if (!ACTORS_IN_RANGE(Global_34573, bLocal_921, 25.0f))
		{
			bLocal_966 = Function_496(Global_34573, Local_4.f_1932);
			GET_PATH_POINT(Local_4.f_1932, bLocal_966, &vLocal_974);
			bLocal_964 = Function_371(StackVal, StackVal, Global_34573, vLocal_974);
			if (bLocal_964 < 12.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				bLocal_1009 = true;
				Function_434("MexArmy01_WrongDirTesoro", 0);
				iLocal_982 = 1;
			}
			else if (Function_495(Global_34573, bLocal_921, Local_4.f_1932))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				bLocal_1009 = true;
				Function_434("MexArmy01_JonAheadSanta", 0);
				Function_226(&iLocal_986);
				iLocal_982 = 1;
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				bLocal_1009 = true;
				Function_434("MexArmy01_JonBehindSanta", 0);
				Function_226(&iLocal_986);
				iLocal_982 = 1;
			}
		}
	}
	else if (ACTORS_IN_RANGE(Global_34573, bLocal_921, 12.0f))
	{
		RESTART_SCRIPTED_CONVERSATION();
		bLocal_1009 = false;
		iLocal_982 = 0;
		iLocal_983 = 0;
	}
	return;
}

bool Function_495(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18DF7 / 101879
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = Function_496(bParam0, bParam2);
	iVar1 = Function_496(bParam1, bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (iVar0 == iVar1)
	{
		GET_PATH_POINT(bParam2, iVar0 + 1, &vVar4);
		fVar2 = Function_371(StackVal, StackVal, bParam0, vVar4);
		fVar3 = Function_371(StackVal, StackVal, bParam1, vVar4);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

bool Function_496(bool bParam0, bool bParam1) //Position: 0x18E58 / 101976
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	bVar4 = 4294967295;
	bVar5 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar1);
		Function_349(bParam0);
		bVar6 = VDIST(Function_349(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

void Function_497() //Position: 0x18EAC / 102060
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_328(&iLocal_986))
			{
				Function_392(&iLocal_986);
			}
		}
		else
		{
			if (iLocal_1004)
			{
				iLocal_1004 = 0;
			}
			if (!Function_328(&iLocal_986))
			{
				Function_226(&iLocal_986);
			}
			if (Function_326(&iLocal_986) < 4.0f)
			{
				if (!Function_328(&iLocal_929))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_921, 12.0f))
					{
						if (!iLocal_982)
						{
							switch (iLocal_933)
							{
								case 0x00000000:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1004 = 1;
										Function_503();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_933 = 1;
										}
									}
									break;
								
								case 0x00000001:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1004 = 1;
										Function_502();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_933 = 2;
										}
									}
									break;
								
								case 0x00000002:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1004 = 1;
										Function_501();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_933 = 3;
										}
									}
									break;
								
								case 0x00000003:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1004 = 1;
										Function_500();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_933 = 4;
										}
									}
									break;
								
								case 0x00000004:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_1004 = 1;
										Function_499();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_933 = 5;
										}
									}
									break;
								
								case 0x00000063:
									iLocal_1004 = 1;
									break;
								
								default:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										Function_498();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_1004 = 1;
											iLocal_933 = 99;
										}
									}
									break;
								}
							}
						}
					}
				}
			}
	}
	return;
}

void Function_498() //Position: 0x18FF0 / 102384
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_NoMoreTalk", "MexArmy01_NoMoreTalk", false, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x19041 / 102465
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AA", "MexArmy01_WayTesBanter_v5_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v5_AB", "MexArmy01_WayTesBanter_v5_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AC", "MexArmy01_WayTesBanter_v5_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v5_AD", "MexArmy01_WayTesBanter_v5_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AE1", "MexArmy01_WayTesBanter_v5_AE1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AE2", "MexArmy01_WayTesBanter_v5_AE2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AE3", "MexArmy01_WayTesBanter_v5_AE3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v5_AF", "MexArmy01_WayTesBanter_v5_AF", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AG1", "MexArmy01_WayTesBanter_v5_AG1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AG2", "MexArmy01_WayTesBanter_v5_AG2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AG3", "MexArmy01_WayTesBanter_v5_AG3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v5_AH", "MexArmy01_WayTesBanter_v5_AH", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AI1", "MexArmy01_WayTesBanter_v5_AI1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AI2", "MexArmy01_WayTesBanter_v5_AI2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v5_AI3", "MexArmy01_WayTesBanter_v5_AI3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v5_AJ", "MexArmy01_WayTesBanter_v5_AJ", true, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x194DD / 103645
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v4_AA", "MexArmy01_WayTesBanter_v4_AA", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AB", "MexArmy01_WayTesBanter_v4_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v4_AC", "MexArmy01_WayTesBanter_v4_AC", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AD1", "MexArmy01_WayTesBanter_v4_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AD2", "MexArmy01_WayTesBanter_v4_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v4_AE", "MexArmy01_WayTesBanter_v4_AE", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AF1", "MexArmy01_WayTesBanter_v4_AF1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AF2", "MexArmy01_WayTesBanter_v4_AF2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AF3", "MexArmy01_WayTesBanter_v4_AF3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v4_AG", "MexArmy01_WayTesBanter_v4_AG", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AH1", "MexArmy01_WayTesBanter_v4_AH1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AH2", "MexArmy01_WayTesBanter_v4_AH2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AH3", "MexArmy01_WayTesBanter_v4_AH3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v4_AH4", "MexArmy01_WayTesBanter_v4_AH4", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v4_AI", "MexArmy01_WayTesBanter_v4_AI", 2, 2, 1, 0, 1);
		Function_375(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x19932 / 104754
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AA", "MexArmy01_WayTesBanter_v3_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AB", "MexArmy01_WayTesBanter_v3_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AC", "MexArmy01_WayTesBanter_v3_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AD", "MexArmy01_WayTesBanter_v3_AD", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AE1", "MexArmy01_WayTesBanter_v3_AE1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AE2", "MexArmy01_WayTesBanter_v3_AE2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AF", "MexArmy01_WayTesBanter_v3_AF", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AG", "MexArmy01_WayTesBanter_v3_AG", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AH", "MexArmy01_WayTesBanter_v3_AH", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AI1", "MexArmy01_WayTesBanter_v3_AI1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AI2", "MexArmy01_WayTesBanter_v3_AI2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AJ1", "MexArmy01_WayTesBanter_v3_AJ1", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v3_AJ2", "MexArmy01_WayTesBanter_v3_AJ2", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v3_AK", "MexArmy01_WayTesBanter_v3_AK", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_502() //Position: 0x19D3A / 105786
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AA", "MexArmy01_WayTesBanter_v2_AA", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AB1", "MexArmy01_WayTesBanter_v2_AB1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AB2", "MexArmy01_WayTesBanter_v2_AB2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AC", "MexArmy01_WayTesBanter_v2_AC", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AD1", "MexArmy01_WayTesBanter_v2_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AD2", "MexArmy01_WayTesBanter_v2_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AE", "MexArmy01_WayTesBanter_v2_AE", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AF1", "MexArmy01_WayTesBanter_v2_AF1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AF2", "MexArmy01_WayTesBanter_v2_AF2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AF3", "MexArmy01_WayTesBanter_v2_AF3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AG", "MexArmy01_WayTesBanter_v2_AG", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AH", "MexArmy01_WayTesBanter_v2_AH", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AI", "MexArmy01_WayTesBanter_v2_AI", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AJ", "MexArmy01_WayTesBanter_v2_AJ", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AK", "MexArmy01_WayTesBanter_v2_AK", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AL", "MexArmy01_WayTesBanter_v2_AL", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v2_AM", "MexArmy01_WayTesBanter_v2_AM", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AN1", "MexArmy01_WayTesBanter_v2_AN1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v2_AN2", "MexArmy01_WayTesBanter_v2_AN2", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x1A2AB / 107179
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v1_AA", "MexArmy01_WayTesBanter_v1_AA", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AB", "MexArmy01_WayTesBanter_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v1_AC", "MexArmy01_WayTesBanter_v1_AC", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AD1", "MexArmy01_WayTesBanter_v1_AD1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AD2", "MexArmy01_WayTesBanter_v1_AD2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AD3", "MexArmy01_WayTesBanter_v1_AD3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AD4", "MexArmy01_WayTesBanter_v1_AD4", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v1_AE", "MexArmy01_WayTesBanter_v1_AE", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AF1", "MexArmy01_WayTesBanter_v1_AF1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AF2", "MexArmy01_WayTesBanter_v1_AF2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AF3", "MexArmy01_WayTesBanter_v1_AF3", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_WayTesBanter_v1_AG", "MexArmy01_WayTesBanter_v1_AG", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AH1", "MexArmy01_WayTesBanter_v1_AH1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AH2", "MexArmy01_WayTesBanter_v1_AH2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_WayTesBanter_v1_AH3", "MexArmy01_WayTesBanter_v1_AH3", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504(bool bParam0, int iParam1) //Position: 0x1A702 / 108290
{
	Function_505(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_505(bool bParam0) //Position: 0x1A714 / 108308
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
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
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
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	return;
}

void Function_506() //Position: 0x1A8CA / 108746
{
	iLocal_1004 = 0;
	Function_392(&iLocal_986);
	iLocal_933 = Function_507();
	return;
}

var Function_507() //Position: 0x1A8E0 / 108768
{
	return Global_34165.f_60;
}

void Function_508() //Position: 0x1A8EB / 108779
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_SetOffTesoro", "MexArmy01_SetOffTesoro", false, 1, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_509(bool bParam0, bool bParam1) //Position: 0x1A940 / 108864
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

bool Function_510() //Position: 0x1AA31 / 109105
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	switch (iLocal_502)
	{
		case 0x00000000:
			Function_351();
			if (Function_516(Global_34573, (*&Local_4 + 1348)[1]) >= 300.0f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 1348)[1], &vVar0);
				STREAMING_LOAD_BOUNDS(vVar0, 100.0f, 1);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar0, 100.0f))
				{
					Function_231();
				}
			}
			if (!iLocal_1005)
			{
				if (Function_516(Global_34573, (*&Local_4 + 1348)[1]) >= 250.0f)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_921, 20.0f))
					{
						Function_515();
						iLocal_1005 = 1;
					}
				}
			}
			if (!IS_ACTOR_RIDING(bLocal_921))
			{
				if (!GET_TASK_STATUS(bLocal_921, 11) != 1)
				{
					TASK_MOUNT(bLocal_921, bLocal_923, 0, 1, 2, 2147483647);
				}
			}
			else
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[2]))
				{
					if (GET_TASK_STATUS(bLocal_921, 88) != 1)
					{
						TASK_GO_TO_OBJECT(bLocal_921, (*&Local_4 + 1576)[13], 4, 1, 0);
					}
				}
				else if (GET_TASK_STATUS(bLocal_921, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_921, Local_4.f_1932, 4, 1, 0, 0, false);
				}
				fVar3 = Function_509(Global_34573, bLocal_921);
				if (fVar3 < 120.0f)
				{
					if (!Function_495(Global_34573, bLocal_921, Local_4.f_1932))
					{
						Function_279("Henchman_abandoned");
						bLocal_939 = true;
					}
					else
					{
						if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_921, 1065353216, 1117126656, 1, 1, 0))
						{
							bLocal_966 = Function_514(Global_34573, Local_4.f_1932);
							GET_PATH_POINT(Local_4.f_1932, bLocal_966, &vLocal_974);
							if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_974, 3212836864))
							{
								GET_PATH_POINT(Local_4.f_1932, bLocal_966 + 1, &Local_977);
								bLocal_971 = GET_MOUNT(bLocal_921);
								TELEPORT_ACTOR(bLocal_971, &vLocal_974, 0, 1, 1);
								Function_513(StackVal, StackVal, bLocal_971, Local_977);
								if (!IS_ACTOR_RIDING(bLocal_921))
								{
									ACTOR_MOUNT_ACTOR(bLocal_921, bLocal_971);
								}
								AI_ACTOR_FORCE_SPEED(bLocal_921, 3);
							}
						}
						if (!IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[3]))
						{
							bVar5 = GET_MOUNT(bLocal_921);
							if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bVar5) == 24.0f)
							{
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar5, 24.0f);
								TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_921, 1.0f);
								SET_ACTOR_MIN_SPEED_ABSOLUTE(bLocal_921, 24.0f);
							}
						}
					}
				}
				else if (fVar3 < 60.0f)
				{
					if (Function_495(Global_34573, bLocal_921, Local_4.f_1932))
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[3]))
						{
							bVar5 = GET_MOUNT(bLocal_921);
							if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bVar5) == 24.0f)
							{
								SET_ACTOR_MIN_SPEED_ABSOLUTE(bVar5, 24.0f);
								TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_921, 1.0f);
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_921, 24.0f);
							}
						}
					}
					else
					{
						if (IS_OBJECT_VALID(bLocal_951))
						{
							Function_211();
							DESTROY_OBJECT(bLocal_951);
							Function_216(bLocal_922);
							Function_228(6, 1, 1);
						}
						if (IS_ACTOR_RIDING(Global_34573))
						{
							Function_228(6, 1, 1);
							Function_393("Henchman_return");
						}
					}
				}
				else if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (IS_OBJECT_VALID(bLocal_951))
					{
						Function_211();
						DESTROY_OBJECT(bLocal_951);
					}
					if (!IS_BLIP_VALID(bLocal_954))
					{
						if (IS_ACTOR_ALIVE(bLocal_922))
						{
							bLocal_954 = ADD_BLIP_FOR_ACTOR(bLocal_922, 325, 0.0f, 2, 0);
						}
					}
					else if (!IS_ACTOR_ALIVE(bLocal_922))
					{
						REMOVE_BLIP(bLocal_954);
					}
					Function_228(6, 0, 1);
					if (iLocal_932 > 2)
					{
						if (IS_ACTOR_ALIVE(bLocal_922))
						{
							Function_393("MexArmy01_obj00");
						}
						else
						{
							Function_393("horse_find");
						}
					}
				}
				else
				{
					if (iLocal_932 > 5)
					{
						if (!IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[3]))
						{
							if (Function_495(bLocal_921, Global_34573, Local_4.f_1932))
							{
								if (!Function_328(&iLocal_955))
								{
									Function_226(&iLocal_955);
								}
								else if (Function_326(&iLocal_955) < 3.0f)
								{
									bVar5 = GET_MOUNT(Global_34573);
									fVar4 = GET_MAX_SPEED(bVar5);
									bVar5 = GET_MOUNT(bLocal_921);
									bLocal_964 = RAND_FLOAT_RANGE(-6.0f, -2.0f);
									SET_ACTOR_MIN_SPEED_ABSOLUTE(bVar5, (fVar4 + bLocal_964));
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_921, (fVar4 + bLocal_964));
									TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_921, 1.0f);
									Function_226(&iLocal_955);
								}
							}
							else if (ACTORS_IN_RANGE(Global_34573, bLocal_921, 10.0f))
							{
								if (!Function_328(&iLocal_955))
								{
									Function_226(&iLocal_955);
								}
								else if (Function_326(&iLocal_955) < 3.0f)
								{
									bVar5 = GET_MOUNT(Global_34573);
									fVar4 = GET_MAX_SPEED(bVar5);
									bVar5 = GET_MOUNT(bLocal_921);
									bLocal_964 = RAND_FLOAT_RANGE(-4.0f, 1.0f);
									SET_ACTOR_MIN_SPEED_ABSOLUTE(bVar5, (fVar4 + bLocal_964));
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_921, (fVar4 + bLocal_964));
									TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_921, 1.0f);
									Function_226(&iLocal_955);
								}
							}
							else if (!Function_328(&iLocal_955))
							{
								Function_226(&iLocal_955);
							}
							else if (Function_326(&iLocal_955) < 3.0f)
							{
								bVar5 = GET_MOUNT(Global_34573);
								fVar4 = GET_MAX_SPEED(bVar5);
								bVar5 = GET_MOUNT(bLocal_921);
								bLocal_964 = RAND_FLOAT_RANGE(0.0f, 3.0f);
								SET_ACTOR_MIN_SPEED_ABSOLUTE(bVar5, (fVar4 + bLocal_964));
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_921, (fVar4 + bLocal_964));
								TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_921, 1.0f);
								Function_226(&iLocal_955);
							}
						}
						if (!IS_OBJECT_VALID(bLocal_951))
						{
							GET_OBJECT_POSITION((*&Local_4 + 1348)[0], &vLocal_974);
							GET_OBJECT_ORIENTATION((*&Local_4 + 1348)[0], &Local_977);
							bLocal_951 = Function_438(StackVal, StackVal, StackVal, StackVal, Local_4, Function_53(), vLocal_974, Local_977, Global_34573, 4.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
							ADD_BLIP_FOR_OBJECT(bLocal_951, 330, 0f, 2, 0);
							Function_491(StackVal, StackVal, vLocal_974, 0, 48, 1);
						}
						Function_494();
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!bLocal_1009)
							{
								if (!Function_328(&iLocal_986))
								{
									Function_226(&iLocal_986);
								}
								else if (Function_326(&iLocal_986) < 10.0f)
								{
									if (Function_495(Global_34573, bLocal_921, Local_4.f_1932))
									{
										Function_434("MexArmy01_JonAheadSanta", 0);
										Function_227(&iLocal_986, RAND_FLOAT_RANGE(2.0f, 5.0f));
									}
									else
									{
										Function_434("MexArmy01_JonBehindSanta", 0);
										Function_227(&iLocal_986, RAND_FLOAT_RANGE(2.0f, 5.0f));
									}
								}
							}
						}
					}
					else
					{
						CLEAR_ACTOR_MAX_SPEED(bLocal_921);
						CLEAR_ACTOR_MIN_SPEED(bLocal_921);
					}
					Function_216(bLocal_922);
					Function_228(6, 1, 1);
				}
				if (!iLocal_1007)
				{
					if (Function_516(Global_34573, (*&Local_4 + 1348)[1]) >= 250.0f)
					{
						Function_512();
					}
					if (SQUAD_IS_VALID(Local_4.f_632))
					{
						bLocal_971 = Function_511(Local_4.f_632, Global_34573, 0, 0);
						bLocal_972 = Function_511(Local_4.f_632, bLocal_921, 0, 0);
						if (ACTORS_IN_RANGE(Global_34573, bLocal_971, 30.0f) || ACTORS_IN_RANGE(bLocal_921, bLocal_972, 30.0f))
						{
							GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, false), 0.0f, 0.0f, 3.0f, &vLocal_974);
							bLocal_966 = TASK_SEQUENCE_OPEN();
							TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, false), 0,25f, 1);
							TASK_SHOOT_FROM_POSITION(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, false), &vLocal_974);
							TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, false), bLocal_966);
							TASK_SEQUENCE_RELEASE(bLocal_966, 1);
							GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, true), 0.0f, 0.0f, 3.0f, &vLocal_974);
							bLocal_966 = TASK_SEQUENCE_OPEN();
							TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, true), 0,5f, 1);
							TASK_SHOOT_FROM_POSITION(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, true), &vLocal_974);
							TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, true), bLocal_966);
							TASK_SEQUENCE_RELEASE(bLocal_966, 1);
							GET_OBJECT_RELATIVE_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, 2), 0.0f, 0.0f, 3.0f, &vLocal_974);
							bLocal_966 = TASK_SEQUENCE_OPEN();
							TASK_POINT_GUN_AT_OBJECT(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, 2), 0,75f, 1);
							TASK_SHOOT_FROM_POSITION(false, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_760, 2), &vLocal_974);
							TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2), bLocal_966);
							TASK_SEQUENCE_RELEASE(bLocal_966, 1);
							bLocal_966 = TASK_SEQUENCE_OPEN();
							TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_632, 2), bLocal_966);
							TASK_SEQUENCE_RELEASE(bLocal_966, 1);
							iLocal_1007 = 1;
						}
					}
				}
				if (IS_OBJECT_VALID(bLocal_951))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 964)[1]) || IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[1]))
					{
						if (!Function_495(bLocal_921, Global_34573, Local_4.f_1932))
						{
							Function_92(100, 1, 0);
						}
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						bLocal_966 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1576)[0], 4, 0, 1);
						TASK_DISMOUNT(false, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(Global_34573, bLocal_966);
						TASK_SEQUENCE_RELEASE(bLocal_966, 1);
						bLocal_966 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(false, (*&Local_4 + 1576)[1], 4, 0, 1);
						TASK_DISMOUNT(false, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_921, bLocal_966);
						TASK_SEQUENCE_RELEASE(bLocal_966, 1);
						iLocal_932 = 4;
						Function_230(bLocal_951);
						Function_211();
						MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_921);
						Function_228(6, 0, 1);
						AI_RIDING_SET_ENABLED(bLocal_921, 1);
						Function_226(&iLocal_926);
						ABORT_SCRIPTED_CONVERSATION(1);
						AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
						CLEAR_ACTOR_MAX_SPEED(bLocal_921);
						CLEAR_ACTOR_MIN_SPEED(bLocal_921);
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_921);
						Function_226(&iLocal_992);
						Function_226(&iLocal_926);
						iLocal_502 = 3;
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_326(&iLocal_926) < 10.0f || !IS_ACTOR_RIDING(Global_34573))
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				STREAMING_UNLOAD_BOUNDS();
				Function_226(&iLocal_926);
				Function_273(106);
				return 0;
			}
			break;
	}
	return 0;
}

bool Function_511(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1B348 / 111432
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
			fVar3 = Function_509(bVar4, bParam1);
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

void Function_512() //Position: 0x1B402 / 111618
{
	bool bVar0;
	
	if (!Function_328(&iLocal_961))
	{
		Function_226(&iLocal_961);
		bLocal_965 = 0,1f;
	}
	else if (Function_326(&iLocal_961) < bLocal_965)
	{
		bLocal_966 = RAND_INT_RANGE(false, 3);
		switch (bLocal_966)
		{
			case 0x00000000:
				bVar0 = "ENEMY_SHOT_REVOLVER_LO_POWER_MASTER";
				break;
			
			case 0x00000001:
				bVar0 = "ENEMY_SHOT_REPEATER_LO_POWER_MASTER";
				break;
			
			case 0x00000002:
				bVar0 = "ENEMY_SHOT_RIFLE_LO_POWER_MASTER";
				break;
			
			case 0x00000003:
				bVar0 = "ENEMY_SHOT_SHOTGUN_LO_POWER_MASTER";
				break;
		}
		GET_OBJECT_POSITION((*&Local_4 + 1576)[4], &vLocal_974);
		PLAY_SOUND_FROM_POSITION(bVar0, vLocal_974);
		Function_226(&iLocal_961);
		bLocal_965 = RAND_FLOAT_RANGE(0,1f, 1.0f);
	}
	return;
}

void Function_513(bool bParam0, vector3 vParam1) //Position: 0x1B52B / 111915
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	GET_POSITION(bParam0, &vVar1);
	vVar4 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
	bVar0 = UNK_0x9C40E671(&vVar4);
	SET_ACTOR_HEADING(bParam0, bVar0, 1);
}

bool Function_514(bool bParam0, bool bParam1) //Position: 0x1B556 / 111958
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 1;
	}
	iVar0 = Function_496(bParam0, bParam1);
	fVar3 = 90.0f;
	bVar1 = false;
	while (bVar1 <= GET_NUM_PATH_POINTS(bParam1))
	{
		if (bVar1 > iVar0 && bVar1 < 0)
		{
			GET_PATH_POINT(bParam1, bVar1, &vLocal_974);
			bVar2 = VDIST(Global_34574, vLocal_974);
			if (bVar2 > fVar3)
			{
				return (bVar1 - 1);
			}
		}
		bVar1++;
	}
	return 1;
}

void Function_515() //Position: 0x1B5C1 / 112065
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_NearTesoroBant_v1_AA1", "MexArmy01_NearTesoroBant_v1_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_NearTesoroBant_v1_AA2", "MexArmy01_NearTesoroBant_v1_AA2", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy01_NearTesoroBant_v1_AB", "MexArmy01_NearTesoroBant_v1_AB", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_NearTesoroBant_v1_AC1", "MexArmy01_NearTesoroBant_v1_AC1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_NearTesoroBant_v1_AC2", "MexArmy01_NearTesoroBant_v1_AC2", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_516(bool bParam0, bool bParam1) //Position: 0x1B75A / 112474
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_290(bParam0);
			vVar0 = { StackVal, StackVal, Function_290(bParam0) };
			Function_517(bParam1);
			vVar3 = { StackVal, StackVal, Function_517(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_517(bool bParam0) //Position: 0x1B7FA / 112634
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

void Function_518() //Position: 0x1B866 / 112742
{
	Function_232();
	if (Function_331(&Local_547))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_922, *(&Local_4 + 1100[06]), 1, true, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_923, *(&Local_4 + 1100[56]), 1, true, 1);
	}
	TASK_STAND_STILL(bLocal_922, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_923, -1.0f, 0, 0);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_921, (*&Local_4 + 964)[5], 4, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_921, false);
	AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
	return;
}

bool Function_519() //Position: 0x1B8EC / 112876
{
	if (!IS_DOOR_VALID(vLocal_636[09]))
	{
		vLocal_636[09] = Function_352("escalara", &vLocal_636[09] + 4, vLocal_636[09].f_20);
	}
	if (!IS_DOOR_VALID(vLocal_636[19]))
	{
		vLocal_636[19] = Function_352("escalara", &vLocal_636[19] + 4, vLocal_636[19].f_20);
	}
	if (IS_DOOR_VALID(vLocal_636[09]) && IS_DOOR_VALID(vLocal_636[19]))
	{
		Function_154(vLocal_636[09], 1);
		Function_154(vLocal_636[19], 1);
		OPEN_DOOR_DIRECTION(vLocal_636[09], vLocal_636[09].f_32);
		OPEN_DOOR_DIRECTION(vLocal_636[19], vLocal_636[19].f_32);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 964)[2]);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 964)[2]);
		return 1;
	}
	return 0;
}

int Function_520() //Position: 0x1B9B9 / 113081
{
	Function_270(&Local_4 + 320, 521, 2, 0);
	Function_270(&Local_4 + 320, 523, 2, 0);
	Function_270(&Local_4 + 320, 522, 2, 0);
	if (Function_264(&Local_4 + 320))
	{
		return 1;
	}
	return 0;
}

void Function_521() //Position: 0x1B9F7 / 113143
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *(&Local_4 + 1100[16]) };
	TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, vVar0, 1, true, 1);
	return;
}

void Function_522() //Position: 0x1BA24 / 113188
{
	bool bVar0;
	
	if (!Function_367(iLocal_634))
	{
		return;
	}
	Function_388();
	if (!iLocal_942)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_921, (*&Local_4 + 964)[0]))
		{
			Function_130(&(Global_29008[Global_30685[2]]), 256);
			iLocal_942 = 1;
		}
	}
	bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GET_ACTOR_FACTION(bVar0) == 16)
		{
			Function_279("MexArmy01_soldierAssaulted");
			bLocal_939 = true;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_632))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1576)[4], &vLocal_974);
		Function_429(StackVal, StackVal, "$/cutscene/MexArmy01_CS02/MexArmy01_CS02", &uLocal_948, vLocal_974, 113418, 1, 100.0f, 200.0f, 2, 1, 2, 2, 0, 1);
	}
	return;
}

int Function_523() //Position: 0x1BB0A / 113418
{
	if (!IS_ACTORSET_VALID(Local_4.f_928))
	{
		Function_247();
	}
	if (((Function_481((*&Local_4 + 892)[02], 1, 0x41700000) && Function_481((*&Local_4 + 892)[12], 1, 0x41700000)) && Function_481((*&Local_4 + 892)[22], 1, 0x41700000)) && Function_481((*&Local_4 + 892)[32], 1, 0x41700000))
	{
		CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
		if (ACTOR_IS_GRABBED_BY_CUTSCENE(bLocal_921))
		{
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_921, false);
		}
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy04", (*&Local_4 + 892)[12]);
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MEXICAN_ARMY_Easy05", (*&Local_4 + 892)[02]);
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("COMPANION_MexicanHenchman", (*&Local_4 + 892)[22]);
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("MISC_MexArmyCpt", (*&Local_4 + 892)[32]);
		return 1;
	}
	return 0;
}

void Function_524() //Position: 0x1BC06 / 113670
{
	switch (iLocal_634)
	{
		case 0x00000006:
			Function_566(&Local_547, 1);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (!IS_OBJECT_VALID(bLocal_546))
			{
				bLocal_546 = CREATE_LAYOUT("MexArmy01_DynamicLayout");
			}
			Function_565();
			Function_564();
			if (!IS_ACTOR_VALID(bLocal_921))
			{
				bLocal_921 = Function_555(6, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if ((!Function_331(&Local_547) && Local_547.f_24 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEXICAN_ARMY_01/MEXICAN_ARMY_01"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -4366,127f, 41,96f, 4343,853f, -180,157f, 1, true, 1);
				Global_63097 = 1;
				iLocal_634 = 7;
			}
			else
			{
				iLocal_634 = 16;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_226(&iLocal_926);
				iLocal_634 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_320("$/cutscene/MEXICAN_ARMY_01/MEXICAN_ARMY_01", &Local_626, &Local_547, &iLocal_633, 139764, 139350, 139311, 139276, 139203, 139196, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000010:
			CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			Function_564();
			iLocal_634 = 17;
			break;
		
		case 0x00000011:
			if (Function_539())
			{
				Function_535();
				iLocal_634 = 18;
			}
			break;
		
		case 0x00000012:
			Function_529();
			Function_226(&iLocal_926);
			Function_528(&iLocal_929);
			iLocal_633 = 0;
			iLocal_634 = 0;
			Function_526(&Local_547, &iLocal_633, &iLocal_634);
			Function_525(StackVal, StackVal, StackVal, StackVal, StackVal, Function_535(), Local_547);
			switch (iLocal_633)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_274();
					break;
				
				case 0x00000002:
					Function_272();
					break;
				
				case 0x00000065:
					Function_271();
					break;
			}
			break;
	}
	return;
}

void Function_525(struct<25> Param0) //Position: 0x1BE34 / 114228
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_633 = 0;
			break;
		
		case 0x00000002:
			iLocal_633 = 101;
			break;
	}
}

void Function_526(int iParam0, int iParam1, int iParam2) //Position: 0x1BE60 / 114272
{
	if (Function_331(iParam0))
	{
		*iParam1 = Function_424(iParam0);
		if (*iParam1 == 4294967295)
		{
			*iParam1 = 0;
		}
		if (*iParam1 == 99)
		{
			*iParam1 = 0;
			*iParam2 = 0;
		}
		Function_527();
	}
	return;
}

void Function_527() //Position: 0x1BE94 / 114324
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

void Function_528(int iParam0) //Position: 0x1BEE5 / 114405
{
	if (!Function_328(iParam0))
	{
		Function_227(iParam0, 0.0f);
	}
	return;
}

void Function_529() //Position: 0x1BEFA / 114426
{
	Function_534();
	Function_359();
	bLocal_945 = false;
	Function_75();
	Function_75();
	bLocal_533 = CREATE_VOLUME_IN_LAYOUT(bLocal_546, "KillPlayerVol", 2, Function_75(), Function_75(), 20.0f, 20.0f, 20.0f);
	Function_75();
	Function_75();
	ATTACH_OBJECTS(bLocal_533, Global_34573, Function_53(), Function_75(), Function_75(), 4294967295);
	RESET_RMPTFX_ALL();
	if (Function_533(bLocal_921, 1))
	{
		Function_228(6, 1, 1);
		RESET_ACTOR_GAITS(bLocal_921, 0);
		SET_CRIPPLE_ENABLE(bLocal_921, 0);
		SET_ACTOR_FACTION(bLocal_921, 20);
		TASK_PRIORITY_SET(bLocal_921, true);
		TASK_STAND_STILL(bLocal_921, -1.0f, 0, 0);
		AI_BEHAVIOR_SET_ALLOW(bLocal_921, 0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_921, true);
		SET_ACTOR_MAX_HEALTH(bLocal_921, 50.0f);
		Function_427(bLocal_921);
	}
	if (!IS_ACTOR_VALID(bLocal_922))
	{
		Function_532();
		bLocal_922 = (*&Local_4 + 636)[02];
	}
	if (Function_533(bLocal_922, 1))
	{
		TASK_PRIORITY_SET(bLocal_922, true);
		TASK_STAND_STILL(bLocal_922, -1.0f, 0, 0);
	}
	if (!IS_ACTOR_VALID(bLocal_923))
	{
		Function_244();
		bLocal_923 = (*&Local_4 + 648)[02];
	}
	if (Function_533(bLocal_923, 1))
	{
		TASK_PRIORITY_SET(bLocal_923, true);
		TASK_STAND_STILL(bLocal_923, -1.0f, 0, 0);
	}
	Function_530(&uLocal_755, bLocal_546);
	Function_237(&(Local_795[017]), bLocal_921, "Henchman", 1, 0x5f5e100, 1);
	cLocal_920 = CREATE_OBJECT_ITERATOR(Local_4);
	return;
}

int Function_530(var uParam0, bool bParam1) //Position: 0x1C03E / 114750
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_531(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_531(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_531(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_531(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_531(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1C6DE / 116446
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

void Function_532() //Position: 0x1C7A1 / 116641
{
	(*&Local_4 + 636)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PlayerHorse", 976, -4368,808f, 39,20626f, 4351,824f, 0.0f, 150,6411f, 0.0f);
	ACCESSORIZE_HORSE((*&Local_4 + 636)[02], 3);
	SET_ACTOR_FACTION((*&Local_4 + 636)[02], 20);
	return;
}

bool Function_533(bool bParam0, bool bParam1) //Position: 0x1C7F5 / 116725
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_534() //Position: 0x1C836 / 116790
{
	strcpy(&vLocal_636[09] + 4, "villaWall04", 16);
	vLocal_636[09].f_20 = 1;
	vLocal_636[09].f_28 = 1;
	vLocal_636[09].f_32 = 1;
	strcpy(&vLocal_636[19] + 4, "villaWall04", 16);
	vLocal_636[19].f_20 = 2;
	vLocal_636[19].f_28 = 1;
	strcpy(&vLocal_655[09] + 4, "wall01", 16);
	vLocal_655[09].f_20 = 1;
	vLocal_655[09].f_28 = 0;
	vLocal_655[09].f_24 = 1;
	strcpy(&vLocal_655[19] + 4, "wall01", 16);
	vLocal_655[19].f_20 = 2;
	vLocal_655[19].f_28 = 0;
	vLocal_655[19].f_32 = 1;
	vLocal_655[19].f_24 = 1;
	strcpy(&vLocal_655[99] + 4, "wall01", 16);
	vLocal_655[99].f_20 = 3;
	vLocal_655[99].f_28 = 0;
	vLocal_655[99].f_24 = 1;
	strcpy(&vLocal_655[109] + 4, "wall01", 16);
	vLocal_655[109].f_20 = 4;
	vLocal_655[109].f_28 = 0;
	vLocal_655[109].f_32 = 1;
	vLocal_655[109].f_24 = 1;
	strcpy(&vLocal_655[29] + 4, "house04", 16);
	vLocal_655[29].f_20 = 1;
	vLocal_655[29].f_24 = 0;
	vLocal_655[29].f_32 = 1;
	strcpy(&vLocal_655[39] + 4, "house04", 16);
	vLocal_655[39].f_20 = 2;
	vLocal_655[39].f_24 = 0;
	vLocal_655[39].f_32 = 1;
	strcpy(&vLocal_655[49] + 4, "house03", 16);
	vLocal_655[49].f_20 = 1;
	vLocal_655[49].f_24 = 0;
	strcpy(&vLocal_655[59] + 4, "house02", 16);
	vLocal_655[59].f_20 = 1;
	vLocal_655[59].f_24 = 0;
	strcpy(&vLocal_655[69] + 4, "house02", 16);
	vLocal_655[69].f_20 = 2;
	vLocal_655[69].f_24 = 0;
	strcpy(&vLocal_655[79] + 4, "house01", 16);
	vLocal_655[79].f_20 = 1;
	vLocal_655[79].f_24 = 0;
	strcpy(&vLocal_655[89] + 4, "house01", 16);
	vLocal_655[89].f_20 = 2;
	vLocal_655[89].f_24 = 0;
	return;
}

vector3 Function_535() //Position: 0x1CA8B / 117387
{
	var uVar0;
	
	Function_538(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("MexArmy01_layout");
	Local_4.f_960 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "BuildingFireVolumes_set");
	(*&Local_4 + 932)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nSWFireVol", 2, -3281,508f, 40,16982f, 4559,969f, 0.0f, 37,29163f, 0.0f, 4,963623f, 4,175675f, 7,683413f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[0]);
	(*&Local_4 + 932)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nNEFireVol", 2, -3242,248f, 39,05527f, 4538,806f, 0.0f, -90,26509f, 0.0f, 4,696785f, 4,384361f, 7,813456f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[1]);
	(*&Local_4 + 932)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nSEFireVol", 2, -3244,293f, 40,56079f, 4562,46f, 0.0f, -89,96045f, 0.0f, 4,627738f, 4,775833f, 7,970443f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[2]);
	(*&Local_4 + 932)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SWFireVolOut", 2, -3253,837f, 40,2424f, 4536,543f, 0.0f, 64,86201f, 0.0f, 9,102513f, 6,586474f, 9,142862f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[3]);
	(*&Local_4 + 932)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NEFireVolOut", 2, -3242,037f, 39,05527f, 4538,807f, 0.0f, -90,26509f, 0.0f, 11,56581f, 10,54122f, 9,18256f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[4]);
	(*&Local_4 + 932)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SEFireVolOut", 2, -3244,293f, 40,56079f, 4561,983f, 0.0f, -89,96045f, 0.0f, 8,304379f, 5,964465f, 9,732322f);
	ADD_TO_VOLUME_SET(Local_4.f_960, (*&Local_4 + 932)[5]);
	Local_4.f_992 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TravelVolumes_set");
	(*&Local_4 + 964)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DisableAmbientVol", 2, -3518,521f, 22,81299f, 4632,489f, 0.0f, -42,82951f, 0.0f, 24,43815f, 24,82865f, 61,27396f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[0]);
	(*&Local_4 + 964)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ArrivalVol", 2, -3310,991f, 40,53476f, 4547,906f, 0.0f, 0.0f, 0.0f, 24,43815f, 6,221136f, 34,28242f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[1]);
	(*&Local_4 + 964)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EscalGateVol", 2, -4375,925f, 38,70368f, 4363,41f, 0.0f, 40,24115f, 0.0f, 24,43815f, 10,57406f, 17,78361f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[2]);
	(*&Local_4 + 964)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SlowVol", 2, -4381,699f, 38,70368f, 4436,635f, 0.0f, 44,99202f, 0.0f, 180,8889f, 55,74878f, 136,9732f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[3]);
	(*&Local_4 + 964)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GateVol", 2, -3297,231f, 40,53476f, 4546,871f, 0.0f, 0.0f, 0.0f, 2,588851f, 6,221136f, 6,862515f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[4]);
	(*&Local_4 + 964)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ExecutionVol", 2, -3300,467f, 38,93911f, 4559,452f, -1,380645f, 7,962046f, -3,335503f, 6,039608f, 6,221136f, 19,17295f);
	ADD_TO_VOLUME_SET(Local_4.f_992, (*&Local_4 + 964)[5]);
	Local_4.f_1016 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVolumes_set");
	(*&Local_4 + 996)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -4355,992f, 40,28711f, 4346,322f, 0.0f, 0.0f, 0.0f, 44,05031f, 9,568323f, 21,71435f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 996)[0]);
	(*&Local_4 + 996)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneFinal", 2, -3268,298f, 38,14893f, 4548,75f, 0.0f, 0.0f, 0.0f, 32,85584f, 8,937623f, 11,57864f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 996)[1]);
	(*&Local_4 + 996)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneRaceVol", 2, -3304,434f, 38,9957f, 4547,049f, 0.0f, -89,9201f, 0.0f, 59,07102f, 4,961235f, 21,71435f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 996)[2]);
	(*&Local_4 + 996)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneMidtro", 2, -3268,569f, 38,90501f, 4548,684f, 0.0f, 0.0f, 0.0f, 28,97177f, 8,937623f, 10,75916f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 996)[3]);
	Local_4.f_1060 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ChurchDefenseVols_set");
	(*&Local_4 + 1020)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchInside", 2, -3258,248f, 40,72366f, 4562,942f, 0.0f, -179,7716f, 0.0f, 9,283756f, 4,786622f, 12,4829f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[0]);
	(*&Local_4 + 1020)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchRoof", 2, -3258,258f, 44,50925f, 4560,341f, 0.0f, -179,7716f, 0.0f, 9,292258f, 2,778075f, 8,47849f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[1]);
	(*&Local_4 + 1020)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchFront", 2, -3270,01f, 39,3634f, 4557,057f, 0.0f, -179,7716f, 0.0f, 6,707351f, 8,791773f, 9,630467f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[2]);
	(*&Local_4 + 1020)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchAttack", 2, -3270,57f, 38,69091f, 4539,048f, 0.0f, -179,7716f, 0.0f, 17,85239f, 6,247124f, 12,95069f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[3]);
	(*&Local_4 + 1020)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TownCenterVol", 2, -3258,902f, 38,14892f, 4546,17f, 0.0f, -179,7716f, 0.0f, 19,4242f, 6,985045f, 11,4425f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[4]);
	(*&Local_4 + 1020)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nTesoroVol", 2, -3266,735f, 38,14892f, 4548,895f, 0.0f, -179,7716f, 0.0f, 60,32453f, 6,985045f, 38,46442f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[5]);
	(*&Local_4 + 1020)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NorthGateVol", 2, -3220,796f, 38,14892f, 4549,213f, 0.0f, -179,7716f, 0.0f, 29,54075f, 6,985045f, 8,176992f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[6]);
	(*&Local_4 + 1020)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BattleTrigger", 2, -3259,738f, 40,72366f, 4549,049f, 0.0f, -179,7716f, 0.0f, 52,96208f, 9,815988f, 43,32114f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[7]);
	(*&Local_4 + 1020)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchBackBuild", 2, -3253,802f, 39,3634f, 4538,538f, 0.0f, -203,7263f, 0.0f, 9,031851f, 8,791773f, 9,913847f);
	ADD_TO_VOLUME_SET(Local_4.f_1060, (*&Local_4 + 1020)[8]);
	Local_4.f_1096 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "MexFireVols_set");
	(*&Local_4 + 1064)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StablesFireVol", 2, -3284,939f, 38,19211f, 4534,038f, 0.0f, 0.0f, 0.0f, 6,374913f, 8,713004f, 11,00652f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[0]);
	(*&Local_4 + 1064)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShedFireVol", 2, -3273,33f, 38,57923f, 4539,567f, 0.0f, 0.0f, 0.0f, 9,608788f, 11,70568f, 11,00652f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[1]);
	(*&Local_4 + 1064)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BackBuildFireVol", 2, -3281,949f, 38,19211f, 4559,015f, 0.0f, -56,09242f, 0.0f, 11,99858f, 12,51418f, 11,81274f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[2]);
	(*&Local_4 + 1064)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FrontShedFireVol", 2, -3292,551f, 41,42503f, 4563,153f, 0.0f, 0.0f, 0.0f, 6,643902f, 5,921682f, 8,205023f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[3]);
	(*&Local_4 + 1064)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ChurchFireVol", 2, -3258,219f, 41,42503f, 4562,074f, 0.0f, 0.0f, 0.0f, 11,05558f, 5,921682f, 14,38458f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[4]);
	(*&Local_4 + 1064)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CornerStablesFireVol", 2, -3293,752f, 38,19211f, 4533,235f, 0.0f, 0.0f, 0.0f, 8,028049f, 8,713004f, 9,6628f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[5]);
	(*&Local_4 + 1064)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SmallBuildFireVol", 2, -3270,239f, 41,42503f, 4558,705f, 0.0f, 0.0f, 0.0f, 6,172297f, 5,921682f, 7,654976f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1064)[6]);
	*(&Local_4 + 1100[06]) = { -4369,837f, 39,17871f, 4358,09f };
	*(&Local_4 + 1100[06] + 12) = { 0.0f, -240,6947f, 0.0f };
	*(&Local_4 + 1100[16]) = { -4366f, 42,01784f, 4343,286f };
	*(&Local_4 + 1100[16] + 12) = { 0.0f, -180,1566f, 0.0f };
	*(&Local_4 + 1100[26]) = { -3301,743f, 39,13894f, 4547,085f };
	*(&Local_4 + 1100[26] + 12) = { 0.0f, -93,53858f, 0.0f };
	*(&Local_4 + 1100[36]) = { -3274,6f, 38,21142f, 4548,029f };
	*(&Local_4 + 1100[36] + 12) = { 0.0f, 80,97648f, 0.0f };
	*(&Local_4 + 1100[46]) = { -3259,405f, 38,1489f, 4546,831f };
	*(&Local_4 + 1100[46] + 12) = { 0.0f, 451,9217f, 0.0f };
	*(&Local_4 + 1100[56]) = { -4368.0f, 39,15297f, 4360,001f };
	*(&Local_4 + 1100[56] + 12) = { 0.0f, 107,8116f, 0.0f };
	*(&Local_4 + 1100[66]) = { -4356,016f, 39,21352f, 4353,37f };
	*(&Local_4 + 1100[66] + 12) = { 0.0f, 107,8116f, 0.0f };
	*(&Local_4 + 1100[76]) = { -3300.0f, 39,14927f, 4544,741f };
	*(&Local_4 + 1100[76] + 12) = { 0.0f, -85,39944f, 0.0f };
	*(&Local_4 + 1100[86]) = { -3266,044f, 38,14893f, 4548.0f };
	*(&Local_4 + 1100[86] + 12) = { 0.0f, -32,19169f, 0.0f };
	*(&Local_4 + 1100[96]) = { -3266,044f, 38,14893f, 4548.0f };
	*(&Local_4 + 1100[96] + 12) = { 0.0f, -26,58811f, 0.0f };
	Local_4.f_1344 = CREATE_OBJECTSET_IN_LAYOUT("TesoroPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1348)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionDismountPos", -3307,745f, 38,90257f, 4554,534f, 0.0f, 4,939351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[0], Local_4.f_1344);
	(*&Local_4 + 1348)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "TownCenterPos", -3259,758f, 38,1489f, 4547,524f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[1], Local_4.f_1344);
	(*&Local_4 + 1348)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GateCoverLeft", -3300.0f, 39,14928f, 4544,738f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[2], Local_4.f_1344);
	(*&Local_4 + 1348)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GateCoverRight", -3299,904f, 39,08181f, 4549,434f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[3], Local_4.f_1344);
	(*&Local_4 + 1348)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagMFarm", -3248.0f, 38,14893f, 4540.0f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[4], Local_4.f_1344);
	(*&Local_4 + 1348)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagMLab", -3240.0f, 38,1489f, 4556.0f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[5], Local_4.f_1344);
	(*&Local_4 + 1348)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagFCallG", -3272.0f, 39,1528f, 4572f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[6], Local_4.f_1344);
	(*&Local_4 + 1348)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagFFarm", -3280.0f, 38,1489f, 4532.0f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[7], Local_4.f_1344);
	(*&Local_4 + 1348)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagOlCg", -3288.0f, 39,15283f, 4552.0f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[8], Local_4.f_1344);
	(*&Local_4 + 1348)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagOMBeg", -3259,105f, 37,9244f, 4535,105f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[9], Local_4.f_1344);
	(*&Local_4 + 1348)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "FleeFlagOFBeg", -3248.0f, 39,15283f, 4568.0f, 0.0f, -91,80676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[10], Local_4.f_1344);
	(*&Local_4 + 1348)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "FireBottlePos1", -3268,989f, 38,14607f, 4542,943f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[11], Local_4.f_1344);
	(*&Local_4 + 1348)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "FireBottlePos2", -3267,837f, 38,14893f, 4542,604f, 0.0f, -362,5691f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[12], Local_4.f_1344);
	(*&Local_4 + 1348)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "FireBottlePos3", -3268,304f, 38,14894f, 4542,562f, 0.0f, 13,86449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[13], Local_4.f_1344);
	(*&Local_4 + 1348)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "PyroPos1", -3285,028f, 38,20578f, 4545,519f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[14], Local_4.f_1344);
	(*&Local_4 + 1348)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "PyroPos2", -3278,288f, 38,16719f, 4548,412f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[15], Local_4.f_1344);
	(*&Local_4 + 1348)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "PyroPos3", -3288,992f, 39,15282f, 4551,77f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[16], Local_4.f_1344);
	(*&Local_4 + 1348)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "PyroPos4", -3283,09f, 38,09902f, 4547,019f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[17], Local_4.f_1344);
	(*&Local_4 + 1348)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelReturnPos1", -3293,29f, 39,15025f, 4551,456f, -0,1803634f, -78,3317f, -0,480677f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[18], Local_4.f_1344);
	(*&Local_4 + 1348)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelReturnPos2", -3291,379f, 38,1489f, 4542,736f, 0,2504414f, -98,37514f, -0,9050838f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[19], Local_4.f_1344);
	(*&Local_4 + 1348)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "RebelReturnPos3", -3290,02f, 38,14891f, 4538,02f, 0,1004437f, -111,2947f, -0,7508991f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[20], Local_4.f_1344);
	(*&Local_4 + 1348)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "ShedFireTarget", -3270,017f, 40,14088f, 4535,995f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[21], Local_4.f_1344);
	(*&Local_4 + 1348)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "BarrelPosition", -3277,069f, 38,16096f, 4543,31f, -0,04253801f, 30,95959f, -0,6791962f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1348)[22], Local_4.f_1344);
	Local_4.f_1444 = CREATE_OBJECTSET_IN_LAYOUT("BuildingBlipPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1448)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nSWBlipPos", -3254,208f, 39,66808f, 4536,859f, 0.0f, -59,44253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[0], Local_4.f_1444);
	(*&Local_4 + 1448)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nNEBlipPos", -3239,411f, 37,58778f, 4539,557f, 0.0f, -189,3218f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[1], Local_4.f_1444);
	(*&Local_4 + 1448)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nSEBlipPos", -3243,277f, 38,60199f, 4561,408f, 0.0f, -2,555713f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[2], Local_4.f_1444);
	Local_4.f_1464 = CREATE_OBJECTSET_IN_LAYOUT("MexGuardPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1468)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut1", -3300.0f, 39,14254f, 4546,068f, 0.0f, -93,94354f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[0], Local_4.f_1464);
	(*&Local_4 + 1468)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut2", -3300.0f, 39,14254f, 4547,8f, 0.0f, -93,94354f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[1], Local_4.f_1464);
	(*&Local_4 + 1468)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut3", -3285,696f, 39,32379f, 4554,938f, 0.0f, 249,4133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[2], Local_4.f_1464);
	(*&Local_4 + 1468)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut4", -3280.0f, 38,14893f, 4540,497f, 0.0f, 249,9899f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[3], Local_4.f_1464);
	(*&Local_4 + 1468)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut5", -3278,062f, 38,14891f, 4538,062f, 0.0f, 249,9899f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[4], Local_4.f_1464);
	(*&Local_4 + 1468)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosOut6", -3276,344f, 39,15281f, 4564,429f, 0.0f, 288,128f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[5], Local_4.f_1464);
	(*&Local_4 + 1468)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn1", -3272.0f, 38,14895f, 4543,461f, -106,3365f, 88,31234f, -103,7479f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[6], Local_4.f_1464);
	(*&Local_4 + 1468)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn2", -3262,616f, 38,13381f, 4538,289f, -157,203f, 85,8171f, -154,6623f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[7], Local_4.f_1464);
	(*&Local_4 + 1468)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn3", -3271,663f, 39,37505f, 4556,244f, -20,0594f, 85,27359f, -17,40128f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[8], Local_4.f_1464);
	(*&Local_4 + 1468)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn4", -3268.0f, 38,54982f, 4553,597f, -25,92153f, 86,29312f, -23,27907f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[9], Local_4.f_1464);
	(*&Local_4 + 1468)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn5", -3280,477f, 38,1489f, 4532,477f, 1,620071f, 181,5094f, 2,552631f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[10], Local_4.f_1464);
	(*&Local_4 + 1468)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn6", -3262,177f, 42,34191f, 4558,831f, -1,730874f, 20,66222f, 1,984401f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[11], Local_4.f_1464);
	(*&Local_4 + 1468)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn7", -3256,465f, 39,12469f, 4572f, -1,730874f, 20,66222f, 1,984401f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[12], Local_4.f_1464);
	(*&Local_4 + 1468)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "GuardPosIn8", -3260.0f, 38,99883f, 4562,545f, -1,730874f, 20,66222f, 1,984401f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[13], Local_4.f_1464);
	(*&Local_4 + 1468)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "PreFightPos1", -3288.0f, 38,14893f, 4538,873f, 0.0f, 249,4133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[14], Local_4.f_1464);
	(*&Local_4 + 1468)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "PreFightPos2", -3288.0f, 39,15281f, 4553,554f, 0.0f, 290,8794f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[15], Local_4.f_1464);
	(*&Local_4 + 1468)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "PreFightPos3", -3281,595f, 38,54934f, 4553,595f, 0.0f, 292,2696f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[16], Local_4.f_1464);
	(*&Local_4 + 1468)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "PreFightPos4", -3291,379f, 38,1489f, 4542,736f, 0.0f, 249,4133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[17], Local_4.f_1464);
	(*&Local_4 + 1468)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos1", -3264,48f, 38,14893f, 4536,48f, -106,3365f, 88,31234f, -103,7479f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[18], Local_4.f_1464);
	(*&Local_4 + 1468)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos2", -3281,943f, 38,14893f, 4544.0f, -176,8252f, -59,31591f, -180,1357f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[19], Local_4.f_1464);
	(*&Local_4 + 1468)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos3", -3274,962f, 38,1489f, 4552.0f, -177,5607f, -58,97439f, -179,0486f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[20], Local_4.f_1464);
	(*&Local_4 + 1468)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos4", -3270,414f, 39,15281f, 4572f, -177,5607f, -58,97439f, -179,0486f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[21], Local_4.f_1464);
	(*&Local_4 + 1468)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos5", -3261,516f, 38,14891f, 4537,516f, -177,5607f, -58,97439f, -179,0486f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[22], Local_4.f_1464);
	(*&Local_4 + 1468)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos6", -3252.0f, 38,14893f, 4549,263f, -177,5607f, -58,97439f, -179,0486f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[23], Local_4.f_1464);
	(*&Local_4 + 1468)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "AssaultPos7", -3260,962f, 38,1489f, 4548,962f, -177,5607f, -58,97439f, -179,0486f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[24], Local_4.f_1464);
	Local_4.f_1572 = CREATE_OBJECTSET_IN_LAYOUT("TravelPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1576)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "WinnerStartPos", -3305,704f, 38,90292f, 4539,726f, 0.0f, -353,967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[0], Local_4.f_1572);
	(*&Local_4 + 1576)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "LoserStartPos", -3308,697f, 38,90287f, 4540,685f, 0.0f, 15,91787f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[1], Local_4.f_1572);
	(*&Local_4 + 1576)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseGoPos", -3309,571f, 38,8965f, 4534,072f, 0.0f, -353,967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[2], Local_4.f_1572);
	(*&Local_4 + 1576)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "LoserGoPos", -3308,399f, 38,90257f, 4551,359f, 0.0f, -353,967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[3], Local_4.f_1572);
	(*&Local_4 + 1576)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "MarstonEndPos", -3301,799f, 39,13894f, 4547,085f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[4], Local_4.f_1572);
	(*&Local_4 + 1576)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierStartPos1", -3301,5f, 38,98206f, 4541,771f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[5], Local_4.f_1572);
	(*&Local_4 + 1576)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierStartPos2", -3299,884f, 38,80094f, 4551,274f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[6], Local_4.f_1572);
	(*&Local_4 + 1576)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierStartPos3", -3303,434f, 39,02374f, 4545,273f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[7], Local_4.f_1572);
	(*&Local_4 + 1576)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierStartPos4", -3310,527f, 38,90281f, 4544,827f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[8], Local_4.f_1572);
	(*&Local_4 + 1576)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "CapConvPos", -3301,13f, 38,94023f, 4549,965f, 0.0f, -262,7987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[9], Local_4.f_1572);
	(*&Local_4 + 1576)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "LoseConvPos", -3302,401f, 38,90278f, 4550,975f, 0.0f, -412,0197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[10], Local_4.f_1572);
	(*&Local_4 + 1576)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "WinConvPos", -3302,694f, 38,90289f, 4549,776f, 0.0f, -412,0197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[11], Local_4.f_1572);
	(*&Local_4 + 1576)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierGoPos", -3307,918f, 39,16863f, 4561,071f, 0.0f, -447,4035f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[12], Local_4.f_1572);
	(*&Local_4 + 1576)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "GateExitFlag", -4389,243f, 38,32785f, 4369,04f, 0.0f, -585,8341f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[13], Local_4.f_1572);
	(*&Local_4 + 1576)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "CapStartPos", -3298,977f, 39,21533f, 4549,291f, 0.0f, 100,1159f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1576)[14], Local_4.f_1572);
	Local_4.f_1640 = CREATE_OBJECTSET_IN_LAYOUT("CSMidtroPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1644)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartMid", -3274,6f, 38,21142f, 4548,029f, 0.0f, 78,51366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[0], Local_4.f_1640);
	(*&Local_4 + 1644)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CaptainStartMid", -3277,303f, 38,01384f, 4547,618f, 0.0f, -84,70356f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[1], Local_4.f_1640);
	(*&Local_4 + 1644)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartMid", -3260.0f, 38,1489f, 4549,269f, 0.0f, -141,8282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[2], Local_4.f_1640);
	(*&Local_4 + 1644)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGo1", -3276,481f, 39,28571f, 4558,945f, 0.0f, -8,324039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[3], Local_4.f_1640);
	(*&Local_4 + 1644)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenTeleport", -3279,539f, 39,10999f, 4560,575f, 0.0f, -65,28358f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[4], Local_4.f_1640);
	(*&Local_4 + 1644)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard1", -3281,596f, 39,28566f, 4562,231f, 0.0f, -67,69262f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[5], Local_4.f_1640);
	(*&Local_4 + 1644)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard2", -3274,792f, 39,1528f, 4560.0f, 0.0f, -8,324039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[6], Local_4.f_1640);
	(*&Local_4 + 1644)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard3", -3281,943f, 38,14893f, 4544.0f, 0.0f, -8,324039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[7], Local_4.f_1640);
	(*&Local_4 + 1644)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard4", -3281,677f, 38,36389f, 4552.0f, 0.0f, -8,324039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[8], Local_4.f_1640);
	(*&Local_4 + 1644)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "FireBottleGuyPos", -3266,247f, 38,14893f, 4542,862f, 0.0f, -146,3928f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[9], Local_4.f_1640);
	(*&Local_4 + 1644)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "CaptainHorseEndPos", -3313,757f, 39,00397f, 4542,571f, 0,6624883f, 216,6271f, 1,384138f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[10], Local_4.f_1640);
	(*&Local_4 + 1644)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndPos", -3313,605f, 39,00365f, 4545,017f, 0.0f, 250,4258f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[11], Local_4.f_1640);
	(*&Local_4 + 1644)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierEndPos1", -3306,086f, 38,90303f, 4537,962f, 0.0f, -181,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[12], Local_4.f_1640);
	(*&Local_4 + 1644)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierEndPos2", -3309,88f, 38,90303f, 4538,285f, 0.0f, -181,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[13], Local_4.f_1640);
	(*&Local_4 + 1644)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierEndPos3", -3305,997f, 38,8965f, 4534,063f, 0.0f, -181,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[14], Local_4.f_1640);
	(*&Local_4 + 1644)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierEndPos4", -3310,466f, 38,8965f, 4534,074f, 0.0f, -181,7603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[15], Local_4.f_1640);
	(*&Local_4 + 1644)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard5", -3304,397f, 38,90303f, 4537,818f, -0,4033217f, 154,5228f, -0,1034023f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[16], Local_4.f_1640);
	(*&Local_4 + 1644)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerFacePos", -3258,032f, 39,8777f, 4555,932f, 0.0f, 34,93729f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[17], Local_4.f_1640);
	(*&Local_4 + 1644)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "CaptainEndPos", -3289,371f, 38,47982f, 4547,793f, 3,548508f, 98,62239f, 5,287895f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[18], Local_4.f_1640);
	(*&Local_4 + 1644)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndPos", -3278,277f, 38,0248f, 4546,159f, 0.0f, 104,7656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[19], Local_4.f_1640);
	(*&Local_4 + 1644)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "WalkOutPos1", -3280,544f, 38,05438f, 4546,974f, 0.0f, 104,7656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[20], Local_4.f_1640);
	(*&Local_4 + 1644)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "WalkOutPos2", -3302,307f, 39,13552f, 4547,619f, 0.0f, 104,7656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[21], Local_4.f_1640);
	(*&Local_4 + 1644)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "WalkOutPos3", -3295,883f, 38,97061f, 4546,955f, 0.0f, 104,7656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[22], Local_4.f_1640);
	(*&Local_4 + 1644)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "WomenGuard6", -3286,135f, 39,15282f, 4566,135f, 0.0f, -8,324039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[23], Local_4.f_1640);
	(*&Local_4 + 1644)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "CaptainWalkMid1", -3269,308f, 37,99918f, 4546,09f, 0.0f, -84,70356f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[24], Local_4.f_1640);
	(*&Local_4 + 1644)[25] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerLookMid", -3265,816f, 38,61216f, 4544,78f, 0.0f, 78,51366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1644)[25], Local_4.f_1640);
	Local_4.f_1752 = CREATE_OBJECTSET_IN_LAYOUT("CSFinalPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1756)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart", -3259,384f, 38,1489f, 4546,79f, 0.0f, -264,6231f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[0], Local_4.f_1752);
	(*&Local_4 + 1756)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "ChurchLook", -3246,06f, 42,92249f, 4560,008f, 0.0f, -114,3427f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[1], Local_4.f_1752);
	(*&Local_4 + 1756)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart", -3295,427f, 38,94177f, 4546,67f, 0.0f, -95,20148f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[2], Local_4.f_1752);
	(*&Local_4 + 1756)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd", -3302,526f, 39,14823f, 4546,254f, 0.0f, 106,2016f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[3], Local_4.f_1752);
	(*&Local_4 + 1756)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "SoldierStart", -3266,39f, 38,14893f, 4546,027f, 0.0f, -99,46735f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[4], Local_4.f_1752);
	(*&Local_4 + 1756)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "nPlayerEnd", -3256,455f, 38,1489f, 4545,718f, 0.0f, 80,98286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[5], Local_4.f_1752);
	(*&Local_4 + 1756)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerAltStart", -3251,448f, 38,14893f, 4547,102f, 0.0f, 80,98286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[6], Local_4.f_1752);
	(*&Local_4 + 1756)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "PyroHorseStart", -3303,054f, 39,00587f, 4547,689f, 0.0f, 173,3529f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1756)[7], Local_4.f_1752);
	Local_4.f_1792 = CREATE_OBJECTSET_IN_LAYOUT("MLHPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1796)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "MLHCoverPos", -3254,052f, 38,2541f, 4540,07f, 0,03759995f, -194,0342f, -0,6481952f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1796)[0], Local_4.f_1792);
	(*&Local_4 + 1796)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "MLHAssaultPos1", -3249,406f, 38,14893f, 4552.0f, -0,3722678f, -275,6234f, -1,02779f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1796)[1], Local_4.f_1792);
	(*&Local_4 + 1796)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MLHAssaultPos2", -3244,981f, 38,14893f, 4552,523f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1796)[2], Local_4.f_1792);
	(*&Local_4 + 1796)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MLHDoor", -3256,911f, 38,26236f, 4539,721f, 0,03759995f, -194,0342f, -0,6481952f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1796)[3], Local_4.f_1792);
	Local_4.f_1816 = CREATE_OBJECTSET_IN_LAYOUT("RearPositionsSet", Local_4, 8, 0);
	(*&Local_4 + 1820)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RearRightDoor", -3243,294f, 39,25185f, 4559,78f, 0,03759995f, -194,0342f, -0,6481952f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[0], Local_4.f_1816);
	(*&Local_4 + 1820)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "RearLeftDoor", -3241,756f, 38,28261f, 4541,437f, -0,3722678f, -275,6234f, -1,02779f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[1], Local_4.f_1816);
	(*&Local_4 + 1820)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "RearSniperPos", -3244,98f, 41,45444f, 4540,346f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[2], Local_4.f_1816);
	(*&Local_4 + 1820)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "RearAssaultPos1", -3251,374f, 38,14893f, 4542,002f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[3], Local_4.f_1816);
	(*&Local_4 + 1820)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "RearAssaultPos2", -3244,93f, 38,14893f, 4552,496f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[4], Local_4.f_1816);
	(*&Local_4 + 1820)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "RearAssaultPos3", -3249,329f, 38,42504f, 4553,163f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[5], Local_4.f_1816);
	(*&Local_4 + 1820)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RearAssaultPos4", -3252,561f, 39,12152f, 4556,4f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[6], Local_4.f_1816);
	(*&Local_4 + 1820)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RearAssaultPos5", -3255,398f, 39,22543f, 4556,05f, 0,3697921f, -264,3389f, -0,2893246f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1820)[7], Local_4.f_1816);
	Local_4.f_1856 = CREATE_GRINGO_IN_LAYOUT(Local_4, "MA_pickup_molotov", "pickup_molotov", -3305,381f, 38,90295f, 4538,888f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1860 = CREATE_GRINGO_IN_LAYOUT(Local_4, "mex_cry_overBody", "mex_cry_overBody", -3302,601f, 39,06059f, 4539,253f, 0.0f, -73,90547f, 0.0f);
	Local_4.f_1864 = CREATE_GRINGO_IN_LAYOUT(Local_4, "mex_prayer_oldWoman", "mex_prayer_oldWoman", -3302,228f, 39,12912f, 4543,053f, 0.0f, -105,2649f, 0.0f);
	Local_4.f_1868 = CREATE_GRINGO_IN_LAYOUT(Local_4, "mex_cry_overBody1", "mex_cry_overBody", -3302,355f, 39,05897f, 4540,8f, 0.0f, -89,91507f, 0.0f);
	Local_4.f_1872 = CREATE_GRINGO_IN_LAYOUT(Local_4, "oldPray", "noldf_pray", -3302,008f, 38,9984f, 4541,889f, 0.0f, -81,7411f, 0.0f);
	Local_4.f_1876 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_spit", "stand_spit", -3295,427f, 38,94177f, 4546,67f, 0.0f, -90,40554f, 0.0f);
	Local_4.f_1880 = CREATE_GRINGO_IN_LAYOUT(Local_4, "mexs_doorknock", "soldier_banging_on_door", -3277,089f, 39,24651f, 4559,301f, 0.0f, 123,8765f, 0.0f);
	Local_4.f_1884 = CREATE_GRINGO_IN_LAYOUT(Local_4, "mexs_doorknock1", "soldier_banging_on_door", -3283,435f, 39,24651f, 4563,563f, 0.0f, -56,44318f, 0.0f);
	Local_4.f_1888 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nclean_gun", "tense_with_guns", -3284.0f, 38,75688f, 4552,775f, 0.0f, -52,38583f, 0.0f);
	Local_4.f_1892 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nsit_stool", "stool_sit_attach_indef", -3267,043f, 38,4826f, 4553,226f, 0.0f, -90,35226f, 0.0f);
	Local_4.f_1896 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand", "smoking_stand", -3287,044f, 39,0355f, 4552.0f, 0.0f, -0,4183031f, 0.0f);
	Local_4.f_1900 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand1", "smoking_stand", -3262,476f, 38,26592f, 4548.0f, 0.0f, -396,051f, 0.0f);
	Local_4.f_1904 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand2", "smoking_stand", -3274,792f, 39,1528f, 4560.0f, 0.0f, 59,36148f, 0.0f);
	Local_4.f_1908 = CREATE_GRINGO_IN_LAYOUT(Local_4, "leaning_stand_indef", "leaning_stand_indef", -3273,534f, 39,1528f, 4556,012f, 0.0f, -92,12115f, 0.0f);
	Local_4.f_1912 = CREATE_GRINGO_IN_LAYOUT(Local_4, "clean_gun1", "tense_with_guns", -3286,893f, 39,15281f, 4564.0f, 0.0f, 26,88891f, 0.0f);
	Local_4.f_1916 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_corner", -3298,281f, 39,24862f, 4548,793f, 0.0f, 0.0f, 0.0f, 1);
	Local_4.f_1920 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "cover_corner1", -3298,298f, 39,13979f, 4545,389f, 0.0f, 90.0f, 0.0f, 1);
	Local_4.f_1924 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "BarrelCover", -3277,341f, 38,1489f, 4543,386f, 0.0f, -179,8925f, 0.0f, 1);
	Local_4.f_1928 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "SoldierCoverRight", -3298,281f, 39,24862f, 4550,583f, 0.0f, 0.0f, 0.0f, 1);
}

struct<8> ÑEBòÅ{¥A?7EÔÅzçÆAëEÒ[ÅzJ*A®EÅy¬ÄAEgòÅyDAvE®àÅx´åAi#EÑ­Åxa1AçÔEôGÅxèA ¿EÅw·ÿ@þ¦E8_Åwb@û[øEYåÅw@ù3E{Åvµ¥@øE Åv](@(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228) //Position: 0x2045A / 132186
{
	return StackVal, (StackVal / StackVal);
}

struct<548> Åmë@ùÏECÅn@@øßÑE¸LÅnÍ@ø±7EàßÅnð5@øÎ¡EüÔÅoP@øülEcÅo²^@ùËE4ÅÅp)@øÿ¬EHíÅpª@ù×EWøÅpóg@ù ¨EcÂÅqbY@ù\Em5ÅqÑ«@ù ùEpxÅrAé@ù#EqXÅr±@ù!Ep&Ås!2@ù òEjÅsy@ùbEaÅsû@ù EQvÅtd:@ùòE>-ÅtÉª@øÿwE&Åu0Y@ù EÅuä@øûEô«Åuô@ù]EÙ³Åv(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, int iParam65, var uParam66, var uParam67, var uParam68) //Position: 0x2100F / 135183
{
	int iVar17730;
	int iVar48894;
	
	Unknown_Function();
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
}

void Function_538(int iParam0, int iParam1) //Position: 0x21A01 / 137729
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

bool Function_539() //Position: 0x21A4A / 137802
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_548(0))
	{
		return 0;
	}
	if (!Function_340())
	{
		return 0;
	}
	if (!Function_547("MINI_GAMES_AND_JOBS/MEXARMY01"))
	{
		return 0;
	}
	if (!Function_264(&bLocal_554))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_922))
	{
		if (Function_546())
		{
			bLocal_922 = Function_540(1, 1, 0, 0, 0, 0, 1, 0);
		}
		else
		{
			return 0;
		}
	}
	if (!IS_ACTOR_VALID(bLocal_921))
	{
		bLocal_921 = Function_555(6, 0, 1, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	return 1;
}

bool Function_540(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x21ADF / 137951
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
	if (Global_3381 || Function_278(1))
	{
		Function_545(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_546())
		{
			return "";
		}
	}
	if (!Function_543())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_255(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_255(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_255(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_255(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_542(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_542(StackVal, StackVal, vVar5, 0, 1, 1);
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
					}
				}
			}
		}
	}
}

void Function_541(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x21E37 / 138807
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

var Function_542(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x21E74 / 138868
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

bool Function_543() //Position: 0x21F0F / 139023
{
	if (Function_544() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_544() //Position: 0x21F25 / 139045
{
	return Global_12976.f_152;
}

void Function_545(var uParam0, bool bParam1, bool bParam2) //Position: 0x21F30 / 139056
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

bool Function_546() //Position: 0x21F5D / 139101
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_547(bool bParam0) //Position: 0x21F7D / 139133
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_548(bool bParam0) //Position: 0x21F8E / 139150
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

int Function_549() //Position: 0x21FBC / 139196
{
	return 1;
}

int Function_550() //Position: 0x21FC3 / 139203
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[0]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[0]);
	Function_336(1, 1, 0, 0, 1, 1, 0, 1, 1, 1);
	Function_529();
	iLocal_633 = 0;
	iLocal_634 = 2;
	Function_526(&Local_547, &iLocal_633, &iLocal_634);
	Function_525(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_547);
	return 1;
}

int Function_551() //Position: 0x2200C / 139276
{
	TASK_CLEAR(Global_34573);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
	return 1;
}

int Function_552() //Position: 0x2202F / 139311
{
	if (!Function_340())
	{
	}
	if (!Function_264(&bLocal_554))
	{
	}
	if (Function_340() && Function_264(&bLocal_554))
	{
		return 1;
	}
	return 0;
}

int Function_553() //Position: 0x22056 / 139350
{
	if (!Function_340() && Function_520())
	{
	}
	else if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Function_535();
		Function_244();
		bLocal_923 = (*&Local_4 + 648)[02];
	}
	else if (!IS_ACTOR_VALID(bLocal_922))
	{
		if (Function_546())
		{
			bLocal_922 = Function_540(1, 1, 0, 0, 0, 0, 1, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_922, 1))
	{
		return 0;
	}
	if (!DECOR_CHECK_EXIST(bLocal_921, "TeleportedToStart"))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[0]);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 996)[0]);
		CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 996)[0], 15);
		FIRE_STOP_FLAMES_IN_VOLUME((*&Local_4 + 996)[0]);
		vLocal_974 = { StackVal, Function_535(), *(&Local_4 + 1100[16]) };
		TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, vLocal_974, 1, true, 1);
		vLocal_974 = { StackVal, StackVal, *(&Local_4 + 1100[66]) };
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_921, vLocal_974, 1, true, 1);
		vLocal_974 = { StackVal, StackVal, *(&Local_4 + 1100[06]) };
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_922, vLocal_974, 1, true, 1);
		vLocal_974 = { StackVal, StackVal, *(&Local_4 + 1100[56]) };
		TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_923, vLocal_974, 1, true, 1);
		DECOR_SET_BOOL(bLocal_921, "TeleportedToStart", true);
		TASK_CLEAR(Global_34573);
		TASK_STAND_STILL(bLocal_921, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_922, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_923, -1.0f, 0, 0);
		return 0;
	}
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0.0f, 0);
	return 1;
	return 0;
}

int Function_554() //Position: 0x221F4 / 139764
{
	Function_362(0);
	Function_347(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	Function_345(bLocal_546, -4366,127f, 41,96f, 4343,853f, &uLocal_534, 0, 0, 0, 0, 1, 1);
	return 1;
}

bool Function_555(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2222C / 139820
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
		if (!Function_159(&(Global_29008[Global_30621[3]]), 4))
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
		Function_228(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_563(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_558(StackVal, iParam7);
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
		Function_557(bVar1, 0, 0, 0, 0);
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
		Function_556(bVar1, 0);
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

void Function_556(bool bParam0, bool bParam1) //Position: 0x22716 / 141078
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_557(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x22736 / 141110
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

bool Function_558(int iParam0, bool bParam1) //Position: 0x2278A / 141194
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_562(iParam0))
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
						Function_559(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_559(bool bParam0, bool bParam1) //Position: 0x2280A / 141322
{
	Function_561(bParam0);
	Function_560(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_560(bool bParam0) //Position: 0x22830 / 141360
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_561(bool bParam0) //Position: 0x22854 / 141396
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

bool Function_562(int iParam0) //Position: 0x22923 / 141603
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_563(int iParam0, bool bParam1) //Position: 0x2293A / 141626
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

void Function_564() //Position: 0x229CD / 141773
{
	Function_341(&bLocal_554, "nmexarmy01", 10, 0);
	Function_341(&bLocal_554, "knl_hostage", 5, 0);
	Function_341(&bLocal_554, "custom/knl_hostage", 8, 0);
	Function_341(&bLocal_554, "p_gen_crate16x", 0, 0);
	Function_341(&bLocal_554, "p_gen_crate06x", 0, 0);
	Function_341(&bLocal_554, "p_gen_crate17x", 0, 0);
	Function_341(&bLocal_554, "stand_hostage", 5, 0);
	Function_341(&bLocal_554, "custom/stand_hostage", 8, 0);
	Function_341(&bLocal_554, "hillb_mexarmy01_greeting_john", 5, 0);
	Function_341(&bLocal_554, "custom/hillb_mexarmy01_greeting_john", 8, 0);
	Function_270(&bLocal_585, 380, 2, 0);
	Function_270(&bLocal_585, 381, 2, 0);
	Function_270(&bLocal_585, 383, 2, 0);
	Function_270(&bLocal_585, 384, 2, 0);
	Function_270(&bLocal_585, 385, 2, 0);
	Function_270(&bLocal_585, 679, 2, 0);
	Function_270(&bLocal_585, 681, 2, 0);
	Function_270(&bLocal_585, 687, 2, 0);
	Function_270(&bLocal_585, 531, 2, 0);
	Function_270(&bLocal_585, 688, 2, 0);
	Function_270(&bLocal_585, 246, 2, 0);
	return;
}

void Function_565() //Position: 0x22B84 / 142212
{
	return;
}

void Function_566(int iParam0, bool bParam1) //Position: 0x22B8A / 142218
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_572(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_331(iParam0))
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
	if (!Function_331(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_213();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_291();
	Function_323();
	Function_279("");
	Function_571(0);
	Function_570();
	Function_207();
	Function_206();
	ENABLE_JOURNAL_REPLAY(0);
	Function_569();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_363(0, 0x40400000);
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
	Function_568(13);
	Function_568(14);
	Function_568(25);
	Function_568(24);
	Function_568(12);
	Function_568(27);
	Function_568(26);
	Function_568(15);
	Function_567();
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

void Function_567() //Position: 0x22FAE / 143278
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

void Function_568(int iParam0) //Position: 0x23022 / 143394
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_569() //Position: 0x23042 / 143426
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

void Function_570() //Position: 0x2307F / 143487
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_571(int iParam0) //Position: 0x23093 / 143507
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_210())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_572(int iParam0, int iParam1) //Position: 0x230C8 / 143560
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
			Function_573(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_573(int iParam0) //Position: 0x2314A / 143690
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

void Function_574() //Position: 0x23198 / 143768
{
	return;
}

bool Function_575(int iParam0) //Position: 0x2319E / 143774
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_587();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_587();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_587();
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_586();
						}
						else
						{
							Function_585();
						}
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_587();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_584();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_583();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_582();
						}
						else
						{
							Function_583();
						}
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_582();
						}
						else
						{
							Function_583();
						}
					}
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_581();
						}
						else
						{
							Function_580();
						}
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_581();
						}
						else
						{
							Function_580();
						}
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_579();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_578();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_577();
						}
						else
						{
							Function_578();
						}
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						if (iLocal_633 == 0)
						{
							Function_577();
						}
						else
						{
							Function_578();
						}
					}
					break;
			}
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
			Function_576(iParam0, 1);
			return 1;
		}
	}
	Function_576(iParam0, 0);
	return 0;
}

void Function_576(int iParam0, bool bParam1) //Position: 0x233F2 / 144370
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

void Function_577() //Position: 0x23416 / 144406
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_AssaultsAllyOnTes", "MexArmy01_AssaultsAllyOnTes", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_578() //Position: 0x23475 / 144501
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy01_JonAssaultsEspAlly", "MexArmy01_JonAssaultsEspAlly", false, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579() //Position: 0x234D6 / 144598
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy01_JonAssaultsEsp", "MexArmy01_JonAssaultsEsp", false, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580() //Position: 0x2352F / 144687
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_AssaultsSantaOnTes", "MexArmy01_AssaultsSantaOnTes", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x23590 / 144784
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_AssaultsSantaTesoro", "MexArmy01_AssaultsSantaTesoro", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_582() //Position: 0x235F3 / 144883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_ShootsAnAllyOnTes", "MexArmy01_ShootsAnAllyOnTes", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_583() //Position: 0x23652 / 144978
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy01_JonShootsAlly", "MexArmy01_JonShootsAlly", false, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_584() //Position: 0x236A9 / 145065
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "MexArmy01_JonShootsEsp", "MexArmy01_JonShootsEsp", false, 2, 1, 0, 1);
		Function_375(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_585() //Position: 0x236FE / 145150
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_ShootsSantaOnTes", "MexArmy01_ShootsSantaOnTes", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_586() //Position: 0x2375B / 145243
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_ShootsSantaTesoro", "MexArmy01_ShootsSantaTesoro", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_587() //Position: 0x237BA / 145338
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy01_ShootsSantaHorsTesoro", "MexArmy01_ShootsSantaHorsTesoro", false, 2, 1, 0, 1);
		Function_375(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_588(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x23821 / 145441
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
		Function_576(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_607(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_606(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_606(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_592(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_576(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_591(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_590(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_591(&bVar17);
														strcpy(&Var18, "", 64);
														Function_589(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_279(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_590(StackVal, iParam2, bVar17);
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
	Function_576(iParam2, 0);
	return 0;
}

void Function_589(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x23BBA / 146362
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

void Function_590(var uParam0, int iParam1, bool bParam2) //Position: 0x23CA5 / 146597
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

void Function_591(bool bParam0) //Position: 0x23D1B / 146715
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_592(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23D3D / 146749
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
			return Function_603(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_596(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_603(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_593(iParam0, bVar2);
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
						bVar2 = Function_603(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_593(iParam0, bVar2);
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

var Function_593(int iParam0, bool bParam1) //Position: 0x23E87 / 147079
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_153(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_595(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_594(16);
			}
		}
	}
	else if (Function_153(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_595(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_594(256);
			}
		}
	}
	return bParam1;
}

bool Function_594(int iParam0) //Position: 0x23FBA / 147386
{
	return 2 | iParam0;
}

int Function_595(int iParam0) //Position: 0x23FC4 / 147396
{
	return 4 | iParam0;
}

int Function_596(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23FCE / 147406
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
				iParam3 = Function_602(iParam0, iParam1, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_594(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_597(iParam0, iParam1, 0, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_594(16);
		}
	}
	return 0;
}

int Function_597(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x24081 / 147585
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_601(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_600(iVar0, 3, 1, bParam3))
			{
				if (!Function_606(iParam0, 8, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_600(iVar0, 2, 1, bParam3))
			{
				if (!Function_606(iParam0, 32, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_600(iVar0, 1, 1, bParam3))
			{
				if (!Function_606(iParam0, 64, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_600(iVar0, 3, 1, bParam3))
			{
				if (!Function_606(iParam0, 128, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_600(iVar0, 1, 1, bParam3))
			{
				if (!Function_606(iParam0, 1024, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_600(iVar0, 1, 1, bParam3))
			{
				if (!Function_606(iParam0, 1024, 1))
				{
					return Function_599(64, 1024, bParam2);
				}
			}
			return Function_598(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_598(int iParam0, int iParam1, bool bParam2) //Position: 0x2423B / 148027
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_599(int iParam0, int iParam1, bool bParam2) //Position: 0x24250 / 148048
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_600(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24265 / 148069
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_601(int iParam0) //Position: 0x24282 / 148098
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

int Function_602(var uParam0, int iParam1, bool bParam2) //Position: 0x242F1 / 148209
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_601(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_600(iVar0, 3, 1, bParam2))
			{
				if (!Function_606(uParam0, 8, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000009:
			if (Function_600(iVar0, 3, 1, bParam2))
			{
				if (!Function_606(uParam0, 8, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x0000006E:
			if (Function_600(iVar0, 2, 1, bParam2))
			{
				if (!Function_606(uParam0, 16, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x0000005B:
			if (Function_600(iVar0, 2, 1, bParam2))
			{
				if (!Function_606(uParam0, 32, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000031:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(uParam0, 64, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000007:
			if (Function_600(iVar0, 3, 1, bParam2))
			{
				if (!Function_606(uParam0, 128, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000008:
			if (Function_600(iVar0, 2, 1, bParam2))
			{
				if (!Function_606(uParam0, 256, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000014:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(uParam0, 512, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000018:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(uParam0, 512, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000057:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(uParam0, 1024, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000058:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(uParam0, 1024, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_603(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2450C / 148748
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
						return Function_602(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_606(iParam0, 2, 1))
					{
						return Function_595(8);
					}
					return Function_594(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_606(iParam0, 4, 1))
					{
						return Function_595(16);
					}
					return Function_594(16);
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
							return Function_597(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_606(iParam0, 2, 1))
						{
							return Function_595(128);
						}
						return Function_594(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_606(iParam0, 4, 1))
						{
							return Function_595(256);
						}
						return Function_594(256);
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
						return Function_597(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_606(iParam0, 2, 1))
					{
						return Function_595(8);
					}
					return Function_594(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_606(iParam0, 4, 1))
					{
						return Function_595(16);
					}
					return Function_594(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_605(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_606(iParam0, 2, 1))
					{
						return Function_595(8);
					}
					return Function_594(8);
				}
				if (!Function_606(iParam0, 4, 1))
				{
					return Function_595(16);
				}
				return Function_594(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_597(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_604(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_594(128);
							}
							if (!Function_606(iParam0, 2, 1))
							{
								return Function_595(8);
							}
							return Function_594(8);
						}
						if (iParam4 == 2)
						{
							if (Function_604(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_594(256);
							}
							if (!Function_606(iParam0, 4, 1))
							{
								return Function_595(16);
							}
							return Function_594(16);
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

bool Function_604(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x247CB / 149451
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

int Function_605(int iParam0, var uParam1, bool bParam2) //Position: 0x24884 / 149636
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_601(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_600(iVar0, 2, 1, bParam2))
			{
				if (!Function_606(iParam0, 16, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x0000005B:
			if (Function_600(iVar0, 2, 1, bParam2))
			{
				if (!Function_606(iParam0, 32, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000057:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(iParam0, 1024, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		case 0x00000058:
			if (Function_600(iVar0, 1, 1, bParam2))
			{
				if (!Function_606(iParam0, 1024, 1))
				{
					return Function_595(64);
				}
			}
			return Function_594(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_606(int iParam0, bool bParam1, bool bParam2) //Position: 0x24998 / 149912
{
	if (bParam2)
	{
		if (!Function_153(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_153(iParam0->f_40, bParam1);
}

int Function_607(int iParam0) //Position: 0x249C0 / 149952
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_608(int iParam0) //Position: 0x249F1 / 150001
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_609() //Position: 0x24A0F / 150031
{
	if (!Function_328(&iLocal_992))
	{
		Function_226(&iLocal_992);
	}
	else if (Function_326(&iLocal_992) <= 5.0f)
	{
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bLocal_921))
			{
				if (ACTORS_IN_RANGE(bLocal_921, Global_34573, 20.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_434("MexArmy01_ThrownOffHorsTesoro", 0);
						Function_226(&iLocal_992);
					}
				}
			}
		}
		Function_611();
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_610(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bLocal_971 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_971))
				{
					if (IS_ACTOR_HUMAN(bLocal_971))
					{
						if (bLocal_971 == bLocal_921)
						{
							if (Function_328(&iLocal_989))
							{
								if (Function_326(&iLocal_989) < 0,25f)
								{
									if (iLocal_633 == 0)
									{
										Function_434("MexArmy01_GunOnSantaTesoro", 0);
									}
									else
									{
										Function_434("MexArmy01_TargetsSantaOnTes", 0);
									}
									Function_226(&iLocal_992);
								}
							}
							else
							{
								Function_226(&iLocal_989);
							}
						}
						else if (bLocal_971 == bLocal_924)
						{
							if (Function_328(&iLocal_989))
							{
								if (Function_326(&iLocal_989) < 0,25f)
								{
									Function_435("MexArmy01_JonTargetsEsp", 0);
									Function_226(&iLocal_992);
								}
							}
							else
							{
								Function_226(&iLocal_989);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bLocal_971))
						{
							if (!SQUAD_GET(bLocal_971) != Local_4.f_728)
							{
								if (Function_328(&iLocal_989))
								{
									if (Function_326(&iLocal_989) < 0,25f)
									{
										if (iLocal_633 == 0)
										{
											Function_434("MexArmy01_GunOnAmbTesoro", 0);
										}
										else
										{
											Function_434("MexArmy01_TargetsAllyOnTes", 0);
										}
										Function_226(&iLocal_992);
									}
								}
								else
								{
									Function_226(&iLocal_989);
								}
							}
						}
						else if (Function_328(&iLocal_989))
						{
							Function_392(&iLocal_989);
						}
					}
					else if (Function_328(&iLocal_989))
					{
						Function_392(&iLocal_989);
					}
				}
				else if (Function_328(&iLocal_989))
				{
					Function_392(&iLocal_989);
				}
			}
			else if (Function_328(&iLocal_989))
			{
				Function_392(&iLocal_989);
			}
		}
		else if (Function_328(&iLocal_989))
		{
			Function_392(&iLocal_989);
		}
	}
	return;
}

bool Function_610(bool bParam0) //Position: 0x24C82 / 150658
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

void Function_611() //Position: 0x24CC8 / 150728
{
	if (iLocal_633 == 0)
	{
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_610(GET_WEAPON_IN_HAND(Global_34573)))
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						if (!Function_328(&iLocal_992))
						{
							Function_226(&iLocal_992);
						}
						if (Function_326(&iLocal_992) <= 5.0f)
						{
							Function_434("MexArmy01_ShootsGunRandTesoro", 0);
							Function_226(&iLocal_992);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_612(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x24D45 / 150853
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

