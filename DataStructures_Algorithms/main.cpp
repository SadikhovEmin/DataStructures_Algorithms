//
//  main.cpp
//  HW4
//
//  Created by Emin Sadykhov on 30.04.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

#include "TestBed.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string testfile;

    if (argc < 2) {
        cout << "Enter a test file name:" << endl; cin >> testfile;
    } else {
        testfile = argv[1];
    }

    ifstream file(testfile.c_str());
    if (file.is_open()) {
        cin.rdbuf(file.rdbuf());
    } else {
        cout << "Error: cannot read the test file!" << endl;
        return -1;
    }
    
    int algorithmType = 0;
    int k = 0;
    
    cin >> algorithmType;
    cin >> k;

    TestBed *ptr = new TestBed();

    ptr -> setAlgorithm(algorithmType,k);
    ptr -> execute();
    
    delete ptr;
    
    return 0;
}
