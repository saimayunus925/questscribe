//
// Created by Saima Yunus on 1/9/24.
//

#ifndef QUESTSCRIBE_ITEMNODE_H
#define QUESTSCRIBE_ITEMNODE_H

template<class typeName> // this is a template class, so nodes of this class should be able to store data of any type
class ItemNode {
public:
    typeName data; // the data that the node stores (it's whatever data type we initialize the node to hold)
    ItemNode *next_node; // reference to the next node in the list
    ItemNode(typeName new_data) {
        this->data = new_data; // initializing node data to passed-in variable. TODO: we may need to overload '=' operator for our Ability/GameItem classes since those will be in linked list nodes
        this->next_node = nullptr; // initializing next ptr to NULL
    }
};

#endif //QUESTSCRIBE_ITEMNODE_H
