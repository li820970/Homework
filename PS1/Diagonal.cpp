#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

/*
************************************************
  ____ ____    _  ___   __   
 / ___/ ___|  / |/ _ \ / /_  
| |   \___ \  | | (_) | '_ \ 
| |___ ___) | | |\__, | (_) |
 \____|____/  |_|  /_/ \___/ 
                             

Problem set 1


Question 2

Given a square matrix size N x N, calculate the product of the sums across the two main diagonals.
For example, given the input:

3

4 5 7
3 1 5
9 3 2

Return: (4+1+2)*(9+1+7) = 119

PLEASE LOOK AT PS1.txt FOR MORE DETAILS!!!

************************************************

*/


int main() {
  ifstream myfile("Diagonal.txt");
  string input;
  if(myfile.is_open()) {
    getline(myfile, input);
  	int cases = stoi( input );
    for(int i = 0; i < cases; i++) {
      getline(myfile, input);
      int dimension = stoi( input );
      int matrix[dimension][dimension];
      for(int j = 0; j < dimension; j++) {
        string line;
        line = getline(myfile, line);
        istringstream iss(line);
        for(int k = 0; k < dimension; k++) {
          string temp;
          iss >> temp;
          matrix[j][k] = stoi(temp);
        }
      }
      

      int output;
      /*
      Given the square matrix, store the product in the output
      variable above, and print it to console out.

      YOUR CODE HERE

      */
    }
  	myfile.close();
  }
  else cout << "unable to open file" << endl;

  return 0;
}
