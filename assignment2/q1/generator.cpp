//
// Created by Vishwas
//

#include <iostream>

using namespace std;

int main2(int argc, char **argv) {
    if (argc < 3) {
        cout << "Usage ./<filename> <generator> <data>" << endl;
        return 1;
    }

    string generator(argv[1]);
    string data(argv[2]);
    string temp_data(argv[2]);

    // add extra zeros at the end of temp_data to store remainder
    for (int i = 0; i < generator.size() - 1; ++i) {
        temp_data.push_back('0');
    }

    for (int i = 0; i < data.size(); i++) {
        if (temp_data[i] == '1') {
            for (int j = 0; j < generator.size(); j++) {
                // XOR
                temp_data[i + j] = (temp_data[i + j] == generator[j]) ? '0' : '1';
            }
        }
    }

    cout << data << "" << temp_data.substr(temp_data.size() - generator.size() + 1) << endl;
}