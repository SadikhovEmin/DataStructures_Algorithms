//
//  AlgorithmSortQuick.h
//  HW4
//
//  Created by Emin Sadykhov on 06.05.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#ifndef AlgorithmSortQuick_h
#define AlgorithmSortQuick_h

#include "SelectionAlgorithm.h"

class AlgorithmSortQuick : public SelectionAlgorithm {
public:
    int select();
    int quickselect(int*, int, int,int);
    AlgorithmSortQuick(int);
    int findPivot(int *, int, int);
    void swap(int *, int,int);
};


#endif /* AlgorithmSortQuick_h */
