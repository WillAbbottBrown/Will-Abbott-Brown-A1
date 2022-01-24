#pragma once
#include "QuestionModel.h"


class QuestionVault
{
public:
	QuestionModel Vault[15];

	QuestionVault() {     // Constructor
		Setup();
	};

	//All the Questions and answers to be displayed
	void Setup() {
		//Question 1
		string answers[4] = { "Tennis", "Football/Soccer", "Rugby", "Basketball" };
		Vault[0] = QuestionModel("What sport does Cristiano Ronaldo play?", "Football/Soccer", answers);

		//Question 2
		string answers2[4] = { "Harry Styles", "Ed Sheeran", "Justin Bieber", "Justin Timberlake" };
		Vault[1] = QuestionModel("What is the name of the musical artist who sings the song 'Watermelon Sugar'?", "Harry Styles", answers2);

		//Question 3
		string answers3[4] = { "Neon", "Calcium", "Magnesium", "Sodium" };
		Vault[2] = QuestionModel("What does Na stand for on the periodic table?", "Sodium", answers3);

		//Question 4
		string answers4[4] = { "Starship", "Death Star", "Millennium Falcon", "X-wing" };
		Vault[3] = QuestionModel("In Star Wars, what is the name of Han Solo’s ship?", "Millennium Falcon", answers4);

		//Question 5
		string answers5[4] = { "202", "196", "206", "212" };
		Vault[4] = QuestionModel("How many bones are there in the human body?", "206", answers5);

		//Question 6
		string answers6[4] = { "Texas", "Alaska", "California", "Montana" };
		Vault[5] = QuestionModel("Which U.S. State is the largest?", "Alaska", answers6);

		//Question 7
		string answers7[4] = { "19", "11", "7", "15" };
		Vault[6] = QuestionModel("On a dartboard, what number is directly opposite No. 1?", "19", answers7);

		//Question 8
		string answers8[4] = { "Cats", "Snakes", "Bats", "Dogs" };
		Vault[7] = QuestionModel("What is Cynophobia the fear of?", "Dogs", answers8);

		//Question 9
		string answers9[4] = { "92", "88", "90", "86" };
		Vault[8] = QuestionModel("How many notes are there on a standard grand piano?", "88", answers9);

		//Question 10
		string answers10[4] = { "Soprano", "Tenor", "Alto", "Baritone" };
		Vault[9] = QuestionModel("Which is the highest voice part?", "Soprano", answers10);

		//Question 11
		string answers11[4] = { "Granite", "Sandstone", "Marble", "Diamond" };
		Vault[10] = QuestionModel("Which is the hardest rock?", "Diamond", answers11);

		//Question 12
		string answers12[4] = { "Aerophobia", "Arachnophobia", "Agoraphobia", "Acrophobia" };
		Vault[11] = QuestionModel("Which of the following disorders is the fear of being alone?", "Agoraphobia", answers12);

		//Question 13
		string answers13[4] = { "Toy Story", "Snow White and the Seven Dwarfs", "Sleeping Beauty", "Cinderella" };
		Vault[12] = QuestionModel("Which was the first film by Disney to be produced in colour?", "Snow White and the Seven Dwarfs", answers13);

		//Question 14
		string answers14[4] = { "1431", "1412", "1421", "1427" };
		Vault[13] = QuestionModel("In which year was Joan of Arc burnt at stake?", "1431", answers14);

		//Question 15
		string answers15[4] = { "Artemis", "Ceres", "Aphrodite", "Demeter" };
		Vault[14] = QuestionModel("According to Greek mythology, who is considered the Goddess of Agriculture?", "Demeter", answers15);






	}
};