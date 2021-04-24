#ifndef BINARYTREE_H
#define BINARYTREE_H


class BinaryTree
{
    private:
        struct node{

            int key;
            node* left;
            node* right;
        };

        node* root; //nasa labas ng struct kasi once ka lang mag initialize ng root node
        void AddLeafPrivate(int key,node* Ptr);
        void PrintInOrderPrivate(node* Ptr);

    public:
        BinaryTree();
        node* CreateLeaf(int key);
        void AddLeaf(int key);
        void PrintInOrder();
};

#endif // BINARYTREE_H
