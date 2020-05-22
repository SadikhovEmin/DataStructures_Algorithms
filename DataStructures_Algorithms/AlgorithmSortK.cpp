//
//  AlgorithmSortK.cpp
//  Homework1
//
//  Created by Emin Sadykhov on 19.02.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include "AlgorithmSortK.h"
#include <iostream>

using namespace std;

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k) {

}

int AlgorithmSortK::select() {
    int *num_array = new int[k];
    int array_size = 0;
    int num = 0;
    
    cin >> array_size;
    
    // Storing first k numbers to the array
    for(int i = 0; i < k; i++) {
        cin >> num;
        num_array[i] = num;
    }
    
    // Sorting first k numbers in the array
    for(int i = 1; i < k; i++) {
        int n = i;
        while (n > 0 && num_array[n] > num_array[n - 1]) {
            int temp = num_array[n - 1];
            num_array[n - 1] = num_array[n];
            num_array[n] = temp;
            n--;
        }
    }
    
   // Read the rest of the numbers one by one
    for(int i = k; i < array_size; i++) {
        cin >> num;
        if(num > num_array[k - 1]) {

            num_array[k - 1] = num;
            
                
                    int n = k-1;
                    while (n > 0 && num_array[n] > num_array[n - 1]) {
                        int temp = num_array[n - 1];
                        num_array[n - 1] = num_array[n];
                        num_array[n] = temp;
                        n--;
                    }
        }
    }
    int result = num_array[k - 1];
    
    delete [] num_array;
    
    return result;
}
