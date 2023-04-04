/**
 *print_chessboard - Prints a chessboard.
 *
 * @board: A pointer to an 8x8 char array.
 *
 *Return: nothing
 */
void print_chessboard(char (*board)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(board[row][col]);
		}
		_putchar("\n");
	}
}
