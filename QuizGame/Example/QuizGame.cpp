// Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <format>
#include "QuestionModel.h"
#include "QuestionVault.h"

using namespace std;

/// <summary>
/// Prints out the values from the question model
/// </summary>
/// <param name="model">The question model</param>
/// <param name="Name">The players name</param>
/// <param name="currentValue">The value the player is currently playing for</param>

void AskQuestion(QuestionModel model, string Name, double currentValue) {
    // Output value for the question
    cout << "\n\n" + Name + " this question is for: " << "\x9C" + to_string(currentValue) + "\n\n";

    // Output the question
    cout << model.Question + "\n\n";

    // Output the answers
    cout << "1) " + model.Choices[0] + "  2)" + model.Choices[1] + "  3)" + model.Choices[2] + "  4)" + model.Choices[3];
}

int main()
{
    bool ContinuePlaying = true;

    while (ContinuePlaying) {
        bool CanPlay = true;
        string Name = "";
        QuestionVault questions;

        double questionValue = 1000;

        //Output the introduction to the game
        cout << "Welcome to Quiz Game!\n\n";
        cout << "The rules are simple, each correct answer will award you money!\n\n";
        cout << "After you have answered a question, you will have the option to bank your money and end the game!\n\n";
        cout << "If you give an incorrect answer you will lose all the money, so the risk is down to you!\n\n";
        cout << "So, lets begin!\n\n";

        //Obtain the players name
        cout << "What is your name?\n";
        cin >> Name;

        cout << "\nHello " << Name << " Get ready to play Quiz Game!\n";



        for (int i = 0; i < 15; i++) {

            int Answer;

            // Print the question to the console
            AskQuestion(questions.Vault[i], Name, questionValue);

            bool needAnswer = true;
            int maxRetries = 3;
            while (needAnswer) {
                // Ask for answer
                cout << "\n\nEnter your answer? 1, 2, 3 or 4...   ";
                cin >> Answer;

                if (Answer < 1 && Answer > 5) {
                    cout << "\n\nWrong Answer... please enter 1, 2, 3 or 4";

                }
                else if (maxRetries == 0) {
                    needAnswer = false;
                    cout << "\n\nSorry we can't detect your answer, please start again.";
                    // Cant continue
                    ContinuePlaying = false;
                }
                else {
                    needAnswer = false;
                }

                maxRetries--;
            }

            // Check for correct answer
            if (questions.Vault[i].Choices[Answer - 1] == questions.Vault[i].Correct_answer) {
                cout << "\n\nCorrect Answer!";
            }
            else {
                cout << "\n\nWrong Answer!";
                CanPlay = false;
            }

            // Clears the console
            cout << "\x1B[2J\x1B[H";

            // Check for Game Over
            if (!CanPlay) {
                cout << "\n\nGame Over! Sorry you leave the game with nothing!""\n";
                break;
            }

            questionValue += 1000;

        }

        if (ContinuePlaying == true) {
            // Ask If They Want To Continue
            int continuePlaying = 0;

            cout << "\n\nWould you like to Play Again or Exit the Game? 1 = Play again!, 2 = Exit Game   ";
            cin >> continuePlaying;
            cout << "\x1B[2J\x1B[H";

            // Finish Playing?
            if (continuePlaying == 2) {
                ContinuePlaying = false;
            }
        }
    }

}