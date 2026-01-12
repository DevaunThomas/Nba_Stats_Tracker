#pragma once
#include <string>
#include <vector>
#include "models/StatLine.h"
#include "analytics/PlayerAggregateStats.h"
#include "analytics/AggregatedStats.h"

using namespace std;

class StatsAggregator
{
public:
    static PlayerAggregateStats
    aggregatePlayerSeason(const vector<StatLine> &statLines);

    static AggregatedStats aggregateSeason(
        const std::vector<StatLine> &statLines,
        const std::string &season);

    static AggregatedStats aggregateAllSeasons(
        const std::vector<StatLine> &statLines);
};
