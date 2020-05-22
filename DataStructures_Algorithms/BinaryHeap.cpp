//
//  BinaryHeap.cpp
//  HW3
//
//  Created by Emin Sadykhov on 02.04.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include <iostream>
#include "BinaryHeap.h"

using namespace std;

BinaryHeap::BinaryHeap(int capacity) {
    this -> capacity = capacity;
    
    heap = new int[capacity + 1];           // The element at index 0 is not used! The root element will be placed at index 1
    size = 0;
}

BinaryHeap::~BinaryHeap() {
    delete [] heap;
}

void BinaryHeap::insert(int element) {
    if(size < capacity) {
        int hole = ++size;

        for(; hole > 1 && element < heap[hole / 2]; hole /= 2)
            heap[hole] = heap[hole / 2];

        heap[hole] = element;
    }
}

void BinaryHeap::deleteMin() {
    if(size < 1)
        return;
    else
        heap[1] = heap[size];
        
    size--;
    percolateDown(1);
}

int BinaryHeap::getMin() {
    if(size < 1)
        return -1;
    
    return heap[1];
}

void BinaryHeap::percolateDown(int hole) {
    while(2 * hole <= size) {

        int left = hole * 2;
        int right = hole * 2 + 1;
        
        if (right > size) {
            if(heap[hole] > heap[left])
                swap(hole, left);
            break;
        }
        
        if(heap[hole] <= heap[left] && heap[hole] <= heap[right])
            break;
        
        if(heap[left] < heap[hole] && heap[left] < heap[right]) {
            swap(left, hole);
            hole = left;
            
        } else if(heap[right] < heap[hole]) {
            swap(right, hole);
            hole = right;
        }
    }
}

void BinaryHeap::swap(int i, int j) {
    int t = heap[i];
    heap[i] = heap[j];
    heap[j] = t;
}
