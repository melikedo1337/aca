#pragma once
#include <iostream>

template <typename T>
struct Node {
    T data;
    Node<T>* next;

    Node(const T& val) : data(val), next(nullptr) {}
};

template <typename T>
class List {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;

    void copyFrom(const List& other) {
        Node<T>* cur = other.head;
        while (cur) {
            push_back(cur->data);
            cur = cur->next;
        }
    }

public:
    List() : head(nullptr), tail(nullptr), size(0) {}

    List(const List& other) : head(nullptr), tail(nullptr), size(0) {
        copyFrom(other);
    }

    List& operator=(const List& other) {
        if (this != &other) {
            clear();
            copyFrom(other);
        }
        return *this;
    }

    ~List() {
        clear();
    }

    void push_back(const T& value) {
        Node<T>* n = new Node<T>(value);
        if (!head) {
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        ++size;
    }

    void push_front(const T& value) {
        Node<T>* n = new Node<T>(value);
        n->next = head;
        head = n;
        if (!tail)
            tail = head;
        ++size;
    }

    void insert(int index, const T& value) {
        if (index < 0 || index > size)
            return;

        if (index == 0) {
            push_front(value);
            return;
        }

        if (index == size) {
            push_back(value);
            return;
        }

        Node<T>* cur = head;
        for (int i = 0; i < index - 1; ++i)
            cur = cur->next;

        Node<T>* n = new Node<T>(value);
        n->next = cur->next;
        cur->next = n;
        ++size;
    }

    T front() const {
        return head ? head->data : T();
    }

    T back() const {
        return tail ? tail->data : T();
    }

    T at(int index) const {
        if (index < 0 || index >= size)
            return T();

        Node<T>* cur = head;
        for (int i = 0; i < index; ++i)
            cur = cur->next;

        return cur->data;
    }

    bool empty() const {
        return size == 0;
    }

    int getSize() const {
        return size;
    }

    void clear() {
        while (head) {
            Node<T>* tmp = head;
            head = head->next;
            delete tmp;
        }
        tail = nullptr;
        size = 0;
    }

    bool contains(const T& value) const {
        Node<T>* cur = head;
        while (cur) {
            if (cur->data == value)
                return true;
            cur = cur->next;
        }
        return false;
    }

    int indexOf(const T& value) const {
        Node<T>* cur = head;
        int i = 0;
        while (cur) {
            if (cur->data == value)
                return i;
            cur = cur->next;
            ++i;
        }
        return -1;
    }

    void print() const {
        Node<T>* cur = head;
        while (cur) {
            std::cout << cur->data << " ";
            cur = cur->next;
        }
        std::cout << '\n';
    }
};