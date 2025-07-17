#include "Matrix.h"
#include <exception>
#include <stdexcept>
using namespace std;

Matrix::Matrix(int nrLines, int nrCols) {
    if (nrLines <= 0 || nrCols <= 0) {
        throw runtime_error("Wrong input");
    }

    nrOfRows = nrLines;
    nrOfCols = nrCols;
}

int Matrix::nrLines() const {
    return nrOfRows;
}

int Matrix::nrColumns() const {
    return nrOfCols;
}

TElem Matrix::element(int i, int j) const {
    for (int index = 0; index <= nrOfCols - 1; index++) {
        if (valueRow[index] == i && valueCol[index] == j) {
            return elem[index];
        }
    }
    return NULL_TELEM;
}

TElem Matrix::modify(int i, int j, TElem e) {
    //TODO - Implementation
    return NULL_TELEM;
}

Matrix::~Matrix() {
    delete[] valueRow;
    delete[] valueCol;
    delete[] elem;
}