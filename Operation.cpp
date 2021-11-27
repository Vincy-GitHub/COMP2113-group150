#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include "Operation.h"
#include "FileIO.h"

using namespace std;
//randomly generate the initial location of snake
void snake_initialization(int **snake){
  srand(time(0));
  snake[0][0]=rand()%25+11;
  snake[0][1]=rand()%5+6;
}
//randomly generate the initial location of food
void food_initialization(int food[2],int **snake,int length){
  srand(time(0));
  food[0]=rand()%45+1;
  food[1]=rand()%15+1;
  //make sure that food does not overlap with snake
  while (true) {
    int flag=0;
    for (int i=0;i<length;i++){
      if ((food[0]!=snake[i][0])||(food[1]!=snake[i][1]))
        flag++;
      else{
        food[0]=rand()%45+1;
        food[1]=rand()%15+1;
        break;
      }
    }
    if (flag==length)
      break;
  }
}
void area_initialization(char area[47][17]){
  for (int i=0;i<=16;i++){
    for (int j=0;j<=46;j++){
      area[j][i]=' ';
    }
  }
  //build the boundary
  for (int i=0;i<=46;i++){
    area[i][0]='-';
    area[i][16]='-';
  }
  for (int i=1;i<=15;i++){
    area[0][i]='|';
    area[46][i]='|';
  }
}

void insert_snake_food(int ** snake,int length,int food[2],char area[47][17]){
  //insert the snake
  for (int i=0;i<length;i++){
    int x=snake[i][0];
    int y=snake[i][1];
    area[x][y]='#';
  }
  //insert the food
  for (int i=0;i<2;i++){
    int x=food[0];
    int y=food[1];
    area[x][y]='*';
  }
}
void print_area(char area[47][17]){
  //print out the area, snake and food
  for (int j=0;j<=16;j++){
    for (int i=0;i<=46;i++){
      cout<<area[i][j];
    }
    cout<<endl;
  }
}
//move snake in different directions
void move(char input,int ** &snake,int &length,char area[47][17],int food[2]){
  int **newsnake=new int *[2];
  for (int i=0;i<675;i++){
    newsnake[i]=new int [675];
  }
  switch (input){
  case 'w':
    newsnake[0][0]=snake[0][0];
    newsnake[0][1]=snake[0][1]-1;
    break;
  case 's':
    newsnake[0][0]=snake[0][0];
    newsnake[0][1]=snake[0][1]+1;
    break;
  case 'a':
    newsnake[0][0]=snake[0][0]-1;
    newsnake[0][1]=snake[0][1];
    break;
  case 'd':
    newsnake[0][0]=snake[0][0]+1;
    newsnake[0][1]=snake[0][1];
    break;
  default:
    break;
  }
  for (int i=0;i<length-1;i++){
    for (int j=0;j<2;j++){
      newsnake[i+1][j]=snake[i][j];
    }
  }
  //if snake eats food, grow longer
  if ((newsnake[0][0]==food[0])&&(newsnake[0][1]==food[1])){
    length++;
    for (int i=0;i<2;i++){
      newsnake[length-1][i]=snake[length-2][i];
    }
    food_initialization(food,newsnake,length);
    cout<<length<<endl;
  }
  //if snake touches boundary, end of game
  int x=newsnake[0][0];
  int y=newsnake[0][1];
  if ((area[x][y]=='-')||(area[x][y]=='|'))
    end(length);
  delete [] snake;
  snake=newsnake;
}
