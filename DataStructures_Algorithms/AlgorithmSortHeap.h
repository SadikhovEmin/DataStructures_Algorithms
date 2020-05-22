//
//  AlgorithmSortHeap.h
//  HW3
//
//  Created by Emin Sadykhov on 18.04.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#ifndef AlgorithmSortHeap_h
#define AlgorithmSortHeap_h

#include "SelectionAlgorithm.h"

class AlgorithmSortHeap : public SelectionAlgorithm {
public:
    int select();
    AlgorithmSortHeap(int);
};

#endif /* AlgorithmSortHeap_h */
