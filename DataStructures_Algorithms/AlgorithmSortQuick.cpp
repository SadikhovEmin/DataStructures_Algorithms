//
//  AlgorithmSortQuick.cpp
//  HW4
//
//  Created by Emin Sadykhov on 06.05.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#include <iostream>
#include "AlgorithmSortQuick.h"

using namespace std;


AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k) {
    
}

int AlgorithmSortQuick::select() {
    int N = 0;
    cin >> N;
    
    int * numbers = new int[N];
    
    for(int i = 0; i < N; i++)
        cin >> numbers[i];
    
    int  result = quickselect(numbers, 0, N - 1, k);
    
    delete [] numbers;
    
    return result;
    
}

int AlgorithmSortQuick::quickselect(int * numbers, int left, int right, int k) {
    if((right - left) < 10) {

        for(int i = left; i <= right; i++) {
            int n = i;
            while (n > left && numbers[n] > numbers[n - 1]) {
                int temp = numbers[n - 1];
                numbers[n - 1] = numbers[n];
                numbers[n] = temp;
                n--;
            }
        }

        return numbers[left + k - 1];
    }

    else {

        int pivot = findPivot(numbers, left, right);
    
        int i = left , j = right - 1;
        
        // partition the array into S1 and S2
        for( ; ; ) {
            
            while(numbers[++i] > pivot) {}
            while(numbers[--j] < pivot) {}
            
            if(i < j)
                swap(numbers, i, j);
            else
                break;
        }
            
        swap(numbers, i, right - 1);            // Restore pivot
        
        int pi = i;
        
        int s1_length = pi - left + 1;
    
        if(k < s1_length)
            return quickselect(numbers, left, pi - 1, k);
        
        else if(k == s1_length)
            return pivot;
        
        else
            return quickselect(numbers, pi + 1, right, k - s1_length);
    }
}


int AlgorithmSortQuick::findPivot(int * numbers, int left, int right) {
    int center = (left + right) / 2;
    
    if(numbers[center] > numbers[left])
        swap(numbers, center, left);
    
    if(numbers[right] > numbers[left])
        swap(numbers, left, right);
    
    if(numbers[right] > numbers[center])
        swap(numbers, right, center);
    
    
    swap(numbers, center, right - 1);
    return numbers[right - 1];
}

void AlgorithmSortQuick::swap(int * numbers, int x, int y) {
    int temp = numbers[x];
    numbers[x] = numbers[y];
    numbers[y] = temp;
}
