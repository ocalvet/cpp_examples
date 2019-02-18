#include "List.h"
using namespace std;
template <class T>
Node<T>::Node(T val)
{
    this->data = val;
    this->next = NULL;
    this->prev = NULL;
}

template <class T>
List<T>::List()
{
    this->head = NULL;
}

template <class T>
void List<T>::add(T val)
{
    Node<T> *node = new Node<T>(val);
    // first item
    if (this->head == NULL)
    {
        this->head = node;
        this->tail = node;
        return;
    }
    this->tail->next = node;
    node->prev = this->tail;
    this->tail = node;
}

template <class T>
void List<T>::remove(T val)
{
    Node<T> *node = this->head;
    while (node != NULL)
    {
        if (node->data == val)
        {
            if (node->prev != NULL && node->next != NULL)
            {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
            return;
        }
        node = node->next;
    }
}

template <class T>
void List<T>::print()
{
    Node<T> *node = this->head;
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}