#include "models/Player.h"

using namespace std;

Player::Player(int id, const string &name, const string &team)
    : playerID(id), playerName(name), playerTeam(team) {};
void Player::addGameStats(const StatLine &stats)
{
    gameStats.push_back(stats);
}

int Player::getID() const
{
    return playerID;
}

string Player::getName() const
{
    return playerName;
}

string Player::getTeam() const
{
    return playerTeam;
}

StatLine Player::getSeasonTotals() const
{
    StatLine totals;

    for (const auto &game : gameStats)
    {
        totals.points += game.points;
        totals.rebounds += game.rebounds;
        totals.assists += game.assists;
        totals.steals += game.steals;
        totals.blocks += game.blocks;
        totals.turnovers += game.turnovers;

        totals.FGMade += game.FGMade;
        totals.FGAttempts += game.FGAttempts;
        totals.threesMade += game.threesMade;
        totals.threesAttempted += game.threesAttempted;
        totals.FTMade += game.FTMade;
        totals.FTAttempts += game.FTAttempts;

        totals.minutesPlayed += game.minutesPlayed;
    }

    return totals;
}
