#include "board.h"
#include <stdio.h>
#include <io.h>
#include <fcntl.h>



void reset_board(struct board *board) {
    board->board[0] = W_ROOK;
    board->board[1] = W_KNIGHT;
    board->board[2] = W_BISHOP;
    board->board[3] = W_QUEEN;
    board->board[4] = W_KING;
    board->board[5] = W_BISHOP;
    board->board[6] = W_KNIGHT;
    board->board[7] = W_ROOK;
#pragma unroll
    for (unsigned int i = 8; i < 16; i++) {
        board->board[i] = W_PAWN;
    }
#pragma unroll
    for (unsigned int i = 0; i < 8; i++) {
        board->board[6 * 8 + i] = B_PAWN;
    }

    board->board[7 * 8 + 0] = B_ROOK;
    board->board[7 * 8 + 1] = B_KNIGHT;
    board->board[7 * 8 + 2] = B_BISHOP;
    board->board[7 * 8 + 3] = B_QUEEN;
    board->board[7 * 8 + 4] = B_KING;
    board->board[7 * 8 + 5] = B_BISHOP;
    board->board[7 * 8 + 6] = B_KNIGHT;
    board->board[7 * 8 + 7] = B_ROOK;

}

void print_board(struct board *board) {
    for (unsigned int j = 8; j >= 0; j--) {
        for (unsigned int i = 0; i < 8; i++) {
            switch (board->board[i + j * 8]) {
                case W_PAWN:
                    wprintf(L"♙ ");
                    break;
                case W_ROOK:
                    wprintf(L"♖ ");
                    break;
                case W_BISHOP:
                    wprintf(L"♗ ");
                    break;
                case W_KNIGHT:
                    wprintf(L"♘ ");
                    break;
                case W_KING:
                    wprintf(L"♔ ");
                    break;
                case W_QUEEN:
                    wprintf(L"♕ ");
                    break;
                case B_PAWN:
                    wprintf(L"♟ ");
                    break;
                case B_ROOK:
                    wprintf(L"♜ ");
                    break;
                case B_BISHOP:
                    wprintf(L"♝ ");
                    break;
                case B_KNIGHT:
                    wprintf(L"♞ ");
                    break;
                case B_KING:
                    wprintf(L"♚ ");
                    break;
                case B_QUEEN:
                    wprintf(L"♛ ");
                    break;
                default:
                    wprintf(L" ");
                    break;
            }
        }


    }

}


