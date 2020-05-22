//
//  AlgorithmSortAll.cpp
//  Homework1
//
//  Created by Emin Sadykhov on 19.02.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include "AlgorithmSortAll.h"
#include <iostream>

using namespace std;

AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k) {

}

int AlgorithmSortAll::select() {
    int array_size = 0;
    int num = 0;
    cin >> array_size;

    int *num_array = new int[array_size];

    for(int i = 0; i < array_size; i++) {
        cin >> num;
        num_array[i] = num;
    }


    // Sort the array in decreasing order
    // Insertion Sort
    for(int i = 1; i < array_size; i++) {
        int n = i;
        while (n > 0 && num_array[n] > num_array[n - 1]) {
            int temp = num_array[n - 1];
            num_array[n - 1] = num_array[n];
            num_array[n] = temp;
            n--;
        }
    }
    int result = num_array[k - 1];
    
    delete [] num_array;

    return result;
}

