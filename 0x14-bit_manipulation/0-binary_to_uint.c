#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @*b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int v;

	v = 0;
	if (!b)
		return (0);
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
			return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		v <<= 1;
		if (b[u] == '1')
			v += 1;
	}
	return (v);
}
