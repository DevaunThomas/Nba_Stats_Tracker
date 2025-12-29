#pragma once
#include <string>
#include <unordered_map>
#include "StatLine.h"
using namespace std;

class Game
{
public:
    Game(
        const string &date,
        const string &homeTeam,
        const string &awayTeam);
    void addPlayerStats(int playerId, const StatLine &stats);

private:
    string gameDate;
    string home;
    string awayT;
    unordered_map<int, StatLine> playerStats;
};