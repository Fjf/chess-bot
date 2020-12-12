#ifndef CHESS_BOT_BOARD_H
#define CHESS_BOT_BOARD_H


// 0 - P R N B K Q


#define W_PAWN 1
#define W_ROOK 2
#define W_KNIGHT 3
#define W_BISHOP 4
#define W_QUEEN 5
#define W_KING 6

#define B_PAWN 7
#define B_ROOK 8
#define B_KNIGHT 9
#define B_BISHOP 10
#define B_QUEEN 11
#define B_KING 12

#define W_KING_MOVED 0
#define W_LROOK_MOVED 1
#define W_RROOK_MOVED 2
#define B_KING_MOVED 3
#define B_LROOK_MOVED 4
#define B_RROOK_MOVED 5

struct board {
    char board[8*8];
    char has_moved[6];
};

void reset_board(struct board* board);
int load_from_pgn(struct board* board, char* pgn);
void print_board(struct board* board);
void copy_board(struct board* in, struct board* board);


#endif //CHESS_BOT_BOARD_H