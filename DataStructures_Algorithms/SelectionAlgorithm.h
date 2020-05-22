//
//  SelectionAlgorithm.h
//  Homework1
//
//  Created by Emin Sadykhov on 19.02.2020.
//  Copyright © 2020 Emin Sadykhov. All rights reserved.
//

#ifndef TEMP_SELECTIONALGORITHM_H
#define TEMP_SELECTIONALGORITHM_H


class SelectionAlgorithm {
protected:
    int k;

public:
    virtual int select();
    SelectionAlgorithm(int k);
};


#endif //TEMP_SELECTIONALGORITHM_H
