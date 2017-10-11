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
#pragma omp parallel
    {
    cout<<"hello "<<endl;
    }
}
int main(int argc, char *argv[]) {
    
    fn();
}
