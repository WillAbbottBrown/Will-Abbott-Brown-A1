#pragma once

#include <string>

using namespace std;


class QuestionModel
{
	public:
		string Question = "";
		string Correct_answer = "";
		string Choices[4] = {"", "", "", ""};

		QuestionModel() {

		}

		QuestionModel(string question, string correct_answer, string choices[4]) {
			this->Question = question;
			this->Correct_answer = correct_answer;
			for (int i = 0; i < 4; i++) {
				this->Choices[i] = choices[i];
			}
		}

		
};

