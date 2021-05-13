//Problem Code: TCTCTOE

/*
Tic-tac-toe is a game played between two players on a 3×3 grid. In a turn, a player chooses an empty cell and places their symbol on the cell. The players take alternating turns, where the player with the first turn uses the symbol X and the other player uses the symbol O. The game continues until there is a row, column, or diagonal containing three of the same symbol (X or O), and the player with that token is declared the winner. Otherwise if every cell of the grid contains a symbol and nobody won, then the game ends and it is considered a draw.
You are given a tic-tac-toe board A after a certain number of moves, consisting of symbols O, X, and underscore(_). Underscore signifies an empty cell.
Print
1: if the position is reachable, and the game has drawn or one of the players won.
2: if the position is reachable, and the game will continue for at least one more move.
3: if the position is not reachable.
Note:
Starting from an empty board, reachable position means that the grid is possible after a finite number of moves in the game where the players may or may not be playing optimally.
The answer for each testcase should be with respect to the present position and independent of the results in the further successive moves.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains 3 lines of input where each line contains a string describing the state of the game in ith row.

Output
For each test case, output in a single line 1, 2 or 3 as described in the problem.
*/


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fast_cin() \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL)


string s[3];
int no_x, no_o, no_space;

void count() {
    no_x = no_o = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (s[i][j] == 'X')
                no_x++;
            else if (s[i][j] == 'O')
                no_o++;
        }

no_space = 9 - no_x - no_o;
}

int win_check(char symbol) {
    if (s[0][0] == symbol && s[0][0] == s[1][1] && s[1][1] == s[2][2]) //diag 1
        return 1;
    else if (s[0][2] == symbol && s[0][2] == s[1][1] && s[1][1] == s[2][0]) //diag 2
        return 1;
    for (int i = 0; i < 3; i++) {
        if (s[i][0] == symbol && s[i][0] == s[i][1] && s[i][1] == s[i][2]) //col
            return 1;
        else if (s[0][i] == symbol && s[0][i] == s[1][i] && s[1][i] == s[2][i]) //row
            return 1;
    }
return 0;
}

int check() {
    if (no_x < no_o) //since 1st player gives "X" hence O<=X else not possible
        return 3;
    if (no_x > no_o + 1) //no_x and no_o will have a difference of 0 or 1. Else someone cheated.
        return 3;
int x_win = win_check('X');
int o_win = win_check('O');
    if (x_win && o_win) //both cannot win
        return 3;
    if (x_win && no_x == no_o) //if X wins then count of O will be 1 less
        return 3;
    if (o_win && no_x > no_o) //if O wins then count of X will be = count of O
        return 3;
    if (x_win || o_win)
        return 1;
    if (no_space == 0) //draw
        return 1;
        
return 2;
}

void input() {
for (int i = 0; i < 3; i++) cin >> s[i];
count();
cout << check() << endl;
}

int main() {
fast_cin();
int T;
cin >> T;
for (int i = 1; i <= T; i++) 
    input(); 
return 0;
}
