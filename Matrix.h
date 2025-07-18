#pragma once

//DO NOT CHANGE THIS PART
typedef int TElem;
#define NULL_TELEM 0

class Matrix {

private:
    ////TODO - Representation
    //// 1. ADT Matrix – repräsentiert als schwachbesetzte Matrix (sparse), indem man ein
    ////dynamisches Array von Tupeln der Form(Zeile, Spalte, Wert)(Wert ≠0) benutzt,
    ////wobei die Tupel in lexikographischen Reihenfolge nach(Zeile, Spalte) gespeichert werden.

    int nrOfRows;
    int nrOfCols;

    int* valueRow;
    int* valueCol;
    TElem* elem;

public:
    //constructor
    Matrix(int nrLines, int nrCols);

    //returns the number of lines
    int nrLines() const;

    //returns the number of columns
    int nrColumns() const;

    //returns the element from line i and column j (indexing starts from 0)
    //throws exception if (i,j) is not a valid position in the Matrix
    TElem element(int i, int j) const;

    //modifies the value from line i and column j
    //returns the previous value from the position
    //throws exception if (i,j) is not a valid position in the Matrix
    TElem modify(int i, int j, TElem e);

    // destructor
    ~Matrix();

};
