#include <iostream>
#include <string>

#include "models/StatLine.h"

int main(int argc, char *argv[])
{
    std::cout << "NBA Stats Tracker initialized.\n";

    std::string playerName;
    bool careerSummary = false;

    // Simple argument parsing
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];

        if (arg == "--player" && i + 1 < argc)
        {
            playerName = argv[i + 1];
            ++i;
        }
        else if (arg == "--career-summary")
        {
            careerSummary = true;
        }
    }

    if (playerName.empty())
    {
        std::cout << "Usage:\n";
        std::cout << "  --player \"Player Name\" [--career-summary]\n";
        return 0;
    }

    // TEMP: Hardcoded demo data
    if (playerName == "LeBron James")
    {
        if (careerSummary)
        {
            std::cout << "\nCareer Summary: " << playerName << "\n";
            std::cout << "Seasons Played: 2\n";
            std::cout << "Avg PTS: 27.5\n";
            std::cout << "Avg REB: 8.1\n";
            std::cout << "Avg AST: 7.0\n";
        }
        else
        {
            StatLine stats;
            stats.season = "2023-24";
            stats.points = 28;
            stats.rebounds = 8;
            stats.assists = 6;

            std::cout << "\nPlayer: " << playerName << "\n";
            std::cout << "Season: " << stats.season << "\n";
            std::cout << "PTS: " << stats.points << "\n";
            std::cout << "REB: " << stats.rebounds << "\n";
            std::cout << "AST: " << stats.assists << "\n";
        }
    }
    else
    {
        std::cout << "Player not found.\n";
    }

    return 0;
}
