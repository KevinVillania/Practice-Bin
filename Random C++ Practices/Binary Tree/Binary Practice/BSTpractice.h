#ifndef BSTPRACTICE_H
#define BSTPRACTICE_H


class BSTpractice
{
    private:
        struct node{

            int key;
            node* left;
            node* right;
        };
        node* root;

        void AddLeafPrivate(int key, node* Ptr);
        void PrintInOrderPrivate(node* Ptr);
        node* ReturnNodePrivate(int key, node* Ptr);
    public:
        BSTpractice();
        void AddLeaf(int key);
        void PrintInOrder();
        node* CreateLeaf(int key);
        node* ReturnNode(int key);



};

#endif // BSTPRACTICE_H
