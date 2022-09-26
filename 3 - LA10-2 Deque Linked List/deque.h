// WARNING! Do not modify this file!
// Doing so will nullify your score for this activity.

class Deque {
    public:
    virtual void addFirst(int e) = 0;
    virtual void addLast(int e) = 0;

    virtual int removeFirst() = 0;
    virtual int removeLast() = 0;

    virtual int size() = 0;
    virtual bool isEmpty() = 0;
};
