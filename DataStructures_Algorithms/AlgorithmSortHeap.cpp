//
//  AlgorithmSortHeap.cpp
//  HW3
//
//  Created by Emin Sadykhov on 18.04.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include <iostream>
#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"

using namespace std;

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k) {
    
}

int AlgorithmSortHeap::select() {
    int total_number = 0;
    
    cin >> total_number;
    
    BinaryHeap * min_heap = new BinaryHeap(k);
    
    int current_number = 0;
    
    for(int i = 0; i < k; i++) {
        cin >> current_number;
        min_heap -> insert(current_number);
    }
    
    // Comparing the remaining elements with the root node
    for(int i = 0; i < total_number - k; i++) {
        cin >> current_number;
        
        
        if(current_number > min_heap -> getMin()) {
            min_heap -> deleteMin();
            min_heap -> insert(current_number);
        }
    }
    
    int answer = min_heap -> getMin();
    
    delete min_heap;
    
    return answer;
}

