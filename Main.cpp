/**
 * Main program for message-board exercise.
 * 
 * Author: Dvir Avrahami
 * Since : 2021-03
 */

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    ariel::Board board;
    board.show();
    board.post(/*row=*/100, /*column=*/200, Direction::Vertical, "hello world!");
    cout << board.read(/*row=*/100, /*column=*/200, Direction::Vertical, /*length=*/5) << endl;
    board.show();
    board.post(/*row=*/1000, /*column=*/200000, Direction::Horizontal, "bash grade 100");
    cout << board.read(/*row=*/1000, /*column=*/200000, Direction::Horizontal, 15) << endl;
    board.post(/*row=*/1005, /*column=*/199997, Direction::Horizontal, "HOUSE FOR RENT!!");
    board.post(/*row=*/1006, /*column=*/199999, Direction::Horizontal, "BEST PRICE!!");
    board.post(/*row=*/1007, /*column=*/199999, Direction::Horizontal, "CALL US NOW!");
    board.post(/*row=*/1008, /*column=*/199999, Direction::Horizontal, "050-***-****");

    board.post(/*row=*/982, /*column=*/200007, Direction::Vertical, "lost dog halp us find him");
    
    board.show();
}
