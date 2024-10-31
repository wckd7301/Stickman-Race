#ifndef UI_H
#define UI_H

#include <string>
#include <vector>
#include "Player.h"

class UI {
public:
    void displayMainMenu();

    //displays the race information
    void displayRaceInfo(const std::vector<Player>& players);

    // gets player names from user
    void getPlayerNames(std::vector<Player>& players, int numPlayers);

    //making sure that the user is ready to start the race
    void promptStartRace();

    void displayWinner(const Player& winner);

    void displayLapTimes(const Player& player);
};

#endif
