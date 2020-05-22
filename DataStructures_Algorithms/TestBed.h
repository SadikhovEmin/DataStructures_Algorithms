//
//  TestBed.h
//  Homework1
//
//  Created by Emin Sadykhov on 19.02.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#ifndef TEMP_TESTBED_H
#define TEMP_TESTBED_H

#include "SelectionAlgorithm.h"

class TestBed {
private:
    SelectionAlgorithm *algorithm;

public:
    void execute();
    void setAlgorithm(int, int);        // First param is type -> which algo to use and the second one is the kth element
    TestBed();
    ~TestBed();
};


#endif //TEMP_TESTBED_H
