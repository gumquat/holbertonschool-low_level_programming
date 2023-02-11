/**
*print_chessboard - Print a whole as mf chessboard i guess
*@a: rows and columns in an array of pieces
*Return: cool ah chessboard
*/

#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
