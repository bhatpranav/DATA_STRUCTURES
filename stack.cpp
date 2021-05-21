#include <iostream>

void push(int *arr, int top, int val)
{
    int stack_size = sizeof(arr) / sizeof(arr[0]);
    if (top == stack_size - 1)
    {
        std::cout << "Stack is Full!!" << std::endl;
    }
    else
    {
        ++top;
        arr[top] = val;
    }
}

int pop(int *arr, int top)
{
    if (top < 0)
    {
        std::cout << "Stack is Empty!!!" << std::endl;
    }
    else
    {
        return arr[top];
    }
}

bool isFull(int *arr, int top)
{
    int stack_size = sizeof(arr) / sizeof(arr[0]);
    if (top == stack_size - 1)
    {
        return true;
    }
    return false;
}

bool isEmpty(int top)
{
    if (top < 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n{0};
    std::cout << "Enter the size of the stack: ";
    std::cin >> n;
    int stack[n];
}