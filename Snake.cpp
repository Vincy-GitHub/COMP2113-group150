#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include "Operation.h"
#include "FileIO.h"
using namespace std;

int main(){
  int **snake=new int *[2];
  for (int i=0;i<675;i++){
    snake[i]=new int [675];
  }
  int food[2];
  char area[47][17];
  int length=1;
  char input;
  snake_initialization(snake);
  food_initialization(food,snake,length);
  area_initialization(area);
  insert_snake_food(snake,length,food,area);
  print_area(area);
  while (true){
    cin>>input;
    if ((input=='w')||(input=='s')||(input=='a')||(input=='d')){
      move(input,snake,length,area,food);
      area_initialization(area);
      insert_snake_food(snake,length,food,area);
      system("clear");
      print_area(area);
    }
    else if (input=='p')
//if(strcmp(input,"pause")==0)
      fileout(snake,food,length);
    else if (input=='c')
      filein(length,area,snake,food);
    }
  return 0;
}
