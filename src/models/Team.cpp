#include "models/Team.h"
using namespace std;

Team::Team(const string &name) : teamName(name) {}

void Team::addPlayer(const Player &player)
{
    roster.push_back(player);
}

const std::vector<Player> &Team::getRoster() const
{
    return roster;
}

const string &Team::getName() const
{
    return teamName;
}
