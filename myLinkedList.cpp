/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdlib>

#include "myLinkedList.h"
using namespace std;
//class constructor
myLinkedList::myLinkedList(){
    head = NULL;
    temp = NULL;
    current = NULL;
}

//class destructor
myLinkedList::~myLinkedList(){
    cout << "Deleting entire list \n";
    deleteList();
    
    //delete head;
    head = NULL;
    
    //delete temp;
    temp = NULL;
    
    //delete current;
    current = NULL;
    
    //delete tail;
    tail = NULL;      
}

void myLinkedList::addNode(int addData){
    nodePtr n = new node;
    n->data =  addData;
    n->next=NULL;
    
    //when there is at least one item on the list, then add new item at the end of the list
    if(head !=NULL){
        current = head;
        while(current->next != NULL){
            current= current->next;
        }
        current->next = n;
        tail = current->next;
    }
    
    //if there are no items on the list, then set the new node as the first node, aka the head
    else{
        head = n;
        tail = n;
    }
}

void myLinkedList:: addNodeFirst(int addData){
    nodePtr n = new node;
    n->data =  addData;
    n->next=NULL;
    
    if(head != NULL){
        current = head;
        n->next = current;
        head = n;
    }
    else{
        head = n;
        tail = n;
    }
}

void myLinkedList:: addNodeLast(int addData){
    nodePtr n = new node;
    n->data =  addData;
    n->next=NULL;
    
    if(tail != NULL){
        current = tail;
        current->next = n;
        tail = current->next;
        
    }
    else{
        head = n;
        tail = n;
    }
}

void myLinkedList::deleteNode(int delData){
    nodePtr delPtr = new node;
    temp = head;
    current = head;
    
    //Go through the list until all the node with the matching data is found 
    while(current!=NULL && current->data != delData){
        temp = current;
        current = current->next;
    }
    
    //if all the nodes have been checked and the data was not found, then print out not found
    if(current == NULL){
        cout<< delData<< " was not found in the list\n";
        delete delPtr;
        delPtr = NULL;
    }
    
    //if the node with the matching data is found, then delete the node
    else{
        delPtr = current;
        current = current->next;
        temp->next=current;
        //this condition handles the case if the node to be deleted is the first node, aka the head
        if(delPtr==head){
            head = head->next;
            temp =NULL;
        }
        delete delPtr;
        delPtr = NULL;
        cout<< "the value "<<delData <<" was deleted\n";
        
    }
        
}

void myLinkedList::printList(){
    current= head;
    while(current !=NULL){
        cout<<current->data<<endl;
        current = current->next;
    }
}

void myLinkedList::deleteList(){
    nodePtr delList;
    while(head != NULL){
        delList = head;
        head = head->next;
        cout << delList->data << " is deleted\n";
        delete delList;
        delList = NULL;
    }
    
    
}