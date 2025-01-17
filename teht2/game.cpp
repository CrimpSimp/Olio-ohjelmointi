#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNumber)
{
    this->maxNumber = maxNumber;

    cout<<"Game started"<<endl;
    play();
}

Game::~Game()
{
    cout<<"Object removed from memory"<<endl;
}

void Game::play()
{
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() % maxNumber +1;

    do
    {
        cout<<"Guess a number between 1 and "<< maxNumber <<endl;
        cin>> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber)
        {
            cout<<"too small"<<endl;
        }

        else if(playerGuess > randomNumber)
        {
            cout<<"too big"<<endl;
        }

        else
        {
            cout<<"Correct!"<<endl;
        }

    } while(playerGuess != randomNumber);

    printGameResult();
}


void Game::printGameResult()
{

    cout<<"Right answer is "<< randomNumber<<endl;
    cout<<"You guessed "<<numOfGuesses<<" times"<<endl;
}
