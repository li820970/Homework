#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

/*
************************************************
  ____ ____    _  ___   __   
 / ___/ ___|  / |/ _ \ / /_  
| |   \___ \  | | (_) | '_ \ 
| |___ ___) | | |\__, | (_) |
 \____|____/  |_|  /_/ \___/ 
                             

Problem set 1


Question 3

Given an integer input N, print a staircase out of height N. For example, given the input 4, print out the following staircase:

    #
   ##
  ###
 ####
#####


PLEASE LOOK AT PS1.txt FOR MORE DETAILS!!!

************************************************

*/


void stairs(int input) {
	//YOUR CODE HERE
	return;
}

int main() {
  ifstream myfile("Anagram.txt");
  string input;
  if(myfile.is_open()) {
  	getline(myfile, input);
  	int cases = stoi(input);
  	for(int i = 0; i < cases;  i++) {
  		getline(myfile, input);
  		int height = stoi(input);
  		string output = stairs(height);
  		cout << output << endl;
  	}
  	myfile.close();
  }
  else cout << "unable to open file" << endl;
  return 0;
}
