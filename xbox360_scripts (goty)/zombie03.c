//Decompiled with MagicRDR v1.0
//Function Count : 569
//Statics Count : 973
//Natives Count : 686
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1885> Local_4 = { 0, 2, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_476 = 2696;
	iLocal_477 = 0;
	iLocal_555 = 1;
	iLocal_674 = 0;
	iLocal_675 = 0;
	iLocal_676 = 1;
	iLocal_677 = 1;
	iLocal_678 = 0;
	iLocal_928 = 1;
	vLocal_963 = { 0.0f, 0.0f, 0.0f };
	Local_479 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_966 };
	bLocal_552 = 99;
	iLocal_553 = 6;
	iLocal_545 = 1000;
	Function_568(0);
	while (Function_227())
	{
		Function_185();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x72 / 114
{
	int iVar0;
	
	Function_184(bLocal_478);
	Function_184(Local_4);
	Function_183();
	if (bLocal_940)
	{
		Function_179(0, 0, 15);
	}
	Function_178();
	Function_176(1);
	Function_175();
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_166(&bLocal_670);
	Function_164();
	Function_163();
	Function_162();
	if (IS_OBJECTSET_VALID(bLocal_712))
	{
		DESTROY_OBJECTSET(bLocal_712);
	}
	if (IS_OBJECT_VALID(bLocal_707))
	{
		DESTROY_OBJECT(bLocal_707);
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_OBJECT_VALID(uLocal_951[iVar0]))
		{
			DESTROY_OBJECT(uLocal_951[iVar0]);
		}
		iVar0++;
	}
	Function_161(0);
	ENABLE_CHILD_SECTOR("esc_villa01x");
	ENABLE_CHILD_SECTOR("esc_villaPatio01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPatio01x");
	ENABLE_CHILD_SECTOR("esc_villa01props01x");
	ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
	ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
	ENABLE_CHILD_SECTOR("esc_villaWall01x");
	ENABLE_CHILD_SECTOR("esc_villaWall02x");
	ENABLE_CHILD_SECTOR("esc_villaWall03x");
	ENABLE_CHILD_SECTOR("esc_villaWall04x");
	ENABLE_CHILD_SECTOR("esc_villaWall01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPost01x");
	ENABLE_CHILD_SECTOR("esc_villaPost01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPost02x");
	ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_962, 0);
	Function_131(bLocal_665, 1, 1, 1, 1, 0, 1, 0);
	Function_166(&bLocal_486);
	Function_130();
	Function_128();
	if (IS_ITERATOR_VALID(bLocal_554))
	{
		DESTROY_ITERATOR(bLocal_554);
	}
	RELEASE_LAYOUT_REF(bLocal_478);
	if (bLocal_664)
	{
		Function_26(Local_479, 1, 1, 1, 0);
	}
	else if (bLocal_665)
	{
		PRINTSTRING("Number of zombies reported killed on mission fail: ");
		PRINTINT(bLocal_758);
		PRINTNL();
		Function_22(Local_479);
	}
	else
	{
		Function_2(Local_479);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x31D / 797
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x33E / 830
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x359 / 857
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x37A / 890
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x390 / 912
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

void Function_7(int iParam0) //Position: 0x42C / 1068
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x44D / 1101
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

void Function_9() //Position: 0x493 / 1171
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x4AC / 1196
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x4FF / 1279
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x623 / 1571
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

bool Function_13() //Position: 0x65D / 1629
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x678 / 1656
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x685 / 1669
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_16(int iParam0) //Position: 0x6A5 / 1701
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x6BC / 1724
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_18() //Position: 0x6D7 / 1751
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
			Function_19(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_19(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x91E / 2334
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_20(int iParam0) //Position: 0x947 / 2375
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

bool Function_21(int iParam0) //Position: 0x96B / 2411
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x980 / 2432
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x99E / 2462
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xA44 / 2628
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

struct<24> Function_25(char* cParam0) //Position: 0xA83 / 2691
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCD9 / 3289
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_127(&(Global_3422[iVar240]));
		Function_126(4194304);
		if (bParam3)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		else if (bParam4)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		uVar1 = Function_122();
		if (bParam1)
		{
			Function_100(iVar2, bParam0, uVar1);
			Function_99();
		}
	}
	Global_34165.f_56 = 0;
	Global_34165.f_60 = 0;
	Global_13172[bParam011].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_42(bParam0, bParam1, uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (bParam1)
		{
		}
	}
	Function_28(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_27("ZOMBIE_STORY_1_SHORT", (7.5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_27("ZOMBIE_STORY_4_SHORT", 7.5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_27(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xDE2 / 3554
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_28(int iParam0) //Position: 0xE67 / 3687
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_39(1, 0))
	{
		Function_37("ZOMBIE_STORY_1_OBJ");
		if (!Function_36(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_36(4) && !Function_34(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_36(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_2Nigel_OBJ");
		Function_37("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_36(8) && !Function_36(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_36(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_36(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_36(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_36(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_31(&Global_3422[240] + 128, 2) || ((((((Function_36(14) && Function_36(18)) && Function_36(37)) && Function_36(7)) && Function_36(11)) && Function_36(5)) && Function_36(21)))
	{
		Function_37("ZOMBIE_STORY_3_OBJ");
		if (!Function_39(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_39(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_4_OBJ");
		if (!Function_36(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_31(&Global_3422[340] + 128, 2) || ((Function_36(27) && Function_36(1)) && Function_36(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_5_OBJ");
		if (!Function_39(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_39(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_36(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_36(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_36(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_36(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_30(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_30(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_30(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_29(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_29(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_36(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_36(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_36(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_36(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_36(6) && Function_30(Global_30735) < 0) && Function_30(Global_30737) < 0) && Function_30(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_36(11))
	{
		if (Function_36(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_29(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_29(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_29(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_29(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_29(491) <= 5 && Function_29(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_36(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_36(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_27(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_29(int iParam0) //Position: 0x175C / 5980
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_30(bool bParam0) //Position: 0x179D / 6045
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x17B7 / 6071
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_32() //Position: 0x17D3 / 6099
{
	return STRING_TO_HASH(Function_33());
}

var Function_33() //Position: 0x17DF / 6111
{
	return "ZOMBIE_STORY";
}

bool Function_34(int iParam0) //Position: 0x17F4 / 6132
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_35(iParam0)11].f_12 < 0;
}

int Function_35(int iParam0) //Position: 0x185A / 6234
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

bool Function_36(int iParam0) //Position: 0x191C / 6428
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_37(bool bParam0) //Position: 0x1931 / 6449
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_32(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_33(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_32(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_32(), bParam0, 0, 3, false);
	Function_38(Function_32(), 0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x1979 / 6521
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

bool Function_39(int iParam0, bool bParam1) //Position: 0x199E / 6558
{
	int iVar0;
	
	iVar0 = Function_40(iParam0);
	if (!Function_16(iVar0))
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

int Function_40(int iParam0) //Position: 0x19DB / 6619
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x19F5 / 6645
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A0B / 6667
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_98())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		if (Function_98())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_94();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_98())
	{
		Function_93();
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
			Function_88(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
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
						switch (Function_15(bParam0))
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
			Function_46(1);
			Function_44(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_43(bParam0, &Var14);
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

void Function_43(int iParam0, int iParam1) //Position: 0x1C5F / 7263
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x1C99 / 7321
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_45() //Position: 0x1CDB / 7387
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_46(bool bParam0) //Position: 0x1CE4 / 7396
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_77();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_47(&Global_63095, 1);
		Function_47(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_47(int iParam0, bool bParam1) //Position: 0x1D35 / 7477
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_48() //Position: 0x1D48 / 7496
{
	Function_75();
	Function_74();
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_56(0);
	Function_56(0);
	if (!Function_45())
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

void Function_49() //Position: 0x1D9A / 7578
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

void Function_50() //Position: 0x1EA0 / 7840
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

void Function_51() //Position: 0x1ED3 / 7891
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

void Function_52() //Position: 0x2061 / 8289
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

void Function_53() //Position: 0x2215 / 8725
{
	Function_54(&Global_28260, 1, 0);
	return;
}

void Function_54(int iParam0, bool bParam1, var uParam2) //Position: 0x2223 / 8739
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
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_55();
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

var Function_55() //Position: 0x2414 / 9236
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_56(int iParam0) //Position: 0x2429 / 9257
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
					iVar2 = ((Function_29((50 + iVar4)) + Function_29((183 + iVar4))) + Function_29((90 + iVar4)));
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

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x24CF / 9423
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

void Function_58(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x276A / 10090
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_68(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_68(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_66(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_63(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_60(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_59(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

bool Function_59() //Position: 0x2D97 / 11671
{
	int iVar0;
	
	return iVar0;
}

var Function_60(int iParam0) //Position: 0x2D9F / 11679
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_61(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2DB0 / 11696
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

struct<32> Function_62(char* cParam0, bool bParam1) //Position: 0x2EA5 / 11941
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2EBE / 11966
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_65(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_64(Function_65(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_64(int iParam0, int iParam1) //Position: 0x2F23 / 12067
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_65(int iParam0, bool bParam1) //Position: 0x2F35 / 12085
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_66(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2F47 / 12103
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

int Function_67(int iParam0) //Position: 0x3077 / 12407
{
	return Global_35278[iParam020].f_48;
}

float Function_68(int iParam0) //Position: 0x3086 / 12422
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_69(int iParam0) //Position: 0x30BF / 12479
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_70(int iParam0) //Position: 0x30FC / 12540
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

int Function_71(int iParam0, bool bParam1, bool bParam2) //Position: 0x3296 / 12950
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

struct<8> Function_72() //Position: 0x34DA / 13530
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
		iVar2 = ((Function_29((50 + iVar3) + 15) + Function_29((183 + iVar3) + 15)) + Function_29((90 + iVar3) + 15));
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

struct<8> Function_73() //Position: 0x3563 / 13667
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
			iVar2 = ((Function_29((50 + iVar3) + 8) + Function_29((183 + iVar3) + 8)) + Function_29((90 + iVar3) + 8));
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

struct<8> Function_74() //Position: 0x35FA / 13818
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
		iVar2 = ((Function_29((50 + iVar3)) + Function_29((183 + iVar3))) + Function_29((90 + iVar3)));
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

void Function_75() //Position: 0x3679 / 13945
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_76(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_57(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_76(int iParam0, bool bParam1, int iParam2) //Position: 0x36B2 / 14002
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
	Function_71(iParam0, bParam1, 1);
	Function_70(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_58(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_77() //Position: 0x38BC / 14524
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_85(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_85(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_79(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_78(StackVal, StackVal, vVar0))
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

bool Function_78(vector3 vParam0) //Position: 0x3977 / 14711
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_79(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x398F / 14735
{
	int iVar0;
	
	iVar0 = Function_83(uParam2, uParam3);
	if (Function_82(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_81(&Global_63095, 1);
			Function_47(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_81(&Global_63095, 2);
			Function_47(&Global_63095, 1);
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
		Function_81(&Global_63095, 2);
		Function_47(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_80();
	return StackVal, StackVal, Function_80();
}

vector3 Function_80() //Position: 0x3A76 / 14966
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_81(int iParam0, bool bParam1) //Position: 0x3A7F / 14975
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

bool Function_82(int iParam0) //Position: 0x3A8E / 14990
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_83(bool bParam0, bool bParam1) //Position: 0x3AA4 / 15012
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
				fVar2 = Function_84(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_84(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_82(bVar0) && !bParam1)
	{
		bVar0 = Function_83(bParam0, 1);
	}
	return bVar0;
}

float Function_84(vector3 vParam0, vector3 vParam3) //Position: 0x3B6B / 15211
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_85(var uParam0, int iParam1) //Position: 0x3B88 / 15240
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_87(Global_34573, &vVar4);
	if (!Function_86(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_86(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_81(&Global_63095, 2);
	Function_47(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_78(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_86(int iParam0) //Position: 0x43B0 / 17328
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x43EB / 17387
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_88(bool bParam0) //Position: 0x43F8 / 17400
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_92(12, 1, 0, 0);
				Function_91(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_92(13, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_92(14, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_92(15, 1, 0, 0);
				Function_91(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_92(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_30(bParam0) == 1)
					{
						iVar0 = Function_90(bParam0);
						if (Function_89(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_91(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_91(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_91(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_91(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_91(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_91(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_91(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_91(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_91(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_91(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_91(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_91(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_91(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_91(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_91(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_91(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_91(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_91(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_91(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_91(4, 19);
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
								Function_92(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_92(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_92(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_90(bParam0) == 0)
			{
				if (Function_30(bParam0) == 1)
				{
					Function_92(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_89(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_91(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_91(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_91(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_91(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_91(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_91(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_91(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_91(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_30(bParam0) == 1)
			{
				Function_92(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_92(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_91(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_91(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_91(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_92(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_91(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_91(6, 9);
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

bool Function_89(int iParam0) //Position: 0x48D4 / 18644
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_90(bool bParam0) //Position: 0x48EA / 18666
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_91(int iParam0, bool bParam1) //Position: 0x4909 / 18697
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

int Function_92(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4970 / 18800
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
	if (iParam2 && bParam1 == 0)
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

void Function_93() //Position: 0x4B90 / 19344
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

void Function_94() //Position: 0x4CE8 / 19688
{
	int iVar0;
	int iVar1;
	
	if (!Function_41(Global_6269))
	{
		return;
	}
	iVar0 = Function_29(24);
	iVar1 = Function_40(Global_6269);
	if (!Function_41(iVar0) && Function_97(iVar1) < 0)
	{
		Function_57(24, Global_6269, 0);
		Function_95(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_97(Function_40(iVar0)))
	{
		Function_57(24, Global_6269, 0);
		Function_95(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_95(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4D68 / 19816
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
		Function_96(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x50BA / 20666
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_97(int iParam0) //Position: 0x513D / 20797
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_98() //Position: 0x5157 / 20823
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_99() //Position: 0x5182 / 20866
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

void Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x51B0 / 20912
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
	
	if (!Function_41(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_121(iParam0);
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
				bVar0 = (Function_29(42) - Global_34165.f_116);
				bVar1 = (Function_29(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_69(49)) - Global_34165.f_124);
				bVar3 = (Function_29(49) - Global_34165.f_128);
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
				bVar4 = (Function_29(355) - Global_34165.f_116);
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
		iVar15 = Function_120(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_101(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x544C / 21580
{
	int iVar0;
	bool bVar1;
	
	if (Function_119(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_98())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_29(3);
	Function_116();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_114(3, bVar1);
		if (!bParam2)
		{
			if (!Function_113(Global_76848, 4))
			{
				Function_108(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_92(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_68(3));
	iVar0 = Function_29(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_103(4, Function_107(Global_12976.f_156), 1);
				Function_102(Global_12976.f_152, Global_12976.f_156);
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

void Function_102(int iParam0, int iParam1) //Position: 0x561B / 22043
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_103(int iParam0, char* cParam1, bool bParam2) //Position: 0x5879 / 22649
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
	Function_95(iParam0, cParam1, 0, 1);
	iVar1 = Function_104();
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

int Function_104() //Position: 0x59FE / 23038
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
	Function_105();
	return 0;
}

void Function_105() //Position: 0x5A9D / 23197
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
		Function_106(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_106(int iParam0) //Position: 0x5B4C / 23372
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

var Function_107(int iParam0) //Position: 0x5BAA / 23466
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

void Function_108(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5C39 / 23609
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_110(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_109(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_109(char* cParam0, int iParam1) //Position: 0x5CA5 / 23717
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

bool Function_110(bool bParam0, var uParam1, int iParam2) //Position: 0x5CDC / 23772
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
		if (Function_112(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_111(uVar0))
		{
			case 0x00000002:
				if (!Function_113(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_111(char* cParam0) //Position: 0x5D54 / 23892
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

int Function_112(int iParam0) //Position: 0x5DF5 / 24053
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_47(&iVar1, 2147483648);
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

bool Function_113(var uParam0, int iParam1) //Position: 0x5E32 / 24114
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_114(int iParam0, bool bParam1) //Position: 0x5E45 / 24133
{
	bool bVar0;
	int iVar1;
	
	Function_92(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_104();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_115(int iParam0, int iParam1) //Position: 0x5FE2 / 24546
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

void Function_116() //Position: 0x6023 / 24611
{
	Function_118(3, 0.0f);
	Function_117(3, 10000.0f);
	return;
}

int Function_117(int iParam0, int iParam1) //Position: 0x6039 / 24633
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_118(int iParam0, int iParam1) //Position: 0x6079 / 24697
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_119(int iParam0) //Position: 0x60B9 / 24761
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_120(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x60C8 / 24776
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

int Function_121(int iParam0) //Position: 0x6290 / 25232
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

var Function_122() //Position: 0x6325 / 25381
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_123(int iParam0, var uParam1, bool bParam2) //Position: 0x634A / 25418
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_41(iParam0))
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
			Function_124(21, bParam2, 0);
			Function_124(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_124(bool bParam0, bool bParam1, int iParam2) //Position: 0x63E8 / 25576
{
	if (!Function_125(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_55(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_55(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_55(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x643F / 25663
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_126(bool bParam0) //Position: 0x6451 / 25681
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_127(var uParam0) //Position: 0x6485 / 25733
{
	if (uParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (uParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (uParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (uParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_179(4, 0, 0);
		}
	}
	return;
}

void Function_128() //Position: 0x64EC / 25836
{
	Function_129();
	return;
}

void Function_129() //Position: 0x64F5 / 25845
{
	Function_166(&Local_4 + 4);
	Function_166(&Local_4 + 32);
	Function_166(&Local_4 + 156);
	Function_166(&Local_4 + 208);
	Function_166(&Local_4 + 248);
	Function_166(&Local_4 + 264);
	Function_166(&Local_4 + 280);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_130() //Position: 0x6533 / 25907
{
	Function_166(&bLocal_791);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x653F / 25919
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_160());
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
	Function_159();
	CLEAR_PRINTED_OBJECTIVE();
	Function_158();
	Function_156(0);
	Function_155();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(50f);
	Function_154();
	Function_153();
	Function_159();
	ENABLE_JOURNAL_REPLAY(1);
	Function_152(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(false, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(false, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, 0);
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
		Function_151(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_147(Global_28178);
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
	Function_146();
	Function_145(1178687);
	Function_143(33039);
	Function_142(0x218003f);
	Function_141(4194560);
	Function_140();
	Function_139();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_134(0, 1, 1);
	}
	else
	{
		Function_134(0, 1, 1);
	}
	Function_132();
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
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_47(&Global_12976 + 36 + 20, 16);
}

void Function_132() //Position: 0x6730 / 26416
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_133(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x675A / 26458
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x6771 / 26481
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
		if (Function_89(Global_29006))
		{
			Function_138(&(Global_29008[Global_29006]), 131072);
			Function_133(&(Global_29008[Global_29006]), 2097152);
			Function_136(Global_29006);
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
				if (Function_135(&(Global_29008[iVar0]), 4) || Function_135(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_133(&(Global_29008[iVar0]), 2097155);
					Function_138(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_45())
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

bool Function_135(var uParam0, int iParam1) //Position: 0x687C / 26748
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_136(int iParam0) //Position: 0x6898 / 26776
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_137())
			{
				return;
			}
		}
		if (!Function_135(&(Global_29008[iParam0]), 2048))
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

bool Function_137() //Position: 0x6917 / 26903
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_135(&(Global_29008[iVar0]), 4) || Function_135(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_138(var uParam0, int iParam1) //Position: 0x6980 / 27008
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_139() //Position: 0x698F / 27023
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

void Function_140() //Position: 0x69B5 / 27061
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

void Function_141(int iParam0) //Position: 0x69DB / 27099
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_142(int iParam0) //Position: 0x69F8 / 27128
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_143(int iParam0) //Position: 0x6A0B / 27147
{
	Function_144(&Global_28842, iParam0);
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0x6A19 / 27161
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_145(bool bParam0) //Position: 0x6A34 / 27188
{
	if (Function_14(bParam0, 1) && !Function_14(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_146() //Position: 0x6A61 / 27233
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_147(int iParam0) //Position: 0x6AD3 / 27347
{
	int iVar0;
	int iVar1;
	
	if (!Function_150(iParam0))
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
		Function_148(78, 1, 1);
		if (!Function_113(Global_76847, 64))
		{
			Function_108(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", true);
		DECOR_SET_BOOL(Global_34573, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
	}
	return;
}

int Function_148(bool bParam0, bool bParam1, int iParam2) //Position: 0x6C01 / 27649
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_149(bParam0), Function_55()) == 0)
		{
			ADD_ITEM(Function_149(bParam0), Function_55(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_149(bParam0), Function_55(), iParam2);
	return 1;
}

var Function_149(bool bParam0) //Position: 0x6C4C / 27724
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

bool Function_150(int iParam0) //Position: 0x6D3D / 27965
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_151(bool bParam0) //Position: 0x6D53 / 27987
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

void Function_152(bool bParam0) //Position: 0x6DCF / 28111
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

void Function_153() //Position: 0x6E43 / 28227
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

void Function_154() //Position: 0x6E84 / 28292
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

void Function_155() //Position: 0x6EC5 / 28357
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_156(int iParam0) //Position: 0x6ED9 / 28377
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_157())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_157() //Position: 0x6F15 / 28437
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

void Function_158() //Position: 0x6F3A / 28474
{
	Global_8722 = 0.0f;
	return;
}

void Function_159() //Position: 0x6F44 / 28484
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

int Function_160() //Position: 0x6F6F / 28527
{
	bool bVar0;
	
	bVar0 = Function_55();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_161(bool bParam0) //Position: 0x6F89 / 28553
{
	if (bParam0)
	{
		if (!bLocal_925)
		{
			DISABLE_CHILD_SECTOR("esc_generalhouse02props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse02x");
			DISABLE_CHILD_SECTOR("esc_generalhouse03props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse03x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01x");
			DISABLE_CHILD_SECTOR("esc_courtyard01props01x");
			DISABLE_CHILD_SECTOR("esc_courtyard01x");
			DISABLE_CHILD_SECTOR("esc_doctor01x");
			DISABLE_CHILD_SECTOR("esc_doctor01props01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01props01x");
			DISABLE_CHILD_SECTOR("esc_gunsmith01props01x");
			DISABLE_CHILD_SECTOR("esc_gunsmith01x");
			DISABLE_CHILD_SECTOR("esc_stable01x");
			DISABLE_CHILD_SECTOR("esc_stable01props01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01props01x");
			DISABLE_CHILD_SECTOR("esc_whorehouse01props01x");
			DISABLE_CHILD_SECTOR("esc_whorehouse01x");
			DISABLE_CHILD_SECTOR("esc_church01props01x");
			DISABLE_CHILD_SECTOR("esc_church01x");
			DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
			DISABLE_CHILD_SECTOR("esc_villaBaracks01x");
			DISABLE_CHILD_SECTOR("esc_tent01props01x");
			DISABLE_CHILD_SECTOR("esc_tent01x");
			DISABLE_CHILD_SECTOR("esc_shack01props01x");
			DISABLE_CHILD_SECTOR("esc_shack01x");
			DISABLE_CHILD_SECTOR("esc_tent01x");
			DISABLE_CHILD_SECTOR("esc_tent02x");
			DISABLE_CHILD_SECTOR("esc_tent01props01x");
			DISABLE_CHILD_SECTOR("esc_tent02props01x");
			bLocal_925 = true;
		}
	}
	else if (bLocal_925)
	{
		ENABLE_CHILD_SECTOR("esc_generalhouse02props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse02x");
		ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse03x");
		ENABLE_CHILD_SECTOR("esc_generalhouse04props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse04x");
		ENABLE_CHILD_SECTOR("esc_blacksmith01x");
		ENABLE_CHILD_SECTOR("esc_blacksmith01props01x");
		ENABLE_CHILD_SECTOR("esc_cantina01props01x");
		ENABLE_CHILD_SECTOR("esc_cantina01x");
		ENABLE_CHILD_SECTOR("esc_courtyard01props01x");
		ENABLE_CHILD_SECTOR("esc_courtyard01x");
		ENABLE_CHILD_SECTOR("esc_doctor01x");
		ENABLE_CHILD_SECTOR("esc_doctor01props01x");
		ENABLE_CHILD_SECTOR("esc_generalstore01x");
		ENABLE_CHILD_SECTOR("esc_generalstore01props01x");
		ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
		ENABLE_CHILD_SECTOR("esc_gunsmith01x");
		ENABLE_CHILD_SECTOR("esc_stable01x");
		ENABLE_CHILD_SECTOR("esc_stable01props01x");
		ENABLE_CHILD_SECTOR("esc_trashPile01x");
		ENABLE_CHILD_SECTOR("esc_trashPile01props01x");
		ENABLE_CHILD_SECTOR("esc_whorehouse01props01x");
		ENABLE_CHILD_SECTOR("esc_whorehouse01x");
		ENABLE_CHILD_SECTOR("esc_church01props01x");
		ENABLE_CHILD_SECTOR("esc_church01x");
		ENABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
		ENABLE_CHILD_SECTOR("esc_villaBaracks01x");
		ENABLE_CHILD_SECTOR("esc_tent01props01x");
		ENABLE_CHILD_SECTOR("esc_tent01x");
		ENABLE_CHILD_SECTOR("esc_shack01props01x");
		ENABLE_CHILD_SECTOR("esc_shack01x");
		ENABLE_CHILD_SECTOR("esc_tent01x");
		ENABLE_CHILD_SECTOR("esc_tent02x");
		ENABLE_CHILD_SECTOR("esc_tent01props01x");
		ENABLE_CHILD_SECTOR("esc_tent02props01x");
		bLocal_925 = false;
	}
	return;
}

void Function_162() //Position: 0x76A0 / 30368
{
	if (IS_OBJECT_VALID(bLocal_711))
	{
		DESTROY_OBJECT(bLocal_711);
	}
	return;
}

void Function_163() //Position: 0x76B5 / 30389
{
	if (IS_OBJECT_VALID(bLocal_709))
	{
		DESTROY_OBJECT(bLocal_709);
	}
	return;
}

void Function_164() //Position: 0x76CA / 30410
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_DOOR_VALID(uLocal_951[iVar0]))
		{
			if (IS_DOOR_LOCKED(uLocal_951[iVar0]))
			{
				Function_165(uLocal_951[iVar0], 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_165(bool bParam0, bool bParam1) //Position: 0x770B / 30475
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

void Function_166(bool bParam0) //Position: 0x775C / 30556
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_167(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x7782 / 30594
{
	if (Function_169(uParam0[iParam13], 4))
	{
		if (Function_169(uParam0[iParam13], 1))
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
			Function_168(uParam0[iParam13], 1);
			Function_168(uParam0[iParam13], 2);
			Function_168(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x78B0 / 30896
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_169(int iParam0, int iParam1) //Position: 0x78CA / 30922
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x78E7 / 30951
{
	Function_166(&Local_4 + 264);
	return;
}

void Function_171() //Position: 0x78F5 / 30965
{
	Function_166(&Local_4 + 248);
	return;
}

void Function_172() //Position: 0x7902 / 30978
{
	Function_166(&Local_4 + 208);
	return;
}

void Function_173() //Position: 0x790F / 30991
{
	Function_166(&Local_4 + 156);
	return;
}

void Function_174() //Position: 0x791C / 31004
{
	Function_166(&Local_4 + 32);
	return;
}

void Function_175() //Position: 0x7929 / 31017
{
	Function_166(&Local_4 + 280);
	return;
}

void Function_176(bool bParam0) //Position: 0x7937 / 31031
{
	if (SQUAD_IS_VALID(bLocal_873))
	{
		Function_177(&bLocal_873);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_873);
		}
	}
	if (SQUAD_IS_VALID(bLocal_874))
	{
		Function_177(&bLocal_874);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_874);
		}
	}
	if (SQUAD_IS_VALID(bLocal_875))
	{
		Function_177(&bLocal_875);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_875);
		}
	}
	if (SQUAD_IS_VALID(bLocal_876))
	{
		Function_177(&bLocal_876);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_876);
		}
	}
	if (SQUAD_IS_VALID(bLocal_877))
	{
		Function_177(&bLocal_877);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_877);
		}
	}
	if (SQUAD_IS_VALID(bLocal_878))
	{
		Function_177(&bLocal_878);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_878);
		}
	}
	if (SQUAD_IS_VALID(bLocal_879))
	{
		Function_177(&bLocal_879);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_879);
		}
	}
	if (SQUAD_IS_VALID(bLocal_880))
	{
		Function_177(&bLocal_880);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_880);
		}
	}
	if (SQUAD_IS_VALID(bLocal_881))
	{
		Function_177(&bLocal_881);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_881);
		}
	}
	if (SQUAD_IS_VALID(bLocal_882))
	{
		Function_177(&bLocal_882);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_882);
		}
	}
	if (SQUAD_IS_VALID(bLocal_884))
	{
		Function_177(&bLocal_884);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_884);
		}
	}
	if (SQUAD_IS_VALID(bLocal_883))
	{
		Function_177(&bLocal_883);
		if (bParam0)
		{
			DESTROY_OBJECT(bLocal_883);
		}
	}
	return;
}

void Function_177(bool bParam0) //Position: 0x7A75 / 31349
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

void Function_178() //Position: 0x7ABC / 31420
{
	if (IS_ACTORSET_VALID(bLocal_704))
	{
		DESTROY_ACTORSET(bLocal_704);
	}
	if (IS_ACTORSET_VALID(bLocal_705))
	{
		DESTROY_ACTORSET(bLocal_705);
	}
	if (IS_ACTOR_VALID(bLocal_692))
	{
		DESTROY_ACTOR(bLocal_692);
	}
	if (IS_ACTOR_VALID(bLocal_694))
	{
		DESTROY_ACTOR(bLocal_694);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 324)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 324)[02]);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 340)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 340)[02]);
	}
	if (SQUAD_IS_VALID(Local_4.f_376))
	{
		Function_177(&Local_4 + 376);
	}
	if (SQUAD_IS_VALID(Local_4.f_400))
	{
		Function_177(&Local_4 + 400);
	}
	if (SQUAD_IS_VALID(Local_4.f_416))
	{
		Function_177(&Local_4 + 416);
	}
	if (SQUAD_IS_VALID(Local_4.f_432))
	{
		Function_177(&Local_4 + 432);
	}
	if (IS_OBJECT_VALID(bLocal_706))
	{
		DESTROY_OBJECT(bLocal_706);
	}
	if (IS_ACTOR_VALID(bLocal_697))
	{
		DESTROY_ACTOR(bLocal_697);
	}
	if (IS_ACTOR_VALID(bLocal_698))
	{
		DESTROY_ACTOR(bLocal_698);
	}
	if (IS_ACTOR_VALID(bLocal_699))
	{
		DESTROY_ACTOR(bLocal_699);
	}
	if (IS_ACTOR_VALID(bLocal_700))
	{
		DESTROY_ACTOR(bLocal_700);
	}
	if (IS_ACTOR_VALID(bLocal_701))
	{
		DESTROY_ACTOR(bLocal_701);
	}
	if (IS_ACTOR_VALID(bLocal_702))
	{
		DESTROY_ACTOR(bLocal_702);
	}
	if (IS_ACTOR_VALID(bLocal_703))
	{
		DESTROY_ACTOR(bLocal_703);
	}
	return;
}

void Function_179(bool bParam0, bool bParam1, int iParam2) //Position: 0x7BF6 / 31734
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_180(Global_16524, bVar0, 1);
	}
	return;
}

void Function_180(int iParam0, bool bParam1, bool bParam2) //Position: 0x7CDC / 31964
{
	int iVar0;
	
	Function_182(iParam0);
	Function_8(bParam1);
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
	Function_181();
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

void Function_181() //Position: 0x7E55 / 32341
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_182(int iParam0) //Position: 0x7E61 / 32353
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

void Function_183() //Position: 0x7EA7 / 32423
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_184(bool bParam0) //Position: 0x7EB0 / 32432
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

void Function_185() //Position: 0x7F08 / 32520
{
	var uVar0[10];
	int iVar11;
	
	if (Function_226())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Debug Stuff";
		uVar0[3] = "Escalera Yard";
		uVar0[4] = "Cata Entrance";
		uVar0[5] = "Grave Room";
		uVar0[6] = "Final Tunnel";
		uVar0[7] = "Altar Room";
		uVar0[8] = "Last Cutscene";
		uVar0[9] = "Pass Final Room";
		iVar11 = Function_212(&uLocal_538, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_211(&iVar11, &bLocal_552, &iLocal_553, &iLocal_545))
		{
			Function_204();
			Function_203();
		}
		if (iVar11 == 0)
		{
			Function_204();
			Function_203();
			Function_202(&bLocal_664, 8);
		}
		else if (iVar11 == 1)
		{
			Function_204();
			Function_203();
			Function_197(bLocal_552);
			Function_189(StackVal, StackVal, 5, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
		}
		else if (iVar11 == 2)
		{
			Function_204();
			Function_187(bLocal_696, 0);
		}
		else if (iVar11 == 3)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = true;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 4)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = 2;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 5)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = 3;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 6)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = 4;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 7)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = 5;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 8)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_552 = 101;
			iLocal_553 = 0;
			iLocal_545 = 1000;
		}
		else if (iVar11 == 9)
		{
			Function_204();
			Function_203();
			Function_177(&bLocal_884);
			iLocal_755 = 11;
			iLocal_754 = 3;
		}
	}
	return;
}

void Function_186(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x815F / 33119
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

void Function_187(bool bParam0, bool bParam1) //Position: 0x8188 / 33160
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (((!DECOR_CHECK_EXIST(bParam0, "wallVolume") || !DECOR_CHECK_EXIST(bParam0, "wallPosition")) || !DECOR_CHECK_EXIST(bParam0, "wallRollLeft")) || !DECOR_CHECK_EXIST(bParam0, "wallHeight"))
	{
		KILL_ACTOR(bParam0);
		return;
	}
	bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "wallVolume"));
	bVar1 = DECOR_GET_OBJECT(bParam0, "wallPosition");
	if (!IS_ACTOR_IN_VOLUME(bParam0, bVar0))
	{
		Function_188(bParam0, bVar1, 0, 0, 0);
	}
	SET_ANIM_SET_FOR_ACTOR(bParam0, "z_dlc_z_crypt", 0);
	switch (DECOR_GET_INT(bParam0, "wallHeight"))
	{
		case 0x00000001:
			if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt1_2_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt1_2");
			}
			break;
		
		case 0x00000002:
			if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt2_5_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt2_5");
			}
			break;
		
		case 0x00000003:
			if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt4_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt4");
			}
			break;
	}
	bVar2 = GET_PHYSINST_FROM_ACTOR(bParam0);
	if (IS_PHYSINST_VALID(bVar2))
	{
		ACTIVATE_PHYSINST(bVar2);
	}
	ENABLE_MOVER(bParam0);
	if (!bParam1)
	{
		DECOR_SET_BOOL(bParam0, "WakeUp", true);
	}
	else
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	DECOR_SET_BOOL(bParam0, "bIsWallZomb", false);
	bLocal_753 = TASK_SEQUENCE_OPEN();
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bParam0);
	TASK_SEQUENCE_PERFORM(bParam0, bLocal_753);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	return;
}

void Function_188(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x840F / 33807
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
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, bParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_189(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0x8516 / 34070
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_194(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_190(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_190(int iParam0) //Position: 0x8553 / 34131
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_193("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_192(2) || Function_192(8)) || Function_192(9)) || Function_192(10))
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
		Function_193("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_193("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_193("");
	}
	else if (iParam0 == 8)
	{
		Function_191();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_191();
	}
	return;
}

void Function_191() //Position: 0x864A / 34378
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_192(int iParam0) //Position: 0x8656 / 34390
{
	int iVar0;
	
	if (!Function_41(iParam0))
	{
		return 0;
	}
	iVar0 = Function_40(iParam0);
	if (!Function_20(Function_40(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_193(bool bParam0) //Position: 0x868C / 34444
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_194(vector3 vParam0, var uParam3, int iParam4) //Position: 0x86F6 / 34550
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = iParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_196(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_195(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_195(int iParam0) //Position: 0x8779 / 34681
{
	if (!Function_89(iParam0))
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

var Function_196(vector3 vParam0, bool bParam3) //Position: 0x8C27 / 35879
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

vector3 Function_197(int iParam0) //Position: 0x8C92 / 35986
{
	Function_198(iParam0 + 1);
	return StackVal, StackVal, Function_198(iParam0 + 1);
}

vector3 Function_198(int iParam0) //Position: 0x8C9F / 35999
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_199((*&Local_4 + 1112)[0]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000001:
			Function_199((*&Local_4 + 1112)[2]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[2]);
			break;
		
		case 0x00000002:
			Function_199((*&Local_4 + 1112)[4]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[4]);
			break;
		
		case 0x00000003:
			Function_199((*&Local_4 + 1112)[6]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[6]);
			break;
		
		case 0x00000004:
			Function_199((*&Local_4 + 1112)[9]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[9]);
			break;
		
		case 0x00000005:
			Function_199((*&Local_4 + 1112)[10]);
			return StackVal, StackVal, Function_199((*&Local_4 + 1112)[10]);
			break;
	}
	Function_199((*&Local_4 + 1112)[10]);
	return StackVal, StackVal, Function_199((*&Local_4 + 1112)[10]);
}

vector3 Function_199(bool bParam0) //Position: 0x8D38 / 36152
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

int Function_200(int iParam0) //Position: 0x8D5F / 36191
{
	return Function_201(iParam0 + 1);
}

int Function_201(int iParam0) //Position: 0x8D6C / 36204
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[2]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[4]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[6]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[9]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[10]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 1112)[10]);
}

void Function_202(bool bParam0, int iParam1) //Position: 0x8E09 / 36361
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_190(iParam1);
	*bParam0 = 1;
	return;
}

void Function_203() //Position: 0x8E2C / 36396
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_204() //Position: 0x8E41 / 36417
{
	Function_206();
	Function_205(10, 3);
	return;
}

void Function_205(int iParam0, int iParam1) //Position: 0x8E50 / 36432
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

void Function_206() //Position: 0x8F87 / 36743
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_210())
	{
		Function_209(10, 3);
	}
	else
	{
		Function_207();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_55(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_55());
	UI_POP("nDebugMenu");
	return;
}

void Function_207() //Position: 0x8FD2 / 36818
{
	Function_208(25, 2);
	return;
}

void Function_208(int iParam0, int iParam1) //Position: 0x8FDE / 36830
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

void Function_209(int iParam0, int iParam1) //Position: 0x91DC / 37340
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

bool Function_210() //Position: 0x9313 / 37651
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
				if (!Function_14(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_211(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x937A / 37754
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_204();
			Function_203();
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
				SET_PLAYER_CONTROL(false, 1, 0, 0);
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
		Function_193("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9420 / 37920
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_225(&Var15, &Var0);
	uVar20 = Function_224(*uParam1, &Var15);
	Function_223(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_222(uParam0, uVar20);
	Function_220(StackVal, uParam0, Var15.f_12);
	Function_218(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_217(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_214(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_213(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_213(int iParam0, int iParam1, int iParam2) //Position: 0x94E7 / 38119
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

bool Function_214(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x9543 / 38211
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
				Function_216(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_216(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_213(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_215(bParam1->f_32);
	}
	else
	{
		Function_215(bParam1->f_32);
	}
	return 0;
}

void Function_215(bool bParam0) //Position: 0x96C9 / 38601
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

void Function_216(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x9703 / 38659
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

var Function_217(int iParam0, var uParam1, int iParam2) //Position: 0x97B1 / 38833
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_218(var uParam0, int iParam1, int iParam2) //Position: 0x97D5 / 38869
{
	switch (Function_219())
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

int Function_219() //Position: 0x9871 / 39025
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

void Function_220(var uParam0, int iParam1, int iParam2) //Position: 0x98AD / 39085
{
	switch (Function_221(uParam0))
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

int Function_221(int iParam0) //Position: 0x9945 / 39237
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_55()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, false))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_81(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, false))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_81(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_47(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_55()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, false))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_81(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, false))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_81(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_47(iParam0, 0x20000000);
	return 0;
}

var Function_222(var uParam0, int iParam1) //Position: 0x9A90 / 39568
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_223(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9BDF / 39903
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

var Function_224(int iParam0, int iParam1) //Position: 0x9C72 / 40050
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_225(var uParam0, var uParam1) //Position: 0x9C8C / 40076
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_226() //Position: 0x9CDA / 40154
{
	return Global_30920;
}

bool Function_227() //Position: 0x9CE3 / 40163
{
	if (IS_EXITFLAG_SET())
	{
		Function_197(bLocal_552);
		Function_189(StackVal, StackVal, 4, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
		return 0;
	}
	Function_567(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_479, bLocal_552, iLocal_553, &bLocal_666, &bLocal_664, &bLocal_665);
	if (bLocal_552 == 99 && bLocal_552 == 100)
	{
		if (Function_547(&Local_596, &uLocal_556, &uLocal_648, bLocal_554, iLocal_555))
		{
			if (Function_545(&uLocal_648))
			{
				Function_197(bLocal_552);
				Function_189(StackVal, StackVal, 5, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_197(bLocal_552);
			Function_189(StackVal, StackVal, 1, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_197(bLocal_552);
			Function_189(StackVal, StackVal, 2, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
			return 1;
		}
	}
	switch (bLocal_552)
	{
		case 0x00000063:
			Function_526();
			break;
		
		case 0x00000000:
			Function_519();
			break;
		
		case 0x00000001:
			Function_505();
			break;
		
		case 0x00000002:
			Function_478();
			break;
		
		case 0x00000003:
			Function_459();
			break;
		
		case 0x00000004:
			Function_410();
			break;
		
		case 0x00000005:
			Function_337();
			break;
		
		case 0x00000065:
			Function_233();
			break;
		
		case 0x00000064:
			if (Function_232(&bLocal_665))
			{
				if (bLocal_552 != 2 || bLocal_552 != 3)
				{
					Function_197(5);
					Function_194(StackVal, StackVal, Function_197(5), Function_200(5), 0);
				}
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_231(&bLocal_552, &iLocal_553, &iLocal_545))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_664)
	{
		Function_202(&bLocal_664, 8);
		Function_230(0, 1);
		Function_229(1, 0);
		Function_1();
		return 0;
	}
	if (bLocal_665 && bLocal_552 == 100)
	{
		Function_197(bLocal_552);
		Function_189(StackVal, StackVal, 5, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
	}
	if (bLocal_666)
	{
		Function_230(0, 1);
		Function_229(1, 0);
		Function_228(&bLocal_666, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_228(var uParam0, int iParam1) //Position: 0x9EBA / 40634
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_190(iParam1);
	*uParam0 = 1;
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0x9EDD / 40669
{
	if (bParam0)
	{
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
	}
	if (bParam1)
	{
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
	}
	return;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0x9F89 / 40841
{
	if (bParam0)
	{
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
	}
	if (bParam1)
	{
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
	}
	return;
}

bool Function_231(var uParam0, var uParam1, int iParam2) //Position: 0xA035 / 41013
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

bool Function_232(int iParam0) //Position: 0xA075 / 41077
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_233() //Position: 0xA088 / 41096
{
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			if (!iLocal_653[5])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_331(16, 1);
				Function_188(Global_34573, (*&Local_4 + 1112)[12], 1, 1, 1);
				iLocal_553 = 1;
			}
			else
			{
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_330(Global_30685[0]))
			{
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000002:
			Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
			iLocal_553 = 3;
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/ESCALERA_2_PT_F_CS/escalera_2_pt_f_cs", &iLocal_545, &Local_479, &bLocal_552, 77642, 74798, 74495, 70031, 69578, 45512, 0, 2, 1, 1, 2, 0, 1))
			{
				iLocal_553 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (IS_ACTOR_VALID(bLocal_693))
				{
					Function_188(bLocal_693, (*&Local_4 + 1112)[13], 1, 1, 1);
					TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
					iLocal_553 = 106;
				}
				else
				{
					bLocal_693 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			break;
		
		case 0x0000006A:
			bLocal_664 = true;
			break;
	}
	return;
}

bool Function_234(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xA1E1 / 41441
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
	if (Global_3381)
	{
		Function_240(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_239())
		{
			return "";
		}
	}
	if (!Function_237())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_146();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_199(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_199(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_199(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_199(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_236(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_236(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_45() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
				if (!Function_78(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_59(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
		Function_235(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_45() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_235(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA537 / 42295
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_236(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xA574 / 42356
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

bool Function_237() //Position: 0xA60F / 42511
{
	if (Function_238() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_238() //Position: 0xA625 / 42533
{
	return Global_12976.f_152;
}

bool Function_239() //Position: 0xA630 / 42544
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_240(var uParam0, bool bParam1, bool bParam2) //Position: 0xA650 / 42576
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_81(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_81(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_241(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xA67D / 42621
{
	if (!bParam15)
	{
		Function_256(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_255(iParam2) || iParam2->f_24 < 1))
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
				Function_253(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_252())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_251(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_253(iParam1 + 4);
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
					Function_251(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_248(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_248(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_246(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_251(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_253(iParam1 + 4);
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
						Function_245(1.0f);
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
						Function_243();
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
					Function_242(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_255(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_242(bool bParam0) //Position: 0xAC91 / 44177
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_146();
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

void Function_243() //Position: 0xAD40 / 44352
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_244();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_244() //Position: 0xAD85 / 44421
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_245(bool bParam0) //Position: 0xAD97 / 44439
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

void Function_246(bool bParam0, bool bParam1) //Position: 0xADB4 / 44468
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
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_59(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_247(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_247(bool bParam0) //Position: 0xAE34 / 44596
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float Function_248(int iParam0) //Position: 0xAE63 / 44643
{
	if (Function_250(iParam0))
	{
		if (Function_249(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_249(int iParam0) //Position: 0xAF2B / 44843
{
	return Function_14(*iParam0, 2);
}

bool Function_250(int iParam0) //Position: 0xAF38 / 44856
{
	return Function_14(*iParam0, 1);
}

int Function_251(bool bParam0) //Position: 0xAF45 / 44869
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
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
		iVar0++;
	}
	return 1;
}

bool Function_252() //Position: 0xAFFD / 45053
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

void Function_253(int iParam0) //Position: 0xB037 / 45111
{
	Function_254(iParam0, 0.0f);
	return;
}

void Function_254(int iParam0, float fParam1) //Position: 0xB043 / 45123
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_81(iParam0, 1);
	Function_47(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_255(int iParam0) //Position: 0xB064 / 45156
{
	return iParam0->f_20;
}

void Function_256(var uParam0, int iParam1) //Position: 0xB06E / 45166
{
	Function_257(uParam0, iParam1, 0);
	return;
}

void Function_257(var uParam0, bool bParam1, bool bParam2) //Position: 0xB07C / 45180
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
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_92(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
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
						Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_92(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_258() //Position: 0xB1C8 / 45512
{
	switch (bLocal_552)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if ((Function_274() && Function_273()) && Function_261())
				{
					iLocal_924 = 1;
					Function_259();
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				iLocal_926 = 1;
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

struct<8> Function_259() //Position: 0xB21F / 45599
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Zombie03_layout");
	Local_4.f_576 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "NoBackTrackVols_set");
	(*&Local_4 + 568)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PillarRoom_Ammo", 2, -4355.577f, 24.58127f, 4368.24f, 0.0f, -0.1073254f, 0.0f, 20.18934f, 5.756174f, 7.673368f);
	ADD_TO_VOLUME_SET(Local_4.f_576, (*&Local_4 + 568)[0]);
	Local_4.f_612 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "FailVols_set");
	(*&Local_4 + 580)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_0", 2, -4337.887f, 35.82172f, 4240.77f, 0.0f, 160.6906f, 0.0f, 122.9297f, 28.21127f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[0]);
	(*&Local_4 + 580)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_1", 2, -4408.502f, 34.03202f, 4270.83f, 0.0f, 239.0781f, 0.0f, 122.9297f, 28.21127f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[1]);
	(*&Local_4 + 580)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_2", 2, -4416.589f, 38.07753f, 4376.697f, 0.0f, 312.9973f, 0.0f, 122.9297f, 28.21127f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[2]);
	(*&Local_4 + 580)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_3", 2, -4338.766f, 39.79316f, 4407.374f, 0.0f, 363.551f, 0.0f, 122.9297f, 22.60033f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[3]);
	(*&Local_4 + 580)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_4", 2, -4287.646f, 38.99223f, 4323.234f, 0.0f, 446.212f, 0.0f, 122.9297f, 22.60033f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[4]);
	(*&Local_4 + 580)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_5", 2, -4331.759f, 35.48927f, 4378.618f, 0.0f, 452.9165f, 0.0f, 25.46953f, 12.0977f, 37.63341f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[5]);
	(*&Local_4 + 580)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFailVol_6", 2, -4386.587f, 39.79336f, 4383.331f, 0.0f, 453.5276f, 0.0f, 24.24959f, 12.86428f, 49.85642f);
	ADD_TO_VOLUME_SET(Local_4.f_612, (*&Local_4 + 580)[6]);
	Local_4.f_636 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Global_Vols_set");
	(*&Local_4 + 616)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Mansion_Out", 2, -4363.658f, 17.08423f, 4360.27f, 0.0f, -90.88387f, 0.0f, 27.6025f, 22.12873f, 40.60747f);
	ADD_TO_VOLUME_SET(Local_4.f_636, (*&Local_4 + 616)[0]);
	(*&Local_4 + 616)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Mansion_In", 2, -4340.54f, 30.98529f, 4316.018f, 0.0f, 88.89235f, 0.0f, 11.32791f, 8.309637f, 2.860054f);
	ADD_TO_VOLUME_SET(Local_4.f_636, (*&Local_4 + 616)[1]);
	(*&Local_4 + 616)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Mansion_Out_1", 2, -4361.125f, 22.33068f, 4331.996f, 0.0f, -89.9641f, 0.0f, 48.75595f, 28.60038f, 29.36757f);
	ADD_TO_VOLUME_SET(Local_4.f_636, (*&Local_4 + 616)[2]);
	(*&Local_4 + 616)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Mansion_Out_2", 2, -4401.391f, 15.06409f, 4406.377f, 0.0f, -89.9641f, 0.0f, 123.4836f, 16.61502f, 55.48017f);
	ADD_TO_VOLUME_SET(Local_4.f_636, (*&Local_4 + 616)[3]);
	Local_4.f_660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "EmergTeleVols_set");
	(*&Local_4 + 640)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_TeleOn_0", 2, -4358.507f, 22.33068f, 4338.042f, 0.0f, -89.9641f, 0.0f, 50.33968f, 28.60038f, 49.43056f);
	ADD_TO_VOLUME_SET(Local_4.f_660, (*&Local_4 + 640)[0]);
	(*&Local_4 + 640)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "S3_TeleOn_0", 2, -4401.391f, 15.06409f, 4406.377f, 0.0f, -89.9641f, 0.0f, 123.4836f, 16.61502f, 55.48017f);
	ADD_TO_VOLUME_SET(Local_4.f_660, (*&Local_4 + 640)[1]);
	(*&Local_4 + 640)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TeleOn_0", 2, -4344.039f, 36.72928f, 4303.354f, 0.0f, -89.9641f, 0.0f, 16.23474f, 7.978823f, 38.4685f);
	ADD_TO_VOLUME_SET(Local_4.f_660, (*&Local_4 + 640)[2]);
	(*&Local_4 + 640)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TeleOn_1", 2, -4349f, 42.9818f, 4313.582f, 0.0f, -89.9641f, 0.0f, 25.42356f, 9.389962f, 38.4685f);
	ADD_TO_VOLUME_SET(Local_4.f_660, (*&Local_4 + 640)[3]);
	Local_4.f_672 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "MaidenVols_set");
	(*&Local_4 + 664)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_StairWait", 2, -4350.536f, 30.54615f, 4314.865f, 0.0f, 0.0f, 0.0f, 1.976131f, 6.983809f, 11.30036f);
	ADD_TO_VOLUME_SET(Local_4.f_672, (*&Local_4 + 664)[0]);
	Local_4.f_688 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Sector_Vols_set");
	(*&Local_4 + 676)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "UnloadEsc_0", 2, -4358.215f, 41.31655f, 4363.875f, 0.0f, 0.0f, 0.0f, 122.9297f, 12.56611f, 43.86913f);
	ADD_TO_VOLUME_SET(Local_4.f_688, (*&Local_4 + 676)[0]);
	(*&Local_4 + 676)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "UnloadEsc_1", 2, -4343.09f, 35.87574f, 4376.705f, 0.0f, 2.379181f, 0.0f, 34.75255f, 12.56611f, 20.55668f);
	ADD_TO_VOLUME_SET(Local_4.f_688, (*&Local_4 + 676)[1]);
	Local_4.f_704 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage0_Vol_set");
	(*&Local_4 + 692)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ReyesCorpseClear", 2, -4345.478f, 43.04445f, 4328.781f, 0.0f, 0.0f, 0.0f, 5.069133f, 5.249363f, 4.429136f);
	ADD_TO_VOLUME_SET(Local_4.f_704, (*&Local_4 + 692)[0]);
	(*&Local_4 + 692)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CupClear", 2, -4344.47f, 43.01931f, 4326.723f, 0.0f, 0.0f, 0.0f, 5.069133f, 2.635121f, 2.945575f);
	ADD_TO_VOLUME_SET(Local_4.f_704, (*&Local_4 + 692)[1]);
	Local_4.f_760 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage1_Vol_set");
	(*&Local_4 + 708)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CataEntrance", 2, -4336.157f, 36.33408f, 4309.212f, 3.446721f, 0.0f, 0.0f, 7.640728f, 4.843626f, 5.880766f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[0]);
	(*&Local_4 + 708)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Zomb_Wand_0", 2, -4362.997f, 33.34029f, 4290.453f, 95.14659f, -86.53931f, -95.15594f, 19.4923f, 13.348f, 26.45648f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[1]);
	(*&Local_4 + 708)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Zomb_Wand_1", 2, -4361.276f, 34.57593f, 4269.937f, 3.447611f, -1.30075f, -0.07835675f, 27.76566f, 13.348f, 16.20614f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[2]);
	(*&Local_4 + 708)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Zomb_Wand_2", 2, -4337.271f, 34.02592f, 4295.694f, 0.0f, 0.0f, 0.0f, 21.41543f, 12.85652f, 5.137695f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[3]);
	(*&Local_4 + 708)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Zomb_Wand_3", 2, -4342.233f, 39.1862f, 4314.996f, 0.0f, 0.0f, 0.0f, 13.40223f, 12.85652f, 11.79779f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[4]);
	(*&Local_4 + 708)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Zomb_Wand_4", 2, -4363.677f, 39.1862f, 4308.147f, 0.0f, 0.0f, 0.0f, 7.007284f, 12.85652f, 12.89245f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[5]);
	(*&Local_4 + 708)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BullRing_Wand_0", 2, -4336.458f, 33.93618f, 4282.528f, 0.0f, -2.354123f, 0.0f, 23.5628f, 13.4421f, 18.4309f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[6]);
	(*&Local_4 + 708)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nDinerZs_0", 2, -4350.46f, 39.1862f, 4311.477f, 0.0f, 0.0f, 0.0f, 5.714423f, 12.85652f, 5.920617f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[7]);
	(*&Local_4 + 708)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nDinerZs_1", 2, -4354.48f, 39.1862f, 4310.01f, 0.0f, 0.0f, 0.0f, 13.45023f, 12.85652f, 2.826781f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[8]);
	(*&Local_4 + 708)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NoZCataEnt", 2, -4337.271f, 34.02592f, 4302.318f, 0.0f, 0.0f, 0.0f, 21.41543f, 18.91016f, 7.5745f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[9]);
	(*&Local_4 + 708)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nS1_RetVol", 2, -4350.73f, 42.08863f, 4322.674f, 0.0f, -33.39755f, 0.0f, 105.2729f, 46.32956f, 122.9132f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[10]);
	(*&Local_4 + 708)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BullLine", 2, -4342.491f, 37.82693f, 4298.185f, 0.0f, 0.0f, 0.0f, 21.41543f, 8.446486f, 12.86065f);
	ADD_TO_VOLUME_SET(Local_4.f_760, (*&Local_4 + 708)[11]);
	Local_4.f_860 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage2_Vol_set");
	(*&Local_4 + 764)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nOutZClear", 2, -4345.316f, 32.05203f, 4315.173f, 0.0f, -89.9641f, 0.0f, 11.83726f, 8.798776f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[0]);
	(*&Local_4 + 764)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LobbyWander", 2, -4356.425f, 31.96985f, 4315.318f, 0.0f, 0.0f, 0.0f, 12.90676f, 9.704557f, 13.35989f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[1]);
	(*&Local_4 + 764)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TunelAtk", 2, -4355.943f, 31.59781f, 4323.514f, 0.0f, 0.09675296f, 0.0f, 27.3713f, 8.798776f, 4.636235f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[2]);
	(*&Local_4 + 764)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TunelAtkShoot", 3, -4355.461f, 28.982f, 4320.413f, 0.0f, 0.09675296f, 0.0f, 6.026576f, 4.542552f, 6.356361f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[3]);
	(*&Local_4 + 764)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RampRoom", 2, -4356.748f, 27.42441f, 4331.197f, 0.0f, -0.1073254f, 0.0f, 27.3713f, 8.798776f, 4.636235f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[4]);
	(*&Local_4 + 764)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nPillarEnt", 2, -4356.201f, 24.24387f, 4346.024f, 0.0f, -0.1073254f, 0.0f, 14.50033f, 5.894801f, 2.391205f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[5]);
	(*&Local_4 + 764)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RampRoomAttack2", 2, -4356.132f, 26.98198f, 4336.943f, 0.0f, -0.1073254f, 0.0f, 19.17819f, 10.60319f, 4.973832f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[6]);
	(*&Local_4 + 764)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PillarAtk_0", 2, -4348.106f, 24.28679f, 4358.37f, 0.0f, -0.1073254f, 0.0f, 5.353344f, 5.044935f, 10.0785f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[7]);
	(*&Local_4 + 764)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PillarAtk_1", 2, -4356.764f, 21.96388f, 4361.28f, 0.0f, -0.1073254f, 0.0f, 14.83636f, 5.044935f, 4.2943f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[8]);
	(*&Local_4 + 764)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PillWander", 2, -4358.575f, 24.58127f, 4367.347f, 0.0f, -0.1073254f, 0.0f, 6.578821f, 5.756174f, 4.68861f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[9]);
	(*&Local_4 + 764)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PillGuard_Atk", 2, -4359.853f, 24.58127f, 4368.231f, 0.0f, -0.1073254f, 0.0f, 14.54377f, 5.756174f, 7.673368f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[10]);
	(*&Local_4 + 764)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GraveRoomEnt", 2, -4367.988f, 17.06638f, 4360.714f, 0.0f, 0.0f, 0.0f, 3.873509f, 10.11554f, 14.78145f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[11]);
	(*&Local_4 + 764)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "S2_BruiseCorn", 2, -4356.573f, 22.07122f, 4353.756f, 0.0f, 89.34531f, 0.0f, 3.873509f, 10.11554f, 14.78145f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[12]);
	(*&Local_4 + 764)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DarknessLine", 2, -4332.034f, 36.17297f, 4310.577f, 0.0f, 30.30008f, 0.0f, 7.157114f, 7.079535f, 2.860054f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[13]);
	(*&Local_4 + 764)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nCryptTalk", 2, -4345.316f, 30.73267f, 4315.173f, 0.0f, -89.9641f, 0.0f, 11.83726f, 8.798776f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[14]);
	(*&Local_4 + 764)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SoldierTalk_0", 2, -4356.002f, 21.08523f, 4361.075f, 0.0f, 0.0f, 0.0f, 18.90613f, 12.09974f, 5.414574f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[15]);
	(*&Local_4 + 764)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CD_NoAtk", 2, -4355.242f, 24.54259f, 4350.777f, 5.051053f, -0.1073254f, 0.0f, 14.50033f, 6.915009f, 21.78211f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[16]);
	(*&Local_4 + 764)[17] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackRoll_Tun", 2, -4359.97f, 27.84034f, 4338.936f, 0.4656475f, -0.1073254f, 0.0f, 3.34699f, 0.8037193f, 4.011473f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[17]);
	(*&Local_4 + 764)[18] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackRoll_Tun1", 2, -4359.97f, 26.59817f, 4338.926f, 0.4656475f, -0.1073254f, 0.0f, 3.34699f, 0.8037193f, 4.011473f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[18]);
	(*&Local_4 + 764)[19] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackRoll_Tun2", 2, -4350.831f, 26.01018f, 4346.272f, 0.4656475f, -0.1073254f, 0.0f, 3.34699f, 0.8037193f, 4.011473f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[19]);
	(*&Local_4 + 764)[20] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackRoll_Tun3", 2, -4360.092f, 25.59545f, 4347.872f, 0.4656475f, -0.1073254f, 0.0f, 3.34699f, 0.8037193f, 4.011473f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[20]);
	(*&Local_4 + 764)[21] = CREATE_VOLUME_IN_LAYOUT(Local_4, "MusFirstZombEnc", 2, -4341.128f, 32.17254f, 4316.963f, 0.0f, -89.9641f, 0.0f, 11.83726f, 8.798776f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[21]);
	(*&Local_4 + 764)[22] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NoEnco_0", 2, -4332.812f, 34.20797f, 4314.123f, 0.0f, -89.9641f, 0.0f, 22.2412f, 8.798776f, 21.00913f);
	ADD_TO_VOLUME_SET(Local_4.f_860, (*&Local_4 + 764)[22]);
	Local_4.f_936 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage3_Vol_set");
	(*&Local_4 + 864)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GRC_Walk", 2, -4375.944f, 14.8804f, 4360.25f, 0.0f, -89.9641f, 0.0f, 11.83726f, 8.098523f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[0]);
	(*&Local_4 + 864)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GRC_WallAmbush", 2, -4397.61f, 13.76094f, 4360.264f, 0.0f, -89.9641f, 0.0f, 11.83726f, 6.401049f, 10.01462f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[1]);
	(*&Local_4 + 864)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GRC_WallSp_0", 2, -4389.916f, 14.78061f, 4361.729f, 0.0f, 0.6375712f, 0.0f, 7.842602f, 10.11554f, 14.78145f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[2]);
	(*&Local_4 + 864)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AtFinalHall", 2, -4410.421f, 9.314589f, 4408.721f, 0.0f, 90.63173f, 0.0f, 4.550706f, 6.664324f, 6.356517f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[3]);
	(*&Local_4 + 864)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nFC_Create", 2, -4409.685f, 10.94747f, 4362.835f, 0.0f, -89.9641f, 0.0f, 11.83726f, 5.766354f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[4]);
	(*&Local_4 + 864)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FC_Walk", 2, -4413.184f, 11.9206f, 4361.949f, 0.0f, -78.59061f, 0.0f, 11.83726f, 5.766354f, 1.95916f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[5]);
	(*&Local_4 + 864)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GasR_Create", 2, -4404.873f, 10.09703f, 4380.029f, 0.0f, -90.49245f, 0.0f, 8.493193f, 5.766354f, 1.95916f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[6]);
	(*&Local_4 + 864)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Aud_GlowEyes", 2, -4348.962f, 31.71795f, 4314.997f, 0.0f, -89.9641f, 0.0f, 11.83726f, 5.766354f, 6.078347f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[7]);
	(*&Local_4 + 864)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackWall_Vol", 2, -4405.263f, 13.40738f, 4365.485f, 0.0f, -89.9641f, 0.0f, 3.166003f, 0.9823262f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[8]);
	(*&Local_4 + 864)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HackWall_Vol1", 2, -4395.639f, 14.61901f, 4356.417f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.066521f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[9]);
	(*&Local_4 + 864)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "EmergRoll_Left", 2, -4394.883f, 14.39155f, 4360.949f, 0.0f, -89.9641f, 0.0f, 11.83726f, 13.57921f, 3.749693f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[10]);
	(*&Local_4 + 864)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nToxicLine", 2, -4408.562f, 8.326777f, 4379.828f, 0.0f, -104.2739f, 0.0f, 8.493193f, 5.766354f, 1.95916f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[11]);
	(*&Local_4 + 864)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Hack2nd_Vol0", 2, -4405.263f, 12.20442f, 4365.485f, 0.0f, -89.9641f, 0.0f, 3.166003f, 0.9823262f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[12]);
	(*&Local_4 + 864)[13] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Hack2nd_Vol1", 2, -4405.263f, 14.83288f, 4365.485f, 0.0f, -89.9641f, 0.0f, 3.166003f, 0.9823262f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[13]);
	(*&Local_4 + 864)[14] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Hack2nd_Vol2", 2, -4395.639f, 13.45992f, 4356.417f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.066521f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[14]);
	(*&Local_4 + 864)[15] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Hack2nd_Vol3", 2, -4395.639f, 12.2875f, 4356.417f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.066521f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[15]);
	(*&Local_4 + 864)[16] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GR_Maiden_2nd", 2, -4384.583f, 14.78061f, 4361.67f, 0.0f, 0.6375712f, 0.0f, 4.03459f, 10.11554f, 14.78145f);
	ADD_TO_VOLUME_SET(Local_4.f_936, (*&Local_4 + 864)[16]);
	Local_4.f_984 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage4_Vol_set");
	(*&Local_4 + 940)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SpawnTun_0", 2, -4410.489f, 8.74748f, 4411.443f, 0.0f, 90.05663f, 0.0f, 10.85959f, 7.175731f, 9.588489f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[0]);
	(*&Local_4 + 940)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartBendZombs", 2, -4393.408f, 9.729f, 4419.622f, 0.0f, 90.73871f, 0.0f, 16.88334f, 7.175731f, 3.120484f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[1]);
	(*&Local_4 + 940)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartBruiseWalk", 2, -4399.444f, 11.76014f, 4419.452f, 0.0f, 89.20106f, 0.0f, 9.284448f, 7.175731f, 3.120484f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[2]);
	(*&Local_4 + 940)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nAmmoGuard", 2, -4389.01f, 11.76014f, 4419.087f, 0.0f, 89.84267f, 0.0f, 9.284448f, 7.175731f, 3.120484f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[3]);
	(*&Local_4 + 940)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RollRightWalk", 2, -4380.588f, 10.99f, 4426.269f, 0.0f, 150.6991f, 0.0f, 9.284448f, 7.175731f, 2.899794f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[4]);
	(*&Local_4 + 940)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StartleftTun", 2, -4408.753f, 9.051f, 4417.077f, 0.0f, 0.4193181f, 0.0f, 16.883f, 7.176f, 3.120484f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[5]);
	(*&Local_4 + 940)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AtFinalRoom", 2, -4405.653f, 9.022472f, 4453.854f, 0.0f, -89.9641f, 0.0f, 24.42494f, 12.52313f, 28.7057f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[6]);
	(*&Local_4 + 940)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WallZomTunLWR", 2, -4394.303f, 12.53988f, 4422.787f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.858154f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[7]);
	(*&Local_4 + 940)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WallZomTunRWR_0", 2, -4393.376f, 10.99336f, 4429.968f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.858154f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[8]);
	(*&Local_4 + 940)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WallZomTunRWR_1", 2, -4396.334f, 10.38831f, 4424.295f, 0.0f, -89.9641f, 0.0f, 3.649206f, 1.858154f, 5.022008f);
	ADD_TO_VOLUME_SET(Local_4.f_984, (*&Local_4 + 940)[9]);
	Local_4.f_1016 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Stage5_Vol_set");
	(*&Local_4 + 988)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "LastCs", 2, -4405.462f, 12.24296f, 4460.119f, 0.0f, 0.0f, 0.0f, 5.151551f, 11.99067f, 12.01448f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[0]);
	(*&Local_4 + 988)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Boss_NW", 2, -4412.253f, 9.803206f, 4447.175f, 0.0f, 0.0f, 0.0f, 14.5172f, 14.53968f, 12.64909f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[1]);
	(*&Local_4 + 988)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Boss_SW", 2, -4412.242f, 9.803206f, 4458.474f, 0.0f, 0.0f, 0.0f, 14.5172f, 14.53968f, 12.33484f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[2]);
	(*&Local_4 + 988)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Boss_SE", 2, -4398.919f, 9.803206f, 4458.541f, 0.0f, 0.0f, 0.0f, 14.5172f, 14.53968f, 12.1933f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[3]);
	(*&Local_4 + 988)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Boss_NE", 2, -4398.851f, 9.803206f, 4447.175f, 0.0f, 0.0f, 0.0f, 14.5172f, 14.53968f, 12.64909f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[4]);
	(*&Local_4 + 988)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Boss_Mid", 2, -4405.716f, 9.803206f, 4452.891f, 0.0f, 0.0f, 0.0f, 8.058099f, 14.53968f, 7.896736f);
	ADD_TO_VOLUME_SET(Local_4.f_1016, (*&Local_4 + 988)[5]);
	Local_4.f_1044 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "WeatherVols_set");
	(*&Local_4 + 1020)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "escWeathVol_3", 2, -4344.617f, 31.12805f, 4317.454f, 0.0f, 0.0f, 0.0f, 15.24643f, 11.0293f, 11.08799f);
	ADD_TO_VOLUME_SET(Local_4.f_1044, (*&Local_4 + 1020)[0]);
	(*&Local_4 + 1020)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "escWeathVol_2", 2, -4355.07f, 31.06223f, 4327.425f, 0.0f, 0.0f, 0.0f, 16.09284f, 11.0293f, 41.56862f);
	ADD_TO_VOLUME_SET(Local_4.f_1044, (*&Local_4 + 1020)[1]);
	(*&Local_4 + 1020)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "escWeathVol_1", 2, -4355.844f, 18.95531f, 4347.297f, 0.0f, 0.0f, 0.0f, 46.382f, 20.161f, 52.545f);
	ADD_TO_VOLUME_SET(Local_4.f_1044, (*&Local_4 + 1020)[2]);
	(*&Local_4 + 1020)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "escWeathVol_0", 2, -4391.969f, 10.78906f, 4406.321f, 0.0f, 0.0f, 0.0f, 67.35807f, 14.21569f, 127.3627f);
	ADD_TO_VOLUME_SET(Local_4.f_1044, (*&Local_4 + 1020)[3]);
	(*&Local_4 + 1020)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "escWeathVol_4", 2, -4332.393f, 32.21358f, 4321.834f, 0.0f, -33.20564f, 0.0f, 19.09162f, 11.0293f, 11.08799f);
	ADD_TO_VOLUME_SET(Local_4.f_1044, (*&Local_4 + 1020)[4]);
	Local_4.f_1088 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CatacombVolSet_set");
	(*&Local_4 + 1048)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol1", 2, -4405.369f, 12.73499f, 4452.891f, 0.0f, 0.0f, 0.0f, 28.04976f, 15.99745f, 28.10167f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[0]);
	(*&Local_4 + 1048)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol2", 2, -4396.305f, 12.73499f, 4426.018f, 0.0f, 0.0f, 0.0f, 48.21389f, 15.99745f, 28.10167f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[1]);
	(*&Local_4 + 1048)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol3", 2, -4407.938f, 12.73499f, 4384.106f, 0.0f, 0.0f, 0.0f, 30.84031f, 15.99745f, 58.12931f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[2]);
	(*&Local_4 + 1048)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol4", 2, -4378.914f, 16.46799f, 4361.226f, 0.0f, 0.0f, 0.0f, 30.84031f, 15.99745f, 9.937187f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[3]);
	(*&Local_4 + 1048)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol5", 2, -4355.462f, 22.81601f, 4360.866f, 0.0f, 0.0f, 0.0f, 19.81077f, 13.8646f, 20.25659f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[4]);
	(*&Local_4 + 1048)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol6", 2, -4355.462f, 28.27895f, 4336.576f, 0.0f, 0.0f, 0.0f, 13.36648f, 13.8646f, 29.43307f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[5]);
	(*&Local_4 + 1048)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol7", 2, -4355.462f, 31.74846f, 4314.676f, 0.0f, 0.0f, 0.0f, 15.58662f, 13.8646f, 16.26372f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[6]);
	(*&Local_4 + 1048)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol8", 2, -4336.832f, 31.74846f, 4314.676f, 0.0f, 0.0f, 0.0f, 22.07125f, 13.8646f, 16.26372f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[7]);
	(*&Local_4 + 1048)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CatacombVol9", 2, -4336.832f, 37.59294f, 4303.073f, 0.0f, 0.0f, 0.0f, 13.57511f, 9.893325f, 10.24567f);
	ADD_TO_VOLUME_SET(Local_4.f_1088, (*&Local_4 + 1048)[8]);
	Local_4.f_1104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ReyesElim_set");
	(*&Local_4 + 1092)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Elim_0", 2, -4351.687f, 43.04445f, 4326.273f, 0.0f, 0.0f, 0.0f, 19.3f, 15.08773f, 9.359695f);
	ADD_TO_VOLUME_SET(Local_4.f_1104, (*&Local_4 + 1092)[0]);
	(*&Local_4 + 1092)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Elim_1", 2, -4343.729f, 43.04445f, 4329.385f, 0.0f, 88.89737f, 0.0f, 16.14785f, 15.08773f, 5.278673f);
	ADD_TO_VOLUME_SET(Local_4.f_1104, (*&Local_4 + 1092)[1]);
	Local_4.f_1108 = CREATE_OBJECTSET_IN_LAYOUT("StagePositionSet", Local_4, 8, 0);
	(*&Local_4 + 1112)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_0", -4343.997f, 42.09053f, 4331.209f, 0.0f, 33.82376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[0], Local_4.f_1108);
	(*&Local_4 + 1112)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_0", -4336.917f, 42.08085f, 4329.415f, 0.0f, 79.29158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[1], Local_4.f_1108);
	(*&Local_4 + 1112)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_1", -4355.055f, 42.01784f, 4324.092f, 0.0f, 88.50552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[2], Local_4.f_1108);
	(*&Local_4 + 1112)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_1", -4353.957f, 42.01784f, 4324.88f, 0.0f, 88.50552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[3], Local_4.f_1108);
	(*&Local_4 + 1112)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_2", -4334.063f, 35.787f, 4309.241f, 0.0f, 236.382f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[4], Local_4.f_1108);
	(*&Local_4 + 1112)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_2", -4335.615f, 36.16592f, 4307.208f, 0.0f, 196.1474f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[5], Local_4.f_1108);
	(*&Local_4 + 1112)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_3", -4368.73f, 15.93122f, 4361.757f, 0.0f, 88.50552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[6], Local_4.f_1108);
	(*&Local_4 + 1112)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_3", -4366.729f, 16.14518f, 4360.13f, 28.49943f, 88.60828f, 28.54417f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[7], Local_4.f_1108);
	(*&Local_4 + 1112)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_4", -4411.493f, 8.462169f, 4410.158f, 0.0f, 178.1128f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[8], Local_4.f_1108);
	(*&Local_4 + 1112)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_4", -4410.923f, 8.066486f, 4413.28f, 0.0f, 180.8657f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[9], Local_4.f_1108);
	(*&Local_4 + 1112)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_5", -4404.606f, 7.673f, 4449.625f, 0.0f, 174.4191f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[10], Local_4.f_1108);
	(*&Local_4 + 1112)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "CompStart_5", -4405.957f, 7.651312f, 4447.922f, 0.0f, 172.4657f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[11], Local_4.f_1108);
	(*&Local_4 + 1112)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart_Lst", -4343.361f, 36.03331f, 4300.123f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[12], Local_4.f_1108);
	(*&Local_4 + 1112)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "FinalHorse_Pos", -4352.047f, 33.92792f, 4297.497f, 186.1563f, 70.47005f, 186.0756f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[13], Local_4.f_1108);
	Local_4.f_1172 = CREATE_OBJECTSET_IN_LAYOUT("Global_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1176)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nMaskAltar", -4405.347f, 7.86182f, 4463.59f, 0.0f, -2.062448f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1176)[0], Local_4.f_1172);
	Local_4.f_1184 = CREATE_OBJECTSET_IN_LAYOUT("Stage0_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1188)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S0_ReyesCorpse", -4347.29f, 42.08085f, 4327.559f, 0.0f, 217.1094f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1188)[0], Local_4.f_1184);
	Local_4.f_1196 = CREATE_OBJECTSET_IN_LAYOUT("Stage1_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1200)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CataEntBlip", -4335.91f, 36.16592f, 4307.456f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1200)[0], Local_4.f_1196);
	Local_4.f_1208 = CREATE_OBJECTSET_IN_LAYOUT("S1_Zomb_LocsSet", Local_4, 8, 0);
	(*&Local_4 + 1212)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Balc_Go_Near_0", -4358.562f, 42.01784f, 4323.576f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[0], Local_4.f_1208);
	Local_4.f_1220 = CREATE_OBJECTSET_IN_LAYOUT("Stage2_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1224)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Shotgun_Pillar", -4363.459f, 23.26119f, 4367.712f, 136.043f, 3.349626f, 91.04864f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[0], Local_4.f_1220);
	(*&Local_4 + 1224)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_CamLook", -4328.291f, 36.23187f, 4314.052f, -1.990755f, -8.742201f, 3.590581f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[1], Local_4.f_1220);
	(*&Local_4 + 1224)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "M_StairWait", -4348.031f, 30.73267f, 4313.44f, 0.0f, 112.4618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[2], Local_4.f_1220);
	(*&Local_4 + 1224)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nM_TunWait", -4353.11f, 29.01651f, 4318.608f, 0.0f, 163.942f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[3], Local_4.f_1220);
	Local_4.f_1244 = CREATE_OBJECTSET_IN_LAYOUT("S2_Zomb_LocsSet", Local_4, 8, 0);
	(*&Local_4 + 1248)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Tunnel_Go_Near_0", -4355.178f, 28.98228f, 4316.799f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1248)[0], Local_4.f_1244);
	(*&Local_4 + 1248)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Pillar_GN_0", -4348.424f, 21.9122f, 4361.988f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1248)[1], Local_4.f_1244);
	(*&Local_4 + 1248)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Bruise_Corn_0", -4347.832f, 22.96402f, 4354.88f, 0.0f, 76.07336f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1248)[2], Local_4.f_1244);
	Local_4.f_1264 = CREATE_OBJECTSET_IN_LAYOUT("S2_Ground_0Set", Local_4, 8, 0);
	(*&Local_4 + 1268)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_0", -4355.2f, 27.91489f, 4327.658f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[0], Local_4.f_1264);
	(*&Local_4 + 1268)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_1", -4356.759f, 24.67279f, 4341.346f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[1], Local_4.f_1264);
	(*&Local_4 + 1268)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_2", -4354.088f, 25.20029f, 4339.2f, 0.0f, 6.892387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[2], Local_4.f_1264);
	(*&Local_4 + 1268)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_3", -4356.54f, 26.93808f, 4332.183f, 0.0f, -8.206666f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[3], Local_4.f_1264);
	(*&Local_4 + 1268)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_4", -4357.037f, 23.94528f, 4345.072f, 0.0f, -4.743802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[4], Local_4.f_1264);
	(*&Local_4 + 1268)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_Gr_5", -4353.984f, 23.56672f, 4346.253f, 0.0f, 0.5054937f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1268)[5], Local_4.f_1264);
	Local_4.f_1296 = CREATE_OBJECTSET_IN_LAYOUT("S2_Wall_0Set", Local_4, 8, 0);
	(*&Local_4 + 1300)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_0_Roll", -4359.258f, 27.78125f, 4338.733f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[0], Local_4.f_1296);
	(*&Local_4 + 1300)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_0_Spawn", -4357.326f, 25.323f, 4346.687f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[1], Local_4.f_1296);
	(*&Local_4 + 1300)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_1_Roll", -4359.05f, 26.369f, 4338.947f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[2], Local_4.f_1296);
	(*&Local_4 + 1300)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_1_Spawn", -4357.305f, 25.323f, 4339.542f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[3], Local_4.f_1296);
	(*&Local_4 + 1300)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_2_Spawn", -4353.369f, 23.55106f, 4346.256f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[4], Local_4.f_1296);
	(*&Local_4 + 1300)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_3_Spawn", -4356.578f, 23.37786f, 4347.289f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[5], Local_4.f_1296);
	(*&Local_4 + 1300)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_2_Roll", -4351.389f, 25.86822f, 4346.611f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[6], Local_4.f_1296);
	(*&Local_4 + 1300)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "S2_W_3_Roll", -4359.371f, 25.39331f, 4348.01f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1300)[7], Local_4.f_1296);
	Local_4.f_1336 = CREATE_OBJECTSET_IN_LAYOUT("S2_Ground_1Set", Local_4, 8, 0);
	(*&Local_4 + 1340)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nS2_Gr_1_0", -4357.166f, 22.81425f, 4349.798f, 0.0f, -1.012896f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[0], Local_4.f_1336);
	(*&Local_4 + 1340)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nS2_Gr_1_1", -4355.209f, 24.1418f, 4343.932f, 0.0f, 1.368407f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[1], Local_4.f_1336);
	(*&Local_4 + 1340)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Bruise_GrndSpwn", -4356.397f, 22.10285f, 4356.348f, 0.0f, -7.002051f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1340)[2], Local_4.f_1336);
	Local_4.f_1356 = CREATE_OBJECTSET_IN_LAYOUT("S2_PD_0Set", Local_4, 8, 0);
	(*&Local_4 + 1360)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nS2_PD_0_0", -4361.312f, 22.0449f, 4367.393f, -180.0025f, -186.8171f, 179.4038f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1360)[0], Local_4.f_1356);
	Local_4.f_1368 = CREATE_OBJECTSET_IN_LAYOUT("Stage3_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1372)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_CamLook", -4392.333f, 11.20395f, 4361.001f, 183.0502f, 60.9958f, 182.6201f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[0], Local_4.f_1368);
	(*&Local_4 + 1372)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_FC_GoNear", -4415.771f, 10.91544f, 4364.176f, 0.0f, 1.449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[1], Local_4.f_1368);
	(*&Local_4 + 1372)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_M_GR_Wait", -4375.75f, 13.94843f, 4359.876f, 0.0f, 107.5662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[2], Local_4.f_1368);
	(*&Local_4 + 1372)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_Rep_0", -4395.011f, 8.418857f, 4398.619f, 136.0959f, 2.22075f, 92.13737f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[3], Local_4.f_1368);
	(*&Local_4 + 1372)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_M_GR_Wait_0", -4381.284f, 11.6957f, 4359.56f, 0.0f, 109.3734f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1372)[4], Local_4.f_1368);
	Local_4.f_1396 = CREATE_OBJECTSET_IN_LAYOUT("S3_Zomb_LocsSet", Local_4, 8, 0);
	(*&Local_4 + 1400)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "GR_GoNear_0", -4383.464f, 10.8341f, 4360.802f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1400)[0], Local_4.f_1396);
	Local_4.f_1408 = CREATE_OBJECTSET_IN_LAYOUT("S3_Ground_0Set", Local_4, 8, 0);
	(*&Local_4 + 1412)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nS3_Gr_0_0", -4392.584f, 11.0618f, 4360.579f, 0.0f, -95.68273f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1412)[0], Local_4.f_1408);
	(*&Local_4 + 1412)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nS3_Gr_0_1", -4406.031f, 10.91451f, 4359.652f, 0.0f, -87.41605f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1412)[1], Local_4.f_1408);
	Local_4.f_1424 = CREATE_OBJECTSET_IN_LAYOUT("S3_Walk_0Set", Local_4, 8, 0);
	(*&Local_4 + 1428)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_W_0_0", -4401.633f, 11.0279f, 4362.859f, 0.0f, -87.41605f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1428)[0], Local_4.f_1424);
	(*&Local_4 + 1428)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_W_0_1", -4402.601f, 11.40411f, 4359.185f, 0.0f, -93.81799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1428)[1], Local_4.f_1424);
	(*&Local_4 + 1428)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_W_0_2", -4419.116f, 11.34014f, 4360.219f, 0.0f, -87.41605f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1428)[2], Local_4.f_1424);
	Local_4.f_1444 = CREATE_OBJECTSET_IN_LAYOUT("S3_GRC_Wall_0Set", Local_4, 8, 0);
	(*&Local_4 + 1448)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC_Wall_0_Roll", -4395.638f, 14.56267f, 4357.531f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[0], Local_4.f_1444);
	(*&Local_4 + 1448)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC_Wall_0_SP", -4395.63f, 10.92504f, 4359.25f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[1], Local_4.f_1444);
	(*&Local_4 + 1448)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC_Wall_1_Roll", -4404.853f, 13.24793f, 4364.756f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[2], Local_4.f_1444);
	(*&Local_4 + 1448)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC_Wall_1_SP", -4404.166f, 10.88603f, 4362.022f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1448)[3], Local_4.f_1444);
	Local_4.f_1468 = CREATE_OBJECTSET_IN_LAYOUT("S3_GRC_Wall_1Set", Local_4, 8, 0);
	(*&Local_4 + 1472)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_0_Roll", -4404.82f, 12.07803f, 4364.565f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[0], Local_4.f_1468);
	(*&Local_4 + 1472)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_0_SP", -4405.957f, 11.05989f, 4362.408f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[1], Local_4.f_1468);
	(*&Local_4 + 1472)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_1_Roll", -4404.853f, 14.55111f, 4364.625f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[2], Local_4.f_1468);
	(*&Local_4 + 1472)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_1_SP", -4404.952f, 10.85118f, 4362.773f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[3], Local_4.f_1468);
	(*&Local_4 + 1472)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_2_Roll", -4395.808f, 12.10765f, 4357.748f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[4], Local_4.f_1468);
	(*&Local_4 + 1472)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_2_SP", -4395.028f, 10.89999f, 4359.675f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[5], Local_4.f_1468);
	(*&Local_4 + 1472)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_3_Roll", -4395.766f, 13.33827f, 4357.425f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[6], Local_4.f_1468);
	(*&Local_4 + 1472)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "GRC1_Wall_3_SP", -4395.084f, 10.91368f, 4360.485f, 0.0f, -99.94138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1472)[7], Local_4.f_1468);
	Local_4.f_1508 = CREATE_OBJECTSET_IN_LAYOUT("S3_FastCornSet", Local_4, 8, 0);
	(*&Local_4 + 1512)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S3_FC_0", -4410.336f, 8.700473f, 4379.645f, 0.0f, 97.74782f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1512)[0], Local_4.f_1508);
	Local_4.f_1520 = CREATE_OBJECTSET_IN_LAYOUT("S3_Gas_Tox_0Set", Local_4, 8, 0);
	(*&Local_4 + 1524)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Tox_0_0", -4415.41f, 7.825043f, 4387.876f, 0.0f, -72.82075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[0], Local_4.f_1520);
	(*&Local_4 + 1524)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Tox_0_1", -4417.823f, 8.128137f, 4393.746f, 0.0f, -29.97459f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[1], Local_4.f_1520);
	(*&Local_4 + 1524)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Tox_0_2", -4407.802f, 8.148f, 4395.376f, 0.0f, 77.91801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[2], Local_4.f_1520);
	(*&Local_4 + 1524)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Tox_0_3", -4409.366f, 7.73168f, 4402.514f, 0.0f, -72.2013f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[3], Local_4.f_1520);
	(*&Local_4 + 1524)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Walker_0_0", -4412.799f, 7.818703f, 4393.719f, 0.0f, -29.97459f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[4], Local_4.f_1520);
	(*&Local_4 + 1524)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Walker_0_1", -4395.682f, 7.78519f, 4397.758f, 0.0f, -29.97459f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[5], Local_4.f_1520);
	(*&Local_4 + 1524)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Gas_Walker_0_2", -4409.875f, 7.948917f, 4401.828f, 0.0f, -29.97459f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1524)[6], Local_4.f_1520);
	Local_4.f_1556 = CREATE_OBJECTSET_IN_LAYOUT("S3_Gas_Walker_DestSet", Local_4, 8, 0);
	(*&Local_4 + 1560)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nS3_Dest_0", -4406.593f, 7.889936f, 4386.786f, 0.0f, -29.97459f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[0], Local_4.f_1556);
	(*&Local_4 + 1560)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nS3_Dest_1", -4415.432f, 7.781497f, 4392.31f, 0.0f, 24.21241f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[1], Local_4.f_1556);
	(*&Local_4 + 1560)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nS3_Dest_2", -4397.948f, 7.825559f, 4394.66f, 0.0f, 24.21241f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1560)[2], Local_4.f_1556);
	Local_4.f_1576 = CREATE_OBJECTSET_IN_LAYOUT("Stage4_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1580)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_CamLook", -4407.387f, 9.706504f, 4420.382f, 184.2346f, 60.95396f, 183.9746f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1580)[0], Local_4.f_1576);
	(*&Local_4 + 1580)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_LeftGo_Near", -4405.61f, 7.866611f, 4419.591f, 184.2346f, 60.95396f, 183.9746f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1580)[1], Local_4.f_1576);
	(*&Local_4 + 1580)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_ShtGun_0", -4376.253f, 11.77131f, 4424.266f, 136.6093f, 1.873046f, 91.95398f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1580)[2], Local_4.f_1576);
	(*&Local_4 + 1580)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_RightGo_Near", -4384.862f, 10.45842f, 4426.853f, 184.2346f, 60.95396f, 183.9746f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1580)[3], Local_4.f_1576);
	Local_4.f_1600 = CREATE_OBJECTSET_IN_LAYOUT("S4_Zomb_LocsSet", Local_4, 8, 0);
	(*&Local_4 + 1604)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "FH_Go_Near_0", -4407.537f, 7.861943f, 4419.55f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1604)[0], Local_4.f_1600);
	Local_4.f_1612 = CREATE_OBJECTSET_IN_LAYOUT("S4_TunLWRSet", Local_4, 8, 0);
	(*&Local_4 + 1616)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLWR_R", -4394.303f, 12.53988f, 4422.787f, 0.0f, 85.76615f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[0], Local_4.f_1612);
	(*&Local_4 + 1616)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLWR_S", -4394.325f, 10.21249f, 4421.038f, 0.0f, 94.89729f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[1], Local_4.f_1612);
	Local_4.f_1628 = CREATE_OBJECTSET_IN_LAYOUT("S4_TunLGrndSet", Local_4, 8, 0);
	(*&Local_4 + 1632)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLGrnd_0", -4401.2f, 8.507927f, 4420.606f, 0.0f, 79.71889f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[0], Local_4.f_1628);
	(*&Local_4 + 1632)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLGrnd_1", -4387.021f, 10.84708f, 4421.021f, 0.0f, 86.80899f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[1], Local_4.f_1628);
	(*&Local_4 + 1632)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLGrnd_2", -4383.522f, 11.1292f, 4419.126f, 1.509045f, 93.63868f, 0.3546027f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[2], Local_4.f_1628);
	(*&Local_4 + 1632)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLWlk_0", -4387.005f, 10.86274f, 4421.165f, 178.4062f, 93.4449f, 177.2576f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[3], Local_4.f_1628);
	(*&Local_4 + 1632)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLWlk_1", -4394.46f, 10.05851f, 4418.068f, 178.4062f, 93.4449f, 177.2576f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[4], Local_4.f_1628);
	(*&Local_4 + 1632)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunLWlkBruise", -4379.775f, 10.85426f, 4423.901f, 179.3644f, 180.0785f, 178.3891f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1632)[5], Local_4.f_1628);
	Local_4.f_1660 = CREATE_OBJECTSET_IN_LAYOUT("S4_TunMAmmoSet", Local_4, 8, 0);
	(*&Local_4 + 1664)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunMFast_0", -4378.164f, 11.02858f, 4422.878f, 0.0f, 71.13152f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1664)[0], Local_4.f_1660);
	Local_4.f_1672 = CREATE_OBJECTSET_IN_LAYOUT("S4_TunRWRSet", Local_4, 8, 0);
	(*&Local_4 + 1676)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRWR_R_0", -4393.376f, 10.99336f, 4429.968f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1676)[0], Local_4.f_1672);
	(*&Local_4 + 1676)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRWR_S_0", -4393.541f, 8.978894f, 4428.567f, 0.0f, -83.46635f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1676)[1], Local_4.f_1672);
	(*&Local_4 + 1676)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRWR_R_1", -4396.334f, 10.38831f, 4424.295f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1676)[2], Local_4.f_1672);
	(*&Local_4 + 1676)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRWR_S_1", -4396.493f, 8.295035f, 4425.301f, 0.0f, -100.4661f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1676)[3], Local_4.f_1672);
	Local_4.f_1696 = CREATE_OBJECTSET_IN_LAYOUT("S4_TunRGrndSet", Local_4, 8, 0);
	(*&Local_4 + 1700)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRGrnd_0", -4401.864f, 7.785156f, 4427.031f, 0.0f, -87.47363f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1700)[0], Local_4.f_1696);
	(*&Local_4 + 1700)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S4_TunRWlk_1", -4392.682f, 8.805483f, 4425.436f, 0.0f, -99.10239f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1700)[1], Local_4.f_1696);
	Local_4.f_1712 = CREATE_OBJECTSET_IN_LAYOUT("S5_BossFight_IntroSet", Local_4, 8, 0);
	(*&Local_4 + 1716)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nS5_BF_I_0", -4405.321f, 7.571939f, 4460.919f, 0.0f, 0.3849253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1716)[0], Local_4.f_1712);
	(*&Local_4 + 1716)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "nS5_BF_I_1", -4406.633f, 7.575405f, 4460.083f, 0.0f, -12.46367f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1716)[1], Local_4.f_1712);
	(*&Local_4 + 1716)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "nS5_BF_I_2", -4403.887f, 7.598949f, 4459.997f, 0.0f, 10.39272f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1716)[2], Local_4.f_1712);
	(*&Local_4 + 1716)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "nS5_BF_I_3", -4397.228f, 7.580396f, 4452.891f, 0.0f, 55.72137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1716)[3], Local_4.f_1712);
	(*&Local_4 + 1716)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nS5_BF_I_4", -4414.354f, 7.694942f, 4452.808f, 0.0f, -92.55119f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1716)[4], Local_4.f_1712);
	Local_4.f_1740 = CREATE_OBJECTSET_IN_LAYOUT("Stage5_PosSet", Local_4, 8, 0);
	(*&Local_4 + 1744)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_CamLook", -4405.347f, 8.784268f, 4461.007f, 184.2346f, 60.95396f, 183.9746f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[0], Local_4.f_1740);
	(*&Local_4 + 1744)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Maiden_Spec", -4406.817f, 7.915734f, 4443.225f, 182.2297f, -22.85634f, 179.4046f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[1], Local_4.f_1740);
	(*&Local_4 + 1744)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Maiden_Wait", -4406.738f, 8.250564f, 4456.035f, 182.0695f, -6.896797f, 180.0224f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[2], Local_4.f_1740);
	(*&Local_4 + 1744)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_ShtGun_0", -4393.762f, 8.925014f, 4452.102f, 161.7782f, 1.873046f, 91.95398f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[3], Local_4.f_1740);
	(*&Local_4 + 1744)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_ShtGun_1", -4416.763f, 8.961376f, 4453.06f, 161.7875f, 0.5034602f, 92.40482f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1744)[4], Local_4.f_1740);
	Local_4.f_1768 = CREATE_OBJECTSET_IN_LAYOUT("S5_Boss_SpawnsSet", Local_4, 8, 0);
	(*&Local_4 + 1772)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NW_Spawn_Start", -4409.411f, 7.889452f, 4445.181f, 3.04827f, 227.6102f, 358.0187f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[0], Local_4.f_1768);
	(*&Local_4 + 1772)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NW_Spawn_0", -4413.194f, 8.327497f, 4446.2f, 186.1484f, -70.44411f, 534.4748f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[1], Local_4.f_1768);
	(*&Local_4 + 1772)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NW_Spawn_End", -4413.422f, 7.82607f, 4450.225f, 184.8122f, 295.2997f, 175.9185f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[2], Local_4.f_1768);
	(*&Local_4 + 1772)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NE_Spawn_Start", -4397.217f, 7.861141f, 4450.127f, 184.2346f, 60.95396f, 183.9746f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[3], Local_4.f_1768);
	(*&Local_4 + 1772)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NE_Spawn_0", -4397.829f, 8.475432f, 4446.15f, 182.8772f, 44.42f, 182.2856f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[4], Local_4.f_1768);
	(*&Local_4 + 1772)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_NE_Spawn_End", -4400.514f, 7.996771f, 4445.201f, 183.2371f, 50.58808f, 182.773f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[5], Local_4.f_1768);
	(*&Local_4 + 1772)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SW_Spawn_Start", -4413.502f, 7.78046f, 4455.888f, 176.2157f, 237.0993f, 183.4497f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[6], Local_4.f_1768);
	(*&Local_4 + 1772)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SW_Spawn_0", -4408.839f, 7.956619f, 4461.49f, 177.6118f, 210.6441f, 181.4888f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[7], Local_4.f_1768);
	(*&Local_4 + 1772)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SW_Spawn_End", -4411.535f, 7.878655f, 4460.608f, 177.5182f, 214.1142f, 181.6635f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[8], Local_4.f_1768);
	(*&Local_4 + 1772)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SE_Spawn_Start", -4401.431f, 7.986619f, 4460.757f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[9], Local_4.f_1768);
	(*&Local_4 + 1772)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SE_Spawn_0", -4398.406f, 8.052126f, 4460.001f, 354.8176f, 66.61569f, 355.5122f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[10], Local_4.f_1768);
	(*&Local_4 + 1772)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_SE_Spawn_End", -4396.93f, 7.950848f, 4457.377f, 177.8709f, 164.7968f, 179.7124f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1772)[11], Local_4.f_1768);
	Local_4.f_1824 = CREATE_OBJECTSET_IN_LAYOUT("S5_Fast_Zom_RunSet", Local_4, 8, 0);
	(*&Local_4 + 1828)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Fast_Run_center", -4405.369f, 7.519726f, 4452.891f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1828)[0], Local_4.f_1824);
	(*&Local_4 + 1828)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Fast_Run_Altar", -4405.318f, 7.688932f, 4461.487f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1828)[1], Local_4.f_1824);
	(*&Local_4 + 1828)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Fast_Run_Left", -4396.442f, 7.691697f, 4452.891f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1828)[2], Local_4.f_1824);
	(*&Local_4 + 1828)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Fast_Run_Door", -4405.453f, 7.702914f, 4444.644f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1828)[3], Local_4.f_1824);
	(*&Local_4 + 1828)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "S5_Fast_Run_Right", -4414.933f, 7.816479f, 4452.891f, 357.144f, 43.9849f, 358.2868f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1828)[4], Local_4.f_1824);
	Local_4.f_1852 = CREATE_GRINGO_IN_LAYOUT(Local_4, "DLC_female_cower", "DLC_female_cower", -4336.917f, 42.0773f, 4329.415f, 0.0f, 63.86532f, 0.0f);
}

var BÛEébÅhïBþEùEÅ?BF(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, float fParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, int iParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x10043 / 65603
{
	var uVar50369;
	
	return StackVal * -30982;
	return IntToFloat(-7.0f + 683 * -30992);
	Call_Loc(4294964270);
	return StackVal * -31013;
	Call_Loc(StackVal);
	return 4294964270 * -31017;
	Unknown_Function();
	return;
}

bool Function_261() //Position: 0x10802 / 67586
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_924)
		{
			if (!Function_272(0))
			{
				return 0;
			}
			if (!Function_268())
			{
				return 0;
			}
			iLocal_924 = 1;
		}
		if (!Function_262(&bLocal_486))
		{
			return 0;
		}
		if (!Function_239())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_693))
		{
			bLocal_693 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
			TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_693, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_262(bool bParam0) //Position: 0x10876 / 67702
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_267();
	iVar1 = 0;
	if (!Function_169(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		else if (Function_265())
		{
			iVar1 = 1;
			Function_266(bParam0[iVar03], 8);
		}
		Function_266(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_169(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_169(bParam0[03], 8) || iVar1));
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
				Function_266(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_266(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_266(bParam0[iVar03], 2);
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
	Function_263();
	return 1;
}

void Function_263() //Position: 0x10BF1 / 68593
{
	if (!Function_264(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_264(int iParam0) //Position: 0x10C31 / 68657
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_265() //Position: 0x10C4D / 68685
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

void Function_266(var uParam0, int iParam1) //Position: 0x10C78 / 68728
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_267() //Position: 0x10C89 / 68745
{
	if (!Function_264(128))
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

bool Function_268() //Position: 0x10CCB / 68811
{
	Function_271(&Local_4 + 4, 1274, 2, 0);
	Function_269(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dlc_female_cower", 1, 0);
	if (Function_262(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_269(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x10D30 / 68912
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_270(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_266(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_270(var uParam0, int iParam1, int iParam2) //Position: 0x10D68 / 68968
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_266(uParam0[iVar03], 4);
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

var Function_271(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10E2C / 69164
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_266(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_266(uParam0[iVar03], 8);
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

bool Function_272(bool bParam0) //Position: 0x10EFC / 69372
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

int Function_273() //Position: 0x10F2A / 69418
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_272(0))
		{
			return 0;
		}
		if (!Function_268())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_239())
		{
			return 0;
		}
		if (!Function_262(&bLocal_486))
		{
			return 0;
		}
		if (!Function_262(&bLocal_670))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_693))
		{
			bLocal_693 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
			TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_693, 1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_274() //Position: 0x10FA8 / 69544
{
	Function_271(&Local_4 + 280, 1238, 2, 0);
	if (Function_262(&Local_4 + 280))
	{
		return 1;
	}
	return 0;
}

int Function_275() //Position: 0x10FCA / 69578
{
	switch (bLocal_552)
	{
		case 0x00000063:
			Function_277();
			Function_276(2, 0, 0, 1, 1, 1, 0, 0, 1, 1);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			return 1;
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_692);
			Function_276(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_276(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_276(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x1102C / 69676
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
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_55();
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
			if (Function_45())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_92(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_203();
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
	Function_242(bParam9);
}

void Function_277() //Position: 0x1111C / 69916
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("cupSet", bLocal_478, 4294967295, 0);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, (*&Local_4 + 692)[1], "p_gen_glass06", 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_PHYSINST_FROM_OBJECT(bVar2);
			if (IS_PHYSINST_VALID(bVar3))
			{
				HIDE_PHYSINST(bVar3);
			}
		}
		bVar1++;
	}
	return;
}

int Function_278() //Position: 0x1118F / 70031
{
	switch (bLocal_552)
	{
		case 0x00000063:
			Function_188(Global_34573, (*&Local_4 + 1112)[0], 0, 0, 0);
			Function_188(bLocal_692, (*&Local_4 + 1112)[1], 1, 1, 1);
			Function_300();
			TASK_CLEAR(bLocal_692);
			SNAP_ACTOR_TO_GRINGO(bLocal_692, Local_4.f_1852, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO(bLocal_692, GET_GRINGO_FROM_OBJECT(Local_4.f_1852), "UseCase1", 4294967295, 1);
			Function_299();
			if (!iLocal_926)
			{
				Function_297();
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_280();
			Function_188(Global_34573, (*&Local_4 + 1112)[2], 0, 1, 1);
			Function_188(bLocal_692, (*&Local_4 + 1112)[3], 1, 1, 1);
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.35f, 0);
			return 1;
			break;
		
		case 0x00000005:
			Function_188(Global_34573, (*&Local_4 + 1112)[10], 1, 1, 1);
			Function_188(bLocal_692, (*&Local_4 + 1112)[11], 1, 1, 1);
			Function_279();
			return 1;
			break;
		
		case 0x00000065:
			Function_188(Global_34573, (*&Local_4 + 1112)[12], 0, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_279() //Position: 0x112B4 / 70324
{
	bool bVar0;
	
	bLocal_709 = CREATE_PROP_IN_LAYOUT(bLocal_478, "nFinalDoor", "p_gen_doorStone_cs01x", -4407.195f, 7.6413f, 4441.882f, 0.0f, 0.884f, 0.0f, 1);
	if (!IS_OBJECT_VALID(bLocal_709))
	{
		LOG_ERROR("CreateFinalDoor -- Final door unable to be created...");
	}
	else
	{
		bVar0 = GET_PHYSINST_FROM_OBJECT(bLocal_709);
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_TARGETABLE(bVar0, 0, 1);
		}
	}
	return;
}

void Function_280() //Position: 0x1135D / 70493
{
	Function_296();
	Function_295();
	Function_294();
	Function_293();
	Function_292();
	Function_283(Local_4.f_376, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_283(Local_4.f_400, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_283(Local_4.f_416, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_283(Local_4.f_432, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_281(Local_4.f_376, (*&Local_4 + 708)[1], 1, (*&Local_4 + 708)[9], 1);
	Function_281(Local_4.f_400, (*&Local_4 + 708)[2], 1, (*&Local_4 + 708)[9], 1);
	Function_281(Local_4.f_416, (*&Local_4 + 708)[5], 1, (*&Local_4 + 708)[9], 1);
	Function_281(Local_4.f_432, (*&Local_4 + 708)[4], 1, (*&Local_4 + 708)[9], 1);
	return;
}

void Function_281(bool bParam0, var uParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x11422 / 70690
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
			Function_282(bVar1, uParam1, iParam2, uParam3, 2);
			if (bParam4)
			{
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 3);
			}
		}
		bVar0++;
	}
}

void Function_282(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x1147A / 70778
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	TASK_CLEAR(bParam0);
	SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, bParam1, 1, iParam4);
	AI_AVOID_IGNORE_ACTOR(bParam0, Global_34573);
	AI_SET_NAV_SUBGRID_CELL_SIZE(bParam0, 0.5f);
	if (bParam2)
	{
		if (IS_VOLUME_VALID(bParam3))
		{
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam0, bParam3, 1, 1);
			SET_ACTOR_VOLUME_PARAMETERS(bParam0, 1, 1);
		}
	}
}

void Function_283(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x114CF / 70863
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Passed invalid squad, exiting...");
		PRINTNL();
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_284(bVar1, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else
		{
			PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Invalid member in the squad..");
			PRINTNL();
		}
		bVar0++;
	}
}

void Function_284(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x11599 / 71065
{
	int iVar0;
	
	if (Function_291(bParam0) && !Function_290(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (bParam2 == 4294967294 && bParam3 == 4294967294)
	{
		if (bParam2 == 4294967295)
		{
			bParam2 = RAND_INT_RANGE(false, 4);
		}
		if (bParam3 == 4294967295)
		{
			bParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, bParam2, bParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_288(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_287(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_285(bParam0, iParam4, iParam5);
}

void Function_285(bool bParam0, bool bParam1, bool bParam2) //Position: 0x117FC / 71676
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_286(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

void Function_286(bool bParam0, int iParam1, bool bParam2) //Position: 0x118AE / 71854
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_59(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_80();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_59(), vVar3, Function_80());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_59(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_80();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_59(), vVar0, Function_80());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

void Function_287(bool bParam0) //Position: 0x11A5E / 72286
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

void Function_288(bool bParam0) //Position: 0x11A92 / 72338
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_289(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_289(var uParam0, bool bParam1) //Position: 0x11DF6 / 73206
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

bool Function_290(bool bParam0, int iParam1) //Position: 0x11E18 / 73240
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_291(bool bParam0) //Position: 0x11E5A / 73306
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_292() //Position: 0x11E7A / 73338
{
	(*&Local_4 + 436)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nS1_Bull_0", 1243, -4330.518f, 33.93618f, 4281.578f, 0.0f, 49.31692f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 436)[02], false);
	return;
}

void Function_293() //Position: 0x11EBE / 73406
{
	Local_4.f_432 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Wand_3"));
	(*&Local_4 + 420)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_3_1", 301, -4342.126f, 39.1862f, 4312.019f, 0.0f, 92.92538f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 420)[02], Local_4.f_432);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 420)[02], false);
	return;
}

void Function_294() //Position: 0x11F32 / 73522
{
	Local_4.f_416 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Wand_2"));
	(*&Local_4 + 404)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_2_1", 279, -4364.819f, 39.18619f, 4304.881f, 0.0f, 187.8941f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 404)[02], Local_4.f_416);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 404)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 404)[02], 19);
	return;
}

void Function_295() //Position: 0x11FB3 / 73651
{
	Local_4.f_400 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Wand_1"));
	(*&Local_4 + 380)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_1_0", 293, -4365.599f, 34.77072f, 4267.824f, 0.0f, 242.9447f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 380)[02], Local_4.f_400);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 380)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 380)[02], 19);
	(*&Local_4 + 380)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_1_1", 257, -4353.858f, 35.02679f, 4265.987f, 0.0f, 160.6753f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 380)[12], Local_4.f_400);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 380)[12], false);
	SET_ACTOR_FACTION((*&Local_4 + 380)[12], 19);
	return;
}

void Function_296() //Position: 0x12091 / 73873
{
	Local_4.f_376 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Wand_0"));
	(*&Local_4 + 356)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_0_0", 295, -4365.527f, 33.34626f, 4285.958f, 0.0f, -117.0553f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 356)[02], Local_4.f_376);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 356)[02], false);
	(*&Local_4 + 356)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Wand_0_1", 285, -4353.124f, 34.08927f, 4282.834f, 0.0f, 160.6753f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 356)[12], Local_4.f_376);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 356)[12], false);
	return;
}

void Function_297() //Position: 0x12155 / 74069
{
	vector3 vVar0;
	
	Function_298(Global_34573);
	vVar0 = { StackVal, StackVal, Function_298(Global_34573) };
	MEMORY_REPORT_POSITION(bLocal_694, Global_34573, &vVar0);
	SET_ANIM_SET_FOR_ACTOR(bLocal_694, "z_dlc_z_roar", 0);
	bLocal_753 = TASK_SEQUENCE_OPEN();
	if (!iLocal_926)
	{
		TASK_STAND_STILL(false, 0.4f, 0, 0);
	}
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar/bruiser/roar");
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_694, bLocal_753);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	TASK_PRIORITY_SET(bLocal_694, 1);
	return;
}

vector3 Function_298(bool bParam0) //Position: 0x121E1 / 74209
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_299() //Position: 0x121F2 / 74226
{
	bLocal_711 = CREATE_PROP_IN_LAYOUT(bLocal_478, "nBriefCase", "p_gen_suitCaseMask01x", -4344.566f, 42.904f, 4327.105f, 180.0f, 14.08f, 180.0f, 1);
	if (!IS_OBJECT_VALID(bLocal_711))
	{
		LOG_ERROR("CreateBriefCase -- Final door unable to be created...");
	}
	return;
}

void Function_300() //Position: 0x12289 / 74377
{
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "ptl_base", 1);
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(Global_34573, true) != 5)
	{
		ACTOR_SET_NEXT_WEAPON(Global_34573, 5);
	}
	if (ACTOR_HAS_WEAPON(Global_34573, 5))
	{
		ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 5, iLocal_926);
	}
	else
	{
		ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, iLocal_926);
	}
	RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	ACTOR_POP_NEXT_GAIT(Global_34573, 0, 0);
	return;
}

int Function_301() //Position: 0x122FF / 74495
{
	switch (bLocal_552)
	{
		case 0x00000063:
			if ((!Function_268() && !Function_262(&bLocal_486)) && Function_261())
			{
				iLocal_924 = 1;
				return 0;
			}
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			return 1;
			break;
		
		case 0x00000001:
			Function_162();
			Function_302();
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() != 4294967295)
			{
				Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			return 1;
			break;
		
		case 0x00000005:
			if (!iLocal_937)
			{
				CLEAR_ALL_CORPSES();
				iLocal_937 = 1;
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_163();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_302() //Position: 0x1238C / 74636
{
	if (IS_ACTOR_VALID(bLocal_694))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_694, (*&Local_4 + 692)[0]))
		{
			DESTROY_ACTOR(bLocal_694);
			Function_199((*&Local_4 + 1188)[0]);
			Function_303((*&Local_4 + 1188)[0]);
			bLocal_707 = CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_478, "ReyesCorpse", 1238, Function_199((*&Local_4 + 1188)[0]), Function_303((*&Local_4 + 1188)[0]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(bLocal_707, 10.0f, true, 1092616192);
		}
	}
	return;
}

vector3 Function_303(bool bParam0) //Position: 0x12407 / 74759
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

int Function_304() //Position: 0x1242E / 74798
{
	switch (bLocal_552)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				return 1;
			}
			if (Function_273() && Function_274())
			{
				Function_259();
				Function_321();
				Function_311(0);
				Function_308();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(-4347.43f, 42.032f, 4326.633f, 0, 0);
				return 1;
			}
			break;
		
		case 0x00000001:
			Function_305();
			CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_692);
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_305() //Position: 0x124AD / 74925
{
	Function_307();
	Function_306();
	Function_284((*&Local_4 + 324)[02], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_284((*&Local_4 + 340)[02], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	return;
}

void Function_306() //Position: 0x124E1 / 74977
{
	Local_4.f_352 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Low_Balc"));
	(*&Local_4 + 340)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "S1_Low_Balc_0", 239, -4354.963f, 40.53178f, 4316.993f, 0.0f, 90.52868f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 340)[02], Local_4.f_352);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 340)[02], false);
	TASK_STAND_STILL((*&Local_4 + 340)[02], -1.0f, 0, 0);
	return;
}

void Function_307() //Position: 0x12566 / 75110
{
	Local_4.f_336 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S1_Balc"));
	(*&Local_4 + 324)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nS1_Balc_0", 319, -4366.283f, 42.01784f, 4326.679f, 0.0f, -3.412766f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 324)[02], Local_4.f_336);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 324)[02], false);
	TASK_STAND_STILL((*&Local_4 + 324)[02], -1.0f, 0, 0);
	return;
}

void Function_308() //Position: 0x125E4 / 75236
{
	uLocal_951[0] = Function_310(Global_30685[0], "escalara", "villa01props01", 1);
	if (!IS_DOOR_CLOSED(uLocal_951[0]))
	{
		CLOSE_DOOR_FAST(uLocal_951[0]);
	}
	Function_309(uLocal_951[0], 1);
	uLocal_951[1] = Function_310(Global_30685[0], "escalara", "villa01props01", 2);
	if (!IS_DOOR_CLOSED(uLocal_951[1]))
	{
		CLOSE_DOOR_FAST(uLocal_951[1]);
	}
	Function_309(uLocal_951[1], 1);
	uLocal_951[3] = Function_310(Global_30685[0], "escalara", "villaWall04", 2);
	if (!IS_DOOR_CLOSED(uLocal_951[3]))
	{
		CLOSE_DOOR_FAST(uLocal_951[3]);
	}
	Function_309(uLocal_951[3], 1);
	uLocal_951[4] = Function_310(Global_30685[0], "escalara", "villaWall04", 1);
	if (!IS_DOOR_CLOSED(uLocal_951[4]))
	{
		CLOSE_DOOR_FAST(uLocal_951[4]);
	}
	Function_309(uLocal_951[4], 1);
	uLocal_951[6] = Function_310(Global_30685[0], "escalara", "villaWall02", 3);
	if (!IS_DOOR_CLOSED(uLocal_951[6]))
	{
		CLOSE_DOOR_FAST(uLocal_951[6]);
	}
	Function_309(uLocal_951[6], 1);
	uLocal_951[5] = Function_310(Global_30685[0], "escalara", "villaWall02", 4);
	if (!IS_DOOR_CLOSED(uLocal_951[5]))
	{
		CLOSE_DOOR_FAST(uLocal_951[5]);
	}
	Function_309(uLocal_951[5], 1);
	uLocal_951[2] = Function_310(Global_30685[0], "escalara", "villa01props01", 4);
	if (!IS_DOOR_CLOSED(uLocal_951[2]))
	{
		CLOSE_DOOR_FAST(uLocal_951[2]);
	}
	Function_309(uLocal_951[2], 1);
	uLocal_951[7] = Function_310(Global_30685[0], "escalara", "villaPost01props01", 3);
	if (!IS_DOOR_CLOSED(uLocal_951[7]))
	{
		CLOSE_DOOR_FAST(uLocal_951[7]);
	}
	Function_309(uLocal_951[7], 1);
	uLocal_951[8] = Function_310(Global_30685[0], "escalara", "villaPost01props01", 2);
	if (!IS_DOOR_CLOSED(uLocal_951[8]))
	{
		CLOSE_DOOR_FAST(uLocal_951[8]);
	}
	Function_309(uLocal_951[8], 1);
	return;
}

void Function_309(bool bParam0, bool bParam1) //Position: 0x12896 / 75926
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

var Function_310(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x128EA / 76010
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_89(iParam0))
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

void Function_311(bool bParam0) //Position: 0x12986 / 76166
{
	if (IS_ACTOR_VALID(bLocal_692))
	{
		return;
	}
	Function_320();
	bLocal_692 = (*&Local_4 + 312)[02];
	Function_313(&(Local_596[017]), bLocal_692, "Maiden", 0, 0x5f5e100, 1);
	RESET_ACTOR_GAITS(bLocal_692, 0);
	SET_CRIPPLE_ENABLE(bLocal_692, 0);
	SET_ACTOR_FACTION(bLocal_692, 20);
	TASK_PRIORITY_SET(bLocal_692, 1);
	TASK_STAND_STILL(bLocal_692, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(bLocal_692, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_692, 300.0f);
	SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_692, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_692, 0);
	AI_SET_NAV_ACTOR_WIDTH(bLocal_692, 0.5f);
	SET_ACTOR_PROOF(bLocal_692, 24);
	AI_IGNORE_ACTOR(bLocal_692);
	AI_SET_NAV_SUBGRID_CELL_SIZE(bLocal_692, 0.5f);
	LIMIT_BLOOD_ON_ACTOR(bLocal_692, 0);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_692, 1);
	SET_ACTOR_ALLOW_DISARM(bLocal_692, 0);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_692, false);
	SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bLocal_692, 1);
	SET_ACTOR_IS_COMPANION(bLocal_692, 1);
	SET_ACTOR_CUTSCENE_MODE(bLocal_692, 1);
	Function_312(bLocal_692, 0);
	if (bParam0)
	{
		GIVE_WEAPON_TO_ACTOR(bLocal_692, 33, 0, 1, 1);
		ACTOR_PUT_WEAPON_IN_HAND(bLocal_692, 33, 1);
		SET_ANIM_SET_FOR_ACTOR(bLocal_692, "DLC_torch_girl", 0);
	}
	return;
}

void Function_312(bool bParam0, bool bParam1) //Position: 0x12AA4 / 76452
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

int Function_313(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x12AC4 / 76484
{
	if (!Function_319(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_318(uParam0, uParam2))
	{
		return 0;
	}
	Function_317(uParam0, uParam3);
	uParam0->f_40 = 0;
	Function_314(uParam0, uParam4, uParam5);
	return 1;
}

void Function_314(var uParam0, int iParam1, int iParam2) //Position: 0x12B00 / 76544
{
	if (iParam1 != 100000000)
	{
		Function_316(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_315(uParam0, iParam2);
	}
	return;
}

void Function_315(int iParam0, bool bParam1) //Position: 0x12B23 / 76579
{
	iParam0->f_40 = 0;
	Function_316(iParam0, 2, bParam1);
	Function_316(iParam0, 4, bParam1);
	Function_316(iParam0, 8, bParam1);
	Function_316(iParam0, 16, bParam1);
	Function_316(iParam0, 32, bParam1);
	Function_316(iParam0, 64, bParam1);
	Function_316(iParam0, 128, bParam1);
	Function_316(iParam0, 256, bParam1);
	Function_316(iParam0, 512, bParam1);
	Function_316(iParam0, 1024, bParam1);
	return;
}

void Function_316(int iParam0, int iParam1, bool bParam2) //Position: 0x12B89 / 76681
{
	bool bVar0;
	
	Function_81(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_81(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_47(iParam0 + 40, bVar0);
	}
	else
	{
		Function_81(iParam0 + 40, bVar0);
	}
	return;
}

void Function_317(var uParam0, int iParam1) //Position: 0x12BC5 / 76741
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_318(int iParam0, bool bParam1) //Position: 0x12BD1 / 76753
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

bool Function_319(int iParam0, bool bParam1) //Position: 0x12C5A / 76890
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

void Function_320() //Position: 0x12DE6 / 77286
{
	(*&Local_4 + 312)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CompMaiden", 1274, -4336.917f, 42.08085f, 4329.415f, 0.0f, 79.29158f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 312)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 312)[02]);
	TASK_STAND_STILL((*&Local_4 + 312)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 312)[02], 20);
	return;
}

void Function_321() //Position: 0x12E51 / 77393
{
	Function_322();
	bLocal_694 = (*&Local_4 + 296)[02];
	DECOR_SET_BOOL(bLocal_694, "CanBeLasso", false);
	TASK_STAND_STILL(bLocal_694, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_694, 1);
	AI_BEHAVIOR_SET_ALLOW(bLocal_694, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_694, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bLocal_694, 0);
	bLocal_712 = CREATE_OBJECTSET_IN_LAYOUT("ReyesObjSet", bLocal_478, 4294967295, 0);
	DECOR_SET_OBJECT(bLocal_694, "ReturnCorpse", bLocal_712);
	return;
}

void Function_322() //Position: 0x12ED2 / 77522
{
	Local_4.f_308 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_Reyes"));
	(*&Local_4 + 296)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Reyes", 1238, -4347.43f, 42.03176f, 4326.633f, 0.0f, 216.8481f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 296)[02], Local_4.f_308);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 296)[02], false);
	TASK_STAND_STILL((*&Local_4 + 296)[02], -1.0f, 0, 0);
	return;
}

int Function_323() //Position: 0x12F4A / 77642
{
	iLocal_926 = 0;
	switch (bLocal_552)
	{
		case 0x00000063:
			Function_326(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			bLocal_950 = CREATE_VOLUME_IN_LAYOUT(bLocal_478, "nintro_vol", 2, -4357.865f, 42.018f, 4346.34f, 0.0f, 0.0f, 0.0f, 47.16f, 27.748f, 34.94f);
			Function_324(StackVal, StackVal, bLocal_478, *(&Global_3422[340] + 52), &bLocal_950, 1, 0, 0, 0, 1, 1);
			Function_328(&uLocal_669, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000001:
			Function_326(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			TASK_CLEAR(bLocal_692);
			TASK_STAND_STILL(bLocal_692, -1.0f, 0, 0);
			Function_328(&uLocal_669, 0, 0, 4294967295, 4294967295);
			CLEAR_DECALS();
			return 1;
			break;
		
		case 0x00000065:
			Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_692);
			return 1;
			break;
		
		default:
			Function_326(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_324(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x13036 / 77878
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = uParam6;
	vVar2.y = uParam7;
	vVar2.z = uParam8;
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
				Function_325(bVar1, bParam0);
			}
		}
		if (!Function_78(StackVal, StackVal, vVar2))
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

void Function_325(bool bParam0, bool bParam1) //Position: 0x132A4 / 78500
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

void Function_326(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x13319 / 78617
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
	Function_203();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_55();
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
			if (Function_45())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
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
				Function_298(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_59(), 2, Function_298(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_92(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_327()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_327()));
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
	if (Function_264(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x4000000);
	}
	if (Function_264(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x8000000);
	}
}

var Function_327() //Position: 0x135C7 / 79303
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

void Function_328(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x13646 / 79430
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_329(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_329(int iParam0) //Position: 0x1366A / 79466
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

bool Function_330(int iParam0) //Position: 0x13BBD / 80829
{
	if (!Function_89(iParam0))
	{
		return 1;
	}
	return Function_135(&(Global_29008[iParam0]), 4);
}

void Function_331(int iParam0, int iParam1) //Position: 0x13BD9 / 80857
{
	Function_182(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_332(StackVal, iParam1);
	}
	return;
}

void Function_332(int iParam0, int iParam1) //Position: 0x13C0A / 80906
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_182(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_180(iParam0, iVar0, iParam1);
	return;
}

void Function_333(bool bParam0) //Position: 0x13C2F / 80943
{
	Function_334(0, 0x40400000);
	Function_154();
	Function_153();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_334(bool bParam0, float fParam1) //Position: 0x13C63 / 80995
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_336();
	Function_335();
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

void Function_335() //Position: 0x13D61 / 81249
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_336() //Position: 0x13D93 / 81299
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

void Function_337() //Position: 0x13E90 / 81552
{
	if (iLocal_553 < 3 && iLocal_553 > 105)
	{
		Function_199((*&Local_4 + 1112)[10]);
		Function_404(StackVal, StackVal, "$/cutscene/escalera_2_pt_f_cs/escalera_2_pt_f_cs", &uLocal_961, Function_199((*&Local_4 + 1112)[10]), 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			if (iLocal_653[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_398();
				Function_331(16, 1);
				Function_395();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(Global_34573, (*&Local_4 + 1112)[10], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_394()) && Function_393())
			{
				Function_311(1);
				Function_308();
				Function_199((*&Local_4 + 1744)[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199((*&Local_4 + 1744)[0]), 0.0f, 0, 1, 1, 0);
				Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
				Function_253(&iLocal_888);
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000002:
			Function_388();
			Function_387();
			Function_253(&iLocal_891);
			Function_385();
			if (Function_383(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_479, 5))
			{
				Function_253(&iLocal_888);
				iLocal_553 = 3;
			}
			else
			{
				Function_188(Global_34573, (*&Local_4 + 1112)[10], 1, 1, 1);
				Function_188(bLocal_692, (*&Local_4 + 1112)[11], 1, 1, 1);
				Function_279();
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/escalera_2_pt_e_cs/escalera_2_pt_e_cs", &iLocal_545, &Local_479, &bLocal_552, 77642, 74798, 74495, 70031, 69578, 45512, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_552);
			Function_375(StackVal, StackVal, Function_198(bLocal_552), bLocal_552, Global_30685[0], Function_201(bLocal_552), 0);
			Function_245(1.0f);
			Function_371();
			Function_328(&uLocal_669, 40, 0, 4294967295, 4294967295);
			STREAMING_UNLOAD_BOUNDS();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			Function_369(bLocal_884, 4294967295);
			if (!HUD_IS_FADING())
			{
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_338())
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[5] = 1;
				Function_170();
				bLocal_552 = 101;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_338() //Position: 0x14147 / 82247
{
	Function_366();
	switch (iLocal_678)
	{
		case 0x00000000:
			Function_27("Zomb03_DefeatUndeadObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_365((*&Local_4 + 1176)[0]);
			Function_364();
			iLocal_679 = 13;
			Function_363(&iLocal_909);
			iLocal_678 = 1;
			break;
		
		case 0x00000001:
			if (Function_346())
			{
				Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
				Function_253(&iLocal_888);
				iLocal_678 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_248(&iLocal_888) <= 2.0f)
			{
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[0]))
				{
					iLocal_679 = 14;
					Function_345();
					ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
					Function_253(&iLocal_888);
					iLocal_678 = 3;
				}
				else
				{
					HUD_CLEAR_OBJECTIVE();
					Function_253(&iLocal_888);
					iLocal_678 = 5;
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_27("Zomb03_GoToAltarObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_253(&iLocal_888);
				iLocal_678 = 5;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[0]))
			{
				iLocal_678 = 5;
				return 0;
			}
			Function_339();
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[0]))
			{
				Function_365((*&Local_4 + 1176)[0]);
				return 1;
			}
			Function_339();
			break;
	}
	return 0;
}

void Function_339() //Position: 0x142E1 / 82657
{
	if (!Function_250(&iLocal_909))
	{
		Function_344(&iLocal_909, 14.0f);
	}
	else if (Function_248(&iLocal_909) <= 20.0f)
	{
		Function_199((*&Local_4 + 1744)[2]);
		Function_298(bLocal_692);
		if (Function_84(StackVal, StackVal, StackVal, StackVal, Function_199((*&Local_4 + 1744)[2]), Function_298(bLocal_692)) >= 2.0f)
		{
			if (SET_ANIM_SET_FOR_ACTOR(bLocal_692, "one_handed_wave", 1))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 940)[6]))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_935)
						{
							Function_340();
							iLocal_935 = 1;
						}
						SET_ACTOR_FACE_STYLE(bLocal_692, 2);
						TASK_CLEAR(bLocal_692);
						bLocal_753 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
						TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_692, bLocal_753);
						TASK_SEQUENCE_RELEASE(bLocal_753, 1);
						Function_253(&iLocal_909);
					}
				}
			}
		}
	}
	return;
}

void Function_340() //Position: 0x143CA / 82890
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_WaitJonTrigs", "Z03_WaitJonTrigs", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_341(int iParam0) //Position: 0x14413 / 82963
{
	Function_342(0, Global_34573, iParam0, 0);
	Function_342(1, bLocal_692, iParam0, 0);
	return;
}

void Function_342(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1442D / 82989
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_14(uParam2, Function_343(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_343(bool bParam0) //Position: 0x14452 / 83026
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_344(int iParam0, float fParam1) //Position: 0x1445E / 83038
{
	if (!Function_250(iParam0))
	{
		Function_254(iParam0, fParam1);
	}
	return;
}

void Function_345() //Position: 0x14474 / 83060
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_AllZombsKild", "Z03_AllZombsKild", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_346() //Position: 0x144BD / 83133
{
	Function_369(bLocal_884, 4294967295);
	Function_362();
	switch (iLocal_754)
	{
		case 0x00000000:
			if (!Function_250(&iLocal_909))
			{
				Function_344(&iLocal_909, 14.0f);
			}
			else if (Function_248(&iLocal_909) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_361();
					Function_253(&iLocal_909);
				}
			}
			if (Function_248(&iLocal_891) <= 2.5f)
			{
				if (Function_360(bLocal_884) <= 3)
				{
					if (iLocal_755 <= 4)
					{
						Function_253(&iLocal_891);
						Function_351(1);
					}
				}
			}
			if (iLocal_755 > 4)
			{
				Function_253(&iLocal_891);
				iLocal_754 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_250(&iLocal_909))
			{
				Function_344(&iLocal_909, 14.0f);
			}
			else if (Function_248(&iLocal_909) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_361();
					Function_253(&iLocal_909);
				}
			}
			if (Function_360(bLocal_884) >= 0)
			{
				Function_253(&iLocal_891);
			}
			if (Function_248(&iLocal_891) <= 2.0f)
			{
				Function_328(&uLocal_669, 34, 0, 4294967295, 4294967295);
				Function_347();
				iLocal_754 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_248(&iLocal_891) <= 10.0f)
			{
				Function_328(&uLocal_669, 40, 0, 4294967295, 4294967295);
				iLocal_755 = 5;
				Function_351(1);
				Function_351(1);
				Function_351(1);
				Function_351(1);
				Function_253(&iLocal_891);
				iLocal_754 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_250(&iLocal_909))
			{
				Function_344(&iLocal_909, 14.0f);
			}
			else if (Function_248(&iLocal_909) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_361();
					Function_253(&iLocal_909);
				}
			}
			if (Function_248(&iLocal_891) <= 1.75f)
			{
				if (Function_360(bLocal_884) <= 4)
				{
					Function_253(&iLocal_891);
					Function_351(1);
				}
			}
			if (!iLocal_941)
			{
				if (iLocal_755 > 7)
				{
					SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
					iLocal_941 = 1;
				}
			}
			if (iLocal_755 > 11)
			{
				if (Function_360(bLocal_884) < 0)
				{
					Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_347() //Position: 0x146B9 / 83641
{
	if ((Function_350() % 2) == 1)
	{
		Function_349();
	}
	else
	{
		Function_348();
	}
	return;
}

void Function_348() //Position: 0x146D1 / 83665
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_FinalRoomBantWave1_v2_AA", "Z03_FinalRoomBantWave1_v2_AA", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_FinalRoomBantWave1_v2_AB", "Z03_FinalRoomBantWave1_v2_AB", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_349() //Position: 0x14779 / 83833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_FinalRoomBantWave1_v1_AA", "Z03_FinalRoomBantWave1_v1_AA", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_FinalRoomBantWave1_v1_AB", "Z03_FinalRoomBantWave1_v1_AB", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_350() //Position: 0x14821 / 84001
{
	return Global_34165.f_60;
}

void Function_351(bool bParam0) //Position: 0x1482C / 84012
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_755 <= 11)
	{
		bVar0 = Function_358();
		if (bVar0 == "")
		{
			Function_254(&iLocal_891, 99.0f);
			return;
		}
		switch (iLocal_680[iLocal_755])
		{
			case 0x00000000:
				bVar1 = Function_356(bVar0, Function_59(), 1, 0, 4294967295);
				break;
			
			case 0x00000001:
				bVar1 = Function_355(bVar0, Function_59(), 1, 0, 4294967295);
				break;
			
			case 0x00000002:
				bVar1 = Function_354(bVar0, Function_59(), 1, 0, 4294967295);
				break;
			
			case 0x00000003:
				bVar1 = Function_353(bVar0, Function_59(), 1, 0, 4294967295);
				break;
		}
		if (iLocal_680[iLocal_755] == 2)
		{
			TASK_GO_NEAR_ACTOR(bVar1, Global_34573, 7.0f, 2);
		}
		else
		{
			TASK_MELEE_ATTACK(bVar1, Global_34573, -1.0f);
		}
		TASK_PRIORITY_SET(bVar1, 1);
		SQUAD_JOIN(bVar1, bLocal_884);
		Function_286(bVar1, 4294967295, 0);
		ADD_BLIP_FOR_ACTOR(bVar1, 322, 0, 2, 0);
		Function_352(bVar1);
		if (bParam0)
		{
			iLocal_755++;
		}
	}
	return;
}

void Function_352(bool bParam0) //Position: 0x1490C / 84236
{
	bool bVar0;
	
	bParam0 = bParam0;
	if (!IS_ACTOR_VALID(bParam0))
	{
	}
	else
	{
		SET_ACTOR_FACTION(bParam0, 32);
		AI_BEHAVIOR_SET_ALLOW(bParam0, 0, 0);
	}
	if (!DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
	{
		bVar0 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_59(), "script_zombie_eyelight", "eyePivot_l", bParam0, 0.0f, 0.0f, 0.0f, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
			DECOR_SET_OBJECT(bParam0, "oLeftEyeGlow", bVar0);
		}
	}
	if (!DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
	{
		bVar0 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_59(), "script_zombie_eyelight_r", "eyePivot_r", bParam0, 0.0f, 0.0f, 0.0f, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			UNK_0x6745191B(bVar0, 0.0f, 0.0f, 0.0f);
			DECOR_SET_OBJECT(bParam0, "oRightEyeGlow", bVar0);
		}
	}
	return;
}

bool Function_353(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x14A24 / 84516
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (iParam4 == 4294967295)
	{
		bVar5 = iLocal_766[RAND_INT_RANGE(false, (iLocal_766 - 1))];
	}
	else
	{
		bVar5 = iParam4;
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar0 = GET_OBJECT_HEADING(bParam0);
	bVar4 = CREATE_ACTOR_IN_LAYOUT(Local_4, bParam1, bVar5, vVar1, 0.0f, bVar0, 0.0f);
	if (bParam2 == 1)
	{
		Function_285(bVar4, bParam2, bParam3);
	}
	return bVar4;
}

bool Function_354(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x14A7C / 84604
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (iParam4 == 4294967295)
	{
		bVar5 = iLocal_772[RAND_INT_RANGE(false, (iLocal_772 - 1))];
	}
	else
	{
		bVar5 = iParam4;
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar0 = GET_OBJECT_HEADING(bParam0);
	bVar4 = CREATE_ACTOR_IN_LAYOUT(Local_4, bParam1, bVar5, vVar1, 0.0f, bVar0, 0.0f);
	if (bParam2 == 1)
	{
		Function_285(bVar4, bParam2, bParam3);
	}
	return bVar4;
}

bool Function_355(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x14AD4 / 84692
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (iParam4 == 4294967295)
	{
		bVar5 = iLocal_760[RAND_INT_RANGE(false, (iLocal_760 - 1))];
	}
	else
	{
		bVar5 = iParam4;
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar0 = GET_OBJECT_HEADING(bParam0);
	bVar4 = CREATE_ACTOR_IN_LAYOUT(Local_4, bParam1, bVar5, vVar1, 0.0f, bVar0, 0.0f);
	if (bParam2 == 1)
	{
		Function_285(bVar4, bParam2, bParam3);
	}
	return bVar4;
}

bool Function_356(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14B2C / 84780
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (iParam2 == 1)
	{
		bVar5 = Function_357();
	}
	else if (iParam4 == 4294967295)
	{
		bVar5 = iLocal_778[RAND_INT_RANGE(false, (iLocal_778 - 1))];
	}
	else
	{
		bVar5 = iParam4;
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar0 = GET_OBJECT_HEADING(bParam0);
	bVar4 = CREATE_ACTOR_IN_LAYOUT(Local_4, bParam1, bVar5, vVar1, 0.0f, bVar0, 0.0f);
	Function_284(bVar4, 1254, 4294967295, 4294967295, iParam2, iParam3, 1, 1);
	CLEAR_ACTOR_PROOF(bVar4, 16);
	return bVar4;
}

var Function_357() //Position: 0x14B9A / 84890
{
	int iVar0;
	
	iVar0 = 1252;
	switch (RAND_INT_RANGE(false, 2))
	{
		case 0x00000000:
			iVar0 = 1253;
			break;
		
		case 0x00000001:
			iVar0 = 1252;
			break;
		
		case 0x00000002:
			iVar0 = 1253;
			break;
	}
	return iVar0;
}

var Function_358() //Position: 0x14BDB / 84955
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[1]))
	{
		iVar0 = 0;
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[4]))
	{
		iVar0 = 1;
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[2]))
	{
		iVar0 = 2;
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 988)[3]))
	{
		iVar0 = 3;
	}
	bLocal_756 = RAND_INT_RANGE_DIFFERENT(iLocal_756, false, 8);
	switch (iVar0)
	{
		case 0x00000000:
			bVar1 = (*&Local_4 + 1772)[iLocal_713[bLocal_756]];
			break;
		
		case 0x00000001:
			bVar1 = (*&Local_4 + 1772)[iLocal_723[bLocal_756]];
			break;
		
		case 0x00000002:
			bVar1 = (*&Local_4 + 1772)[iLocal_743[bLocal_756]];
			break;
		
		case 0x00000003:
			bVar1 = (*&Local_4 + 1772)[iLocal_733[bLocal_756]];
			break;
	}
	Function_199(bVar1);
	Function_303(bVar1);
	bVar5 = CREATE_VOLUME_IN_LAYOUT(bLocal_478, "nSpawnTest", 2, Function_199(bVar1), Function_303(bVar1), 5.0f, 15.0f, 5.0f);
	if (Function_359(bLocal_884, bVar5, 0) < 0 || IS_ACTOR_IN_VOLUME(Global_34573, bVar5))
	{
		DESTROY_VOLUME(bVar5);
		return "";
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
		DESTROY_VOLUME(bVar5);
		return "";
	}
	Function_199(bVar1);
	vVar2 = { StackVal, StackVal, Function_199(bVar1) };
	DESTROY_VOLUME(bVar5);
	return bVar1;
}

int Function_359(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14D1E / 85278
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (bParam2)
			{
				if (!IS_ACTOR_HOGTIED(bVar2))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_360(bool bParam0) //Position: 0x14D82 / 85378
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_361() //Position: 0x14DD2 / 85458
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "nZ03_Shock", "nZ03_Shock", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362() //Position: 0x14E0D / 85517
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bLocal_884))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bLocal_884))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_884, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(bVar1, (*&Local_4 + 940)[6]))
				{
					KILL_ACTOR(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_363(int iParam0) //Position: 0x14E5B / 85595
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_364() //Position: 0x14E6F / 85615
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ZombsRise", "Z03_ZombsRise", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_365(bool bParam0) //Position: 0x14EB2 / 85682
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

void Function_366() //Position: 0x14EDE / 85726
{
	vector3 vVar0;
	
	Function_368();
	switch (iLocal_679)
	{
		case 0x0000000D:
			Function_199((*&Local_4 + 1744)[1]);
			vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1744)[1]) };
			bLocal_753 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(false, &vVar0, 0);
			TASK_GO_NEAR_COORD(false, &vVar0, 0.5f, 2);
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_692);
			TASK_SEQUENCE_PERFORM(bLocal_692, bLocal_753);
			TASK_SEQUENCE_RELEASE(bLocal_753, 1);
			iLocal_679 = 15;
			break;
		
		case 0x0000000F:
			Function_367(0x420c0000, 0x425c0000);
			break;
		
		case 0x0000000E:
			Function_199((*&Local_4 + 1744)[2]);
			vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1744)[2]) };
			bLocal_753 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(false, &vVar0, 0);
			TASK_GO_NEAR_COORD(false, &vVar0, 0.5f, 1);
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_692);
			TASK_SEQUENCE_PERFORM(bLocal_692, bLocal_753);
			TASK_SEQUENCE_RELEASE(bLocal_753, 1);
			iLocal_679 = 15;
			break;
	}
	return;
}

void Function_367(int iParam0, int iParam1) //Position: 0x14FBD / 85949
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	vLocal_885 = { StackVal, StackVal, vLocal_885 };
	return;
}

void Function_368() //Position: 0x14FD5 / 85973
{
	if ((!ACTOR_HAS_WEAPON(bLocal_692, 33) || !IS_WEAPON_DRAWN(bLocal_692)) || GET_WEAPON_IN_HAND(bLocal_692) == 33)
	{
		if (!ACTOR_HAS_ANIM_SET(bLocal_692, "DLC_torch_girl"))
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_692, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_692, "DLC_torch_girl", 0);
		}
		if (!ACTOR_HAS_WEAPON(bLocal_692, 33))
		{
			GIVE_WEAPON_TO_ACTOR(bLocal_692, 33, 0, 1, 1);
		}
		ACTOR_PUT_WEAPON_IN_HAND(bLocal_692, 33, 1);
	}
	return;
}

void Function_369(bool bParam0, int iParam1) //Position: 0x15055 / 86101
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "bCanWakeUp"))
		{
			return;
		}
		iVar1 = SQUAD_GET_SIZE(bParam0);
		if (iVar1 >= 0)
		{
			if (!DECOR_CHECK_EXIST(bParam0, "fStartWake"))
			{
				DECOR_SET_FLOAT(bParam0, "fStartWake", GET_CURRENT_GAME_TIME());
			}
			bVar0 = false;
			while (bVar0 <= iVar1)
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (DECOR_CHECK_EXIST(bVar2, "fWakeUpTime"))
					{
						if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar2, "fWakeUpTime") + DECOR_GET_FLOAT(bParam0, "fStartWake")))
						{
							if (Function_370(bVar2))
							{
								Function_187(bVar2, 0);
							}
							else if (DECOR_CHECK_EXIST(bVar2, "WakeUpFast"))
							{
								Function_286(bVar2, iParam1, 1);
							}
							else
							{
								Function_286(bVar2, iParam1, 0);
							}
							DECOR_REMOVE(bVar2, "fWakeUpTime");
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

bool Function_370(bool bParam0) //Position: 0x15167 / 86375
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, "bIsWallZomb"))
	{
		return 1;
	}
	return 0;
}

void Function_371() //Position: 0x15191 / 86417
{
	if (SQUAD_IS_VALID(bLocal_884))
	{
		DECOR_SET_BOOL(bLocal_884, "bCanWakeUp", true);
	}
	Function_374(bLocal_884);
	Function_373(bLocal_884, Global_34573, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_884, 0, 2, 4294967295);
	TASK_GO_NEAR_ACTOR(false, Global_34573, 5.0f, 1);
	Function_372(bLocal_884, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_372(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x151F1 / 86513
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

void Function_373(bool bParam0, bool bParam1, bool bParam2) //Position: 0x152DB / 86747
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
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
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

void Function_374(bool bParam0) //Position: 0x15346 / 86854
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

void Function_375(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x15378 / 86904
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
	if (iParam3 != Global_34165.f_48 && !Function_382())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_381(0);
	Function_380();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_98())
	{
		Function_378(iParam3);
	}
	Function_377(uParam4, iVar0, iVar1);
	Function_376();
}

void Function_376() //Position: 0x15420 / 87072
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

void Function_377(int iParam0, bool bParam1, bool bParam2) //Position: 0x15461 / 87137
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
	if (Function_89(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_378(bool bParam0) //Position: 0x155C7 / 87495
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_379() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

struct<16> Function_379() //Position: 0x15755 / 87893
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (IS_SCRIPT_VALID(Global_3422[iVar040].f_108))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar040] + 12) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_380() //Position: 0x1579A / 87962
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_381(bool bParam0) //Position: 0x157BE / 87998
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

bool Function_382() //Position: 0x157ED / 88045
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x15808 / 88072
{
	if (Function_384(&iParam0) == iParam7 || Function_382())
	{
		return 1;
	}
	return 0;
}

int Function_384(int iParam0) //Position: 0x15827 / 88103
{
	if (Function_255(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_385() //Position: 0x1583F / 88127
{
	Function_386(bLocal_478, 8, (*&Local_4 + 1744)[3], 0, 3, 0, 1, 3212836864);
	Function_386(bLocal_478, 18, (*&Local_4 + 1744)[4], 0, 4, 0, 1, 3212836864);
	return;
}

var Function_386(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, float fParam7) //Position: 0x15879 / 88185
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	GET_OBJECT_POSITION(bParam2, &uVar4);
	bVar0 = CREATE_WEAPON_PICKUP(bParam0, iParam1, &uVar4, 0.0f, fParam5, iParam6, fParam7);
	GET_OBJECT_POSITION(bParam2, &vVar7);
	GET_OBJECT_ORIENTATION(bParam2, &vVar10);
	SET_OBJECT_POSITION(bVar0, vVar7);
	SET_OBJECT_ORIENTATION(bVar0, vVar10);
	if (bParam3)
	{
		vVar1 = { 0.0f, -0.001f, 0.0f };
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bVar0), &vVar1);
	}
	DECOR_SET_INT(bVar0, "NumClips", bParam4);
	return bVar0;
}

void Function_387() //Position: 0x158F7 / 88311
{
	iLocal_680[0] = 0;
	iLocal_680[1] = 2;
	iLocal_680[2] = 0;
	iLocal_680[3] = 3;
	iLocal_680[4] = 0;
	iLocal_680[5] = 0;
	iLocal_680[6] = 2;
	iLocal_680[7] = 0;
	iLocal_680[8] = 2;
	iLocal_680[9] = 0;
	iLocal_680[10] = 3;
	iLocal_713[0] = 3;
	iLocal_713[1] = 4;
	iLocal_713[2] = 5;
	iLocal_713[3] = 6;
	iLocal_713[4] = 7;
	iLocal_713[5] = 8;
	iLocal_713[6] = 9;
	iLocal_713[7] = 10;
	iLocal_713[8] = 11;
	iLocal_723[0] = 0;
	iLocal_723[1] = 1;
	iLocal_723[2] = 2;
	iLocal_723[3] = 6;
	iLocal_723[4] = 7;
	iLocal_723[5] = 8;
	iLocal_723[6] = 9;
	iLocal_723[7] = 10;
	iLocal_723[8] = 11;
	iLocal_743[0] = 0;
	iLocal_743[1] = 1;
	iLocal_743[2] = 2;
	iLocal_743[3] = 3;
	iLocal_743[4] = 4;
	iLocal_743[5] = 5;
	iLocal_743[6] = 9;
	iLocal_743[7] = 10;
	iLocal_743[8] = 11;
	iLocal_733[0] = 0;
	iLocal_733[1] = 1;
	iLocal_733[2] = 2;
	iLocal_733[3] = 3;
	iLocal_733[4] = 4;
	iLocal_733[5] = 5;
	iLocal_733[6] = 6;
	iLocal_733[7] = 7;
	iLocal_733[8] = 8;
	return;
}

void Function_388() //Position: 0x15A55 / 88661
{
	Function_392();
	Function_390();
	Function_389(bLocal_884);
	return;
}

void Function_389(bool bParam0) //Position: 0x15A67 / 88679
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_352(bVar1);
					SET_ACTOR_FACTION(bVar1, 32);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_390() //Position: 0x15AB1 / 88753
{
	bool bVar0;
	
	bVar0 = Function_354((*&Local_4 + 1716)[1], Function_59(), 1, 0, 1223);
	SQUAD_JOIN(bVar0, bLocal_884);
	Function_391(bVar0, 1.2f, 1.2f);
	TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar0, Global_34573, 3.5f, 2);
	bVar0 = Function_354((*&Local_4 + 1716)[2], Function_59(), 1, 0, 1226);
	SQUAD_JOIN(bVar0, bLocal_884);
	Function_391(bVar0, 2.5f, 2.5f);
	TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar0, Global_34573, 3.5f, 2);
	bVar0 = Function_356((*&Local_4 + 1716)[3], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_884);
	Function_391(bVar0, 1.2f, 1.2f);
	bVar0 = Function_356((*&Local_4 + 1716)[4], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_884);
	Function_391(bVar0, 2.2f, 2.2f);
	return;
}

void Function_391(bool bParam0, float fParam1, bool bParam2) //Position: 0x15B7F / 88959
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "fWakeUpTime"))
		{
			bVar0 = RAND_FLOAT_RANGE(fParam1, bParam2);
			DECOR_SET_FLOAT(bParam0, "fWakeUpTime", bVar0);
		}
	}
	return;
}

void Function_392() //Position: 0x15BC6 / 89030
{
	bLocal_703 = Function_353((*&Local_4 + 1716)[0], Function_59(), 1, 0, 1215);
	SQUAD_JOIN(bLocal_703, bLocal_884);
	Function_391(bLocal_703, 0.0f, 0.1f);
	return;
}

int Function_393() //Position: 0x15BF7 / 89079
{
	Function_271(&Local_4 + 264, 1215, 2, 0);
	if (Function_262(&Local_4 + 264))
	{
		return 1;
	}
	return 0;
}

int Function_394() //Position: 0x15C19 / 89113
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_760 - 1))
	{
		Function_271(&bLocal_791, iLocal_760[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_766 - 1))
	{
		Function_271(&bLocal_791, iLocal_766[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_772 - 1))
	{
		Function_271(&bLocal_791, iLocal_772[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_778 - 1))
	{
		Function_271(&bLocal_791, iLocal_778[iVar0], 2, 0);
		iVar0++;
	}
	if (Function_262(&bLocal_791))
	{
		return 1;
	}
	return 0;
}

void Function_395() //Position: 0x15CC6 / 89286
{
	switch (bLocal_552)
	{
		case 0x00000000:
			Function_142(0x4000000);
			Function_126(114703);
			Function_396(1);
			break;
		
		default:
			Function_142(0x4000000);
			Function_126(114696);
			Function_396(1);
			break;
	}
	return;
}

void Function_396(int iParam0) //Position: 0x15D06 / 89350
{
	Function_397(&Global_28842, iParam0);
	return;
}

void Function_397(var uParam0, var uParam1) //Position: 0x15D14 / 89364
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_398() //Position: 0x15D37 / 89399
{
	Function_399();
	return;
}

void Function_399() //Position: 0x15D40 / 89408
{
	iLocal_778[0] = 379;
	iLocal_778[1] = 380;
	iLocal_778[2] = 391;
	iLocal_778[3] = 392;
	iLocal_778[4] = 383;
	iLocal_778[5] = 1252;
	iLocal_778[6] = 1253;
	iLocal_778[7] = 1252;
	iLocal_778[8] = 1253;
	iLocal_778[9] = 388;
	iLocal_778[10] = 389;
	iLocal_778[11] = 393;
	iLocal_760[0] = 1211;
	iLocal_760[1] = 1208;
	iLocal_760[2] = 1210;
	iLocal_760[3] = 1205;
	iLocal_760[4] = 1204;
	iLocal_766[0] = 1217;
	iLocal_766[1] = 1218;
	iLocal_766[2] = 1215;
	iLocal_766[3] = 1216;
	iLocal_766[4] = 1219;
	iLocal_772[0] = 1222;
	iLocal_772[1] = 1223;
	iLocal_772[2] = 1225;
	iLocal_772[3] = 1226;
	iLocal_772[4] = 1227;
	return;
}

void Function_400() //Position: 0x15E3D / 89661
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_612))
	{
		Function_193("Zomb03_AbandonCat_S1");
		Function_197(bLocal_552);
		Function_189(StackVal, StackVal, 5, &bLocal_665, &bLocal_552, Function_200(bLocal_552), Function_197(bLocal_552), 0);
	}
	return;
}

void Function_401() //Position: 0x15E82 / 89730
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_688))
	{
		if (bLocal_925)
		{
			Function_229(1, 0);
		}
		Function_161(0);
	}
	else
	{
		if (!bLocal_925)
		{
			Function_230(1, 0);
		}
		Function_161(1);
	}
	Function_402();
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1088))
	{
		if (!iLocal_942)
		{
			uLocal_962 = "";
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_FIRE_DOWN", &uLocal_962);
			iLocal_942 = 1;
		}
	}
	else if (iLocal_942)
	{
		DYNAMICMIXER_DETRIGGERSTATE(uLocal_962, 0);
		iLocal_942 = 0;
	}
	if (iLocal_928)
	{
		if (((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[0]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[2])) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[3])) && ((IS_ACTOR_IN_VOLUME(bLocal_692, (*&Local_4 + 616)[0]) || IS_ACTOR_IN_VOLUME(bLocal_692, (*&Local_4 + 616)[2])) || IS_ACTOR_IN_VOLUME(bLocal_692, (*&Local_4 + 616)[3])))
		{
			DISABLE_CHILD_SECTOR("esc_villa01x");
			DISABLE_CHILD_SECTOR("esc_villaPatio01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPatio01x");
			DISABLE_CHILD_SECTOR("esc_villa01props01x");
			DISABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
			DISABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
			DISABLE_CHILD_SECTOR("esc_villaWall01x");
			DISABLE_CHILD_SECTOR("esc_villaWall02x");
			DISABLE_CHILD_SECTOR("esc_villaWall03x");
			DISABLE_CHILD_SECTOR("esc_villaWall04x");
			DISABLE_CHILD_SECTOR("esc_villaWall01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost01x");
			DISABLE_CHILD_SECTOR("esc_villaPost01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost02x");
			DISABLE_CHILD_SECTOR("esc_villaPost02props01x");
			iLocal_928 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 616)[1]))
	{
		ENABLE_CHILD_SECTOR("esc_villa01x");
		ENABLE_CHILD_SECTOR("esc_villaPatio01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPatio01x");
		ENABLE_CHILD_SECTOR("esc_villa01props01x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
		ENABLE_CHILD_SECTOR("esc_villaWall01x");
		ENABLE_CHILD_SECTOR("esc_villaWall02x");
		ENABLE_CHILD_SECTOR("esc_villaWall03x");
		ENABLE_CHILD_SECTOR("esc_villaWall04x");
		ENABLE_CHILD_SECTOR("esc_villaWall01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPost01x");
		ENABLE_CHILD_SECTOR("esc_villaPost01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPost02x");
		ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
		iLocal_928 = 1;
	}
	return;
}

void Function_402() //Position: 0x1627A / 90746
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1044))
	{
		if (!bLocal_940)
		{
			Function_403(16, 0, 1, 30, 1);
			bLocal_940 = true;
		}
		else if (GET_WEATHER() != 16)
		{
			Function_403(16, 0, 1, 30, 1);
		}
	}
	else if (bLocal_940)
	{
		Function_179(0, 1, 30);
		bLocal_940 = false;
	}
	return;
}

void Function_403(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x162CC / 90828
{
	int iVar0;
	bool bVar1;
	
	Function_182(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_332(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_180(StackVal, bVar1, bParam4);
		}
	}
}

int Function_404(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x1633E / 90942
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_407(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_409()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
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
				if (!Function_78(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
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
					Function_405();
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
	else if ((!Function_407(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_409()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_407(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_405() //Position: 0x16584 / 91524
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_406(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

void Function_406(char* cParam0, vector3 vParam1) //Position: 0x165D8 / 91608
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

bool Function_407(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x16700 / 91904
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_408(bParam0);
		if (VDIST(Function_408(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_408(bool bParam0) //Position: 0x1678A / 92042
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

int Function_409() //Position: 0x167F4 / 92148
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_410() //Position: 0x16803 / 92163
{
	if (iLocal_553 < 3 && iLocal_553 > 105)
	{
		Function_199((*&Local_4 + 1112)[10]);
		Function_404(StackVal, StackVal, "$/cutscene/escalera_2_pt_e_cs/escalera_2_pt_e_cs", &uLocal_961, Function_199((*&Local_4 + 1112)[10]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			if (iLocal_653[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_398();
				Function_395();
				Function_331(16, 1);
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(Global_34573, (*&Local_4 + 1112)[9], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_458()) && Function_394())
			{
				Function_199((*&Local_4 + 1580)[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199((*&Local_4 + 1580)[0]), 0.0f, 0, 1, 1, 0);
				Function_311(1);
				Function_188(bLocal_692, (*&Local_4 + 1112)[8], 1, 1, 1);
				Function_447();
				DESTROY_VOLUME((*&Local_4 + 940)[0]);
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000004:
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_393();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			Function_308();
			Function_446();
			Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
			SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_653[3] == 0)
				{
					Function_445();
					ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
					iLocal_677 = 0;
				}
				iLocal_679 = 11;
				uLocal_708 = Local_4.f_1884;
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_411())
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[4] = 1;
				Function_171();
				TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
				bLocal_552 = 5;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_411() //Position: 0x16A32 / 92722
{
	Function_422();
	switch (iLocal_677)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_677 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_421())
			{
				if (!iLocal_934)
				{
					Function_418();
					iLocal_934 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 940)[6]))
			{
				Function_415();
				if (!Function_413())
				{
					TASK_CLEAR(bLocal_692);
					TASK_FOLLOW_ACTOR(bLocal_692, Global_34573);
					iLocal_930 = 1;
					Function_412();
					Function_365((*&Local_4 + 1176)[0]);
					iLocal_931 = 1;
					iLocal_677 = 3;
					Function_253(&iLocal_888);
				}
				else
				{
					TASK_CLEAR(bLocal_692);
					TASK_STAND_STILL(bLocal_692, -1.0f, 0, 0);
					Function_365((*&Local_4 + 1176)[0]);
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				Function_27("Zomb03_ClearCataObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_677 = 2;
			}
			if (Function_413())
			{
				Function_203();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
				iLocal_677 = 4;
			}
			break;
		
		case 0x00000002:
			if (Function_413())
			{
				Function_203();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
				iLocal_677 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 940)[6]))
			{
				TASK_CLEAR(bLocal_692);
				TASK_STAND_STILL(bLocal_692, -1.0f, 0, 0);
				Function_365((*&Local_4 + 1176)[0]);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_412() //Position: 0x16C57 / 93271
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_FinalRoomNoKills", "Z03_FinalRoomNoKills", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_413() //Position: 0x16CA8 / 93352
{
	if (Function_414())
	{
		return 1;
	}
	return 0;
}

bool Function_414() //Position: 0x16CB7 / 93367
{
	if (GET_ACTORSET_SIZE(bLocal_705) >= 0)
	{
		return 0;
	}
	return 1;
}

void Function_415() //Position: 0x16CCA / 93386
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bLocal_704))
	{
		if (GET_ACTORSET_SIZE(bLocal_704) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(bLocal_704))
			{
				bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_704, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_ALIVE(bVar1))
					{
						if (!IS_ACTOR_IN_ACTORSET(bLocal_705, bVar1))
						{
							if (Function_416(bVar1, Global_34573) >= 40.0f)
							{
								ADD_ACTORSET_MEMBER(bLocal_705, bVar1);
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

float Function_416(bool bParam0, bool bParam1) //Position: 0x16D3A / 93498
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_417(&uVar0, &uVar3);
	return iVar6;
}

var Function_417(var uParam0, bool bParam1) //Position: 0x16D59 / 93529
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_418() //Position: 0x16D77 / 93559
{
	if ((Function_350() % 2) == 1)
	{
		Function_420();
	}
	else
	{
		Function_419();
	}
	return;
}

void Function_419() //Position: 0x16D8F / 93583
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ReferenceBookBant_v2_AA", "Z03_ReferenceBookBant_v2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_ReferenceBookBant_v2_AB", "Z03_ReferenceBookBant_v2_AB", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_420() //Position: 0x16E33 / 93747
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ReferenceBookBant_v1_AA", "Z03_ReferenceBookBant_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_ReferenceBookBant_v1_AB", "Z03_ReferenceBookBant_v1_AB", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_421() //Position: 0x16ED7 / 93911
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_422() //Position: 0x16F04 / 93956
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_442(bLocal_704);
	Function_432();
	Function_369(bLocal_881, 4294967295);
	Function_369(bLocal_882, 4294967295);
	if (!Function_431(bLocal_881, 0) || !Function_431(bLocal_882, 0))
	{
		if (!IS_VOLUME_VALID((*&Local_4 + 940)[5]))
		{
			Function_429();
		}
	}
	if (Function_426(&Local_4 + 940[0], 0, 0, 0))
	{
		Function_447();
	}
	if (Function_426(&Local_4 + 940[2], 0, 0, 0))
	{
		Function_425();
	}
	if (Function_426(&Local_4 + 940[5], 0, 0, 0))
	{
		Function_187(bLocal_700, 0);
		Function_199((*&Local_4 + 1580)[1]);
		vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1580)[1]) };
		Function_374(bLocal_881);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_881, 0, 2, 4294967295);
		TASK_WANDER(false, 3212836864);
		if (SQUAD_IS_VALID(bLocal_881))
		{
			DECOR_SET_BOOL(bLocal_881, "bCanWakeUp", true);
		}
	}
	if (Function_426(&Local_4 + 940[3], 0, 0, 0))
	{
		if (!iLocal_947)
		{
			Function_424();
			iLocal_947 = 1;
		}
		Function_286(bLocal_702, 4294967295, 0);
		TASK_MELEE_ATTACK(bLocal_702, Global_34573, -1.0f);
		TASK_PRIORITY_SET(bLocal_702, 1);
	}
	if (IS_VOLUME_VALID((*&Local_4 + 940)[4]))
	{
		if (Function_426(&Local_4 + 940[4], 0, 0, 0) || Function_423(bLocal_882, Global_34573))
		{
			if (!iLocal_947)
			{
				Function_424();
				iLocal_947 = 1;
			}
			if (!DECOR_CHECK_EXIST(bLocal_882, "bCanWakeUp"))
			{
				Function_199((*&Local_4 + 1580)[3]);
				vVar3 = { StackVal, StackVal, Function_199((*&Local_4 + 1580)[3]) };
				Function_374(bLocal_882);
				Function_373(bLocal_882, Global_34573, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_882, 0, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(false, &vVar3, 1, 6.0f);
				if (SQUAD_IS_VALID(bLocal_882))
				{
					DECOR_SET_BOOL(bLocal_882, "bCanWakeUp", true);
				}
				DESTROY_VOLUME((*&Local_4 + 940)[4]);
			}
		}
	}
	return;
}

int Function_423(bool bParam0, bool bParam1) //Position: 0x170AD / 94381
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					bVar0 = true;
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_424() //Position: 0x17116 / 94486
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_Carnage", "Z03_Carnage", 1, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425() //Position: 0x17155 / 94549
{
	bLocal_753 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_ACTOR(false, Global_34573, 10.0f, 1);
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bLocal_701);
	TASK_SEQUENCE_PERFORM(bLocal_701, bLocal_753);
	TASK_PRIORITY_SET(bLocal_701, 2);
	AI_ACTOR_FORCE_SPEED(bLocal_701, 1);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	return;
}

bool Function_426(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1719D / 94621
{
	if (IS_VOLUME_VALID(*uParam0))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, *uParam0))
		{
			DESTROY_VOLUME(*uParam0);
			return 1;
		}
		if (bParam3)
		{
			if (Function_428(*uParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_VOLUME(*uParam0);
				return 1;
			}
		}
		if (bParam1)
		{
			if (bParam2 != "")
			{
				if (Function_427(Global_34573, 1) && IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
				{
					DESTROY_VOLUME(*uParam0);
					return 1;
				}
			}
			if (Function_427(Global_34573, 1))
			{
				DESTROY_VOLUME(*uParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_427(bool bParam0, bool bParam1) //Position: 0x1722A / 94762
{
	bool bVar0;
	
	bVar0 = false;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bParam0)))
		{
			case 0x0000002F:
				if (bParam1)
				{
					bVar0 = true;
				}
				break;
			
			case 0x00000029:
				bVar0 = true;
				break;
			
			case 0x00000027:
				bVar0 = true;
				break;
			
			case 0x00000028:
				bVar0 = true;
				break;
			
			case 0x0000002A:
				bVar0 = true;
				break;
			
			case 0x0000002B:
				bVar0 = true;
				break;
			
			case 0x0000002C:
				bVar0 = true;
				break;
			
			case 0x00000031:
				bVar0 = true;
				break;
			}
	}
	return bVar0;
}

bool Function_428(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x172B5 / 94901
{
	return CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_429() //Position: 0x172CF / 94927
{
	if (!Function_250(&iLocal_903))
	{
		Function_253(&iLocal_903);
	}
	else if (Function_248(&iLocal_903) <= 20.0f)
	{
		Function_430();
		Function_253(&iLocal_903);
	}
	else if (Function_427(Global_34573, 1))
	{
		if (Function_248(&iLocal_903) <= 1.2f)
		{
			Function_253(&iLocal_903);
		}
	}
	return;
}

void Function_430() //Position: 0x17322 / 95010
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_JonNoShoot", "Z03_JonNoShoot", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_431(bool bParam0, bool bParam1) //Position: 0x17367 / 95079
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0) >= 0)
		{
			if (bParam1)
			{
				if (!DECOR_CHECK_EXIST(bParam0, "bBlipped"))
				{
					Function_372(bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					DECOR_SET_BOOL(bParam0, "bBlipped", true);
				}
			}
			return 0;
		}
		if (bParam1)
		{
			if (DECOR_CHECK_EXIST(bParam0, "bBlipped"))
			{
				DECOR_REMOVE(bParam0, "bBlipped");
			}
		}
		return 1;
	}
	return 1;
}

void Function_432() //Position: 0x173F2 / 95218
{
	Function_441();
	Function_436();
	Function_368();
	Function_434();
	switch (iLocal_679)
	{
		case 0x0000000B:
			Function_433();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692, Global_34573, 15.0f, 3.0f, 10.0f);
			iLocal_927 = 1;
			iLocal_679 = 12;
			break;
		
		case 0x0000000C:
			Function_367(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_433() //Position: 0x1744C / 95308
{
	TASK_CLEAR(bLocal_692);
	TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_692, Global_34573, uLocal_708, 4.25f, 1, 0);
	TASK_PRIORITY_SET(bLocal_692, 1);
	iLocal_930 = 0;
	return;
}

void Function_434() //Position: 0x17476 / 95350
{
	float fVar0;
	
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[22]))
	{
		Function_253(&iLocal_921);
		return;
	}
	fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573));
	if (fVar0 >= 1.75f)
	{
		Function_253(&iLocal_921);
		return;
	}
	if (GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) - 10.0f))
	{
		Function_253(&iLocal_921);
		return;
	}
	if (!Function_250(&iLocal_921))
	{
		Function_253(&iLocal_921);
	}
	else if (Function_248(&iLocal_921) <= 10.0f)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_435();
			Function_253(&iLocal_921);
		}
	}
	return;
}

void Function_435() //Position: 0x17505 / 95493
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_EncoJon", "Z03_EncoJon", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x17544 / 95556
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	var uVar11;
	
	Function_439();
	if (!iLocal_930)
	{
		if (iLocal_759 <= 5)
		{
			if (!Function_250(&iLocal_918))
			{
				Function_253(&iLocal_918);
			}
			else
			{
				Function_298(Global_34573);
				vVar6 = { StackVal, StackVal, Function_298(Global_34573) };
				if (!Function_438(StackVal, StackVal, StackVal, StackVal, vLocal_963, vVar6))
				{
					Function_253(&iLocal_918);
					vLocal_963 = { StackVal, StackVal, vVar6 };
				}
				else if (Function_248(&iLocal_918) <= 10.0f)
				{
					Function_437();
					iLocal_759++;
					Function_253(&iLocal_918);
					Function_253(&iLocal_912);
					Function_253(&iLocal_921);
				}
			}
		}
		if (Function_250(&iLocal_897))
		{
			if (Function_248(&iLocal_897) < 1.0f)
			{
				Function_298(Global_34573);
				vVar0 = { StackVal, StackVal, Function_298(Global_34573) };
				Function_298(bLocal_692);
				vVar3 = { StackVal, StackVal, Function_298(bLocal_692) };
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(uLocal_708, &vVar0, &vVar3, &fVar9, &fVar10, &uVar11);
				if (fVar9 > fVar10)
				{
					if (!iLocal_929)
					{
						TASK_CLEAR(bLocal_692);
						TASK_FACE_ACTOR(bLocal_692, Global_34573, 1, 3212836864);
						AI_GOAL_LOOK_AT_ACTOR(bLocal_692, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
						iLocal_929 = 1;
					}
				}
				else if (iLocal_929)
				{
					Function_433();
					iLocal_929 = 0;
					STOP_FORCE_LOOK_AT_COORD(bLocal_692);
					iLocal_936 = 0;
					Function_363(&iLocal_912);
				}
			}
		}
		else
		{
			Function_253(&iLocal_897);
		}
	}
	return;
}

void Function_437() //Position: 0x17669 / 95849
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_JonNoMoveForward", "Z03_JonNoMoveForward", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_438(vector3 vParam0, vector3 vParam3) //Position: 0x176BA / 95930
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_439() //Position: 0x176E7 / 95975
{
	float fVar0;
	
	if (iLocal_929)
	{
		if (!Function_250(&iLocal_912))
		{
			Function_253(&iLocal_912);
		}
		else
		{
			fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573));
			if (fVar0 >= 2.0f)
			{
				Function_253(&iLocal_912);
			}
			else if (GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) - 10.0f))
			{
				Function_253(&iLocal_912);
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_576))
			{
				Function_253(&iLocal_912);
			}
			else if (Function_248(&iLocal_912) <= 5.0f)
			{
				if (iLocal_936)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_248(&iLocal_912) <= 13.0f)
						{
							Function_440();
							Function_253(&iLocal_912);
						}
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_440();
					Function_253(&iLocal_912);
					iLocal_936 = 1;
				}
			}
		}
	}
	return;
}

void Function_440() //Position: 0x1779F / 96159
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_JonTurnsBak", "Z03_JonTurnsBak", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_441() //Position: 0x177E6 / 96230
{
	if (iLocal_927)
	{
		if (!IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_660) || iLocal_930)
		{
			if (bLocal_552 == 1)
			{
				return;
			}
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692);
			iLocal_927 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_660) && !iLocal_930)
	{
		ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692, Global_34573, 15.0f, 5.0f, 10.0f);
		iLocal_927 = 1;
	}
	return;
}

void Function_442(bool bParam0) //Position: 0x17847 / 96327
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		if (GET_ACTORSET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(bParam0))
			{
				bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_ALIVE(bVar1))
					{
						if (!IS_ACTOR_IN_VOLUME(bVar1, Local_4.f_1088))
						{
							KILL_ACTOR(bVar1);
						}
						else if (IS_ACTOR_HOGTIED(bVar1))
						{
							if (!ACTORS_IN_RANGE(bVar1, Global_34573, 10.0f))
							{
								if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar1, 1065353216, 1117126656, 1, 1, 0))
								{
									KILL_ACTOR(bVar1);
								}
							}
						}
						else
						{
							if (DECOR_CHECK_EXIST(bVar1, "bWallZombie"))
							{
								if (DECOR_GET_BOOL(bVar1, "bWallZombie"))
								{
									Function_444(bVar1);
								}
							}
							if (iLocal_931)
							{
								if (IS_ACTOR_IN_ACTORSET(bLocal_705, bVar1))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
									{
										ADD_BLIP_FOR_ACTOR(bVar1, 322, 0, 2, 0);
									}
								}
								else
								{
									DESTROY_ACTOR(bVar1);
								}
							}
						}
					}
					if (!IS_ACTOR_ALIVE(bVar1))
					{
						if (DECOR_CHECK_EXIST(bVar1, "oLeftEyeGlow"))
						{
							bVar2 = DECOR_GET_OBJECT(bVar1, "oLeftEyeGlow");
							if (IS_OBJECT_VALID(bVar2))
							{
								UNK_0xE18028C1(bVar2);
								DESTROY_OBJECT(bVar2);
							}
						}
						if (DECOR_CHECK_EXIST(bVar1, "oRightEyeGlow"))
						{
							bVar2 = DECOR_GET_OBJECT(bVar1, "oRightEyeGlow");
							if (IS_OBJECT_VALID(bVar2))
							{
								UNK_0xE18028C1(bVar2);
								DESTROY_OBJECT(bVar2);
							}
						}
						if (IS_ACTOR_IN_ACTORSET(bLocal_705, bVar1))
						{
							REMOVE_ACTORSET_MEMBER(bLocal_705, bVar1);
						}
						REMOVE_ACTORSET_MEMBER(bParam0, bVar1);
						bLocal_758++;
						Function_443(Local_479, bLocal_758);
						PRINTSTRING("A zombie has died, total number dead: ");
						PRINTINT(bLocal_758);
						PRINTNL();
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar1, "oLeftEyeGlow"))
					{
						bVar3 = DECOR_GET_OBJECT(bVar1, "oLeftEyeGlow");
						if (IS_OBJECT_VALID(bVar3))
						{
							UNK_0xE18028C1(bVar3);
							DESTROY_OBJECT(bVar3);
						}
					}
					if (DECOR_CHECK_EXIST(bVar1, "oRightEyeGlow"))
					{
						bVar3 = DECOR_GET_OBJECT(bVar1, "oRightEyeGlow");
						if (IS_OBJECT_VALID(bVar3))
						{
							UNK_0xE18028C1(bVar3);
							DESTROY_OBJECT(bVar3);
						}
					}
					if (IS_ACTOR_IN_ACTORSET(bLocal_705, bVar1))
					{
						REMOVE_ACTORSET_MEMBER(bLocal_705, bVar1);
					}
					REMOVE_ACTORSET_MEMBER(bParam0, bVar1);
					bLocal_758++;
					Function_443(Local_479, bLocal_758);
					PRINTSTRING("A zombie has become invalid, total number dead: ");
					PRINTINT(bLocal_758);
					PRINTNL();
				}
				bVar0++;
			}
		}
		if (!iLocal_938)
		{
			if (bLocal_552 > 3)
			{
				if (bLocal_758 > 15)
				{
					Function_198(3);
					Function_375(StackVal, StackVal, Function_198(3), 3, Global_30685[0], Function_201(3), 0);
					iLocal_938 = 1;
				}
			}
		}
		else if (!iLocal_939)
		{
			if (bLocal_552 > 4)
			{
				if (bLocal_758 > 33)
				{
					Function_198(4);
					Function_375(StackVal, StackVal, Function_198(4), 4, Global_30685[0], Function_201(4), 0);
					iLocal_939 = 1;
				}
			}
		}
	}
	return;
}

void Function_443(int iParam0, bool bParam1) //Position: 0x17B7A / 97146
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

void Function_444(bool bParam0) //Position: 0x17B95 / 97173
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (((!DECOR_CHECK_EXIST(bParam0, "wallVolume") || !DECOR_CHECK_EXIST(bParam0, "wallPosition")) || !DECOR_CHECK_EXIST(bParam0, "wallRollLeft")) || !DECOR_CHECK_EXIST(bParam0, "wallHeight"))
			{
				bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "wallVolume"));
				if (IS_VOLUME_VALID(bVar0))
				{
					if (!IS_ACTOR_IN_VOLUME(bParam0, bVar0))
					{
						Function_188(bParam0, DECOR_GET_OBJECT(bParam0, "wallPosition"), 0, 0, 0);
						SET_ANIM_SET_FOR_ACTOR(bParam0, "z_dlc_z_crypt", 0);
						switch (DECOR_GET_INT(bParam0, "wallHeight"))
						{
							case 0x00000001:
								if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt1_2_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt1_2");
								}
								break;
							
							case 0x00000002:
								if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt2_5_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt2_5");
								}
								break;
							
							case 0x00000003:
								if (DECOR_GET_BOOL(bParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt4_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(bParam0, "z_dlc_z_crypt/Crypt4");
								}
								break;
							}
					}
				}
				else
				{
					KILL_ACTOR(bParam0);
				}
			}
			else
			{
				KILL_ACTOR(bParam0);
			}
		}
	}
	return;
}

void Function_445() //Position: 0x17DB0 / 97712
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_remindJon", "Z03_remindJon", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446() //Position: 0x17DF3 / 97779
{
	Function_386(bLocal_478, 18, (*&Local_4 + 1580)[2], 0, 4, 0, 1, 3212836864);
	return;
}

void Function_447() //Position: 0x17E13 / 97811
{
	Function_457();
	Function_456();
	Function_455();
	Function_453();
	Function_448();
	return;
}

void Function_448() //Position: 0x17E28 / 97832
{
	bool bVar0;
	
	bVar0 = Function_452((*&Local_4 + 1676)[1], (*&Local_4 + 1676)[0], 1, (*&Local_4 + 940)[8], Function_59(), 2, 0, 1252);
	SQUAD_JOIN(bVar0, bLocal_882);
	bVar0 = Function_356((*&Local_4 + 1700)[0], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_882);
	bVar0 = Function_452((*&Local_4 + 1676)[3], (*&Local_4 + 1676)[2], 0, (*&Local_4 + 940)[9], Function_59(), 2, 0, 1253);
	SQUAD_JOIN(bVar0, bLocal_882);
	Function_451(bLocal_882, 1.5f, 2.25f);
	bVar0 = Function_356((*&Local_4 + 1700)[1], Function_59(), 4294967295, 1, 4294967295);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SQUAD_JOIN(bVar0, bLocal_882);
	Function_389(bLocal_882);
	Function_450(bLocal_882, bLocal_704);
	Function_449(bLocal_882);
	return;
}

void Function_449(bool bParam0) //Position: 0x17EEF / 98031
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_ERROR("Squad_AddMustKillZombie -- Invalid squad... exiting..");
		return;
	}
	Function_450(bParam0, bLocal_705);
	return;
}

void Function_450(bool bParam0, bool bParam1) //Position: 0x17F42 / 98114
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			if (IS_ACTORSET_VALID(bParam1))
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(bParam0))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						ADD_ACTORSET_MEMBER(bParam1, bVar1);
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_451(bool bParam0, float fParam1, bool bParam2) //Position: 0x17F90 / 98192
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
			if (bVar0 == 0)
			{
				Function_391(bVar1, 0.0f, 0.0f);
			}
			else
			{
				Function_391(bVar1, fParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_452(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7) //Position: 0x17FE0 / 98272
{
	bool bVar0;
	
	switch (iParam6)
	{
		case 0x00000000:
			bVar0 = Function_356(bParam0, bParam4, 4294967295, 0, iParam7);
			break;
		
		case 0x00000001:
			bVar0 = Function_355(bParam0, bParam4, 4294967295, 0, iParam7);
			break;
		
		case 0x00000002:
			bVar0 = Function_354(bParam0, bParam4, 4294967295, 0, iParam7);
			break;
	}
	SUSPEND_MOVER(bVar0);
	Function_188(bVar0, bParam1, 0, 0, 0);
	DECOR_SET_OBJECT(bVar0, "wallVolume", bParam3);
	DECOR_SET_OBJECT(bVar0, "wallPosition", bParam1);
	DECOR_SET_BOOL(bVar0, "wallRollLeft", bParam2);
	DECOR_SET_INT(bVar0, "wallHeight", bParam5);
	SET_ANIM_SET_FOR_ACTOR(bVar0, "z_dlc_z_crypt", 0);
	switch (bParam5)
	{
		case 0x00000001:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt1_2_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt1_2");
			}
			break;
		
		case 0x00000002:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt2_5_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt2_5");
			}
			break;
		
		case 0x00000003:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt4_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bVar0, "z_dlc_z_crypt/Crypt4");
			}
			break;
	}
	DECOR_SET_BOOL(bVar0, "bIsWallZomb", true);
	return bVar0;
}

void Function_453() //Position: 0x181C4 / 98756
{
	bLocal_702 = Function_356((*&Local_4 + 1664)[0], Function_59(), 1, 0, 4294967295);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_702);
	Function_454(bLocal_702);
	return;
}

void Function_454(bool bParam0) //Position: 0x181EE / 98798
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("AddMustKillZombie -- Invalid actor... exiting..");
		return;
	}
	ADD_ACTORSET_MEMBER(bLocal_705, bParam0);
	return;
}

void Function_455() //Position: 0x1823C / 98876
{
	bLocal_701 = Function_353((*&Local_4 + 1632)[5], Function_59(), 4294967295, 1, 1216);
	TASK_STAND_STILL(bLocal_701, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_701, 1);
	Function_352(bLocal_701);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_701);
	Function_454(bLocal_701);
	return;
}

void Function_456() //Position: 0x1827E / 98942
{
	bool bVar0;
	
	bVar0 = Function_356((*&Local_4 + 1632)[0], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_881);
	bVar0 = Function_356((*&Local_4 + 1632)[1], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_881);
	bVar0 = Function_356((*&Local_4 + 1632)[2], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_881);
	Function_451(bLocal_881, 1.6f, 3.3f);
	bVar0 = Function_356((*&Local_4 + 1632)[3], Function_59(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_881);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = Function_356((*&Local_4 + 1632)[4], Function_59(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_881);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_389(bLocal_881);
	Function_450(bLocal_881, bLocal_704);
	Function_449(bLocal_881);
	return;
}

void Function_457() //Position: 0x18340 / 99136
{
	bLocal_700 = Function_452((*&Local_4 + 1616)[1], (*&Local_4 + 1616)[0], 0, (*&Local_4 + 940)[7], Function_59(), 2, 0, 1253);
	Function_352(bLocal_700);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_700);
	Function_454(bLocal_700);
	return;
}

int Function_458() //Position: 0x18383 / 99203
{
	Function_271(&Local_4 + 248, 1210, 2, 0);
	if (Function_262(&Local_4 + 248))
	{
		return 1;
	}
	return 0;
}

void Function_459() //Position: 0x183A3 / 99235
{
	if (iLocal_553 < 4 && iLocal_553 > 105)
	{
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			if (iLocal_653[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_398();
				Function_395();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_331(16, 1);
				Function_188(Global_34573, (*&Local_4 + 1112)[6], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_477()) && Function_394())
			{
				Function_199((*&Local_4 + 1372)[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199((*&Local_4 + 1372)[0]), 0.0f, 0, 1, 1, 0);
				Function_311(1);
				Function_188(bLocal_692, (*&Local_4 + 1112)[7], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000004:
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_308();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			Function_458();
			Function_476();
			Function_475();
			Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
			SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_653[2] == 0)
				{
					Function_445();
					ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
					iLocal_676 = 0;
				}
				iLocal_679 = 7;
				uLocal_708 = Local_4.f_1880;
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_460())
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[3] = 1;
				Function_172();
				TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
				bLocal_552 = 4;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_460() //Position: 0x1856D / 99693
{
	Function_464();
	Function_463();
	Function_461();
	switch (iLocal_676)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_676 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_426(&Local_4 + 864[3], 0, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_461() //Position: 0x185E7 / 99815
{
	if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_876) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_877) >= 0) && Function_462(bLocal_698, 0)) && Function_462(bLocal_699, 0))
	{
		if (!iLocal_944)
		{
			Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
			iLocal_944 = 1;
		}
	}
	return;
}

int Function_462(bool bParam0, int iParam1) //Position: 0x18626 / 99878
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_463() //Position: 0x18670 / 99952
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 864)[16]) || Function_423(bLocal_876, Global_34573))
	{
		if (!iLocal_945)
		{
			Function_328(&uLocal_669, 35, 0, 4294967295, 4294967295);
			iLocal_945 = 1;
		}
	}
	return;
}

void Function_464() //Position: 0x186A8 / 100008
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_442(bLocal_704);
	Function_472();
	Function_369(bLocal_876, 4294967295);
	Function_369(bLocal_877, 4294967295);
	if (!Function_431(bLocal_876, 0))
	{
		Function_429();
	}
	if (Function_426(&Local_4 + 864[0], 0, 0, 0))
	{
		Function_199((*&Local_4 + 1400)[0]);
		vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1400)[0]) };
		Function_374(bLocal_876);
		Function_373(bLocal_876, Global_34573, 0);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_876, 0, 2, 4294967295);
		TASK_GO_TO_COORD_NONSTOP(false, &vVar0, 1, 6.0f);
		if (SQUAD_IS_VALID(bLocal_876))
		{
			DECOR_SET_BOOL(bLocal_876, "bCanWakeUp", true);
		}
		Function_471((*&Local_4 + 1372)[2]);
		iLocal_679 = 8;
	}
	if (IS_VOLUME_VALID((*&Local_4 + 864)[1]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 864)[1]) || Function_423(bLocal_877, Global_34573))
		{
			Function_199(Global_34573);
			vVar3 = { StackVal, StackVal, Function_199(Global_34573) };
			Function_374(bLocal_877);
			Function_373(bLocal_877, Global_34573, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_877, 0, 2, 4294967295);
			TASK_GO_TO_COORD_NONSTOP(false, &vVar3, 1, 6.0f);
			if (SQUAD_IS_VALID(bLocal_877))
			{
				DECOR_SET_BOOL(bLocal_877, "bCanWakeUp", true);
			}
			SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
			DESTROY_VOLUME((*&Local_4 + 864)[1]);
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 864)[2]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 864)[2]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_876) >= 3)
		{
			Function_187(bLocal_698, 0);
			Function_253(&iLocal_894);
			DESTROY_VOLUME((*&Local_4 + 864)[2]);
		}
	}
	if (Function_250(&iLocal_894))
	{
		if (Function_248(&iLocal_894) <= 2.5f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 864)[10]))
		{
			Function_187(bLocal_699, 0);
			Function_253(&iLocal_894);
			Function_363(&iLocal_894);
		}
	}
	if (Function_426(&Local_4 + 864[4], 0, 0, 0))
	{
		Function_469();
	}
	if (Function_426(&Local_4 + 864[5], 0, 0, 0))
	{
		Function_467();
	}
	if (Function_426(&Local_4 + 864[6], 0, 0, 0))
	{
		Function_466();
	}
	if (Function_426(&Local_4 + 864[11], 0, 0, 1))
	{
		Function_465();
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_883) < 6)
	{
		if (!IS_VOLUME_VALID((*&Local_4 + 864)[6]))
		{
			if (!iLocal_933)
			{
				iLocal_949 = 1;
				iLocal_933 = 1;
			}
		}
	}
	return;
}

void Function_465() //Position: 0x188DC / 100572
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_SpotsGreenSmoke", "Z03_SpotsGreenSmoke", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1892B / 100651
{
	bool bVar0;
	
	bVar0 = Function_354((*&Local_4 + 1524)[0], Function_59(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(bVar0, 2);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_354((*&Local_4 + 1524)[1], Function_59(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(bVar0, 2);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_354((*&Local_4 + 1524)[2], Function_59(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(bVar0, 2);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_354((*&Local_4 + 1524)[3], Function_59(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
	TASK_PRIORITY_SET(bVar0, 2);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_356((*&Local_4 + 1524)[4], Function_59(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(bVar0, (*&Local_4 + 1560)[0], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(bVar0, 3);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_356((*&Local_4 + 1524)[5], Function_59(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(bVar0, (*&Local_4 + 1560)[1], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(bVar0, 3);
	SQUAD_JOIN(bVar0, bLocal_883);
	bVar0 = Function_355((*&Local_4 + 1524)[6], Function_59(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(bVar0, (*&Local_4 + 1560)[2], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(bVar0, 3);
	SQUAD_JOIN(bVar0, bLocal_883);
	Function_389(bLocal_883);
	Function_450(bLocal_883, bLocal_704);
	Function_449(bLocal_883);
	return;
}

void Function_467() //Position: 0x18A98 / 101016
{
	vector3 vVar0;
	
	bLocal_753 = TASK_SEQUENCE_OPEN();
	Function_199((*&Local_4 + 1372)[1]);
	vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1372)[1]) };
	if (!Function_468((*&Local_4 + 496)[02]))
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1864, 1, 1, 0, 1, 0);
		TASK_GO_TO_COORD_NONSTOP(false, &vVar0, 1, 9.35f);
	}
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR((*&Local_4 + 496)[02]);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 496)[02], bLocal_753);
	TASK_PRIORITY_SET((*&Local_4 + 496)[02], 2);
	AI_ACTOR_FORCE_SPEED((*&Local_4 + 496)[02], 1);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	TASK_CLEAR((*&Local_4 + 496)[12]);
	TASK_GO_TO_COORD_NONSTOP((*&Local_4 + 496)[12], &vVar0, 1, 6.0f);
	TASK_PRIORITY_SET((*&Local_4 + 496)[12], 2);
	return;
}

bool Function_468(bool bParam0) //Position: 0x18B45 / 101189
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (GET_ACTOR_HEALTH(bParam0) > GET_ACTOR_MAX_HEALTH(bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_469() //Position: 0x18B67 / 101223
{
	Function_470();
	TASK_STAND_STILL((*&Local_4 + 496)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 496)[02], 1);
	Function_352((*&Local_4 + 496)[02]);
	ADD_ACTORSET_MEMBER(bLocal_704, (*&Local_4 + 496)[02]);
	Function_284((*&Local_4 + 496)[12], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 496)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 496)[12], 1);
	Function_352((*&Local_4 + 496)[12]);
	ADD_ACTORSET_MEMBER(bLocal_704, (*&Local_4 + 496)[12]);
	return;
}

void Function_470() //Position: 0x18BEC / 101356
{
	Local_4.f_516 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S3_PreGas"));
	(*&Local_4 + 496)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S3_PG_F", 1211, -4412.189f, 9.424933f, 4378.62f, -0.003816543f, 48.72021f, -0.5987498f);
	SQUAD_JOIN((*&Local_4 + 496)[02], Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 496)[02], false);
	TASK_STAND_STILL((*&Local_4 + 496)[02], -1.0f, 0, 0);
	(*&Local_4 + 496)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S3_PG_W", 297, -4416.734f, 11.05062f, 4375.079f, -0.002539429f, 7.463752f, -0.5962116f);
	SQUAD_JOIN((*&Local_4 + 496)[12], Local_4.f_516);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 496)[12], false);
	TASK_STAND_STILL((*&Local_4 + 496)[12], -1.0f, 0, 0);
	return;
}

void Function_471(bool bParam0) //Position: 0x18CDE / 101598
{
	TASK_CLEAR(bLocal_692);
	bLocal_753 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, bParam0, 0.5f, 1, 0, 1);
	TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	AI_GOAL_LOOK_AT_ACTOR(bLocal_692, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
	iLocal_930 = 1;
	TASK_SEQUENCE_PERFORM(bLocal_692, bLocal_753);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	return;
}

void Function_472() //Position: 0x18D3C / 101692
{
	Function_441();
	Function_436();
	Function_368();
	Function_434();
	Function_473();
	switch (iLocal_679)
	{
		case 0x00000007:
			Function_433();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692, Global_34573, 15.0f, 3.0f, 10.0f);
			iLocal_927 = 1;
			iLocal_679 = 10;
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 864)[16]))
			{
				Function_471((*&Local_4 + 1372)[4]);
				iLocal_679 = 9;
			}
			break;
		
		case 0x00000009:
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_876) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_877) >= 0) && Function_462(bLocal_698, 0)) && Function_462(bLocal_699, 0))
			{
				Function_433();
				iLocal_679 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_367(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_473() //Position: 0x18DF9 / 101881
{
	if (iLocal_949)
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_692, 7.0f))
		{
			Function_474();
			iLocal_949 = 0;
			LOG_ERROR("Playing line..");
		}
	}
	return;
}

void Function_474() //Position: 0x18E2D / 101933
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ToxicZombs", "Z03_ToxicZombs", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x18E72 / 102002
{
	Function_386(bLocal_478, 8, (*&Local_4 + 1372)[3], 0, 3, 0, 1, 3212836864);
	return;
}

void Function_476() //Position: 0x18E92 / 102034
{
	bool bVar0;
	
	bVar0 = Function_356((*&Local_4 + 1412)[0], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_876);
	bVar0 = Function_356((*&Local_4 + 1412)[1], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_876);
	Function_451(bLocal_876, 2.0f, 2.1f);
	bVar0 = Function_356((*&Local_4 + 1428)[0], Function_59(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_876);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	bVar0 = Function_353((*&Local_4 + 1428)[2], Function_59(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_876);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_389(bLocal_876);
	Function_450(bLocal_876, bLocal_704);
	bLocal_698 = Function_452((*&Local_4 + 1448)[1], (*&Local_4 + 1448)[0], 0, (*&Local_4 + 864)[9], Function_59(), 3, 0, 1253);
	Function_352(bLocal_698);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_698);
	bLocal_699 = Function_452((*&Local_4 + 1448)[3], (*&Local_4 + 1448)[2], 1, (*&Local_4 + 864)[8], Function_59(), 2, 0, 1252);
	Function_352(bLocal_699);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_699);
	bLocal_696 = bLocal_699;
	bVar0 = Function_452((*&Local_4 + 1472)[1], (*&Local_4 + 1472)[0], 1, (*&Local_4 + 864)[12], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_877);
	Function_391(bVar0, 3.0f, 4.0f);
	Function_352(bVar0);
	bVar0 = Function_452((*&Local_4 + 1472)[3], (*&Local_4 + 1472)[2], 1, (*&Local_4 + 864)[13], Function_59(), 3, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_877);
	Function_391(bVar0, 0.0f, 0.1f);
	Function_352(bVar0);
	bVar0 = Function_452((*&Local_4 + 1472)[5], (*&Local_4 + 1472)[4], 0, (*&Local_4 + 864)[14], Function_59(), 1, 0, 393);
	SQUAD_JOIN(bVar0, bLocal_877);
	Function_391(bVar0, 10.0f, 10.0f);
	Function_352(bVar0);
	Function_450(bLocal_877, bLocal_704);
	return;
}

int Function_477() //Position: 0x19067 / 102503
{
	Function_271(&Local_4 + 208, 1211, 2, 0);
	Function_271(&Local_4 + 208, 297, 2, 0);
	Function_271(&Local_4 + 208, 1210, 2, 0);
	if (Function_262(&Local_4 + 208))
	{
		return 1;
	}
	return 0;
}

void Function_478() //Position: 0x190A1 / 102561
{
	if (iLocal_553 < 4 && iLocal_553 > 105)
	{
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			if (iLocal_653[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_395();
				Function_398();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(Global_34573, (*&Local_4 + 1112)[4], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_504()) && Function_394())
			{
				Function_199((*&Local_4 + 1224)[1]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199((*&Local_4 + 1224)[1]), 0.0f, 0, 1, 1, 0);
				Function_311(1);
				Function_188(bLocal_692, (*&Local_4 + 1112)[5], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_552);
			Function_375(StackVal, StackVal, Function_198(bLocal_552), bLocal_552, Global_30685[0], Function_201(bLocal_552), 0);
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_477();
			Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
			if (Function_250(&iLocal_915))
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_692, 1);
				AI_GOAL_AIM_CLEAR(bLocal_692);
				Function_253(&iLocal_915);
				Function_363(&iLocal_915);
				LOG_ERROR("This worked...");
			}
			Function_502();
			Function_501();
			Function_308();
			iLocal_948 = 0;
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_679 = 3;
				uLocal_708 = Local_4.f_1876;
				if (iLocal_653[1] == 0)
				{
					Function_445();
				}
				Function_365((*&Local_4 + 1200)[0]);
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1176)[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT((*&Local_4 + 1176)[0]), "Zomb03_Altar");
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_479())
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[2] = 1;
				Function_173();
				TASK_STAND_STILL(bLocal_693, -1.0f, 0, 0);
				bLocal_552 = 3;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_479() //Position: 0x192BF / 103103
{
	Function_495();
	Function_485();
	Function_484();
	Function_483();
	switch (iLocal_675)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				Function_482();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_675 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				if ((Function_350() % 2) == 1)
				{
					Function_481();
				}
				else
				{
					Function_480();
				}
				iLocal_675 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_426(&Local_4 + 764[11], 0, 0, 0))
			{
				Function_328(&uLocal_669, 11, 0, 4294967295, 4294967295);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_480() //Position: 0x1937E / 103294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_MaidnBanterCrypt2_v1_AA1", "Z03_MaidnBanterCrypt2_v1_AA1", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_MaidnBanterCrypt2_v1_AA2", "Z03_MaidnBanterCrypt2_v1_AA2", 0, 2, 0, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x19426 / 103462
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_MaidnBanterCrypt_v1_AA1", "Z03_MaidnBanterCrypt_v1_AA1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_MaidnBanterCrypt_v1_AA2", "Z03_MaidnBanterCrypt_v1_AA2", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x194CA / 103626
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_EnterCrypt", "Z03_EnterCrypt", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x1950F / 103695
{
	if (!IS_VOLUME_VALID((*&Local_4 + 764)[3]) && !IS_VOLUME_VALID((*&Local_4 + 764)[5]))
	{
		if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_873) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_874) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_875) >= 0) && Function_462(bLocal_697, 0))
		{
			if (!iLocal_943)
			{
				Function_328(&uLocal_669, 7, 0, 4294967295, 4294967295);
				iLocal_943 = 1;
			}
		}
	}
	return;
}

void Function_484() //Position: 0x1956B / 103787
{
	if (IS_VOLUME_VALID((*&Local_4 + 764)[21]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[21]) || Function_423(Local_4.f_476, Global_34573))
		{
			Function_328(&uLocal_669, 11, 0, 4294967295, 4294967295);
			DESTROY_VOLUME((*&Local_4 + 764)[21]);
		}
	}
	return;
}

void Function_485() //Position: 0x195B5 / 103861
{
	Function_441();
	if (!ACTOR_HAS_WEAPON(bLocal_692, 33))
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_692, (*&Local_4 + 708)[0]))
		{
			bLocal_946 = true;
		}
	}
	if (bLocal_946)
	{
		Function_368();
	}
	Function_436();
	Function_492();
	Function_490();
	Function_488();
	Function_486();
	Function_434();
	switch (iLocal_679)
	{
		case 0x00000003:
			Function_433();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692, Global_34573, 15.0f, 3.0f, 10.0f);
			iLocal_927 = 1;
			iLocal_679 = 6;
			break;
		
		case 0x00000004:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_476) < 0)
			{
				Function_433();
				iLocal_679 = 6;
			}
			break;
		
		case 0x00000005:
			if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_873) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_874) >= 2) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_875) >= 0)
			{
				Function_433();
				iLocal_679 = 6;
			}
			break;
		
		case 0x00000006:
			Function_367(0x420c0000, 0x425c0000);
			if (Function_426(&Local_4 + 664[0], 0, 0, 0))
			{
				Function_471((*&Local_4 + 1224)[2]);
				iLocal_679 = 4;
			}
			break;
	}
	return;
}

void Function_486() //Position: 0x196AA / 104106
{
	if (Function_426(&Local_4 + 864[7], 0, 0, 0))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_476) >= 0)
		{
			if ((Function_350() % 2) == 1)
			{
				Function_487();
			}
			else
			{
				Function_487();
			}
		}
	}
	return;
}

void Function_487() //Position: 0x196DF / 104159
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_GlowingEyesBant_v1_AA", "Z03_GlowingEyesBant_v1_AA", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_GlowingEyesBant_v1_AB", "Z03_GlowingEyesBant_v1_AB", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x1977B / 104315
{
	if (!iLocal_932)
	{
		if (!IS_OBJECT_VALID(bLocal_710))
		{
			Function_489();
			iLocal_932 = 1;
		}
	}
	return;
}

void Function_489() //Position: 0x19799 / 104345
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_piksAmmo1stTime", "Z03_piksAmmo1stTime", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x197E8 / 104424
{
	if (Function_426(&Local_4 + 764[16], 0, 0, 0))
	{
		Function_491();
	}
	return;
}

void Function_491() //Position: 0x19803 / 104451
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_NotHarmedBant_v1_AA", "Z03_NotHarmedBant_v1_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_NotHarmedBant_v1_AB", "Z03_NotHarmedBant_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_NotHarmedBant_v1_AC", "Z03_NotHarmedBant_v1_AC", 1, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x198D4 / 104660
{
	if (Function_426(&Local_4 + 764[15], 0, 0, 0))
	{
		Function_328(&uLocal_669, 11, 0, 4294967295, 4294967295);
		if ((Function_350() % 2) == 1)
		{
			Function_494();
		}
		else
		{
			Function_493();
		}
	}
	return;
}

void Function_493() //Position: 0x19909 / 104713
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ZombUniformBant_v2_AA", "Z03_ZombUniformBant_v2_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_ZombUniformBant_v2_AB", "Z03_ZombUniformBant_v2_AB", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494() //Position: 0x199A5 / 104869
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ZombUniformBant_v1_AA", "Z03_ZombUniformBant_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_ZombUniformBant_v1_AB", "Z03_ZombUniformBant_v1_AB", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x19A41 / 105025
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	Function_442(bLocal_704);
	Function_369(bLocal_873, 4294967295);
	Function_369(bLocal_874, 4294967295);
	Function_369(bLocal_875, 4294967295);
	if ((!Function_431(bLocal_873, 0) || !Function_431(bLocal_874, 0)) || !Function_431(bLocal_875, 0))
	{
		if (!IS_VOLUME_VALID((*&Local_4 + 764)[3]))
		{
			Function_429();
		}
	}
	if (Function_426(&Local_4 + 764[0], 0, 0, 0))
	{
		Function_500();
		Function_499();
	}
	if (Function_426(&Local_4 + 764[3], 0, 0, 0))
	{
		Function_199((*&Local_4 + 1248)[0]);
		vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1248)[0]) };
		Function_374(bLocal_873);
		SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_873, 0, 2, 4294967295);
		TASK_GO_TO_COORD_NONSTOP(false, &vVar0, 1, 7.0f);
		if (SQUAD_IS_VALID(bLocal_873))
		{
			DECOR_SET_BOOL(bLocal_873, "bCanWakeUp", true);
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 764)[4]))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[4]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_873) > 4) || Function_423(bLocal_875, Global_34573))
		{
			if (!IS_VOLUME_VALID((*&Local_4 + 764)[3]))
			{
				if (SQUAD_IS_VALID(bLocal_875))
				{
					DECOR_SET_BOOL(bLocal_875, "bCanWakeUp", true);
				}
				Function_373(bLocal_875, Global_34573, 0);
				Function_199((*&Local_4 + 1248)[0]);
				vVar3 = { StackVal, StackVal, Function_199((*&Local_4 + 1248)[0]) };
				Function_374(bLocal_875);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_875, 0, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(false, &vVar3, 1, 7.0f);
				Function_471((*&Local_4 + 1224)[3]);
				iLocal_679 = 5;
				DESTROY_VOLUME((*&Local_4 + 764)[4]);
			}
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 764)[6]))
	{
		if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[6]) || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_873) >= 2 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_875) >= 2)) || Function_423(bLocal_874, Global_34573))
		{
			if (!IS_VOLUME_VALID((*&Local_4 + 764)[3]))
			{
				if (SQUAD_IS_VALID(bLocal_874))
				{
					DECOR_SET_BOOL(bLocal_874, "bCanWakeUp", true);
				}
				Function_373(bLocal_874, Global_34573, 0);
				Function_199((*&Local_4 + 1248)[0]);
				vVar6 = { StackVal, StackVal, Function_199((*&Local_4 + 1248)[0]) };
				Function_374(bLocal_874);
				SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_874, 0, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(false, &vVar6, 1, 7.0f);
				DESTROY_VOLUME((*&Local_4 + 764)[6]);
			}
		}
	}
	if (Function_426(&Local_4 + 764[5], 0, 0, 0))
	{
		Function_497();
		Function_496();
	}
	if (IS_VOLUME_VALID((*&Local_4 + 764)[12]))
	{
		if (Function_426(&Local_4 + 764[12], 0, 0, 0) || Function_468(bLocal_697))
		{
			TASK_CLEAR(bLocal_697);
			MEMORY_IDENTIFY(bLocal_697, Global_34573);
			TASK_MELEE_ATTACK(bLocal_697, Global_34573, -1.0f);
		}
	}
	if (IS_VOLUME_VALID((*&Local_4 + 764)[7]))
	{
		if (IS_ACTOR_VALID((*&Local_4 + 480)[02]))
		{
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[7]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 764)[8])) || Function_468((*&Local_4 + 480)[02]))
			{
				bLocal_753 = TASK_SEQUENCE_OPEN();
				Function_199((*&Local_4 + 1248)[1]);
				vVar9 = { StackVal, StackVal, Function_199((*&Local_4 + 1248)[1]) };
				if (!Function_468((*&Local_4 + 480)[02]))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1860, 1, 1, 0, 1, 0);
					TASK_GO_TO_COORD_NONSTOP(false, &vVar9, 1, 5.9f);
				}
				TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR((*&Local_4 + 480)[02]);
				TASK_SEQUENCE_PERFORM((*&Local_4 + 480)[02], bLocal_753);
				TASK_PRIORITY_SET((*&Local_4 + 480)[02], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 480)[02], 1);
				TASK_SEQUENCE_RELEASE(bLocal_753, 1);
				DESTROY_VOLUME((*&Local_4 + 764)[7]);
			}
		}
	}
	if (Function_426(&Local_4 + 764[10], 0, 0, 0) || Function_468(bLocal_695))
	{
		if (IS_ACTOR_VALID(bLocal_695))
		{
			Function_298(Global_34573);
			vVar12 = { StackVal, StackVal, Function_298(Global_34573) };
			MEMORY_REPORT_POSITION(bLocal_695, Global_34573, &vVar12);
			Function_286(bLocal_695, 4294967295, 1);
		}
	}
	return;
}

void Function_496() //Position: 0x19DB8 / 105912
{
	bLocal_697 = Function_353((*&Local_4 + 1248)[2], Function_59(), 4294967295, 1, 4294967295);
	TASK_STAND_STILL(bLocal_697, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_697, 1);
	Function_352(bLocal_697);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_697);
	return;
}

void Function_497() //Position: 0x19DF2 / 105970
{
	Function_498();
	TASK_STAND_STILL((*&Local_4 + 480)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_4 + 480)[02], 1);
	Function_352((*&Local_4 + 480)[02]);
	ADD_ACTORSET_MEMBER(bLocal_704, (*&Local_4 + 480)[02]);
	bLocal_695 = Function_356((*&Local_4 + 1360)[0], Function_59(), 0, 0, 391);
	Function_352(bLocal_695);
	ADD_ACTORSET_MEMBER(bLocal_704, bLocal_695);
	return;
}

void Function_498() //Position: 0x19E55 / 106069
{
	Local_4.f_492 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S2_Pillar"));
	(*&Local_4 + 480)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S2_Pillar_0", 1210, -4350.922f, 22.68301f, 4368.044f, -0.006797275f, -68.25787f, -0.589568f);
	SQUAD_JOIN((*&Local_4 + 480)[02], Local_4.f_492);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 480)[02], false);
	return;
}

void Function_499() //Position: 0x19ED6 / 106198
{
	bool bVar0;
	
	bVar0 = Function_356((*&Local_4 + 1268)[0], "z_sq_0_0", 1, 0, 4294967295);
	Function_352(bVar0);
	SQUAD_JOIN(bVar0, bLocal_873);
	bVar0 = Function_356((*&Local_4 + 1268)[1], "z_sq_0_1", 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_873);
	Function_352(bVar0);
	bVar0 = Function_356((*&Local_4 + 1268)[2], "z_sq_0_2", 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_873);
	Function_352(bVar0);
	Function_451(bLocal_873, 1.0f, 3.0f);
	bVar0 = Function_356((*&Local_4 + 1268)[5], "z_sq_0_3", 4294967295, 1, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_873);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	Function_352(bVar0);
	Function_450(bLocal_873, bLocal_704);
	bVar0 = Function_452((*&Local_4 + 1300)[1], (*&Local_4 + 1300)[0], 0, (*&Local_4 + 764)[17], "z_sq_1_0", 2, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_875);
	bLocal_696 = bVar0;
	Function_391(bVar0, 0.0f, 0.0f);
	Function_352(bVar0);
	bVar0 = Function_356((*&Local_4 + 1340)[0], "z_sq_1_1", 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_875);
	Function_391(bVar0, 2.0f, 2.0f);
	Function_352(bVar0);
	bVar0 = Function_356((*&Local_4 + 1340)[1], "z_sq_1_2", 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_875);
	Function_391(bVar0, 3.3f, 3.5f);
	Function_352(bVar0);
	Function_450(bLocal_875, bLocal_704);
	bVar0 = Function_452((*&Local_4 + 1300)[4], (*&Local_4 + 1300)[6], 1, (*&Local_4 + 764)[19], Function_59(), 2, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_874);
	Function_391(bVar0, 0.0f, 0.1f);
	Function_352(bVar0);
	bVar0 = Function_452((*&Local_4 + 1300)[5], (*&Local_4 + 1300)[7], 0, (*&Local_4 + 764)[20], Function_59(), 2, 2, 1210);
	SQUAD_JOIN(bVar0, bLocal_874);
	Function_391(bVar0, 3.0f, 4.0f);
	Function_352(bVar0);
	bVar0 = Function_353((*&Local_4 + 1340)[2], Function_59(), 1, 0, 4294967295);
	SQUAD_JOIN(bVar0, bLocal_874);
	Function_391(bVar0, 1.75f, 2.25f);
	Function_352(bVar0);
	Function_450(bLocal_874, bLocal_704);
	return;
}

void Function_500() //Position: 0x1A0FA / 106746
{
	if (IS_ACTOR_VALID((*&Local_4 + 324)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 324)[02]);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 340)[02]))
	{
		DESTROY_ACTOR((*&Local_4 + 340)[02]);
	}
	if (SQUAD_IS_VALID(Local_4.f_376))
	{
		Function_177(&Local_4 + 376);
	}
	if (SQUAD_IS_VALID(Local_4.f_400))
	{
		Function_177(&Local_4 + 400);
	}
	if (SQUAD_IS_VALID(Local_4.f_416))
	{
		Function_177(&Local_4 + 416);
	}
	if (SQUAD_IS_VALID(Local_4.f_432))
	{
		Function_177(&Local_4 + 432);
	}
	return;
}

void Function_501() //Position: 0x1A17E / 106878
{
	bLocal_710 = Function_386(bLocal_478, 18, (*&Local_4 + 1224)[0], 0, 4, 0, 1, 3212836864);
	return;
}

void Function_502() //Position: 0x1A1A0 / 106912
{
	Function_503();
	Function_283(Local_4.f_476, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_476, iLocal_476);
	Function_281(Local_4.f_476, (*&Local_4 + 764)[1], 1, (*&Local_4 + 708)[9], 0);
	Function_389(Local_4.f_476);
	Function_450(Local_4.f_476, bLocal_704);
	return;
}

void Function_503() //Position: 0x1A1F3 / 106995
{
	Local_4.f_476 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Zomb_S2_Lobby"));
	(*&Local_4 + 448)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S2_Lobby_0", 321, -4356.191f, 28.98228f, 4316.015f, 0.0f, 242.9447f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 448)[02], Local_4.f_476);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 448)[02], false);
	(*&Local_4 + 448)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S2_Lobby_1", 324, -4355.442f, 28.98228f, 4311.047f, 0.0f, 242.9447f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 448)[12], Local_4.f_476);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 448)[12], false);
	(*&Local_4 + 448)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Zomb_S2_Lobby_2", 320, -4360.128f, 28.98228f, 4316.932f, 0.0f, 314.7311f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 448)[22], Local_4.f_476);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 448)[22], false);
	return;
}

int Function_504() //Position: 0x1A312 / 107282
{
	Function_271(&Local_4 + 156, 321, 2, 0);
	Function_271(&Local_4 + 156, 324, 2, 0);
	Function_271(&Local_4 + 156, 320, 2, 0);
	Function_271(&Local_4 + 156, 1210, 2, 0);
	if (Function_262(&Local_4 + 156))
	{
		return 1;
	}
	return 0;
}

void Function_505() //Position: 0x1A359 / 107353
{
	if (iLocal_553 < 4 && iLocal_553 > 105)
	{
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			if (iLocal_653[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_395();
				Function_188(Global_34573, (*&Local_4 + 1112)[2], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_518())
			{
				Function_311(0);
				Function_253(&iLocal_888);
				iLocal_553 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_383(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_479, 1))
			{
				Function_253(&iLocal_888);
				iLocal_553 = 3;
			}
			else
			{
				Function_188(Global_34573, (*&Local_4 + 1112)[2], 0, 1, 1);
				Function_188(bLocal_692, (*&Local_4 + 1112)[3], 1, 1, 1);
				Function_280();
				Function_305();
				SET_PLAYER_CONTROL(false, 1, 0, 0);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.35f, 0);
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/ESCALERA_1_PT_D_CS/ESCALERA_1_PT_D_CS", &iLocal_545, &Local_479, &bLocal_552, 77642, 74798, 74495, 70031, 69578, 45512, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_552);
			Function_375(StackVal, StackVal, Function_198(bLocal_552), bLocal_552, Global_30685[0], Function_201(bLocal_552), 0);
			Function_245(2.0f);
			Function_328(&uLocal_669, 6, 0, 4294967295, 4294967295);
			Function_517();
			Function_230(1, 0);
			Function_229(0, 1);
			Function_308();
			Function_504();
			Function_394();
			STREAMING_UNLOAD_BOUNDS();
			Function_516();
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_445();
				ADD_BLIP_FOR_OBJECT((*&Local_4 + 1200)[0], 330, 0f, 2, 0);
				Function_253(&iLocal_888);
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_506())
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[1] = 1;
				Function_174();
				bLocal_552 = 2;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_506() //Position: 0x1A5A4 / 107940
{
	Function_515();
	Function_511();
	Function_509();
	switch (iLocal_674)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_888) <= 8.0f)
			{
				Function_27("Zomb03_ToCatacombsObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if ((Function_350() % 2) == 0)
				{
					Function_508();
				}
				else
				{
					Function_507();
				}
				iLocal_674 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_421())
			{
				iLocal_674 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 708)[0]))
			{
				Function_365((*&Local_4 + 1200)[0]);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_507() //Position: 0x1A650 / 108112
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_OffCrypt_v2_AA", "Z03_OffCrypt_v2_AA", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_OffCrypt_v2_AB", "Z03_OffCrypt_v2_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_OffCrypt_v2_AC", "Z03_OffCrypt_v2_AC", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1A703 / 108291
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Z03_Off2Crypt_v1_AA", "Z03_Off2Crypt_v1_AA", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Z03_Off2Crypt_v1_AB", "Z03_Off2Crypt_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Z03_Off2Crypt_v1_AC", "Z03_Off2Crypt_v1_AC", 1, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x1A7BC / 108476
{
	if (!Function_250(&iLocal_906))
	{
		Function_253(&iLocal_906);
	}
	else if (Function_248(&iLocal_906) <= 35.0f)
	{
		Function_510();
		Function_253(&iLocal_906);
	}
	else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 708)[9]))
	{
		Function_253(&iLocal_906);
	}
	return;
}

void Function_510() //Position: 0x1A808 / 108552
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_JonNoCrypt", "Z03_JonNoCrypt", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1A84D / 108621
{
	Function_441();
	Function_436();
	Function_367(0x420c0000, 0x425c0000);
	Function_512();
	switch (iLocal_679)
	{
		case 0x00000000:
			TASK_CLEAR(bLocal_692);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_692, Global_34573, 3.0f, 2);
			iLocal_930 = 1;
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_692, Global_34573, 15.0f, 5.0f, 10.0f);
			iLocal_927 = 1;
			iLocal_679 = 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 708)[9]))
			{
				TASK_CLEAR(bLocal_692);
				TASK_FOLLOW_ACTOR(bLocal_692, Global_34573);
				iLocal_679 = 1;
			}
			break;
		
		case 0x00000001:
			Function_367(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_512() //Position: 0x1A8F0 / 108784
{
	if (Function_426(&Local_4 + 708[11], 0, 0, 0))
	{
		iLocal_948 = 1;
	}
	if (iLocal_948)
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_692, 7.0f))
		{
			Function_514((*&Local_4 + 436)[02]);
			Function_513();
			Function_253(&iLocal_915);
			iLocal_948 = 0;
		}
	}
	if (Function_250(&iLocal_915))
	{
		if (Function_248(&iLocal_915) <= 4.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_692, 1);
			AI_GOAL_AIM_CLEAR(bLocal_692);
			Function_253(&iLocal_915);
			Function_363(&iLocal_915);
		}
	}
	return;
}

void Function_513() //Position: 0x1A964 / 108900
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_ZombieBulls", "Z03_ZombieBulls", 0, 1, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514(bool bParam0) //Position: 0x1A9AB / 108971
{
	if (!ACTOR_HAS_ANIM_SET(bLocal_692, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_692, 1);
		SET_ANIM_SET_FOR_ACTOR(bLocal_692, "aiming_point", 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(bLocal_692, "aiming_point");
	AI_GOAL_AIM_AT_OBJECT(bLocal_692, bParam0, 0);
	return;
}

void Function_515() //Position: 0x1AA07 / 109063
{
	if (IS_VOLUME_VALID((*&Local_4 + 708)[7]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 708)[7]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 708)[8]))
		{
			Function_374(Local_4.f_432);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_432, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
			DESTROY_VOLUME((*&Local_4 + 708)[7]);
			DESTROY_VOLUME((*&Local_4 + 708)[8]);
		}
	}
	return;
}

void Function_516() //Position: 0x1AA6F / 109167
{
	iLocal_679 = 0;
	uLocal_708 = Local_4.f_1872;
	SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
	return;
}

void Function_517() //Position: 0x1AA8D / 109197
{
	vector3 vVar0;
	
	bLocal_753 = TASK_SEQUENCE_OPEN();
	Function_199((*&Local_4 + 1212)[0]);
	vVar0 = { StackVal, StackVal, Function_199((*&Local_4 + 1212)[0]) };
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1856, 1, 1, 0, 1, 0);
	TASK_GO_TO_COORD_NONSTOP(false, &vVar0, 1, 4.25f);
	TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_4 + 324)[02], bLocal_753);
	AI_ACTOR_FORCE_SPEED((*&Local_4 + 324)[02], 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 324)[02], (*&Local_4 + 708)[9], 1, 1);
	SET_ACTOR_VOLUME_PARAMETERS((*&Local_4 + 324)[02], 1, 1);
	TASK_PRIORITY_SET((*&Local_4 + 324)[02], 3);
	TASK_SEQUENCE_PERFORM((*&Local_4 + 340)[02], bLocal_753);
	AI_ACTOR_FORCE_SPEED((*&Local_4 + 340)[02], 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 340)[02], (*&Local_4 + 708)[9], 1, 1);
	SET_ACTOR_VOLUME_PARAMETERS((*&Local_4 + 340)[02], 1, 1);
	TASK_PRIORITY_SET((*&Local_4 + 340)[02], 3);
	TASK_SEQUENCE_RELEASE(bLocal_753, 1);
	return;
}

int Function_518() //Position: 0x1AB66 / 109414
{
	Function_271(&Local_4 + 32, 1238, 2, 0);
	Function_271(&Local_4 + 32, 319, 2, 0);
	Function_271(&Local_4 + 32, 239, 2, 0);
	Function_271(&Local_4 + 32, 295, 2, 0);
	Function_271(&Local_4 + 32, 285, 2, 0);
	Function_271(&Local_4 + 32, 293, 2, 0);
	Function_271(&Local_4 + 32, 257, 2, 0);
	Function_271(&Local_4 + 32, 279, 2, 0);
	Function_271(&Local_4 + 32, 301, 2, 0);
	Function_271(&Local_4 + 32, 1243, 2, 0);
	if (Function_262(&Local_4 + 32))
	{
		return 1;
	}
	return 0;
}

void Function_519() //Position: 0x1ABFA / 109562
{
	if (iLocal_553 < 4 && iLocal_553 > 105)
	{
		Function_199((*&Local_4 + 1112)[0]);
		Function_404(StackVal, StackVal, "$/cutscene/ESCALERA_1_PT_D_CS/ESCALERA_1_PT_D_CS", &uLocal_961, Function_199((*&Local_4 + 1112)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_401();
		Function_400();
	}
	switch (iLocal_553)
	{
		case 0x00000000:
			Function_333(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (Function_255(&Local_479))
			{
				if (!Function_330(Global_30685[0]))
				{
					Function_525(&Local_479);
				}
				Function_188(Global_34573, (*&Local_4 + 1112)[0], 1, 1, 1);
				Function_253(&iLocal_888);
				iLocal_553 = 1;
			}
			else
			{
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_274())
			{
				ENABLE_GAME_CAMERA_FOCUS(-4347.43f, 42.032f, 4326.633f, 0.0f, 0, 1, 1, 0);
				Function_311(0);
				Function_188(bLocal_692, (*&Local_4 + 1112)[1], 1, 1, 1);
				Function_321();
				Function_253(&iLocal_888);
				iLocal_553 = 4;
			}
			else
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			}
			break;
		
		case 0x00000004:
			if (Function_255(&Local_479))
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					return;
				}
			}
			Function_198(bLocal_552);
			Function_375(StackVal, StackVal, Function_198(bLocal_552), bLocal_552, Global_30685[0], Function_201(bLocal_552), 0);
			Function_245(1.0f);
			Function_524(Function_255(&Local_479));
			Function_518();
			SET_PLAYER_CONTROL(false, 1, 0, 0);
			STREAMING_UNLOAD_BOUNDS();
			Function_328(&uLocal_669, 0, 0, 4294967295, 4294967295);
			iLocal_553 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_523();
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				Function_27("Zomb03_KillReyesObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(bLocal_694, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_694), "BLIP_COMP_REBEL");
				Function_254(&iLocal_900, 0.0f);
				Function_363(&iLocal_891);
				iLocal_553 = 7;
			}
			break;
		
		case 0x00000007:
			Function_521();
			if (!IS_ACTOR_ALIVE(bLocal_694))
			{
				if (!Function_250(&iLocal_891))
				{
					if (!IS_PLAYER_DEADEYE(false))
					{
						Function_253(&iLocal_891);
					}
				}
				else if (Function_520(&iLocal_891, 1.0f))
				{
					ACTOR_HOLSTER_WEAPON(Global_34573, 1);
					Function_253(&iLocal_888);
					iLocal_553 = 8;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(bLocal_694, Local_4.f_1104))
			{
				KILL_ACTOR(bLocal_694);
			}
			break;
		
		case 0x00000008:
			if (Function_248(&iLocal_888) <= 2.0f)
			{
				iLocal_553 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_653[0] = 1;
				Function_175();
				Function_166(&bLocal_670);
				bLocal_552 = true;
				iLocal_553 = 0;
			}
			break;
	}
	return;
}

bool Function_520(int iParam0, float fParam1) //Position: 0x1AEA2 / 110242
{
	if (Function_250(iParam0))
	{
		if (Function_248(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_521() //Position: 0x1AEBE / 110270
{
	if (iLocal_757 <= 3)
	{
		if (Function_248(&iLocal_900) <= 12.0f)
		{
			Function_522();
			iLocal_757++;
			Function_253(&iLocal_900);
		}
	}
	return;
}

void Function_522() //Position: 0x1AEEB / 110315
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_JonNoClearZombs", "Z03_JonNoClearZombs", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1AF3A / 110394
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Z03_MaidenScreams", "Z03_MaidenScreams", 0, 2, 1, 0, 1);
		Function_341(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_524(bool bParam0) //Position: 0x1AF85 / 110469
{
	iLocal_679 = 0;
	uLocal_708 = Local_4.f_1872;
	SET_ACTOR_HEALTH(bLocal_692, GET_ACTOR_MAX_HEALTH(bLocal_692));
	if (bParam0)
	{
		Function_300();
		Function_297();
		Function_308();
		Function_277();
		TASK_CLEAR(bLocal_692);
		SNAP_ACTOR_TO_GRINGO(bLocal_692, Local_4.f_1852, "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bLocal_692, GET_GRINGO_FROM_OBJECT(Local_4.f_1852), "UseCase1", 4294967295, 1);
	}
	if (iLocal_926)
	{
		Function_297();
	}
	return;
}

void Function_525(int iParam0) //Position: 0x1AFF8 / 110584
{
	if (!Function_255(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_134(1, 0, 1);
		}
	}
	return;
}

void Function_526() //Position: 0x1B013 / 110611
{
	switch (iLocal_553)
	{
		case 0x00000006:
			if (Function_382())
			{
				iLocal_667 = 1;
			}
			Function_537(&Local_479, 1);
			bLocal_478 = CREATE_LAYOUT("zombie03_DYNAMICLAYOUT");
			Function_395();
			Function_398();
			Function_536();
			Function_533(Global_30685[0], 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			AUDIO_MUSIC_FORCE_TRACK("MEX_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_554 = CREATE_OBJECT_ITERATOR(bLocal_478);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
			if (!Function_255(&Local_479) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ"))
			{
				Function_161(1);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Global_3422[340] + 52), -28.431f, 1, true, 1);
				Global_63097 = 1;
				iLocal_553 = 7;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ"))
				{
				}
				if (!Function_255(&Local_479))
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, *(&Global_3422[340] + 52), -28.431f, 1, true, 1);
				}
				iLocal_553 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_553 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_241("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ", &iLocal_545, &Local_479, &bLocal_552, 77642, 74798, 74495, 70031, 69578, 45512, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_253(&iLocal_888);
				iLocal_553 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_261())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_259();
				}
				iLocal_553 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_531(&uLocal_556, bLocal_478);
			Function_530();
			SET_WEAPONENUM_LOCKED(18, 0);
			iLocal_553 = 0;
			bLocal_552 = iLocal_477;
			Function_528(&Local_479, &bLocal_552, &iLocal_553);
			bLocal_758 = false;
			if (iLocal_667 && (bLocal_552 != 3 || bLocal_552 != 4))
			{
				bLocal_552 = 5;
			}
			if (bLocal_552 < 2 && bLocal_552 > 5)
			{
				bLocal_758 = Function_527(Local_479);
				PRINTSTRING("Number of Zombies killed loaded by deed: ");
				PRINTINT(bLocal_758);
				PRINTNL();
				switch (bLocal_552)
				{
					case 0x00000003:
						iLocal_938 = 1;
						bLocal_758 = 15;
						break;
					
					case 0x00000004:
						iLocal_938 = 1;
						iLocal_939 = 1;
						bLocal_758 = 33;
						break;
					}
			}
			switch (bLocal_552)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

int Function_527(int iParam0) //Position: 0x1B329 / 111401
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_528(int iParam0, var uParam1, var uParam2) //Position: 0x1B343 / 111427
{
	if (Function_255(iParam0))
	{
		*uParam1 = Function_384(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*uParam2 = 0;
		}
		Function_529();
	}
	return;
}

void Function_529() //Position: 0x1B377 / 111479
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

void Function_530() //Position: 0x1B3C8 / 111560
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bLocal_873))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie0_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_873 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_873, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_874))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie0_1_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_874 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_874, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_875))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie1_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_875 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_875, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_876))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie2_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_876 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_876, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_877))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie2_0_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_877 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_877, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_878))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie3_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_878 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_878, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_879))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie4_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_879 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_879, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_880))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie5_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_880 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_880, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_881))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie6_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_881 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_881, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_882))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Zombie7_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_882 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_882, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_883))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "Toxic_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_883 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_883, iLocal_476);
		}
	}
	if (!SQUAD_IS_VALID(bLocal_884))
	{
		bVar0 = CREATE_SQUAD_IN_LAYOUT(Local_4, "ZombieBoss_Squad");
		if (IS_OBJECT_VALID(bVar0))
		{
			bLocal_884 = GET_SQUAD_FROM_OBJECT(bVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(bLocal_884, iLocal_476);
		}
	}
	if (!IS_ACTORSET_VALID(bLocal_704))
	{
		bLocal_704 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "nZombieSet", 0);
		if (!IS_ACTORSET_VALID(bLocal_704))
		{
		}
	}
	if (!IS_ACTORSET_VALID(bLocal_705))
	{
		bLocal_705 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "MustKillSet", 0);
		if (!IS_ACTORSET_VALID(bLocal_705))
		{
		}
	}
	return;
}

int Function_531(var uParam0, bool bParam1) //Position: 0x1B703 / 112387
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_532(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_532(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_532(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_532(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_532(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1BDA3 / 114083
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
	Function_81(iParam0 + 8, iParam4);
	return 1;
}

void Function_533(int iParam0, bool bParam1) //Position: 0x1BE66 / 114278
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_535(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = Function_534(iVar0);
		if (iVar1 != 34)
		{
			ENABLE_WEATHER_SPHERE(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
	}
	return;
}

int Function_534(int iParam0) //Position: 0x1BE9C / 114332
{
	if (iParam0 == 1)
	{
		return 2;
	}
	if (iParam0 == 2)
	{
		return 3;
	}
	if (iParam0 == 3)
	{
		return 4;
	}
	if (iParam0 == 4)
	{
		return 5;
	}
	if (iParam0 == 5)
	{
		return 6;
	}
	if (iParam0 == 6)
	{
		return 7;
	}
	if (iParam0 == 7)
	{
		return 8;
	}
	if (iParam0 == 8)
	{
		return 9;
	}
	if (iParam0 == 9)
	{
		return 10;
	}
	if (iParam0 == 10)
	{
		return 11;
	}
	if (iParam0 == 11)
	{
		return 12;
	}
	if (iParam0 == 12)
	{
		return 13;
	}
	if (iParam0 == 13)
	{
		return 14;
	}
	if (iParam0 == 14)
	{
		return 15;
	}
	if (iParam0 == 15)
	{
		return 16;
	}
	if (iParam0 == 16)
	{
		return 17;
	}
	if (iParam0 == 17)
	{
		return 18;
	}
	if (iParam0 == 25)
	{
		return 19;
	}
	if (iParam0 == 18)
	{
		return 20;
	}
	if (iParam0 == 19)
	{
		return 21;
	}
	if (iParam0 == 20)
	{
		return 22;
	}
	if (iParam0 == 21)
	{
		return 23;
	}
	if (iParam0 == 22)
	{
		return 24;
	}
	if (iParam0 == 23)
	{
		return 25;
	}
	if (iParam0 == 24)
	{
		return 26;
	}
	return 34;
}

int Function_535(int iParam0) //Position: 0x1BFD9 / 114649
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_536() //Position: 0x1C161 / 115041
{
	Function_269(&bLocal_486, "shotgun_semiauto01x", 0, 0);
	Function_269(&bLocal_486, "repeater_carbine01x", 0, 0);
	Function_269(&bLocal_486, "p_gen_doorStone_cs01x", 0, 0);
	Function_269(&bLocal_486, "dlc_zombiepack_Zomb03", 10, 0);
	Function_269(&bLocal_486, "dead_ground_male", 5, 0);
	Function_269(&bLocal_486, "custom/dead_ground_male", 8, 0);
	Function_269(&bLocal_486, "z_dlc_z_crypt", 5, 0);
	Function_269(&bLocal_486, "custom/z_dlc_z_crypt", 8, 0);
	Function_269(&bLocal_486, "z_dlc_z_roar", 5, 0);
	Function_269(&bLocal_486, "custom/z_dlc_z_roar", 8, 0);
	Function_269(&bLocal_486, "DLC_torch_girl", 5, 0);
	Function_269(&bLocal_486, "DLC_female_cower", 1, 0);
	Function_269(&bLocal_486, "custom/one_handed_wave", 8, 0);
	Function_269(&bLocal_486, "aiming_point", 5, 0);
	Function_269(&bLocal_486, "custom/aiming_point", 8, 0);
	Function_269(&bLocal_486, "ptl_base", 5, 0);
	Function_271(&bLocal_486, 393, 3, 0);
	Function_269(&bLocal_670, "revolver_Schofield01x", 0, 0);
	return;
}

void Function_537(int iParam0, bool bParam1) //Position: 0x1C36C / 115564
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_543(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_255(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		Function_99();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_15(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_255(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_183();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_203();
	Function_244();
	Function_193("");
	Function_542(0);
	Function_541();
	Function_154();
	Function_153();
	ENABLE_JOURNAL_REPLAY(0);
	Function_540();
	SET_PLAYER_CONTROL(false, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_234(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_334(0, 0x40400000);
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
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_539(13);
	Function_539(14);
	Function_539(25);
	Function_539(24);
	Function_539(12);
	Function_539(27);
	Function_539(26);
	Function_539(15);
	Function_538();
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

void Function_538() //Position: 0x1C7A4 / 116644
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

void Function_539(int iParam0) //Position: 0x1C818 / 116760
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_540() //Position: 0x1C838 / 116792
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

void Function_541() //Position: 0x1C875 / 116853
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_542(int iParam0) //Position: 0x1C889 / 116873
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_157())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_543(int iParam0, int iParam1) //Position: 0x1C8BE / 116926
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
			Function_544(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_544(int iParam0) //Position: 0x1C940 / 117056
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

bool Function_545(int iParam0) //Position: 0x1C98E / 117134
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_692, "Z03_JonShhotsMaid", 1, 0, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000020:
			break;
		
		case 0x00000040:
			break;
		
		case 0x00000080:
		case 0x00000100:
			switch (StackVal)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_692, "Z03_JonShhotsMaid", 1, 0, 0, 0);
					}
					break;
			}
			break;
		
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
			Function_546(iParam0, 1);
			return 1;
		}
	}
	Function_546(iParam0, 0);
	return 0;
}

void Function_546(int iParam0, bool bParam1) //Position: 0x1CA86 / 117382
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

bool Function_547(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1CAAA / 117418
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
		Function_546(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_566(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_565(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_565(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_551(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_546(iParam2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_550(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_549(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_550(&bVar17);
														strcpy(&Var18, "", 64);
														Function_548(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_193(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_549(StackVal, iParam2, bVar17);
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
	Function_546(iParam2, 0);
	return 0;
}

void Function_548(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1CE43 / 118339
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

void Function_549(var uParam0, int iParam1, bool bParam2) //Position: 0x1CF2E / 118574
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
			Function_47(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_47(&bParam2, 2);
			break;
	}
	Function_47(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_550(bool bParam0) //Position: 0x1CFA4 / 118692
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_47(&iVar0, 1);
	Function_47(&iVar0, 2);
	Function_47(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_551(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1CFC6 / 118726
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
			return Function_562(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_555(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_562(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_552(iParam0, bVar2);
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
						bVar2 = Function_562(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_552(iParam0, bVar2);
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

var Function_552(int iParam0, bool bParam1) //Position: 0x1D110 / 119056
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_554(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_553(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_554(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_553(256);
			}
		}
	}
	return bParam1;
}

bool Function_553(int iParam0) //Position: 0x1D243 / 119363
{
	return 2 | iParam0;
}

int Function_554(int iParam0) //Position: 0x1D24D / 119373
{
	return 4 | iParam0;
}

int Function_555(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1D257 / 119383
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
				iParam3 = Function_561(iParam0, iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_553(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_556(iParam0, iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_81(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_553(16);
		}
	}
	return 0;
}

int Function_556(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D309 / 119561
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_560(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_559(iVar0, 3, 1, bParam3))
			{
				if (!Function_565(iParam0, 8, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_559(iVar0, 2, 1, bParam3))
			{
				if (!Function_565(iParam0, 32, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_559(iVar0, 1, 1, bParam3))
			{
				if (!Function_565(iParam0, 64, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_559(iVar0, 3, 1, bParam3))
			{
				if (!Function_565(iParam0, 128, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_559(iVar0, 1, 1, bParam3))
			{
				if (!Function_565(iParam0, 1024, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_559(iVar0, 1, 1, bParam3))
			{
				if (!Function_565(iParam0, 1024, 1))
				{
					return Function_558(64, 1024, bParam2);
				}
			}
			return Function_557(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_557(int iParam0, int iParam1, bool bParam2) //Position: 0x1D4C3 / 120003
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_558(int iParam0, int iParam1, bool bParam2) //Position: 0x1D4D8 / 120024
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_559(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D4ED / 120045
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_560(int iParam0) //Position: 0x1D50A / 120074
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

int Function_561(var uParam0, int iParam1, bool bParam2) //Position: 0x1D579 / 120185
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_560(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_559(iVar0, 3, 1, bParam2))
			{
				if (!Function_565(uParam0, 8, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000009:
			if (Function_559(iVar0, 3, 1, bParam2))
			{
				if (!Function_565(uParam0, 8, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x0000006E:
			if (Function_559(iVar0, 2, 1, bParam2))
			{
				if (!Function_565(uParam0, 16, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x0000005B:
			if (Function_559(iVar0, 2, 1, bParam2))
			{
				if (!Function_565(uParam0, 32, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000031:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(uParam0, 64, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000007:
			if (Function_559(iVar0, 3, 1, bParam2))
			{
				if (!Function_565(uParam0, 128, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000008:
			if (Function_559(iVar0, 2, 1, bParam2))
			{
				if (!Function_565(uParam0, 256, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000014:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(uParam0, 512, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000018:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(uParam0, 512, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000057:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(uParam0, 1024, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000058:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(uParam0, 1024, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_562(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1D794 / 120724
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
						return Function_561(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_565(iParam0, 2, 1))
					{
						return Function_554(8);
					}
					return Function_553(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_565(iParam0, 4, 1))
					{
						return Function_554(16);
					}
					return Function_553(16);
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
							return Function_556(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_565(iParam0, 2, 1))
						{
							return Function_554(128);
						}
						return Function_553(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_565(iParam0, 4, 1))
						{
							return Function_554(256);
						}
						return Function_553(256);
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
						return Function_556(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_565(iParam0, 2, 1))
					{
						return Function_554(8);
					}
					return Function_553(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_565(iParam0, 4, 1))
					{
						return Function_554(16);
					}
					return Function_553(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_564(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_565(iParam0, 2, 1))
					{
						return Function_554(8);
					}
					return Function_553(8);
				}
				if (!Function_565(iParam0, 4, 1))
				{
					return Function_554(16);
				}
				return Function_553(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_556(iParam0, uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_81(&iParam4, 2);
								Function_47(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_563(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_553(128);
							}
							if (!Function_565(iParam0, 2, 1))
							{
								return Function_554(8);
							}
							return Function_553(8);
						}
						if (iParam4 == 2)
						{
							if (Function_563(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_553(256);
							}
							if (!Function_565(iParam0, 4, 1))
							{
								return Function_554(16);
							}
							return Function_553(16);
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

bool Function_563(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1DA53 / 121427
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

int Function_564(int iParam0, var uParam1, bool bParam2) //Position: 0x1DB0C / 121612
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_560(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_559(iVar0, 2, 1, bParam2))
			{
				if (!Function_565(iParam0, 16, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x0000005B:
			if (Function_559(iVar0, 2, 1, bParam2))
			{
				if (!Function_565(iParam0, 32, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000057:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(iParam0, 1024, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		case 0x00000058:
			if (Function_559(iVar0, 1, 1, bParam2))
			{
				if (!Function_565(iParam0, 1024, 1))
				{
					return Function_554(64);
				}
			}
			return Function_553(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_565(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DC20 / 121888
{
	if (bParam2)
	{
		if (!Function_14(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(iParam0->f_40, bParam1);
}

int Function_566(bool bParam0) //Position: 0x1DC48 / 121928
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_59());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_59());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_567(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1DC79 / 121977
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_45())
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

void Function_568(int iParam0) //Position: 0x1DCB7 / 122039
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

