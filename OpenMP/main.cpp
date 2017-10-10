//
//  main.cpp
//  OpenMP
//
//  Created by Imad Collin on 2017-10-10.
//  Copyright © 2017 Imad Collin. All rights reserved.
//
#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[]) {
   
    
    int iam = 0, np = 1;
        
#pragma omp parallel  default(shared) private(iam, np)
    {

        np = omp_get_num_threads();
        iam = omp_get_thread_num();
        printf("Hello from thread %d out of %d\n", iam, np);
    }
}
