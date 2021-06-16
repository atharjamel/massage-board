#include "Board.hpp"
#include <string>
#include <iomanip>
#include <limits.h>
#include <iostream>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;
using namespace ariel;

void Board::post(unsigned int row, unsigned int col, Direction direction, string const &str)
{
    Min_Row=min(Min_Row,row);
    Min_Column=min(Min_Column,col);

    if (direction == Direction::Horizontal)
    { 
        Max_Column=max(Max_Column,col+unsigned (str.length()));
    }
    else {
        Max_Row=max(Max_Row,row+unsigned(str.length()));
    }
    if (direction==Direction::Vertical){
    for( unsigned int i=0;i<str.length();i++){
     board[row][col]=str[i];
            row++;
        }
    }
        else {
            for(unsigned int j=0;j<str.length();j++){
            board[row][col]=str[j];
            col++;
        }
    }
}
string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int number_size)
{

    string result="";
    if (direction == Direction::Vertical)
    { 
        for (unsigned int i= 0; i < number_size;i++){
            if(board[row][col]==0){
                result=result+'_';
            }
            else
            {
                result=result+board[row][col];
               
            }
            row++;
            
        }
    }
    else  if (direction==Direction::Horizontal){
    
        for (unsigned int j = 0; j < number_size; j++)
        {
            if (board[row][col]==0){
                result=result+'_';
            }
            else
            {
                result=result+board[row][col];
            
            }
            col++;
        }
    }
    return result;
}

void Board::show()
{
    cout<<"board of massage!"<<endl;
    for (unsigned int i=0;i<Max_Row;i++){
        for (unsigned int j=0;j<Max_Column;j++ ){
            cout<<board[i][j]<<endl;
        }
    }
}
