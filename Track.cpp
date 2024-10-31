#include "Track.h"

Track::Track(int laps) : totalLaps(laps) {}

int Track::getTotalLaps() const {
    return totalLaps;
}

void Track::addCheckpoint(int x, int y) {
    checkpoints.push_back({x, y});
}

const std::vector<std::vector<int>>& Track::getCheckpoints() const {
    return checkpoints;
}
