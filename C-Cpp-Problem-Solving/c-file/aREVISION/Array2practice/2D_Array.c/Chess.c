// Four players are playing a tournament of Chess with round 
// robin method (each player will play with every other player). 
// Each win has 2 points, draw has 1 point and loose has 0 points. 
// Declare a score_board two dimensional array to store the scores 
// of the players agains each player.

// 1) define a function to update score_board after each match result.
// 2) define a function to display score_ _board. 
/*

total matches : matches 6
p0, p1, p2, p3

p0 vs p1 - 
p0 vs p2 - 
p0 vs p3 -
p1 vs p2 - 
p1 vs p3 - 
p2 vs p3 - 

*/
#include<stdio.h>
void update_Score_board(int a,int b,int result,int score_board[4][4]);
void input();
void display_score_board(int score_board[4][4]);
void input()
{
    int score_board[4][4]={0}; // initially all val player val are 0

    // pass p1, p2, result, score_board
    // for result pass : -1 0 1
    //-1 1st player lost
    // 0 draw
    // 1 1st player won

    // 0 for p1 ; 1 for p2
    // 2 for p3 ; 3 for p4
    update_Score_board(0,1,1,score_board); // a,b draw
    update_Score_board(0,2,0,score_board); 
    update_Score_board(0,3,1,score_board); 
    update_Score_board(1,2,0,score_board);
    update_Score_board(1,3,-1,score_board);
    update_Score_board(2,3,-1,score_board);

    printf("\n");
    display_score_board(score_board);
}
int main()
{
    // win - 2 , draw -1 , loose - 0
    // p1 vs p2, p3 vs p4
    // 
    input();
    
    return 0;
}
void update_Score_board(int a,int b,int result,int score_board[4][4])
{
    //win has 2 points, draw has 1 point and loose has 0 points.
    
    // score_board[row][column]
    // score_board[player a][player b]
    // Cell value → points scored
    if(result == 1)
    {
        score_board[a][b] = 2;  // Player 1 scored 2 vs Player 2
        score_board[b][a] = 0;  // player 2 scored 0 vs player 1
    }
    if(result == 0)
    {
        score_board[a][b] = 1; // player 1 scored 0 vs player 2
        score_board[b][a] = 1; // player 2 scored 0 vs player 1
    }
    if(result == -1)
    {
        score_board[a][b] = 0; // a lost 
        score_board[b][a] = 2; // b won
    }
}
void display_score_board(int score_board[4][4])
{
    int i,j;
    printf("\n Score board : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",score_board[i][j]);
        }
        printf("\n");
    }
}