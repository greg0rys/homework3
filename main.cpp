#include "main.h"

int main() {
    ifstream file;
    openFile(file);

    return 0;
}

void openFile(ifstream &file) {
    char * filename = nullptr;
    cout << "Please enter a file name: ";
    cin.getline(filename,'\n');
    cout << filename;
}