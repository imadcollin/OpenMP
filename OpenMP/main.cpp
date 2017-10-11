//
//  main.cpp
//  OpenMP
//
//  Created by Imad Collin on 2017-10-10.
//  Copyright © 2017 Imad Collin. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <omp.h>
using namespace std;

void fn(){
    omp_set_num_threads(16);
#pragma omp parallel
    {
#pragma omp critical
        cout<<"hello from thread:\t"<< omp_get_thread_num()<<endl;
    }
}
int main(int argc, char *argv[]) {
    
    fn();
}
