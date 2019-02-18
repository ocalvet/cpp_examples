#ifndef LIST_H
#define LIST_H
template <class T>
class Node
{
  private:
    T data;

  public:
    Node<T> *next;
    Node<T> *prev;
    Node(T);
    ~Node();
};
template <class T>
class List
{
  private:
    Node *head;

  public:
    List();
    ~List();
    void add(T value);
    void remove(T value);
    void print();
};
#endif