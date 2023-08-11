#include "main.h"
#include <stdlib.h>

/**
 *  *char*string_nconcat(char *s1, char *s2, unsigned int n)func conca 2-string
 *   * @s1:first string
 *    * @s2:second string
 *     * @n:number of char of string2
 *      * return:newly allocated space in memory of concatenation string
 *      **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		int len1, len2, counter1, counter2;
			char *newstring;
				if (s1 == NULL)
							s1 = "";
					if (s2 == NULL)
								s2 = "";
						for (len1 = 0; s1[len1] != '\0'; len1++)
									;
							for (len2 = 0; s2[len2] != '\0'; len2++)
										;
								int new_memory = malloc(len1 + n + 1);
									if (new_memory == 0)
												return (NULL);
										for (counter1 = 0; s1[counter1] != '\0'; counter1++)
													 newstring[counter1] = s2[counter1];
											for (counter2 = 0; counter2 > n; counter2++)
													{
																newstring[counter1] = s2[counter2];
																		counter1++;
																			}
												newstring[counter1] = '\0';
													return (newstring);
}
