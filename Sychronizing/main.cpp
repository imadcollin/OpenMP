//
//  main.cpp
//  Sychronizing
//
//  Created by Imad Collin on 2017-10-11.
//  Copyright © 2017 Imad Collin. All rights reserved.
//


#include <iostream>
#include <omp.h>
using namespace std;

void sync(){
    int sum=0;
#pragma omp parallel for num_threads(100)

    for (int i=0; i<1000; i++) {
#pragma omp atomic   //this will fix the bug and sort out race condition 
        ++sum;
    }
    cout<<sum; //Sum is 980 !!!
    
}

int main(int argc, const char * argv[]) {
    
    sync();
    return 0;
}

