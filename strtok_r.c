#include "monty.h"

/**
 * Function name:
 * 	strtok_r
 * Description:
 * 	Miniature implementation of strtok_r using functions
 * 	from the string header
 * Return:
 * 	- NULL
 * 	- token
 */

char* strtok_r(char* str, const char* delim, char** saveptr)
{
	char* token = str;
	
	if (str == NULL)
		str = *saveptr;
	
	str += strspn(str, delim);

	if (*str == '\0')
        	return NULL;
	
	str = strpbrk(token, delim);

	if (str == NULL)
		*saveptr = strchr(token, '\0');
       	else 
	{
        	*str = '\0';
		*saveptr = str + 1;
	}
	return token;
}

