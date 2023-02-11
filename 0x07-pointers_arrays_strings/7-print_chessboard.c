/**
*print_chessboard - Print a whole as mf chessboard i guess
*@a: rows and columns in an array of pieces
*Return: cool ah chessboard
*/

#include "holberton.h"

void print_chessboard(char (*a)[8])
{
	int i, c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
		_putchar('\n');
	}
}
