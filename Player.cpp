#include "Player.h"
#include <chrono>

//I will either add a function later that randomly gives the players a starting position (instead of setting it to 0) or
//I will set up a qualifying race before the main race givving them a starting position based on their lap times in qualifying race
//unfotunately I dont have time for either of those right now
Player::Player(const std::string& name) : name(name), rank(0), x(0), y(0), lapCount(0), bestLapTime(0.0), finished(false) {
    //start the timer for lap time
    lapStartTime = std::chrono::high_resolution_clock::now();
}

void Player::move() {
    //update the player's coordinates (dummy logic for now, will be updated later using input handling)
    x += 1;
    y += 1;
}

void Player::increaseLap() {
    lapCount++;
    recordLapTime();
    //reset the timer for the next lap (still using chatGPT for this part)
    lapStartTime = std::chrono::high_resolution_clock::now();
}

void Player::recordLapTime() {
    auto now = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> lapTime = now - lapStartTime;
    double lapSeconds = lapTime.count();

    lapTimes.push_back(lapSeconds);

    //update best lap time if this one is faster
    if (bestLapTime == 0 || lapSeconds < bestLapTime) {
        bestLapTime = lapSeconds;
    }
}

std::string Player::getName() const {
    return name;
}

int Player::getLapCount() const {
    return lapCount;
}

double Player::getBestLapTime() const {
    return bestLapTime;
}

double Player::getCurrentLapTime() const {
    if (lapTimes.empty()) {
        return 0.0;
    }
    return lapTimes.back();
}

int Player::getRank() const {
    return rank;
}

int Player::getX() const {
    return x;
}

int Player::getY() const {
    return y;
}

bool Player::isFinished() const {
    return finished;
}

void Player::finishRace() {
    finished = true;
}

void Player::setRank(int rank) {
    this->rank = rank;
}
