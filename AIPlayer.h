#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "Player.h"

class AIPlayer : public Player {
public:
    AIPlayer(const std::string& name, int difficulty);

    void moveAI(const std::vector<std::vector<int>>& trackCheckpoints);

    int getDifficulty() const;

private:
    int difficulty; // difficulty level of the AI (1 = easy, 2 = medium, 3 = hard, it will be determined using raceline)

    // helper function to calculate AI movement based on difficulty
    void calculateMovement(const std::vector<int>& checkpoint);
};

#endif
