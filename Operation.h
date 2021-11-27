//Operation.h
#ifndef OPERATION.H
#define OPERATION.H

void snake_initialization(int **snake);
void food_initialization(int food[2],int **snake,int length);
void area_initialization(char area[47][17]);
void insert_snake_food(int ** snake,int length,int food[2],char area[47][17]);
void print_area(char area[47][17]);
void move(char input,int ** &snake,int &length,char area[47][17],int food[2]);

#endif
