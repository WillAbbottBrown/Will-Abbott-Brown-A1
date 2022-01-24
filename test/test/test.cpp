#include <iostream>
using namespace std;

int main()
{
    //Output the introduction to the game
    cout << "Welcome to Quiz Game!\n";
    cout << "The rules are simple, each correct answer will award you money!\n";
    cout << "After you have answered a question, you will have the option to bank your money and end the game!\n";
    cout << "If you give an incorrect answer you will lose all the money, so the risk is down to you!\n";
    cout << "So, lets begin!\n";

    string Name = "";
    //Obtain the players name
    cout << "What is your name? ";
    cin >> Name;

    cout << "Hello " << Name << " Get ready to play Quiz Game!\n";

    //Question 1
    cout << "Question 1 for " << "\x9C" << "1000\n";
    cout << "What sport does Cristiano Ronaldo play?\n";

    int attempts = 3;
    string answer1 = "";
    bool requireInput = true;

    do 
    {
        cout << "Tennis (1), Football/Soccer (2), Rugby (3), Basketball (4) \n";
        cin >> answer1;

        if (answer1 == "2") {
            cout << "Correct Answer\n";
            requireInput = false;
        }
        else {
            cout << "incorrect answer, game over!\n";
            if (attempts > 0) {
                attempts--;
            }
            else {
                requireInput = false;
            }

        }
    } while (requireInput);
}
