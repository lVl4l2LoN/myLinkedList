/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myLinkedList.h
 * Author: lVl4rl2LoN
 *
 * Created on January 27, 2018, 1:02 AM
 */

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

class myLinkedList{

private:
    
    typedef struct node{
        int data;
        node* next;
    } *nodePtr;
    
    nodePtr head;
    nodePtr tail;
    nodePtr temp;
    nodePtr current;
    
public:
    myLinkedList();
    ~myLinkedList();
    void addNode(int addData);
    void addNodeFirst(int addData);
    void addNodeLast(int addData);
    void deleteNode(int delData);
    void printList();
    void deleteList();
};


#endif /* MYLINKEDLIST_H */

