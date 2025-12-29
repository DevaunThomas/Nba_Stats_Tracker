#pragma once

#include <string>
#include <vector>
#include "Player.h"
using namespace std;

class Team
{
public:
    Team(const string &name);
    void addPlayer(const Player &player);
    const vector<Player> &getRoster() const;
    const string &getName() const;

private:
    vector<Player> roster;
    string teamName;
};