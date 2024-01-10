//
// Created by Saima Yunus on 1/9/24.
//

#ifndef QUESTSCRIBE_GAMELIST_H
#define QUESTSCRIBE_GAMELIST_H

#include "ItemNode.h"

template<class T> // this is because our linked list nodes should be able to store data of any type
class GameList {
    private:
        ItemNode <T> *head; // pointer to memory address of first node in the list
    public:
        void print_list(); // traverses list, prints each item
        ItemNode <T> *is_in_list(ItemNode <T> current_node); // searches for 'current_node' in list, returns ptr to current node if found and NULL if not
        void add_to_end(T new_data); // creates new node with passed-in data, appends that node to the end of the list
        void add_to_start(T new_data); // creates new node with passed-in data, appends that node to the start of the list
        void insert_after(ItemNode <T> current_node, T new_data); // creates new node with passed-in data, searches for 'current_node' in list, inserts new node after current node
        void update_node(ItemNode <T> current_node, T new_data); // searches for 'current_node' in list, updates the node's data with 'new_data' parameter
        T delete_node(ItemNode <T> current_node); // searches for 'current_node' in list, deletes it from the list and frees the memory, returns the node data
};

#endif //QUESTSCRIBE_GAMELIST_H
