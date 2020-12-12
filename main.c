#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <fcntl.h>

#include "board.h"


int main(void) {
    // Code

    _setmode(_fileno(stdout), _O_U16TEXT);

    struct board* board = calloc(1, sizeof(struct board));
    reset_board(board);


    print_board(board);
    wprintf(L"GOT HERE");
    free(board);
    return 0;
}



