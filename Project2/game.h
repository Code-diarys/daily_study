#define ROW 3
#define COL 3

//初始化数组
void Initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col) ;
void PlayerMove(char board[ROW][COL], int row, int col); 
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);