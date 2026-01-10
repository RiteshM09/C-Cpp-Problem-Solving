// Four players are playing a tournament of Chess with round 
// robin method (each player will play with every other player). 
// Each win has 2 points, draw has 1 point and loose has 0 points. 
// Declare a score_board two dimensional array to store the scores 
// of the players agains each player.

// 1) define a function to update score_board after each match result.
// 2) define a function to display score_ _board. 
/* 3) define a function which returns the score of a specific player
   4) define a function to find the winner of the tournament.
   5) define a function to display rank of the players.
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
int winner(int score_board[4][4]);
int get_player_score(int player,int score_board[4][4]);
void display_score_board(int score_board[4][4]);
void Player_Ranking(int score_board[4][4]);
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

    printf("\n");
    for(int i=0;i<4;i++)
        printf("Player %d has total points = %d\n", i, get_player_score(i, score_board));

    //display winner 
    printf("\n WINNER of tournament is : player[%d]", winner(score_board));

    printf("\n Player Ranking :");
    Player_Ranking(score_board);

    printf("\n");
    
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
int get_player_score(int player,int score_board[4][4]){
    // player’s points stored In that player’s ROW of the score_board matrix 
    int total=0;

     for(int i = 0; i < 4; i++)
     {
        
        total = total + score_board[player][i];
     }
     return total;
    printf("\n");
}
int winner(int score_board[4][4])
{       
   
    int player=0, player_score = 0;
    int existing_score = get_player_score(player,score_board);// 1st player score  // pass player 0 value in existing score 
    // now check if next players(i.e p1..)  points are greater, greater points goes in winner variable 
    int winner = player ;
    for(int player=1 ; player< 4 ; player++)
    {
        player_score = get_player_score(player, score_board);
        if( player_score > existing_score )  // if next player has more points 
        {
              winner = player; // change the winner val to current player ( with greater score )
              existing_score = player_score; // & update the old score to greater player score
        }
          
    }

    return winner;

}
void sort(int [],int,int []);
void sort(int ar[],int n,int index[])
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]<ar[j+1])
            {
                temp=ar[j]; 
                ar[j]=ar[j+1];
                ar[j+1]=temp;

            // also swap the index
                int temp2=index[j];
                index[j]=index[j+1];
                index[j+1]=temp2;
            }
        }
    }
}
void Player_Ranking(int score_board[4][4]){
    // sort player in descending order point wise
    // 1) player[0] -> 5 points
    // 2) player[3] -> 4 points
    // 3) player[2] -> 2 points
    // 4) player[3] -> 1 points 

    int score[4];
    int player[4];
    int player_index[4];

    for(int p=0;p<4;p++){
        score[p]  = get_player_score(p, score_board);
        player[p] = score[p];
        player_index[p] = p;
    }      
    // in player[4] array we have 0 1 2 3 -> 5 1 2 4
    // &in score[4] array we have 0 1 2 3 -> 5 1 2 4 then we sort it
    // score[4] becomes  0 1 2 3 -> 5 4 2 1

    sort(score,4,player_index); // i.e, score array is sorted we have 5,4,2,1 
    printf("\n");
    for(int i=0;i<4;i++)
    {
          printf("%d). Player[%d] -> %d points ",i+1, player_index[i] , score[i]);
          printf("\n");
    }
      
    


}