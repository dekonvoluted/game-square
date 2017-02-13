# Set minimum version requirement for cmake
cmake_minimum_required( VERSION 3.7 FATAL_ERROR )

# Set name of project
project( game-square )

# Find Qt Widgets
find_package( Qt5Widgets REQUIRED )

# Automatically handle MOC headers
set( CMAKE_AUTOMOC ON )

# Set sources
set( sources main.cpp game.cpp player.cpp piece.cpp square.cpp )

# Compile executable
add_executable( ${CMAKE_PROJECT_NAME} ${sources} )

# Link to Qt widgets
target_link_libraries( ${CMAKE_PROJECT_NAME} Qt5::Widgets )

