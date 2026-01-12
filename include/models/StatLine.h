#pragma once

#include <cstdint>
#include <string>

struct StatLine
{
    uint32_t points = 0;
    uint32_t rebounds = 0;
    uint32_t assists = 0;
    uint32_t steals = 0;
    uint32_t blocks = 0;
    uint32_t FGAttempts = 0;
    uint32_t FGMade = 0;
    uint32_t threesAttempted = 0;
    uint32_t threesMade = 0;
    uint32_t FTAttempts = 0;
    uint32_t FTMade = 0;
    uint32_t turnovers = 0;
    uint32_t minutesPlayed = 0;
    uint32_t playerId;
    uint32_t gameId;

    std::string season;
};