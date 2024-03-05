/*Written by Steve Nwachukwu and Nick Larkin*/

#include "game.hpp"

Game::Game(): dices(new Dice (4)){getNewPlayer();} //constructor for game

Game::~Game() {delete dices;
                delete player1;} //destructor for game

void Game::getNewPlayer() {
    string playerName;
    string color;
    cout << "Enter in the player 1's name:\n" << endl;
    cin >> playerName;
    cout << "Enter in the player 1's color:\n" << endl;
    cin >> color;
    int index;
    for (int k = 0; k < 5; k++ ) {
        if (colorStrings[k] == color) {
            index = k;
            cout << "Color input accepted!" << endl;
        }
    }
    player1 = new Player(playerName, (ECcolor)index); //calling the Player constructor
    cout << "Enter in the player 2's name:\n" << endl;
    cin >> playerName;
    cout << "Enter in the player 2's color:\n" << endl;
    cin >> color;
    for (int k = 0; k < 5; k++ ) {
        if (colorStrings[k] == color) {
            index = k;
            cout << "Color input accepted!" << endl;
        }
    }
//    player2 = Player(playerName, (ECcolor)index); //calling the Player constructor
}

void Game::unitTest() {
dices->roll();
cout << *dices << endl;
cout << player1 << endl;
//cout << player2 << endl;
Board play;
} //the unit test utilized for game

void Game::oneTurn(Player* pp) {
    string gameOptions;

    cout << "Please pick one of the following options:\n" << endl;
    cout << " Roll     Stop     Resign" << endl;
    cin >> gameOptions;
    if (gameOptions == "Roll") {
     Gameroll();
    }
    else if (gameOptions == "Stop") {
        Gamestop();
    }
    else {
        cout << "Sorry, couldn't register your input!" << endl;
    }

}

void Game::Gameroll() {
    Dice* roll();
    cout << "Please select one pair of dice: " << endl;
    dices->roll();
    const int* diceArray = dices->roll();
    cout << "Output A: " << diceArray[0];
    cout << "Output B: " << diceArray[1];
    cout << "Output C: " << diceArray[2];
    cout << "Output D: " << diceArray[3];
    int firstVal;
    int secondVal;
    cout << "Please select any of the dice values and letters: " << endl;
    cin >> firstVal;
    cin >> secondVal;
    int totalVal = (firstVal + secondVal);
    Play.move(totalVal);
    Play.print(cout);
    bool Boardval = Play.move(totalVal);
    if (Boardval == true) {
        Play.print(cout);
    }
    else {
    Play.bust();
    }
} //function utilized to run the roll option

void Game::Gamestop() {
    Play.stop();
    Player* wonColumn(int column);
} //function utilized to run the stop option
