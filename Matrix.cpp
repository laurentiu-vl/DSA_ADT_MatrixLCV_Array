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
    if (i < 0 || j < 0 || i >= nrOfRows || j >= nrOfCols) {
        throw runtime_error("Wrong input");
    }
    if (nrOfRows <= 0 || nrOfCols <= 0) {
        throw runtime_error("Wrong input");
    }

    for (int index = 0; index <= nrOfCols - 1; index++) {
        if (valueRow[index] == i && valueCol[index] == j) {
            return elem[index];
        }
    }
    return NULL_TELEM;
}

TElem Matrix::modify(int i, int j, TElem e) {
    TElem oldElem;

    if (i < 0 || j < 0 || i >= nrOfRows || j >= nrOfCols) {
        throw runtime_error("Wrong input");
    }
    if (nrOfRows <= 0 || nrOfCols <= 0) {
        throw runtime_error("Wrong input");
    }

    for (int index = 0; index <= nrOfCols - 1; index++) {
        if (valueRow[index] == i && valueCol[index] == j) {
            oldElem = elem[index];

            if (e == NULL_TELEM) {
                //functie de sters x[index]
            }
            valueRow[index] = e;
            return oldElem;
        }
    }
}

Matrix::~Matrix() {
    delete[] valueRow;
    delete[] valueCol;
    delete[] elem;
}