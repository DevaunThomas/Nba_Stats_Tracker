cmake_minimum_required(VERSION 3.16)

project(nba_stats_tracker
    VERSION 0.1
    DESCRIPTION "NBA player stats tracking and analytics engine"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(nba_stats_tracker
    src/main.cpp
    src/models/Player.cpp
    src/models/Team.cpp
    src/models/Game.cpp
    src/models/StatLine.cpp
    src/analytics/StatsAggregator.cpp
)

target_include_directories(nba_stats_tracker
    PRIVATE include
)
