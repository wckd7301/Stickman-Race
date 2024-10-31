#include "UI.h"
#include <iostream>

//please note that literaly everything here will be changed later when adding graphical interface. some of the methods 
//have been left empty because there us no piont in writing them without the graphical interface

void UI::displayMainMenu() {
}

void UI::displayRaceInfo(const std::vector<Player>& players) {
}

void UI::getPlayerNames(std::vector<Player>& players, int numPlayers) {
    for (int i = 0; i < numPlayers; i++) {
        std::string name;
        std::cout << "Enter name for Player " << (i + 1) << ": ";
        std::cin >> name;
        players.emplace_back(name);  //create a new Player with the given name
    }
}

void UI::promptStartRace() {
    std::cout << "Press Enter to start the race..." << std::endl;
    std::cin.ignore(); //ignore previous input
    std::cin.get();    //wait for user to press Enter
}

void UI::displayWinner(const Player& winner) {
}

void UI::displayLapTimes(const Player& player) {
}