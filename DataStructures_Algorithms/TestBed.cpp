//
//  TestBed.cpp
//  Homework1
//
//  Created by Emin Sadykhov on 19.02.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "TestBed.h"
#include "AlgorithmSortAll.h"
#include "AlgorithmSortK.h"
#include "AlgorithmSortHeap.h"
#include "AlgorithmSortQuick.h"

using namespace std;

TestBed::TestBed() {

}

void TestBed::setAlgorithm(int type, int k) {
    if(type == 1) {
        algorithm = new AlgorithmSortAll(k);
    } else if(type == 2) {
        algorithm = new AlgorithmSortK(k);
    } else if(type == 3) {
        algorithm = new AlgorithmSortHeap(k);
    } else if(type == 4) {
        algorithm = new AlgorithmSortQuick(k);
    }
}

void TestBed::execute() {
    clock_t start = clock();
    
    cout << this -> algorithm -> select() << endl;
    
    clock_t end = clock();
    
    double cpu_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    
    cout << "Duration (sec) " << cpu_time << endl;
}

TestBed::~TestBed() {
    delete algorithm;
}
