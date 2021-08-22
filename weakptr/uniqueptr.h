#pragma once

#ifndef __TEST__
#define __TEST__

template <typename T>
class uniqueptr
{
    T *m_ptr;
public:
    explicit uniqueptr();
    virtual  ~uniqueptr();

    uniqueptr(const uniqueptr &) = delete;
    uniqueptr& operator = (const uniqueptr& ) = delete;

    T* operator -> ();
    T& operator * ();
};
#endif