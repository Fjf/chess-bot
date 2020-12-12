#ifndef CHESS_BOT_BOARD_H
#define CHESS_BOT_BOARD_H

struct board {

};

void init_board(struct board* board);
void reset_board(struct board* board);
int load_from_pgn(struct board* board, char* pgn);
void print_board(struct board* board);
void copy_board(struct board* in, struct board* board);


#endif //CHESS_BOT_BOARD_H