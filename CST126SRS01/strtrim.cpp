#include "stdafx.h"
#include <cctype>
#include <cstddef>
#include <cstring>
#include "strtrim.h"

char * strtrim(char str[])
{
	char * indexPrefix = str; 
	int y = 0;
	if (indexPrefix == nullptr || indexPrefix == '\0')
	{
		return str; 
	}
	while (isspace(* indexPrefix))
	{
		indexPrefix++; 
	}
	memmove(str, indexPrefix, sizeof indexPrefix); 
	char * indexSuffix = strchr(str, '\0');
	while (isspace (* indexSuffix-1))
	{
		indexSuffix--; 
	}
	indexSuffix = indexSuffix + 1;
	*indexSuffix = '\0';
	return str; 
}


