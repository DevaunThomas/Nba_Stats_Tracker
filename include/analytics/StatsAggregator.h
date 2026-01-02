#pragma once

#include <vector>
#include "models/StatLine.h"
#include "analytics/PlayerAggregateStats.h"
using namespace std;

class StatsAggregator
{
public:
    static PlayerAggregateStats
    aggregatePlayerSeason(const vector<StatLine> &statLines);
};
