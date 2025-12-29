#include "models/Game.h"
using namespace std;

Game::Game(const string &date, const string &homeTeam, const string &awayTeam)
    : gameDate(date), home(homeTeam), awayT(awayTeam) {};

void Game::addPlayerStats(int playerId, const StatLine &stats)
{
    playerStats[playerId] = stats;
}
