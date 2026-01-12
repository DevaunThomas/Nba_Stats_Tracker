#include "analytics/StatsAggregator.h"
using namespace std;

PlayerAggregateStats
StatsAggregator::aggregatePlayerSeason(const vector<StatLine> &statLines)
{
    PlayerAggregateStats result;

    if (statLines.empty())
    {
        return result;
    }

    for (const auto &line : statLines)
    {
        result.gamesPlayed++;

        result.totalPoints += line.points;
        result.totalAssists += line.assists;
        result.totalBlocks += line.blocks;
        result.totalRebounds += line.rebounds;
        result.totalSteals += line.steals;
        result.totalTurnOvers += line.turnovers;
    }

    result.avgPoints = static_cast<double>(result.totalPoints) / result.gamesPlayed;
    result.avgAssists = static_cast<double>(result.totalAssists) / result.gamesPlayed;
    result.avgBlocks = static_cast<double>(result.totalBlocks) / result.gamesPlayed;
    result.avgRebounds = static_cast<double>(result.totalRebounds) / result.gamesPlayed;
    result.avgSteals = static_cast<double>(result.totalSteals) / result.gamesPlayed;
    result.avgTurnOvers = static_cast<double>(result.totalTurnOvers) / result.gamesPlayed;

    return result;
}

/* AggregatedStats StatsAggregator::aggregateAllSeasons(
    const std::vector<StatLine> &statLines)
{
    AggregatedStats result;

    for (const auto &line : statLines)
    {
        result.gamesPlayed++;
        result.totalPoints += line.points;
        result.totalAssists += line.assists;
        result.totalBlocks += line.blocks;
        result.totalRebounds += line.rebounds;
        result.totalSteals += line.steals;
        result.totalTurnOvers += line.turnovers;
    }

    if (result.gamesPlayed > 0)
    {
        result.avgPoints = static_cast<double>(result.totalPoints) / result.gamesPlayed;
        result.avgAssists = static_cast<double>(result.totalAssists) / result.gamesPlayed;
        result.avgBlocks = static_cast<double>(result.totalBlocks) / result.gamesPlayed;
        result.avgRebounds = static_cast<double>(result.totalRebounds) / result.gamesPlayed;
        result.avgSteals = static_cast<double>(result.totalSteals) / result.gamesPlayed;
        result.avgTurnOvers = static_cast<double>(result.totalTurnOvers) / result.gamesPlayed;
    }

    return result;
}  */