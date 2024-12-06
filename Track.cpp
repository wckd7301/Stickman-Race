#include "Track.h"

Track::Track(int laps) : totalLaps(laps) {
    //placeholder logic for checkpoints
    checkpoints.push_back({0, 0});  //starting point
    checkpoints.push_back({5, 10});
    checkpoints.push_back({10, 15});
    checkpoints.push_back({15, 5});
    checkpoints.push_back({0, 0});  //ending point (same as start)
}

int Track::getTotalLaps() const {
    return totalLaps;
}

void Track::addCheckpoint(int x, int y) {
    checkpoints.push_back({x, y});
}

const std::vector<std::vector<int>>& Track::getCheckpoints() const {
    return checkpoints;
}
