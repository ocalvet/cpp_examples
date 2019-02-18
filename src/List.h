#ifndef LIST_H
#define LIST_H
template <class T>
class Node
{
  private:
  public:
    T data;
    Node<T> *next;
    Node<T> *prev;
    Node(T);
    ~Node();
};
template <class T>
class List
{
  private:
    Node<T> *head, *tail;

  public:
    List<T>();
    ~List<T>();
    void add(T value);
    void remove(T value);
    void print();
};
#endif