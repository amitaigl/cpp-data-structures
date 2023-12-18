#ifndef ILRD_RD141_STACK
#define ILRD_RD141_STACK

#include <deque>
#include <algorithm>
#include <cstddef>  // size_t

namespace ilrd_rd141
{
template <class T, class Container = std::deque<T>>
class stack
{
public:
    stack(): m_container(new Container)
    {
        //empty
    }

    stack(const stack &other)
    {
        m_container = new Container;
        *m_container = *other.m_container;
    }

    stack &operator=(const stack &other)
    {
        *m_container = *other.m_container;
        return *this;
    }

    ~stack()
    {
        delete(m_container);
    }

    T top()
    {
        return m_container->back();
    }

    bool empty()
    {
        return m_container->empty();
    }

    size_t size()
    {
        return m_container->size();
    }

    void push(T value)
    {
        m_container->push_back(value);
    }

    void emplace(T value)
    {
        m_container->emplace_back(value);
    }

    void pop()
    {
        m_container->pop_back();
    }

    void swap(stack &other)
    {
        m_container->swap(*other.m_container);
    }

private:
    Container *m_container;

};

} // ilrd_rd141

#endif