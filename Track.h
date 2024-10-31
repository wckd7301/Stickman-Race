#ifndef TRACK_H
#define TRACK_H

#include <vector>

class Track {
public:
    Track(int laps);

    int getTotalLaps() const;

    //set checkpoints for the track (checkpoints will be used to determine if the player has completed the lap correctly)
    void addCheckpoint(int x, int y);

    const std::vector<std::vector<int>>& getCheckpoints() const;

private:
    int totalLaps;                                       //number of laps required to finish the race
    std::vector<std::vector<int>> checkpoints;           //using a 2D vector to store checkpoints (x, y)
};

#endif
