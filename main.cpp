/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: lVl4rl2LoN
 *
 * Created on January 27, 2018, 1:01 AM
 */

#include <cstdlib>
#include <iostream>
#include "myLinkedList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    myLinkedList myList;
    
    myList.addNodeFirst(24);
    myList.printList();
    myList.addNodeFirst(23);
    myList.printList();
    
    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);
    myList.addNode(5);
    myList.addNode(6);
    myList.addNode(7);
    
    myList.printList();
    
    myList.deleteNode(1);
    myList.printList();
    
    myList.deleteNode(7);
    myList.printList();
    
    myList.deleteNode(4);
    myList.printList();
    
    myList.addNode(1);
    myList.printList();
    
    myList.deleteNode(21);
    myList.deleteNode(100);
    
    myList.addNodeLast(21);
    myList.printList();
    
    myList.addNodeLast(100);
    myList.printList();

    return 0;
}

