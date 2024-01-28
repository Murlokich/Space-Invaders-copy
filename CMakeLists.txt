cmake_minimum_required(VERSION 3.7)

project(SpaceInvaders)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} include)


add_executable(SpaceInvaders src/main.cpp src/game.cpp src/game_entity.cpp)
target_link_libraries(SpaceInvaders ${SDL2_LIBRARIES})