#include <iostream>
#include <list>

class Stack {
    private:
        std::list<int> buffer;
    public:
        Stack(int x){
            this->buffer.push_back(x);
        }

        Stack& operator<<(int);
        Stack& operator>>(int);

        void print(){
            std::cout << "List elements: ";
            for (int elem : this->buffer) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
};

Stack& Stack::operator<<(const int x){
    this->buffer.push_back(x);
    return *this;
}

Stack& Stack::operator>>(const int x){
    this->buffer.remove(x);
    return *this;
}

int main (){
    Stack s(10);
    s.print();
    s<<20;
    s.print();
    s<<30;
    s.print();
    s>>20;
    s.print();

    return 0;
}
