#ifndef GAMEMASTER_HPP_INCLUDED
#define GAMEMASTER_HPP_INCLUDED

#include <vector> // std::vector

#include "sudokucell.hpp"

class GameMaster{
public:
    GameMaster();
    std::vector<unsigned short>loadFieldsFromFile(std::string filename);
    bool isCorrect(int i, std::vector<SudokuCell*> &cells) const;
    bool isFinished(std::vector<SudokuCell*> &cells) const;

    bool isCorrectF(int i, std::vector<unsigned short> &field, bool emptyIs = true) const;
    bool isFinishedF(std::vector<unsigned short> &field) const;
    void backtrackGenerate(std::vector<unsigned short> &field, std::vector<std::vector<bool>> &theseWere, unsigned short j) const;
    void randomCells(std::vector<SudokuCell*> &cells) const;
};

#endif // GAMEMASTER_HPP_INCLUDED
