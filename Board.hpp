#include <string>
#include "Direction.hpp"
#include <map>
#include <iostream>
#include <climits>

using namespace std;

namespace ariel
{

    class Board
    {
    private:
     map<unsigned int, map<unsigned int, char>> board;

        unsigned int Max_Row,Min_Row,Max_Column,Min_Column;
        
      public:
        Board()
        {
          Max_Column = 0;
            Max_Row = 0;
            Min_Row = 0;
            Min_Row = 0;
        }
        ~Board(){};

        void post(unsigned int row, unsigned int col, Direction direction, string const &str);
        string read(unsigned int row, unsigned int col, Direction direction, unsigned int number);
        void show();
    };
}