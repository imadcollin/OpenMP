//
//  main.cpp
//  Wok-sharing
//
//  Created by Imad Collin on 2017-10-11.
//  Copyright © 2017 Imad Collin. All rights reserved.
//

#include <iostream>
#include <omp.h>
using namespace std;

void func_for(){
    int *a=new int [1000],
    *b=new int [1000],
    *result=new int [1000];
    
#pragma omp parallel for
    for (int i=0; i<1000; i++) {
        result[i]=a[i]*b[i];
    }
    for (int j=0; j<1000; j++) {
        
        cout<< j ;
    }
    delete []a;
    delete []b;
    delete []result;
}

void single_master(){
#pragma omp parallel
    {
#pragma omp single
        printf("test,%d\n",omp_get_thread_num()) ;
        printf("f,%d\n",omp_get_thread_num()) ;
        
#pragma omp barrier
#pragma omp master
        cout<<"Master : "<<omp_get_thread_num()<<endl;
    }
}

int main(int argc, const char * argv[]) {
    
    // func_for();
    single_master();
    return 0;
}
