#include <iostream>

#include "stack.hpp"
#include "test_func.hpp"

using namespace ilrd_rd141;

int main()
{
    stack<int, std::deque<int>> stack1;

    TEST(stack1.empty());
    TEST(0 == stack1.size());

    stack1.push(5);
    TEST(1 == stack1.size());
    TEST(5 == stack1.top());
    stack1.push(6);
    TEST(2 == stack1.size());
    TEST(6 == stack1.top());
    stack1.pop();
    TEST(1 == stack1.size());
    TEST(5 == stack1.top());

    // Test for swap
    stack1.push(5);
    stack1.push(6);
    stack1.push(7);
    stack1.push(8);
    TEST(5 == stack1.size());
    TEST(8 == stack1.top());
    stack<int, std::deque<int>> stack2;
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    stack2.push(4);
    TEST(4 == stack2.top());
    stack1.swap(stack2);
    TEST(4 == stack1.top());
    TEST(8 == stack2.top());

    // Test for asignment operator
    stack<int, std::deque<int>> stack3;
    stack3 = stack2;
    TEST(8 == stack3.top());

    // Test for cctor:
    stack<int> stack4(stack3);
    TEST(8 == stack3.top());

    return 0;
}