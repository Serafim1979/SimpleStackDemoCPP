#include<iostream>

using std::cout;
using std::cin;
using std::endl;

const int SIZE = 26;
////////////////////////////////////////////
class my_stack
{
private:
    char stck[SIZE];
    int tos;
    int stackID;
public:
    my_stack(int id);
    ~my_stack();
    void init();
    void push(char ch);
    char pop();
};
////////////////////////////////////////////
my_stack::my_stack(int id)
{
    stackID = id;
    cout << "Stack initialization!" << stackID << endl;
    tos = 0;
}
////////////////////////////////////////////
my_stack::~my_stack()
{
    cout << "Working destructor # " << stackID <<endl;
}
////////////////////////////////////////////
void my_stack::init()
{
    tos = 0;
}
////////////////////////////////////////////
void my_stack::push(char ch)
{
    if(tos == SIZE)
    {
        cout << "Stack is full!" << endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}
////////////////////////////////////////////
char my_stack::pop()
{
    if(tos == 0)
    {
        cout << "Stack is empty!" << endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
////////////////////////////////////////////
int main()
{
    my_stack s1(1), s2(2);
    int i;

    s1.init();
    s2.init();

    s1.push('a');
    s2.push('b');
    s1.push('c');
    s2.push('d');
    s1.push('e');
    s2.push('f');

    for(i = 0; i < 3; i++)
        cout << s1.pop() << " ";
    cout << endl;

    for(i = 0; i < 3; i++)
        cout << s2.pop() << " ";
    cout << endl;

    return 0;
}
