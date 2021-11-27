//FileIO.cpp



#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
# include "FileIO.h"
# include "Operation.h"

using namespace std;


// To read and stop necessary records when we want to stop or continue
void fileout(int ** &snake, int food [2], int length) {
ofstream fout;
//
		fout.open("Suspension.txt");
		if (fout.fail()){
      fout.open("Suspension.txt");
      for (int i=0; i< length;i++){
          fout<< snake[i][0]<< " " <<snake[i][1];
      }
      fout<< "\n";
      fout<< food [0]<< " " << food[1] <<endl;
      		fout.close();
		}
for (int i=0; i< length;i++){
    fout<< snake[i][0]<< " " <<snake[i][1]<<' ';
}
fout<< "\n";
// To store the location of the food
fout<< food [0]<< " " << food[1] <<endl;
		fout.close();
	}

void filein(int &length, char area[47][17], int ** &snake, int food[2]){

	ifstream fin;
	fin.open("Suspension.txt");
	if(fin.fail()){
		exit(1);
	}
	string line;
	getline(fin,line,'\n');
		int Total=0;
		int Number=0;
		int coordinate;
		istringstream line_in(line);
		while(line_in >>coordinate){
			if ((Total%2)==0){
				snake[Number][0]=coordinate;
				Total+=1;
			}
			else{
				snake[Number][1]=coordinate;
				Total+=1;
				Number+=1;
			}
		}
	getline(fin,line);
	int XOrY=0;
	istringstream line_in2(line);
	while(line_in2 >>coordinate){
	food[XOrY]=coordinate;
	XOrY+=1;
	}
  length=Number;
	fin.close();
	area_initialization(area);
	insert_snake_food(snake,Number,food,area);
	system("clear");
 	print_area(area);
}


void end(int length){
	ifstream fin;
	int Hist_Highest;
	fin.open("Historical_Record.txt");
	if(fin.fail()){
    ofstream fout("Historical_Record.txt");
    fout<< length<<endl;
    cout<<"Congratuation, you achieve your highest score " <<length<<endl;
    fout.close();
		exit(1);
	}
	fin>>Hist_Highest;
	fin.close();
	if (length >= Hist_Highest){
    ofstream fout("Historical_Record.txt");
		if (fout.fail()){
			exit(1);
		}
		fout<< length<<endl;
		cout<<"Congratuation, you achieve your highest score " <<length<<endl;
    fout.close();
	}
	else {
	  cout<<"Your score is " <<length<<endl;
	}
exit(0);
}
