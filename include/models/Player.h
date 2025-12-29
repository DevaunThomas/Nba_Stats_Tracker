#pragma once
using namespace std;
#include <string>
#include <vector>
#include "StatLine.h"

class Player
{
public:
    Player(int id, const string &name, const string &team);

    int getID() const;
    string getName() const;
    string getTeam() const;

    void addGameStats(const StatLine &stats);
    StatLine getSeasonTotals() const;

private:
    int playerID;
    string playerName;
    string playerTeam;
    vector<StatLine> gameStats;
};