#include <cmath>
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


Question 1

A common problem in computer science is finding patterns within data. 
This problem will simulate that in a way that is easy to see what is happening.

A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward or forward.
Allowances may be made for adjustments to capital letters, punctuation, and word dividers.

an anagram is a word, phrase, or name formed by rearranging the letters of another.


Given a String S, determine if it is an anagram of a palindrome. 
Return true if the String is an anagram of a palindrome, and false otherwise. 
For example, the String “oatrtro” will return true (rotator), while the String “false” will return false.


PLEASE LOOK AT PS1.txt FOR MORE DETAILS!!!

************************************************

*/


string anagram(string input) {
	//YOUR CODE HERE
	return "hello";
}

int main() {
  ifstream myfile("Anagram.txt");
  string input;
  if(myfile.is_open()) {
  	getline(myfile, input);
  	int cases = stoi(input);
  	for(int i = 0; i < cases;  i++) {
  		getline(myfile, input);
  		string output = anagram(input);
  		cout << output << endl;
  	}
  	myfile.close();
  }
  else cout << "unable to open file" << endl;
  return 0;
}

