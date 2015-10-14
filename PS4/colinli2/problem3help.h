
#include <string>

#ifndef PROBLEM3QUESTION_H
#define PROBLEM3QUESTION_H


class problem3help {
	public:
		std::string printQuestion();
		std::string printAnswer();
};

std::string problem3help::printQuestion() {
	return "This is the question for problem 3";
}

std::string problem3help::printAnswer() {
	return "This is the answer for problem 3!";
}
#endif /* PROBLEM3QUESTION_H */