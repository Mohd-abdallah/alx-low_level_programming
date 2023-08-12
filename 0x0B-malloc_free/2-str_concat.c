#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 * if NULL is passed, treat it as an empty string.
 * The function should return NULL on failure.
 * @s1: strig input
 * @s2: string input
 * Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2 + 1;
	char *new_srt;

	if (s1 == NULL) {
		s1 = "";
	}
	if (s2 == NULL) {
		s2 = "";
	}
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL) {
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);
	return (new_str);
}
