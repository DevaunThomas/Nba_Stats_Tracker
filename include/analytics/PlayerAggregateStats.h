#pragma once
#include <cstdint>

struct PlayerAggregateStats
{
    uint32_t gamesPlayed = 0;

    uint32_t totalPoints = 0;
    uint32_t totalRebounds = 0;
    uint32_t totalAssists = 0;
    uint32_t totalSteals = 0;
    uint32_t totalBlocks = 0;
    uint32_t totalTurnOvers = 0;

    double avgPoints = 0.0;
    double avgRebounds = 0.0;
    double avgAssists = 0.0;
    double avgSteals = 0.0;
    double avgBlocks = 0.0;
    double avgTurnOvers = 0.0;
};