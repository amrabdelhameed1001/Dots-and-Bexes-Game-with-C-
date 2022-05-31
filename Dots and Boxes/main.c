#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   printf("                                                  Main Menu\n");
   printf("Enter '1' for 1 player mode or '2' for 2 players mode ");
   scanf("%d",&x);
   system("cls");
   if(x==2)
   {
    printf("Enter '1' for beginner mode or '2' for expert mode ");
    scanf("%d",&y);
    system("cls");
    if(y==1)
    {
   system("");
   int i,j,valid=1;
   int arrUndo1[2][12];
   int arrUndo2[2][12];
   int m=0;
   int count1=1,count2=1,count3=1,count4=1;
   char arr[5][10];
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<10;j++)
       {
        arr[i][j]=' ';
       }
   }
    arr[0][0]=254;
    arr[0][2]=254;
    arr[0][4]=254;
    arr[2][0]=254;
    arr[2][2]=254;
    arr[2][4]=254;
    arr[4][0]=254;
    arr[4][2]=254;
    arr[4][4]=254;
    printf("                                                      0 1 2 3 4\n");
    for(int i=0;i<5;i++)
    {   printf("                                                    ");
        printf("%d ",i);
        for(int j=0;j<5;j++)
        {
         printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
  int n=0,playerOnePoints=0,playerTwoPoints=0,playerOneTurn=1,playerOneMoves=0,playerTwoMoves=0;
  printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
  printf("Player 2's points = %d\n",playerTwoPoints);
  printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
  printf("Player 2's moves = %d\n",playerTwoMoves);
  printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
  printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
  while(n<12)
  {
   if(playerOneTurn==1)
   {
  printf("\033[0;34m" "Player 1 turn (Blue)\n" "\033[0m");
  while(valid)
  {
  printf("Enter row ");
  scanf("%d", &i);
  printf("Enter col ");
  scanf("%d", &j);
  playerOneTurn=0;
  if((i==1&&j==1)||(i==1&&j==3)||(i==3&&j==1)||(i==3&&j==3))
  {
    valid=1;
    continue;
  }
  if(i==0&&j==0)
  {
    if(n!=0)
    {
    arr[arrUndo1[0][m-1]][arrUndo2[0][m-1]]=' ';
    arr[arrUndo1[0][m-1]][(arrUndo2[0][m-1])+5]=' ';
    playerOneTurn=0;
    if(count1==0)
    {
     if((arr[0][1]==' ')||(arr[1][0]==' ')||(arr[1][2]==' ')||(arr[2][1]==' '))
    {
      if(arr[1][6]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][6]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
    arr[1][1]=' ';
    arr[1][6]=' ';
    count1=1;
     }
  }
  if(count2==0)
  {
  if((arr[0][3]==' ')||(arr[1][2]==' ')||(arr[1][4]==' ')||(arr[2][3]==' '))
  {
      if(arr[1][8]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][8]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][3]=' ';
   arr[1][8]=' ';
   count2=1;
  }
  }
  if(count3==0)
  {
  if((arr[3][0]==' ')||(arr[2][1]==' ')||(arr[3][2]==' ')||(arr[4][1]==' '))
  {
   if(arr[3][6]==1)
   {
     playerOneTurn=1;
     playerOnePoints--;
   }
   else if(arr[3][6]==2)
   {
     playerOneTurn=0;
     playerTwoPoints--;
   }
   arr[3][1]=' ';
   arr[3][6]=' ';
   count3=1;
  }
  }
  if(count4==0)
  {
  if((arr[3][2]==' ')||(arr[3][4]==' ')||(arr[2][3]==' ')||(arr[4][3]==' '))
  {
    if(arr[3][8]==1)
   {
     playerOneTurn=1;
     playerOnePoints--;
   }
   else if(arr[3][8]==2)
   {
     playerOneTurn=0;
     playerTwoPoints--;
   }
   arr[3][3]=' ';
   arr[3][8]=' ';
   count4=1;
  }
  }
    playerTwoMoves--;
    n--;
    m--;
    valid=0;
    }
  }
  if(j<5)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4)&&(j==1||j==3))
  {
   arr[i][j]=205;
   arr[i][j+5]=1;
   arrUndo1[0][m]=i;
   arrUndo1[1][m]=1;
   arrUndo2[0][m]=j;
   arrUndo2[1][m]=1;
   m++;
   n+=1;
   valid=0;
   playerOneMoves++;
  }
  else if((j==0||j==2||j==4)&&(i==1||i==3))
  {
    arr[i][j]=186;
    arr[i][j+5]=1;
    arrUndo1[0][m]=i;
    arrUndo1[1][m]=1;
    arrUndo2[0][m]=j;
    arrUndo2[1][m]=1;
    m++;
    n+=1;
    valid=0;
    playerOneMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][6]=1;
    playerOneTurn=1;
    playerOnePoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][8]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[3][0]!=' ')&&(arr[2][1]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][6]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[2][3]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][8]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count4=0;
  }
  }
   system("cls");
   printf("                                                      0 1 2 3 4\n");
   for(int i=0;i<5;i++)
   {   printf("                                                    ");
       printf("%d ",i);
       for(int j=0;j<5;j++)
       {
           if(arr[i][j+5]==1)
           {
            printf("\033[0;34m");
           }
           else if(arr[i][j+5]==2)
           {
            printf("\033[0;31m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Player 2's points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Player 2's moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
    printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
   }
    else if(playerOneTurn==0)
   {
  printf("\033[0;31m" "                                                                                 Player 2 turn (Red)\n" "\033[0m");
  while(valid)
  {
  printf("                                                                                 Enter row ");
  scanf("%d", &i);
  printf("                                                                                 Enter col ");
  scanf("%d", &j);
  playerOneTurn=1;
  if((i==1&&j==1)||(i==1&&j==3)||(i==3&&j==1)||(i==3&&j==3))
  {
    valid=1;
    continue;
  }
  if(i==0&&j==0)
  {
    if(n!=0)
    {
    arr[arrUndo1[0][m-1]][arrUndo2[0][m-1]]=' ';
    arr[arrUndo1[0][m-1]][(arrUndo2[0][m-1])+5]=' ';
    playerOneTurn=1;
    if(count1==0)
    {
     if((arr[0][1]==' ')||(arr[1][0]==' ')||(arr[1][2]==' ')||(arr[2][1]==' '))
    {
      if(arr[1][6]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][6]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
    arr[1][1]=' ';
    arr[1][6]=' ';
    count1=1;
     }
  }
    if(count2==0)
  {
  if((arr[0][3]==' ')||(arr[1][2]==' ')||(arr[1][4]==' ')||(arr[2][3]==' '))
  {
      if(arr[1][8]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][8]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][3]=' ';
   arr[1][8]=' ';
   count2=1;
  }
  }
  if(count3==0)
  {
  if((arr[3][0]==' ')||(arr[2][1]==' ')||(arr[3][2]==' ')||(arr[4][1]==' '))
  {
   if(arr[3][6]==1)
   {
     playerOneTurn=1;
     playerOnePoints--;
   }
   else if(arr[3][6]==2)
   {
     playerOneTurn=0;
     playerTwoPoints--;
   }
   arr[3][1]=' ';
   arr[3][6]=' ';
   count3=1;
  }
  }
  if(count4==0)
  {
  if((arr[3][2]==' ')||(arr[3][4]==' ')||(arr[2][3]==' ')||(arr[4][3]==' '))
  {
    if(arr[3][8]==1)
   {
     playerOneTurn=1;
     playerOnePoints--;
   }
   else if(arr[3][8]==2)
   {
     playerOneTurn=0;
     playerTwoPoints--;
   }
   arr[3][3]=' ';
   arr[3][8]=' ';
   count4=1;
  }
  }
    playerOneMoves--;
    n--;
    m--;
    valid=0;
    }
  }
  if(j<5)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4)&&(j==1||j==3))
  {
   arr[i][j]=205;
   arr[i][j+5]=2;
   arrUndo1[0][m]=i;
   arrUndo1[1][m]=2;
   arrUndo2[0][m]=j;
   arrUndo2[1][m]=2;
   m++;
   n+=1;
   valid=0;
   playerTwoMoves++;
  }
  else if((j==0||j==2||j==4)&&(i==1||i==3))
  {
    arr[i][j]=186;
    arr[i][j+5]=2;
    arrUndo1[0][m]=i;
    arrUndo1[1][m]=2;
    arrUndo2[0][m]=j;
    arrUndo2[1][m]=2;
    m++;
    n+=1;
    valid=0;
    playerTwoMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][6]=2;
    playerOneTurn=0;
    playerTwoPoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][8]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[3][0]!=' ')&&(arr[2][1]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][6]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[2][3]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][8]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count4=0;
  }
  }
  system("cls");
  printf("                                                      0 1 2 3 4\n");
   for(int i=0;i<5;i++)
   {   printf("                                                    ");
       printf("%d ",i);
       for(int j=0;j<5;j++)
       {
           if(arr[i][j+5]==2)
           {
            printf("\033[0;31m");
           }
           else if(arr[i][j+5]==1)
           {
             printf("\033[0;34m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Player 2's points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Player 2's moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
    printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
   }
  }
  if(playerOnePoints>playerTwoPoints)
  {
      printf("Player 1 win\n");
  }
  else if(playerOnePoints<playerTwoPoints)
  {
      printf("Player 2 win\n");
  }
  else
  {
    printf("Draw\n");
  }
    int q;
    printf("Enter '0' to Exit ");
    scanf("%d",&q);
    return 0;
   }
   else if(y==2)
   {
   system("");
   int i,j,valid=1;
   int arrUndo1[2][60];
   int arrUndo2[2][60];
   int m=0;
   int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
   int count11=1,count12=1,count13=1,count14=1,count15=1,count16=1,count17=1,count18=1,count19=1;
   int count20=1,count21=1,count22=1,count23=1,count24=1,count25=1;
   char arr[11][21];
   for(int i=0;i<11;i++)
   {
       for(int j=0;j<21;j++)
       {
        arr[i][j]=' ';
       }
   }
    arr[0][0]=254;
    arr[0][2]=254;
    arr[0][4]=254;
    arr[0][6]=254;
    arr[0][8]=254;
    arr[0][10]=254;
    arr[2][0]=254;
    arr[2][2]=254;
    arr[2][4]=254;
    arr[2][6]=254;
    arr[2][8]=254;
    arr[2][10]=254;
    arr[4][0]=254;
    arr[4][2]=254;
    arr[4][4]=254;
    arr[4][6]=254;
    arr[4][8]=254;
    arr[4][10]=254;
    arr[6][0]=254;
    arr[6][2]=254;
    arr[6][4]=254;
    arr[6][6]=254;
    arr[6][8]=254;
    arr[6][10]=254;
    arr[8][0]=254;
    arr[8][2]=254;
    arr[8][4]=254;
    arr[8][6]=254;
    arr[8][8]=254;
    arr[8][10]=254;
    arr[10][0]=254;
    arr[10][2]=254;
    arr[10][4]=254;
    arr[10][6]=254;
    arr[10][8]=254;
    arr[10][10]=254;
    printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
    for(int i=0;i<11;i++)
    {   printf("                                             ");
        if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
        for(int j=0;j<11;j++)
        {
         printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
  int n=0,playerOnePoints=0,playerTwoPoints=0,playerOneTurn=1,playerOneMoves=0,playerTwoMoves=0;
  printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
  printf("Player 2's points = %d\n",playerTwoPoints);
  printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
  printf("Player 2's moves = %d\n",playerTwoMoves);
  printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
  printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
  while(n<60)
  {
   if(playerOneTurn==1)
   {
  printf("\033[0;34m" "Player 1 turn (Blue)\n" "\033[0m");
  while(valid)
  {
  printf("Enter row ");
  scanf("%d", &i);
  printf("Enter col ");
  scanf("%d", &j);
  playerOneTurn=0;
  if((i==1&&j==1)||(i==1&&j==3)||(i==1&&j==5)||(i==1&&j==7)||(i==1&&j==9)||(i==3&&j==1)||(i==3&&j==3)||(i==3&&j==5)||(i==3&&j==7)||(i==3&&j==9)||(i==5&&j==1)||(i==5&&j==3)||(i==5&&j==5))
  {
    valid=1;
    continue;
  }
   if((i==5&&j==7)||(i==5&&j==9)||(i==7&&j==1)||(i==7&&j==3)||(i==7&&j==5)||(i==7&&j==7)||(i==7&&j==9)||(i==9&&j==1)||(i==9&&j==3)||(i==9&&j==5)||(i==9&&j==7)||(i==9&&j==9))
  {
    valid=1;
    continue;
  }
  if(i==0&&j==0)
  {
    if(n!=0)
    {
    arr[arrUndo1[0][m-1]][arrUndo2[0][m-1]]=' ';
    arr[arrUndo1[0][m-1]][(arrUndo2[0][m-1])+11]=' ';
    playerOneTurn=0;
    if(count1==0)
  {
  if((arr[0][1]==' ')||(arr[1][0]==' ')||(arr[1][2]==' ')||(arr[2][1]==' '))
  {
      if(arr[1][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
    arr[1][1]=' ';
    arr[1][12]=' ';
    count1=1;
  }
   }
   if(count2==0)
  {
  if((arr[0][3]==' ')||(arr[1][2]==' ')||(arr[1][4]==' ')||(arr[2][3]==' '))
  {
    if(arr[1][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][3]=' ';
   arr[1][14]=' ';
   count2=1;
  }
  }
  if(count3==0)
  {
  if((arr[0][5]==' ')||(arr[1][4]==' ')||(arr[1][6]==' ')||(arr[2][5]==' '))
  {
      if(arr[1][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][5]=' ';
   arr[1][16]=' ';
   count3=1;
  }
  }
  if(count4==0)
  {
  if((arr[0][7]==' ')||(arr[1][6]==' ')||(arr[1][8]==' ')||(arr[2][7]==' '))
  {
     if(arr[1][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][7]=' ';
   arr[1][18]=' ';
   count4=1;
  }
  }
  if(count5==0)
  {
  if((arr[0][9]==' ')||(arr[1][8]==' ')||(arr[1][10]==' ')||(arr[2][9]==' '))
  {
      if(arr[1][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][9]=' ';
   arr[1][20]=' ';
   count5=1;
  }
  }
  if(count6==0)
  {
  if((arr[2][1]==' ')||(arr[3][0]==' ')||(arr[3][2]==' ')||(arr[4][1]==' '))
  {
     if(arr[3][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][1]=' ';
   arr[3][12]=' ';
   count6=1;
  }
  }
  if(count7==0)
  {
  if((arr[2][3]==' ')||(arr[3][2]==' ')||(arr[3][4]==' ')||(arr[4][3]==' '))
  {
     if(arr[3][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][3]=' ';
   arr[3][14]=' ';
   count7=1;
  }
  }
  if(count8==0)
  {
  if((arr[2][5]==' ')||(arr[3][4]==' ')||(arr[3][6]==' ')||(arr[4][5]==' '))
  {
     if(arr[3][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][5]=' ';
   arr[3][16]=' ';
   count8=1;
  }
  }
  if(count9==0)
  {
  if((arr[2][7]==' ')||(arr[3][6]==' ')||(arr[3][8]==' ')||(arr[4][7]==' '))
  {
      if(arr[3][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][7]=' ';
   arr[3][18]=' ';
   count9=1;
  }
  }
  if(count10==0)
  {
  if((arr[2][9]==' ')||(arr[3][8]==' ')||(arr[3][10]==' ')||(arr[4][9]==' '))
  {
    if(arr[3][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][9]=' ';
   arr[3][20]=' ';
   count10=1;
  }
  }
  if(count11==0)
  {
  if((arr[4][1]==' ')||(arr[5][0]==' ')||(arr[5][2]==' ')||(arr[6][1]==' '))
  {
     if(arr[5][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][1]=' ';
   arr[5][12]=' ';
   count11=1;
  }
  }
  if(count12==0)
  {
  if((arr[4][3]==' ')||(arr[5][2]==' ')||(arr[5][4]==' ')||(arr[6][3]==' '))
  {
     if(arr[5][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][3]=' ';
   arr[5][14]=' ';
   count12=1;
  }
  }
  if(count13==0)
  {
  if((arr[4][5]==' ')||(arr[5][4]==' ')||(arr[5][6]==' ')||(arr[6][5]==' '))
  {
    if(arr[5][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][5]=' ';
   arr[5][16]=' ';
   count13=1;
  }
  }
  if(count14==0)
  {
  if((arr[4][7]==' ')||(arr[5][6]==' ')||(arr[5][8]==' ')||(arr[6][7]==' '))
  {
     if(arr[5][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][7]=' ';
   arr[5][18]=' ';
   count14=1;
  }
  }
  if(count15==0)
  {
  if((arr[4][9]==' ')||(arr[5][8]==' ')||(arr[5][10]==' ')||(arr[6][9]==' '))
  {
     if(arr[5][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][9]=' ';
   arr[5][20]=' ';
   count15=1;
  }
  }
  if(count16==0)
  {
  if((arr[6][1]==' ')||(arr[7][0]==' ')||(arr[7][2]==' ')||(arr[8][1]==' '))
  {
    if(arr[7][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][1]=' ';
   arr[7][12]=' ';
   count16=1;
  }
  }
   if(count17==0)
  {
  if((arr[6][3]==' ')||(arr[7][2]==' ')||(arr[7][4]==' ')||(arr[8][3]==' '))
  {
    if(arr[7][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][3]=' ';
   arr[7][14]=' ';
   count17=1;
  }
  }
   if(count18==0)
  {
  if((arr[6][5]==' ')||(arr[7][4]==' ')||(arr[7][6]==' ')||(arr[8][5]==' '))
  {
     if(arr[7][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][5]=' ';
   arr[7][16]=' ';
   count18=1;
  }
  }
  if(count19==0)
  {
  if((arr[6][7]==' ')||(arr[7][6]==' ')||(arr[7][8]==' ')||(arr[8][7]==' '))
  {
     if(arr[7][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][7]=' ';
   arr[7][18]=' ';
   count19=1;
  }
  }
  if(count20==0)
  {
  if((arr[6][9]==' ')||(arr[7][8]==' ')||(arr[7][10]==' ')||(arr[8][9]==' '))
  {
     if(arr[7][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][9]=' ';
   arr[7][20]=' ';
   count20=1;
  }
  }
  if(count21==0)
  {
  if((arr[8][1]==' ')||(arr[9][0]==' ')||(arr[9][2]==' ')||(arr[10][1]==' '))
  {
    if(arr[9][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][1]=' ';
   arr[9][12]=' ';
   count21=1;
  }
  }
  if(count22==0)
  {
  if((arr[8][3]==' ')||(arr[9][2]==' ')||(arr[9][4]==' ')||(arr[10][3]==' '))
  {
     if(arr[9][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][3]=' ';
   arr[9][14]=' ';
   count22=1;
  }
  }
  if(count23==0)
  {
  if((arr[8][5]==' ')||(arr[9][4]==' ')||(arr[9][6]==' ')||(arr[10][5]==' '))
  {
     if(arr[9][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][5]=' ';
   arr[9][16]=' ';
   count23=1;
  }
  }
  if(count24==0)
  {
  if((arr[8][7]==' ')||(arr[9][6]==' ')||(arr[9][8]==' ')||(arr[10][7]==' '))
  {
     if(arr[9][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][7]=' ';
   arr[9][18]=' ';
   count24=1;
  }
  }
  if(count25==0)
  {
  if((arr[8][9]==' ')||(arr[9][8]==' ')||(arr[9][10]==' ')||(arr[10][9]==' '))
  {
      if(arr[9][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][9]=' ';
   arr[9][20]=' ';
   count25=1;
  }
  }
    playerTwoMoves--;
    n--;
    m--;
    valid=0;
  }
  }
  if(j<11)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4||i==6||i==8||i==10)&&(j==1||j==3||j==5||j==7||j==9))
  {
   arr[i][j]=205;
   arr[i][j+11]=1;
   arrUndo1[0][m]=i;
   arrUndo1[1][m]=1;
   arrUndo2[0][m]=j;
   arrUndo2[1][m]=1;
   m++;
   n+=1;
   valid=0;
   playerOneMoves++;
  }
  else if((j==0||j==2||j==4||j==6||j==8||j==10)&&(i==1||i==3||i==5||i==7||i==9))
  {
    arr[i][j]=186;
    arr[i][j+11]=1;
    arrUndo1[0][m]=i;
    arrUndo1[1][m]=1;
    arrUndo2[0][m]=j;
    arrUndo2[1][m]=1;
    m++;
    n+=1;
    valid=0;
    playerOneMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][12]=1;
    playerOneTurn=1;
    playerOnePoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[0][5]!=' ')&&(arr[1][4]!=' ')&&(arr[1][6]!=' ')&&(arr[2][5]!=' '))
  {
   arr[1][5]=219;
   arr[1][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[0][7]!=' ')&&(arr[1][6]!=' ')&&(arr[1][8]!=' ')&&(arr[2][7]!=' '))
  {
   arr[1][7]=219;
   arr[1][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count4=0;
  }
  }
  if(count5==1)
  {
  if((arr[0][9]!=' ')&&(arr[1][8]!=' ')&&(arr[1][10]!=' ')&&(arr[2][9]!=' '))
  {
   arr[1][9]=219;
   arr[1][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count5=0;
  }
  }
  if(count6==1)
  {
  if((arr[2][1]!=' ')&&(arr[3][0]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count6=0;
  }
  }
  if(count7==1)
  {
  if((arr[2][3]!=' ')&&(arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count7=0;
  }
  }
  if(count8==1)
  {
  if((arr[2][5]!=' ')&&(arr[3][4]!=' ')&&(arr[3][6]!=' ')&&(arr[4][5]!=' '))
  {
   arr[3][5]=219;
   arr[3][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count8=0;
  }
  }
  if(count9==1)
  {
  if((arr[2][7]!=' ')&&(arr[3][6]!=' ')&&(arr[3][8]!=' ')&&(arr[4][7]!=' '))
  {
   arr[3][7]=219;
   arr[3][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count9=0;
  }
  }
  if(count10==1)
  {
  if((arr[2][9]!=' ')&&(arr[3][8]!=' ')&&(arr[3][10]!=' ')&&(arr[4][9]!=' '))
  {
   arr[3][9]=219;
   arr[3][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count10=0;
  }
  }
  if(count11==1)
  {
  if((arr[4][1]!=' ')&&(arr[5][0]!=' ')&&(arr[5][2]!=' ')&&(arr[6][1]!=' '))
  {
   arr[5][1]=219;
   arr[5][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count11=0;
  }
  }
  if(count12==1)
  {
  if((arr[4][3]!=' ')&&(arr[5][2]!=' ')&&(arr[5][4]!=' ')&&(arr[6][3]!=' '))
  {
   arr[5][3]=219;
   arr[5][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count12=0;
  }
  }
  if(count13==1)
  {
  if((arr[4][5]!=' ')&&(arr[5][4]!=' ')&&(arr[5][6]!=' ')&&(arr[6][5]!=' '))
  {
   arr[5][5]=219;
   arr[5][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count13=0;
  }
  }
  if(count14==1)
  {
  if((arr[4][7]!=' ')&&(arr[5][6]!=' ')&&(arr[5][8]!=' ')&&(arr[6][7]!=' '))
  {
   arr[5][7]=219;
   arr[5][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count14=0;
  }
  }
  if(count15==1)
  {
  if((arr[4][9]!=' ')&&(arr[5][8]!=' ')&&(arr[5][10]!=' ')&&(arr[6][9]!=' '))
  {
   arr[5][9]=219;
   arr[5][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count15=0;
  }
  }
  if(count16==1)
  {
  if((arr[6][1]!=' ')&&(arr[7][0]!=' ')&&(arr[7][2]!=' ')&&(arr[8][1]!=' '))
  {
   arr[7][1]=219;
   arr[7][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count16=0;
  }
  }
  if(count17==1)
  {
  if((arr[6][3]!=' ')&&(arr[7][2]!=' ')&&(arr[7][4]!=' ')&&(arr[8][3]!=' '))
  {
   arr[7][3]=219;
   arr[7][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count17=0;
  }
  }
  if(count18==1)
  {
  if((arr[6][5]!=' ')&&(arr[7][4]!=' ')&&(arr[7][6]!=' ')&&(arr[8][5]!=' '))
  {
   arr[7][5]=219;
   arr[7][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count18=0;
  }
  }
  if(count19==1)
  {
  if((arr[6][7]!=' ')&&(arr[7][6]!=' ')&&(arr[7][8]!=' ')&&(arr[8][7]!=' '))
  {
   arr[7][7]=219;
   arr[7][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count19=0;
  }
  }
  if(count20==1)
  {
  if((arr[6][9]!=' ')&&(arr[7][8]!=' ')&&(arr[7][10]!=' ')&&(arr[8][9]!=' '))
  {
   arr[7][9]=219;
   arr[7][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count20=0;
  }
  }
  if(count21==1)
  {
  if((arr[8][1]!=' ')&&(arr[9][0]!=' ')&&(arr[9][2]!=' ')&&(arr[10][1]!=' '))
  {
   arr[9][1]=219;
   arr[9][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count21=0;
  }
  }
  if(count22==1)
  {
  if((arr[8][3]!=' ')&&(arr[9][2]!=' ')&&(arr[9][4]!=' ')&&(arr[10][3]!=' '))
  {
   arr[9][3]=219;
   arr[9][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count22=0;
  }
  }
  if(count23==1)
  {
  if((arr[8][5]!=' ')&&(arr[9][4]!=' ')&&(arr[9][6]!=' ')&&(arr[10][5]!=' '))
  {
   arr[9][5]=219;
   arr[9][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count23=0;
  }
  }
  if(count24==1)
  {
  if((arr[8][7]!=' ')&&(arr[9][6]!=' ')&&(arr[9][8]!=' ')&&(arr[10][7]!=' '))
  {
   arr[9][7]=219;
   arr[9][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count24=0;
  }
  }
  if(count25==1)
  {
  if((arr[8][9]!=' ')&&(arr[9][8]!=' ')&&(arr[9][10]!=' ')&&(arr[10][9]!=' '))
  {
   arr[9][9]=219;
   arr[9][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count25=0;
  }
  }
   system("cls");
   printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
   for(int i=0;i<11;i++)
   {   printf("                                             ");
       if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
       for(int j=0;j<11;j++)
       {
           if(arr[i][j+11]==1)
           {
            printf("\033[0;34m");
           }
           else if(arr[i][j+11]==2)
           {
            printf("\033[0;31m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Player 2's points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Player 2's moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
    printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
   }
    else if(playerOneTurn==0)
   {
  printf("\033[0;31m" "                                                                                 Player 2 turn (Red)\n" "\033[0m");
  while(valid)
  {
  printf("                                                                                 Enter row ");
  scanf("%d", &i);
  printf("                                                                                 Enter col ");
  scanf("%d", &j);
  playerOneTurn=1;
  if((i==1&&j==1)||(i==1&&j==3)||(i==1&&j==5)||(i==1&&j==7)||(i==1&&j==9)||(i==3&&j==1)||(i==3&&j==3)||(i==3&&j==5)||(i==3&&j==7)||(i==3&&j==9)||(i==5&&j==1)||(i==5&&j==3)||(i==5&&j==5))
  {
    valid=1;
    continue;
  }
   if((i==5&&j==7)||(i==5&&j==9)||(i==7&&j==1)||(i==7&&j==3)||(i==7&&j==5)||(i==7&&j==7)||(i==7&&j==9)||(i==9&&j==1)||(i==9&&j==3)||(i==9&&j==5)||(i==9&&j==7)||(i==9&&j==9))
  {
    valid=1;
    continue;
  }
  if(i==0&&j==0)
  {
    if(n!=0)
    {
    arr[arrUndo1[0][m-1]][arrUndo2[0][m-1]]=' ';
    arr[arrUndo1[0][m-1]][(arrUndo2[0][m-1])+11]=' ';
    playerOneTurn=1;
    if(count1==0)
  {
  if((arr[0][1]==' ')||(arr[1][0]==' ')||(arr[1][2]==' ')||(arr[2][1]==' '))
  {
      if(arr[1][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
    arr[1][1]=' ';
    arr[1][12]=' ';
    count1=1;
  }
   }
   if(count2==0)
  {
  if((arr[0][3]==' ')||(arr[1][2]==' ')||(arr[1][4]==' ')||(arr[2][3]==' '))
  {
    if(arr[1][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][3]=' ';
   arr[1][14]=' ';
   count2=1;
  }
  }
  if(count3==0)
  {
  if((arr[0][5]==' ')||(arr[1][4]==' ')||(arr[1][6]==' ')||(arr[2][5]==' '))
  {
      if(arr[1][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][5]=' ';
   arr[1][16]=' ';
   count3=1;
  }
  }
  if(count4==0)
  {
  if((arr[0][7]==' ')||(arr[1][6]==' ')||(arr[1][8]==' ')||(arr[2][7]==' '))
  {
     if(arr[1][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][7]=' ';
   arr[1][18]=' ';
   count4=1;
  }
  }
  if(count5==0)
  {
  if((arr[0][9]==' ')||(arr[1][8]==' ')||(arr[1][10]==' ')||(arr[2][9]==' '))
  {
      if(arr[1][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[1][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[1][9]=' ';
   arr[1][20]=' ';
   count5=1;
  }
  }
  if(count6==0)
  {
  if((arr[2][1]==' ')||(arr[3][0]==' ')||(arr[3][2]==' ')||(arr[4][1]==' '))
  {
     if(arr[3][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][1]=' ';
   arr[3][12]=' ';
   count6=1;
  }
  }
  if(count7==0)
  {
  if((arr[2][3]==' ')||(arr[3][2]==' ')||(arr[3][4]==' ')||(arr[4][3]==' '))
  {
     if(arr[3][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][3]=' ';
   arr[3][14]=' ';
   count7=1;
  }
  }
  if(count8==0)
  {
  if((arr[2][5]==' ')||(arr[3][4]==' ')||(arr[3][6]==' ')||(arr[4][5]==' '))
  {
     if(arr[3][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][5]=' ';
   arr[3][16]=' ';
   count8=1;
  }
  }
  if(count9==0)
  {
  if((arr[2][7]==' ')||(arr[3][6]==' ')||(arr[3][8]==' ')||(arr[4][7]==' '))
  {
      if(arr[3][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][7]=' ';
   arr[3][18]=' ';
   count9=1;
  }
  }
  if(count10==0)
  {
  if((arr[2][9]==' ')||(arr[3][8]==' ')||(arr[3][10]==' ')||(arr[4][9]==' '))
  {
    if(arr[3][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[3][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[3][9]=' ';
   arr[3][20]=' ';
   count10=1;
  }
  }
  if(count11==0)
  {
  if((arr[4][1]==' ')||(arr[5][0]==' ')||(arr[5][2]==' ')||(arr[6][1]==' '))
  {
     if(arr[5][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][1]=' ';
   arr[5][12]=' ';
   count11=1;
  }
  }
  if(count12==0)
  {
  if((arr[4][3]==' ')||(arr[5][2]==' ')||(arr[5][4]==' ')||(arr[6][3]==' '))
  {
     if(arr[5][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][3]=' ';
   arr[5][14]=' ';
   count12=1;
  }
  }
  if(count13==0)
  {
  if((arr[4][5]==' ')||(arr[5][4]==' ')||(arr[5][6]==' ')||(arr[6][5]==' '))
  {
    if(arr[5][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][5]=' ';
   arr[5][16]=' ';
   count13=1;
  }
  }
  if(count14==0)
  {
  if((arr[4][7]==' ')||(arr[5][6]==' ')||(arr[5][8]==' ')||(arr[6][7]==' '))
  {
     if(arr[5][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][7]=' ';
   arr[5][18]=' ';
   count14=1;
  }
  }
  if(count15==0)
  {
  if((arr[4][9]==' ')||(arr[5][8]==' ')||(arr[5][10]==' ')||(arr[6][9]==' '))
  {
     if(arr[5][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[5][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[5][9]=' ';
   arr[5][20]=' ';
   count15=1;
  }
  }
  if(count16==0)
  {
  if((arr[6][1]==' ')||(arr[7][0]==' ')||(arr[7][2]==' ')||(arr[8][1]==' '))
  {
    if(arr[7][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][1]=' ';
   arr[7][12]=' ';
   count16=1;
  }
  }
   if(count17==0)
  {
  if((arr[6][3]==' ')||(arr[7][2]==' ')||(arr[7][4]==' ')||(arr[8][3]==' '))
  {
    if(arr[7][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][3]=' ';
   arr[7][14]=' ';
   count17=1;
  }
  }
   if(count18==0)
  {
  if((arr[6][5]==' ')||(arr[7][4]==' ')||(arr[7][6]==' ')||(arr[8][5]==' '))
  {
     if(arr[7][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][5]=' ';
   arr[7][16]=' ';
   count18=1;
  }
  }
  if(count19==0)
  {
  if((arr[6][7]==' ')||(arr[7][6]==' ')||(arr[7][8]==' ')||(arr[8][7]==' '))
  {
     if(arr[7][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][7]=' ';
   arr[7][18]=' ';
   count19=1;
  }
  }
  if(count20==0)
  {
  if((arr[6][9]==' ')||(arr[7][8]==' ')||(arr[7][10]==' ')||(arr[8][9]==' '))
  {
     if(arr[7][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[7][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[7][9]=' ';
   arr[7][20]=' ';
   count20=1;
  }
  }
  if(count21==0)
  {
  if((arr[8][1]==' ')||(arr[9][0]==' ')||(arr[9][2]==' ')||(arr[10][1]==' '))
  {
    if(arr[9][12]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][12]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][1]=' ';
   arr[9][12]=' ';
   count21=1;
  }
  }
  if(count22==0)
  {
  if((arr[8][3]==' ')||(arr[9][2]==' ')||(arr[9][4]==' ')||(arr[10][3]==' '))
  {
     if(arr[9][14]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][14]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][3]=' ';
   arr[9][14]=' ';
   count22=1;
  }
  }
  if(count23==0)
  {
  if((arr[8][5]==' ')||(arr[9][4]==' ')||(arr[9][6]==' ')||(arr[10][5]==' '))
  {
     if(arr[9][16]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][16]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][5]=' ';
   arr[9][16]=' ';
   count23=1;
  }
  }
  if(count24==0)
  {
  if((arr[8][7]==' ')||(arr[9][6]==' ')||(arr[9][8]==' ')||(arr[10][7]==' '))
  {
     if(arr[9][18]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][18]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][7]=' ';
   arr[9][18]=' ';
   count24=1;
  }
  }
  if(count25==0)
  {
  if((arr[8][9]==' ')||(arr[9][8]==' ')||(arr[9][10]==' ')||(arr[10][9]==' '))
  {
      if(arr[9][20]==1)
      {
        playerOneTurn=1;
        playerOnePoints--;
      }
      else if(arr[9][20]==2)
      {
        playerOneTurn=0;
        playerTwoPoints--;
      }
   arr[9][9]=' ';
   arr[9][20]=' ';
   count25=1;
  }
  }
    playerOneMoves--;
    n--;
    m--;
    valid=0;
  }
  }
  if(j<11)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4||i==6||i==8||i==10)&&(j==1||j==3||j==5||j==7||j==9))
  {
   arr[i][j]=205;
   arr[i][j+11]=2;
   arrUndo1[0][m]=i;
   arrUndo1[1][m]=1;
   arrUndo2[0][m]=j;
   arrUndo2[1][m]=1;
   m++;
   n+=1;
   valid=0;
   playerTwoMoves++;
  }
  else if((j==0||j==2||j==4||j==6||j==8||j==10)&&(i==1||i==3||i==5||i==7||i==9))
  {
    arr[i][j]=186;
    arr[i][j+11]=2;
    arrUndo1[0][m]=i;
    arrUndo1[1][m]=1;
    arrUndo2[0][m]=j;
    arrUndo2[1][m]=1;
    m++;
    n+=1;
    valid=0;
    playerTwoMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][12]=2;
    playerOneTurn=0;
    playerTwoPoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[0][5]!=' ')&&(arr[1][4]!=' ')&&(arr[1][6]!=' ')&&(arr[2][5]!=' '))
  {
   arr[1][5]=219;
   arr[1][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[0][7]!=' ')&&(arr[1][6]!=' ')&&(arr[1][8]!=' ')&&(arr[2][7]!=' '))
  {
   arr[1][7]=219;
   arr[1][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count4=0;
  }
  }
  if(count5==1)
  {
  if((arr[0][9]!=' ')&&(arr[1][8]!=' ')&&(arr[1][10]!=' ')&&(arr[2][9]!=' '))
  {
   arr[1][9]=219;
   arr[1][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count5=0;
  }
  }
  if(count6==1)
  {
  if((arr[2][1]!=' ')&&(arr[3][0]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count6=0;
  }
  }
  if(count7==1)
  {
  if((arr[2][3]!=' ')&&(arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count7=0;
  }
  }
  if(count8==1)
  {
  if((arr[2][5]!=' ')&&(arr[3][4]!=' ')&&(arr[3][6]!=' ')&&(arr[4][5]!=' '))
  {
   arr[3][5]=219;
   arr[3][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count8=0;
  }
  }
  if(count9==1)
  {
  if((arr[2][7]!=' ')&&(arr[3][6]!=' ')&&(arr[3][8]!=' ')&&(arr[4][7]!=' '))
  {
   arr[3][7]=219;
   arr[3][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count9=0;
  }
  }
  if(count10==1)
  {
  if((arr[2][9]!=' ')&&(arr[3][8]!=' ')&&(arr[3][10]!=' ')&&(arr[4][9]!=' '))
  {
   arr[3][9]=219;
   arr[3][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count10=0;
  }
  }
  if(count11==1)
  {
  if((arr[4][1]!=' ')&&(arr[5][0]!=' ')&&(arr[5][2]!=' ')&&(arr[6][1]!=' '))
  {
   arr[5][1]=219;
   arr[5][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count11=0;
  }
  }
  if(count12==1)
  {
  if((arr[4][3]!=' ')&&(arr[5][2]!=' ')&&(arr[5][4]!=' ')&&(arr[6][3]!=' '))
  {
   arr[5][3]=219;
   arr[5][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count12=0;
  }
  }
  if(count13==1)
  {
  if((arr[4][5]!=' ')&&(arr[5][4]!=' ')&&(arr[5][6]!=' ')&&(arr[6][5]!=' '))
  {
   arr[5][5]=219;
   arr[5][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count13=0;
  }
  }
  if(count14==1)
  {
  if((arr[4][7]!=' ')&&(arr[5][6]!=' ')&&(arr[5][8]!=' ')&&(arr[6][7]!=' '))
  {
   arr[5][7]=219;
   arr[5][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count14=0;
  }
  }
  if(count15==1)
  {
  if((arr[4][9]!=' ')&&(arr[5][8]!=' ')&&(arr[5][10]!=' ')&&(arr[6][9]!=' '))
  {
   arr[5][9]=219;
   arr[5][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count15=0;
  }
  }
  if(count16==1)
  {
  if((arr[6][1]!=' ')&&(arr[7][0]!=' ')&&(arr[7][2]!=' ')&&(arr[8][1]!=' '))
  {
   arr[7][1]=219;
   arr[7][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count16=0;
  }
  }
  if(count17==1)
  {
  if((arr[6][3]!=' ')&&(arr[7][2]!=' ')&&(arr[7][4]!=' ')&&(arr[8][3]!=' '))
  {
   arr[7][3]=219;
   arr[7][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count17=0;
  }
  }
  if(count18==1)
  {
  if((arr[6][5]!=' ')&&(arr[7][4]!=' ')&&(arr[7][6]!=' ')&&(arr[8][5]!=' '))
  {
   arr[7][5]=219;
   arr[7][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count18=0;
  }
  }
  if(count19==1)
  {
  if((arr[6][7]!=' ')&&(arr[7][6]!=' ')&&(arr[7][8]!=' ')&&(arr[8][7]!=' '))
  {
   arr[7][7]=219;
   arr[7][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count19=0;
  }
  }
  if(count20==1)
  {
  if((arr[6][9]!=' ')&&(arr[7][8]!=' ')&&(arr[7][10]!=' ')&&(arr[8][9]!=' '))
  {
   arr[7][9]=219;
   arr[7][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count20=0;
  }
  }
  if(count21==1)
  {
  if((arr[8][1]!=' ')&&(arr[9][0]!=' ')&&(arr[9][2]!=' ')&&(arr[10][1]!=' '))
  {
   arr[9][1]=219;
   arr[9][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count21=0;
  }
  }
  if(count22==1)
  {
  if((arr[8][3]!=' ')&&(arr[9][2]!=' ')&&(arr[9][4]!=' ')&&(arr[10][3]!=' '))
  {
   arr[9][3]=219;
   arr[9][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count22=0;
  }
  }
  if(count23==1)
  {
  if((arr[8][5]!=' ')&&(arr[9][4]!=' ')&&(arr[9][6]!=' ')&&(arr[10][5]!=' '))
  {
   arr[9][5]=219;
   arr[9][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count23=0;
  }
  }
  if(count24==1)
  {
  if((arr[8][7]!=' ')&&(arr[9][6]!=' ')&&(arr[9][8]!=' ')&&(arr[10][7]!=' '))
  {
   arr[9][7]=219;
   arr[9][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count24=0;
  }
  }
  if(count25==1)
  {
  if((arr[8][9]!=' ')&&(arr[9][8]!=' ')&&(arr[9][10]!=' ')&&(arr[10][9]!=' '))
  {
   arr[9][9]=219;
   arr[9][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count25=0;
  }
  }
  system("cls");
  printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
   for(int i=0;i<11;i++)
   {   printf("                                             ");
       if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
       for(int j=0;j<11;j++)
       {
           if(arr[i][j+11]==2)
           {
            printf("\033[0;31m");
           }
           else if(arr[i][j+11]==1)
           {
             printf("\033[0;34m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Player 2's points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Player 2's moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
    printf("\033[0;33m""                                                Enter 0 , 0 for undo\n""\033]0m");
   }
  }
  if(playerOnePoints>playerTwoPoints)
  {
      printf("Player 1 win\n");
  }
  else if(playerOnePoints<playerTwoPoints)
  {
      printf("Player 2 win\n");
  }
  else
  {
    printf("Draw\n");
  }
   }
    int q;
    printf("Enter '0' to Exit ");
    scanf("%d",&q);
    return 0;
 }
else if(x==1)
{
    printf("Enter '1' for beginner mode or '2' for expert mode ");
    scanf("%d",&y);
    system("cls");
    if(y==1)
    {
   system("");
   int i,j,valid=1;
   int count1=1,count2=1,count3=1,count4=1;
   char arr[5][10];
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<10;j++)
       {
        arr[i][j]=' ';
       }
   }
    arr[0][0]=254;
    arr[0][2]=254;
    arr[0][4]=254;
    arr[2][0]=254;
    arr[2][2]=254;
    arr[2][4]=254;
    arr[4][0]=254;
    arr[4][2]=254;
    arr[4][4]=254;
    printf("                                                      0 1 2 3 4\n");
    for(int i=0;i<5;i++)
    {   printf("                                                    ");
        printf("%d ",i);
        for(int j=0;j<5;j++)
        {
         printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
  int n=0,playerOnePoints=0,playerTwoPoints=0,playerOneTurn=1,playerOneMoves=0,playerTwoMoves=0;
  printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
  printf("Computer points = %d\n",playerTwoPoints);
  printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
  printf("Computer moves = %d\n",playerTwoMoves);
  printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
  while(n<12)
  {
   if(playerOneTurn==1)
   {
  printf("\033[0;34m" "Player 1 turn (Blue)\n" "\033[0m");
  while(valid)
  {
  printf("Enter row ");
  scanf("%d", &i);
  printf("Enter col ");
  scanf("%d", &j);
  if((i==1&&j==1)||(i==1&&j==3)||(i==3&&j==1)||(i==3&&j==3))
  {
    valid=1;
    continue;
  }
  if(j<5)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4)&&(j==1||j==3))
  {
   arr[i][j]=205;
   arr[i][j+5]=1;
   n+=1;
   valid=0;
   playerOneMoves++;
  }
  else if((j==0||j==2||j==4)&&(i==1||i==3))
  {
    arr[i][j]=186;
    arr[i][j+5]=1;
    n+=1;
    valid=0;
    playerOneMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  playerOneTurn=0;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][6]=1;
    playerOneTurn=1;
    playerOnePoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][8]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[3][0]!=' ')&&(arr[2][1]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][6]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[2][3]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][8]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count4=0;
  }
  }
   system("cls");
   printf("                                                      0 1 2 3 4\n");
   for(int i=0;i<5;i++)
   {   printf("                                                    ");
       printf("%d ",i);
       for(int j=0;j<5;j++)
       {
           if(arr[i][j+5]==1)
           {
            printf("\033[0;34m");
           }
           else if(arr[i][j+5]==2)
           {
            printf("\033[0;31m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Computer points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Computer moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
   }
    else if(playerOneTurn==0)
   {
  printf("\033[0;31m" "                                                                                 Computer turn (Red)\n" "\033[0m");
  while(valid)
  {
      int h=4;
      int k=4;
      for(int h=4;h>=0;h--)
      {
          for(int k=4;k>=0;k--)
          {
           if((arr[h][k]!=' ')||(h==k)||(h==1&&k==3)||(h==3&&k==1))
           {
            continue;
           }
           else
           {
            i=h;
            j=k;
           }
          }
      }
  if(j<5)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4)&&(j==1||j==3))
  {
   arr[i][j]=205;
   arr[i][j+5]=2;
   n+=1;
   valid=0;
   playerTwoMoves++;
  }
  else if((j==0||j==2||j==4)&&(i==1||i==3))
  {
    arr[i][j]=186;
    arr[i][j+5]=2;
    n+=1;
    valid=0;
    playerTwoMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  playerOneTurn=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][6]=2;
    playerOneTurn=0;
    playerTwoPoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][8]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[3][0]!=' ')&&(arr[2][1]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][6]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[2][3]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][8]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count4=0;
  }
  }
  system("cls");
  printf("                                                      0 1 2 3 4\n");
   for(int i=0;i<5;i++)
   {   printf("                                                    ");
       printf("%d ",i);
       for(int j=0;j<5;j++)
       {
           if(arr[i][j+5]==2)
           {
            printf("\033[0;31m");
           }
           else if(arr[i][j+5]==1)
           {
             printf("\033[0;34m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Computer points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Computer moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",12-n);
   }
  }
  if(playerOnePoints>playerTwoPoints)
  {
      printf("Player 1 win\n");
  }
  else if(playerOnePoints<playerTwoPoints)
  {
      printf("Computer win\n");
  }
  else
  {
    printf("Draw\n");
  }
    int q;
    printf("Enter '0' to Exit ");
    scanf("%d",&q);
    return 0;
   }
   else if(y==2)
   {
    system("");
   int i,j,valid=1;
   int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
   int count11=1,count12=1,count13=1,count14=1,count15=1,count16=1,count17=1,count18=1,count19=1;
   int count20=1,count21=1,count22=1,count23=1,count24=1,count25=1;
   char arr[11][21];
   for(int i=0;i<11;i++)
   {
       for(int j=0;j<21;j++)
       {
        arr[i][j]=' ';
       }
   }
    arr[0][0]=254;
    arr[0][2]=254;
    arr[0][4]=254;
    arr[0][6]=254;
    arr[0][8]=254;
    arr[0][10]=254;
    arr[2][0]=254;
    arr[2][2]=254;
    arr[2][4]=254;
    arr[2][6]=254;
    arr[2][8]=254;
    arr[2][10]=254;
    arr[4][0]=254;
    arr[4][2]=254;
    arr[4][4]=254;
    arr[4][6]=254;
    arr[4][8]=254;
    arr[4][10]=254;
    arr[6][0]=254;
    arr[6][2]=254;
    arr[6][4]=254;
    arr[6][6]=254;
    arr[6][8]=254;
    arr[6][10]=254;
    arr[8][0]=254;
    arr[8][2]=254;
    arr[8][4]=254;
    arr[8][6]=254;
    arr[8][8]=254;
    arr[8][10]=254;
    arr[10][0]=254;
    arr[10][2]=254;
    arr[10][4]=254;
    arr[10][6]=254;
    arr[10][8]=254;
    arr[10][10]=254;
    printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
    for(int i=0;i<11;i++)
    {   printf("                                             ");
        if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
        for(int j=0;j<11;j++)
        {
         printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
  int n=0,playerOnePoints=0,playerTwoPoints=0,playerOneTurn=1,playerOneMoves=0,playerTwoMoves=0;
  printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
  printf("Computer points = %d\n",playerTwoPoints);
  printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
  printf("Computer moves = %d\n",playerTwoMoves);
  printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
  while(n<60)
  {
   if(playerOneTurn==1)
   {
  printf("\033[0;34m" "Player 1 turn (Blue)\n" "\033[0m");
  while(valid)
  {
  printf("Enter row ");
  scanf("%d", &i);
  printf("Enter col ");
  scanf("%d", &j);
  if((i==1&&j==1)||(i==1&&j==3)||(i==1&&j==5)||(i==1&&j==7)||(i==1&&j==9)||(i==3&&j==1)||(i==3&&j==3)||(i==3&&j==5)||(i==3&&j==7)||(i==3&&j==9)||(i==5&&j==1)||(i==5&&j==3)||(i==5&&j==5))
  {
    valid=1;
    continue;
  }
   if((i==5&&j==7)||(i==5&&j==9)||(i==7&&j==1)||(i==7&&j==3)||(i==7&&j==5)||(i==7&&j==7)||(i==7&&j==9)||(i==9&&j==1)||(i==9&&j==3)||(i==9&&j==5)||(i==9&&j==7)||(i==9&&j==9))
  {
    valid=1;
    continue;
  }
  if(j<11)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4||i==6||i==8||i==10)&&(j==1||j==3||j==5||j==7||j==9))
  {
   arr[i][j]=205;
   arr[i][j+11]=1;
   n+=1;
   valid=0;
   playerOneMoves++;
  }
  else if((j==0||j==2||j==4||j==6||j==8||j==10)&&(i==1||i==3||i==5||i==7||i==9))
  {
    arr[i][j]=186;
    arr[i][j+11]=1;
    n+=1;
    valid=0;
    playerOneMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  playerOneTurn=0;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][12]=1;
    playerOneTurn=1;
    playerOnePoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[0][5]!=' ')&&(arr[1][4]!=' ')&&(arr[1][6]!=' ')&&(arr[2][5]!=' '))
  {
   arr[1][5]=219;
   arr[1][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[0][7]!=' ')&&(arr[1][6]!=' ')&&(arr[1][8]!=' ')&&(arr[2][7]!=' '))
  {
   arr[1][7]=219;
   arr[1][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count4=0;
  }
  }
  if(count5==1)
  {
  if((arr[0][9]!=' ')&&(arr[1][8]!=' ')&&(arr[1][10]!=' ')&&(arr[2][9]!=' '))
  {
   arr[1][9]=219;
   arr[1][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count5=0;
  }
  }
  if(count6==1)
  {
  if((arr[2][1]!=' ')&&(arr[3][0]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count6=0;
  }
  }
  if(count7==1)
  {
  if((arr[2][3]!=' ')&&(arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count7=0;
  }
  }
  if(count8==1)
  {
  if((arr[2][5]!=' ')&&(arr[3][4]!=' ')&&(arr[3][6]!=' ')&&(arr[4][5]!=' '))
  {
   arr[3][5]=219;
   arr[3][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count8=0;
  }
  }
  if(count9==1)
  {
  if((arr[2][7]!=' ')&&(arr[3][6]!=' ')&&(arr[3][8]!=' ')&&(arr[4][7]!=' '))
  {
   arr[3][7]=219;
   arr[3][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count9=0;
  }
  }
  if(count10==1)
  {
  if((arr[2][9]!=' ')&&(arr[3][8]!=' ')&&(arr[3][10]!=' ')&&(arr[4][9]!=' '))
  {
   arr[3][9]=219;
   arr[3][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count10=0;
  }
  }
  if(count11==1)
  {
  if((arr[4][1]!=' ')&&(arr[5][0]!=' ')&&(arr[5][2]!=' ')&&(arr[6][1]!=' '))
  {
   arr[5][1]=219;
   arr[5][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count11=0;
  }
  }
  if(count12==1)
  {
  if((arr[4][3]!=' ')&&(arr[5][2]!=' ')&&(arr[5][4]!=' ')&&(arr[6][3]!=' '))
  {
   arr[5][3]=219;
   arr[5][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count12=0;
  }
  }
  if(count13==1)
  {
  if((arr[4][5]!=' ')&&(arr[5][4]!=' ')&&(arr[5][6]!=' ')&&(arr[6][5]!=' '))
  {
   arr[5][5]=219;
   arr[5][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count13=0;
  }
  }
  if(count14==1)
  {
  if((arr[4][7]!=' ')&&(arr[5][6]!=' ')&&(arr[5][8]!=' ')&&(arr[6][7]!=' '))
  {
   arr[5][7]=219;
   arr[5][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count14=0;
  }
  }
  if(count15==1)
  {
  if((arr[4][9]!=' ')&&(arr[5][8]!=' ')&&(arr[5][10]!=' ')&&(arr[6][9]!=' '))
  {
   arr[5][9]=219;
   arr[5][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count15=0;
  }
  }
  if(count16==1)
  {
  if((arr[6][1]!=' ')&&(arr[7][0]!=' ')&&(arr[7][2]!=' ')&&(arr[8][1]!=' '))
  {
   arr[7][1]=219;
   arr[7][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count16=0;
  }
  }
  if(count17==1)
  {
  if((arr[6][3]!=' ')&&(arr[7][2]!=' ')&&(arr[7][4]!=' ')&&(arr[8][3]!=' '))
  {
   arr[7][3]=219;
   arr[7][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count17=0;
  }
  }
  if(count18==1)
  {
  if((arr[6][5]!=' ')&&(arr[7][4]!=' ')&&(arr[7][6]!=' ')&&(arr[8][5]!=' '))
  {
   arr[7][5]=219;
   arr[7][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count18=0;
  }
  }
  if(count19==1)
  {
  if((arr[6][7]!=' ')&&(arr[7][6]!=' ')&&(arr[7][8]!=' ')&&(arr[8][7]!=' '))
  {
   arr[7][7]=219;
   arr[7][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count19=0;
  }
  }
  if(count20==1)
  {
  if((arr[6][9]!=' ')&&(arr[7][8]!=' ')&&(arr[7][10]!=' ')&&(arr[8][9]!=' '))
  {
   arr[7][9]=219;
   arr[7][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count20=0;
  }
  }
  if(count21==1)
  {
  if((arr[8][1]!=' ')&&(arr[9][0]!=' ')&&(arr[9][2]!=' ')&&(arr[10][1]!=' '))
  {
   arr[9][1]=219;
   arr[9][12]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count21=0;
  }
  }
  if(count22==1)
  {
  if((arr[8][3]!=' ')&&(arr[9][2]!=' ')&&(arr[9][4]!=' ')&&(arr[10][3]!=' '))
  {
   arr[9][3]=219;
   arr[9][14]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count22=0;
  }
  }
  if(count23==1)
  {
  if((arr[8][5]!=' ')&&(arr[9][4]!=' ')&&(arr[9][6]!=' ')&&(arr[10][5]!=' '))
  {
   arr[9][5]=219;
   arr[9][16]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count23=0;
  }
  }
  if(count24==1)
  {
  if((arr[8][7]!=' ')&&(arr[9][6]!=' ')&&(arr[9][8]!=' ')&&(arr[10][7]!=' '))
  {
   arr[9][7]=219;
   arr[9][18]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count24=0;
  }
  }
  if(count25==1)
  {
  if((arr[8][9]!=' ')&&(arr[9][8]!=' ')&&(arr[9][10]!=' ')&&(arr[10][9]!=' '))
  {
   arr[9][9]=219;
   arr[9][20]=1;
   playerOneTurn=1;
   playerOnePoints++;
   count25=0;
  }
  }
   system("cls");
   printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
   for(int i=0;i<11;i++)
   {   printf("                                             ");
       if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
       for(int j=0;j<11;j++)
       {
           if(arr[i][j+11]==1)
           {
            printf("\033[0;34m");
           }
           else if(arr[i][j+11]==2)
           {
            printf("\033[0;31m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Computer points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Computer moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
   }
    else if(playerOneTurn==0)
   {
  printf("\033[0;31m" "                                                                                 Computer turn (Red)\n" "\033[0m");
  while(valid)
  {
      int h=10;
      int k=10;
    for(int h=10;h>=0;h--)
    {
        for(int k=10;k>=0;k--)
        {
         if((arr[h][k]!=' ')||(h==k)||(h==1&&(k==3||k==5||k==7||k==9))||(h==3&&(k==1||k==5||k==7||k==9))||(h==5&&(k==1||k==3||k==7||k==9))||(h==7&&(k==1||k==3||k==5||k==9))||(h==9&&(k==1||k==3||k==5||k==7)))
                continue;
         else
         {
          i=h;
          j=k;
         }
        }
    }
  if(j<11)
  {
  while(arr[i][j]==' ')
  {
  if((i==0||i==2||i==4||i==6||i==8||i==10)&&(j==1||j==3||j==5||j==7||j==9))
  {
   arr[i][j]=205;
   arr[i][j+11]=2;
   n+=1;
   valid=0;
   playerTwoMoves++;
  }
  else if((j==0||j==2||j==4||j==6||j==8||j==10)&&(i==1||i==3||i==5||i==7||i==9))
  {
    arr[i][j]=186;
    arr[i][j+11]=2;
    n+=1;
    valid=0;
    playerTwoMoves++;
  }
  }
  }
  else
    valid=1;
  }
  valid=1;
  playerOneTurn=1;
  if(count1==1)
  {
  if((arr[0][1]!=' ')&&(arr[1][0]!=' ')&&(arr[1][2]!=' ')&&(arr[2][1]!=' '))
  {
    arr[1][1]=219;
    arr[1][12]=2;
    playerOneTurn=0;
    playerTwoPoints++;
    count1=0;
  }
  }
  if(count2==1)
  {
  if((arr[0][3]!=' ')&&(arr[1][2]!=' ')&&(arr[1][4]!=' ')&&(arr[2][3]!=' '))
  {
   arr[1][3]=219;
   arr[1][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count2=0;
  }
  }
  if(count3==1)
  {
  if((arr[0][5]!=' ')&&(arr[1][4]!=' ')&&(arr[1][6]!=' ')&&(arr[2][5]!=' '))
  {
   arr[1][5]=219;
   arr[1][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count3=0;
  }
  }
  if(count4==1)
  {
  if((arr[0][7]!=' ')&&(arr[1][6]!=' ')&&(arr[1][8]!=' ')&&(arr[2][7]!=' '))
  {
   arr[1][7]=219;
   arr[1][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count4=0;
  }
  }
  if(count5==1)
  {
  if((arr[0][9]!=' ')&&(arr[1][8]!=' ')&&(arr[1][10]!=' ')&&(arr[2][9]!=' '))
  {
   arr[1][9]=219;
   arr[1][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count5=0;
  }
  }
  if(count6==1)
  {
  if((arr[2][1]!=' ')&&(arr[3][0]!=' ')&&(arr[3][2]!=' ')&&(arr[4][1]!=' '))
  {
   arr[3][1]=219;
   arr[3][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count6=0;
  }
  }
  if(count7==1)
  {
  if((arr[2][3]!=' ')&&(arr[3][2]!=' ')&&(arr[3][4]!=' ')&&(arr[4][3]!=' '))
  {
   arr[3][3]=219;
   arr[3][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count7=0;
  }
  }
  if(count8==1)
  {
  if((arr[2][5]!=' ')&&(arr[3][4]!=' ')&&(arr[3][6]!=' ')&&(arr[4][5]!=' '))
  {
   arr[3][5]=219;
   arr[3][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count8=0;
  }
  }
  if(count9==1)
  {
  if((arr[2][7]!=' ')&&(arr[3][6]!=' ')&&(arr[3][8]!=' ')&&(arr[4][7]!=' '))
  {
   arr[3][7]=219;
   arr[3][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count9=0;
  }
  }
  if(count10==1)
  {
  if((arr[2][9]!=' ')&&(arr[3][8]!=' ')&&(arr[3][10]!=' ')&&(arr[4][9]!=' '))
  {
   arr[3][9]=219;
   arr[3][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count10=0;
  }
  }
  if(count11==1)
  {
  if((arr[4][1]!=' ')&&(arr[5][0]!=' ')&&(arr[5][2]!=' ')&&(arr[6][1]!=' '))
  {
   arr[5][1]=219;
   arr[5][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count11=0;
  }
  }
  if(count12==1)
  {
  if((arr[4][3]!=' ')&&(arr[5][2]!=' ')&&(arr[5][4]!=' ')&&(arr[6][3]!=' '))
  {
   arr[5][3]=219;
   arr[5][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count12=0;
  }
  }
  if(count13==1)
  {
  if((arr[4][5]!=' ')&&(arr[5][4]!=' ')&&(arr[5][6]!=' ')&&(arr[6][5]!=' '))
  {
   arr[5][5]=219;
   arr[5][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count13=0;
  }
  }
  if(count14==1)
  {
  if((arr[4][7]!=' ')&&(arr[5][6]!=' ')&&(arr[5][8]!=' ')&&(arr[6][7]!=' '))
  {
   arr[5][7]=219;
   arr[5][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count14=0;
  }
  }
  if(count15==1)
  {
  if((arr[4][9]!=' ')&&(arr[5][8]!=' ')&&(arr[5][10]!=' ')&&(arr[6][9]!=' '))
  {
   arr[5][9]=219;
   arr[5][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count15=0;
  }
  }
  if(count16==1)
  {
  if((arr[6][1]!=' ')&&(arr[7][0]!=' ')&&(arr[7][2]!=' ')&&(arr[8][1]!=' '))
  {
   arr[7][1]=219;
   arr[7][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count16=0;
  }
  }
  if(count17==1)
  {
  if((arr[6][3]!=' ')&&(arr[7][2]!=' ')&&(arr[7][4]!=' ')&&(arr[8][3]!=' '))
  {
   arr[7][3]=219;
   arr[7][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count17=0;
  }
  }
  if(count18==1)
  {
  if((arr[6][5]!=' ')&&(arr[7][4]!=' ')&&(arr[7][6]!=' ')&&(arr[8][5]!=' '))
  {
   arr[7][5]=219;
   arr[7][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count18=0;
  }
  }
  if(count19==1)
  {
  if((arr[6][7]!=' ')&&(arr[7][6]!=' ')&&(arr[7][8]!=' ')&&(arr[8][7]!=' '))
  {
   arr[7][7]=219;
   arr[7][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count19=0;
  }
  }
  if(count20==1)
  {
  if((arr[6][9]!=' ')&&(arr[7][8]!=' ')&&(arr[7][10]!=' ')&&(arr[8][9]!=' '))
  {
   arr[7][9]=219;
   arr[7][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count20=0;
  }
  }
  if(count21==1)
  {
  if((arr[8][1]!=' ')&&(arr[9][0]!=' ')&&(arr[9][2]!=' ')&&(arr[10][1]!=' '))
  {
   arr[9][1]=219;
   arr[9][12]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count21=0;
  }
  }
  if(count22==1)
  {
  if((arr[8][3]!=' ')&&(arr[9][2]!=' ')&&(arr[9][4]!=' ')&&(arr[10][3]!=' '))
  {
   arr[9][3]=219;
   arr[9][14]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count22=0;
  }
  }
  if(count23==1)
  {
  if((arr[8][5]!=' ')&&(arr[9][4]!=' ')&&(arr[9][6]!=' ')&&(arr[10][5]!=' '))
  {
   arr[9][5]=219;
   arr[9][16]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count23=0;
  }
  }
  if(count24==1)
  {
  if((arr[8][7]!=' ')&&(arr[9][6]!=' ')&&(arr[9][8]!=' ')&&(arr[10][7]!=' '))
  {
   arr[9][7]=219;
   arr[9][18]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count24=0;
  }
  }
  if(count25==1)
  {
  if((arr[8][9]!=' ')&&(arr[9][8]!=' ')&&(arr[9][10]!=' ')&&(arr[10][9]!=' '))
  {
   arr[9][9]=219;
   arr[9][20]=2;
   playerOneTurn=0;
   playerTwoPoints++;
   count25=0;
  }
  }
  system("cls");
  printf("                                                0 1 2 3 4 5 6 7 8 9 10\n");
   for(int i=0;i<11;i++)
   {   printf("                                             ");
       if(i==10)
        {
         printf("%d ",i);
        }
        else
        printf("%d  ",i);
       for(int j=0;j<11;j++)
       {
           if(arr[i][j+11]==2)
           {
            printf("\033[0;31m");
           }
           else if(arr[i][j+11]==1)
           {
             printf("\033[0;34m");
           }
        printf("%c ",arr[i][j]);
        printf("\033[0m");
       }
       printf("\n");
   }
    printf("\033[0;34m" "Player 1's points = %d                                                            " "\033[0;31m",playerOnePoints);
    printf("Computer points = %d\n",playerTwoPoints);
    printf("\033[0;34m" "Player 1's moves = %d                                                             " "\033[0;31m",playerOneMoves);
    printf("Computer moves = %d\n",playerTwoMoves);
    printf("\033[0m" "                                                Remaining moves = %d\n",60-n);
   }
  }
  if(playerOnePoints>playerTwoPoints)
  {
      printf("player 1 win\n");
  }
  else if(playerOnePoints<playerTwoPoints)
  {
      printf("Computer win\n");
  }
  else
  {
    printf("Draw\n");
  }
   }
   }
    int q;
    printf("Enter '0' to Exit ");
    scanf("%d",&q);
    return 0;
}
