#include <iostream>
#include <time.h>
#include "BinaryTree.h"
using namespace std;

BinaryTree::BinaryTree(): root(nullptr)
{
    //constructor
}

BinaryTree::node* BinaryTree::CreateLeaf(int key){

    node* n1 = new node; //memory allocation to n1 pointer

    n1->key = key;
    n1->left = nullptr;
    n1->right = nullptr;

    return n1;
}

void BinaryTree::AddLeaf(int key){

    AddLeafPrivate(key,root);
}

void BinaryTree::AddLeafPrivate(int key, node* Ptr){

    if(root == nullptr){

      root = CreateLeaf(key);

    }else if(key > Ptr->key){

        if(Ptr->right != nullptr){

            AddLeafPrivate(key, Ptr->right);
        }else{

            Ptr->right = CreateLeaf(key);
        }
    }else if(key < Ptr->key){

        if(Ptr->left != nullptr){

            AddLeafPrivate(key, Ptr->left);
        }else{

            Ptr->left = CreateLeaf(key);
        }
    }else{

        cout << key << " is already in the list\n";
    }
}

//Public function accessible to user, and call private print function w/in the class
void BinaryTree::PrintInOrder(){

    PrintInOrderPrivate(root);
}

void BinaryTree::PrintInOrderPrivate(node* Ptr){

    if(root != nullptr){

        if(Ptr->left != nullptr){

            PrintInOrderPrivate(Ptr->left);
        }
        cout << Ptr->key << " ";

        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right);
        }

    }else{

        cout << "Binary tree is empty.\n";
    }
}
