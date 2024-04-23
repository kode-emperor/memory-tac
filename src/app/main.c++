#include <iostream>
#include <thread>
#include <format>
#include <random>
#include <functional>

//initial thought to memory tac
//Memory tac does not print the details of the game
//the players have to remember what positions their
//opponent is in.
//the players however are able to query the last move
//made
//players take turns making moves
//players are allocated turn time to make a move
//if player does not make move within set time
// the game makes a move or the next player automatically
// wins
// command line usage

//memorytac -new -p1 <player_name>|<random_default_string> -p2 <player_name>|<random_default_string> -fp <p1>|<p2>|<random<p1,p2>> -t <seconds|default>
// #lm :returns the last move played in the current session of the game
//#(row,col) :<player> moves to row and column



using namespace std;

struct Square {
    int index;
    bool isOccupied;
};

class Grid {
  public:
    //(1,1) => 0

    bool isOccupied(const int index);
  private:
    std::vector<Square> m_squares; //make sure its 9 squares
    const int convertVectorToIndex(const int x, const int y);
    const (int, int) convertIndexToVector(const int index);
};


int main(int argc, char* argv[])
{

    return 0;
}
