#include "BSTpractice.h"
#include <iostream>
using namespace std;

BSTpractice::BSTpractice(): root(nullptr)
{
    //ctor
}

BSTpractice::node* BSTpractice::CreateLeaf(int key){

    node* n1 = new node;

    n1->key = key;
    n1->left = nullptr;
    n1->right = nullptr;

    return n1;
}


void BSTpractice::AddLeaf(int key){

   AddLeafPrivate(key, root);
}

void BSTpractice::AddLeafPrivate(int key, node* Ptr){

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

        cout << key << " is already on the tree\n";
    }
}

void BSTpractice::PrintInOrder(){

    PrintInOrderPrivate(root);
}

void BSTpractice::PrintInOrderPrivate(node* Ptr){

    if(root != nullptr){

        if(Ptr->left != nullptr){

            PrintInOrderPrivate(Ptr->left);
        }

        cout << Ptr->key << " ";

        if(Ptr->right != nullptr){

            PrintInOrderPrivate(Ptr->right);
        }
    }else{

        cout << "Binary tree is emptry\n";
    }


}


