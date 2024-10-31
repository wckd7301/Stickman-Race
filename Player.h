#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <chrono>

class Player {
public:
    Player(const std::string& name);

    void move();

    void increaseLap();

    void recordLapTime();

    std::string getName() const;
    int getLapCount() const;
    double getBestLapTime() const;
    double getCurrentLapTime() const;
    int getRank() const;
    int getX() const;
    int getY() const;
    bool isFinished() const;

    void finishRace();

    void setRank(int rank);

private:
    std::string name;
    int rank;
    int x;                                   //x coordinate on the track
    int y;                                   //y coordinate on the track
    int lapCount;
    std::vector<double> lapTimes;            //stores times for each lap
    double bestLapTime;
    bool finished;                           //status indicating if player finished

    //timer for tracking lap times (I really wanted to have lap times in the game, so I used chatGPT for this part)
    std::chrono::time_point<std::chrono::high_resolution_clock> lapStartTime;
};

#endif
