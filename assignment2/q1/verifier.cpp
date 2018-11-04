//
// Created by Vishwas
//

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    if (argc < 3) {
        cout << "Usage ./<filename> <generator> <encoded_data>" << endl;
        return 1;
    }

    string generator(argv[1]);
    string encoded_data(argv[2]);
//    string temp_data(argv[2]);
    long original_data_len = encoded_data.size() - generator.size() + 1;

    for (int i = 0; i < original_data_len; i++) {
        if (encoded_data[i] == '1') {
            for (int j = 0; j < generator.size(); j++) {
                // XOR
                encoded_data[i + j] = (encoded_data[i + j] == generator[j]) ? '0' : '1';
            }
        }
    }

    for (long i = original_data_len; i < encoded_data.size(); i++) {
        if (encoded_data[i] == '1') {
            cout << "Data is not correct" << endl;
            return 0;
        }
    }

    cout << "Data is correct" << endl;
}