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

    public:
        BSTpractice();
        void AddLeaf(int key);
        node* CreateLeaf(int key);
        void PrintInOrder();

};

#endif // BSTPRACTICE_H
