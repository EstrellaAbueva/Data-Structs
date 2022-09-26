// WARNING! Do not modify this file!
// Doing so will nullify your score for this activity.
class List {
    public:
        virtual int add(char num) = 0;
        virtual int remove(char num) = 0;
        virtual char get(int pos) = 0;
        virtual int size() = 0;
        virtual bool addAt(char num, int pos) = 0;
        virtual char removeAt(int pos) = 0;
        virtual int removeAll(char num) = 0;
        virtual int contains(char num) = 0;
        virtual int count(char num) = 0;
        virtual void print() = 0;
};
