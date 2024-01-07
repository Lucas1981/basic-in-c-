#!/bin/bash

# Check for Homebrew, install if we don't have it
if test ! $(which brew); then
    echo "Installing Homebrew..."
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
fi

# Update Homebrew recipes
brew update

# Check if SFML is installed
if ! brew ls --versions sfml > /dev/null; then
    echo "SFML not installed. Installing SFML..."
    brew install sfml
fi

# Define the compiler and the output file
COMPILER=g++
OUTPUT=main

# Define the source files with their respective paths
SOURCE_FILES="src/main.cpp src/Graphics/Graphics.cpp src/Input/Input.cpp src/Clock/Clock.cpp src/Circle/Circle.cpp src/CirclesLoader/CirclesLoader.cpp"

# SFML include and lib paths
SFML_INCLUDE_PATH="/opt/homebrew/Cellar/sfml/2.6.1/include"
SFML_LIB_PATH="/opt/homebrew/Cellar/sfml/2.6.1/lib"

# Compile the program with SFML
$COMPILER $SOURCE_FILES -o $OUTPUT -std=c++11 -I$SFML_INCLUDE_PATH -L$SFML_LIB_PATH -lsfml-graphics -lsfml-window -lsfml-system

# Print a success message
echo "Compilation complete. Run ./$OUTPUT to execute the program."
