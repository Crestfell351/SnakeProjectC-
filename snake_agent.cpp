#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to split a string by spaces
vector<string> splitString(const string &str) {
    vector<string> result;
    stringstream ss(str);
    string token;
    while (ss >> token) {
        result.push_back(token);
    }
    return result;
}

int main() {
    // Initialize random number generator
    srand(time(0));

    // Read the initial game settings: number of snakes, board width, height, mode
    string initStr;
    getline(cin, initStr);
    vector<string> initParams = splitString(initStr);
    
    int numSnakes = stoi(initParams[0]);
    int boardWidth = stoi(initParams[1]);
    int boardHeight = stoi(initParams[2]);
    int gameMode = stoi(initParams[3]);

    // Main game loop
    while (true) {
        string line;
        getline(cin, line);

        // Check for game over
        if (line.find("Game Over") != string::npos) {
            break;
        }

        // Read the apple's position
        vector<string> applePos = splitString(line);
        int appleX = stoi(applePos[0]);
        int appleY = stoi(applePos[1]);

        // Read obstacles
        for (int i = 0; i < 3; i++) {
            getline(cin, line);
            // Parse obstacle locations and handle them
        }

        // Read zombies
        for (int i = 0; i < 6; i++) {
            getline(cin, line);
            // Parse zombie locations and handle them
        }

        // Read which snake is yours
        getline(cin, line);
        int mySnakeNum = stoi(line);

        // Read snakes' states
        for (int i = 0; i < numSnakes; i++) {
            getline(cin, line);
            // Parse snake information and handle it
            if (i == mySnakeNum) {
                // This is our snake, so we process its state.
            }
        }

        // Choose a random move for now (later, replace with intelligent decisions)
        int move = rand() % 4;
        cout << move << endl;  // Output the move to standard output
    }

    return 0;
}
