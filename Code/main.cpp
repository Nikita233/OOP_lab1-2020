//
//  main.cpp
//  code_after


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <vector>
#include <fstream>

#include "tree.hpp"
#include "tree.cpp"

using namespace std;


int main() {
    
    Testing test;
    test.Creating();
    
    Tree tree;
    tree.Load("list.txt");
    tree.ShowTree(tree.getRoot());
    tree.Select(tree.getRoot());
    
    return 0;
}