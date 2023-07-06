#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 (if big endian) or 1 (if little endian)
 */
int get_endianness(void)
{
	uint16_t num = 0x01;
	uint8_t *byte = (uint8_t *)&num;

	return ((byte[0] == 0x01) ? 1 : 0);
}
