#include "uniqueptr.h"
#include <malloc.h>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

template <typename T>
uniqueptr<T>::uniqueptr()
{
    m_ptr = new T();
}

template <typename T>
uniqueptr<T>::~uniqueptr()
{
    delete m_ptr;
}

template <typename T>
T* uniqueptr<T>::operator -> ()
{
    return m_ptr;
}

template <typename T>
T& uniqueptr<T>::operator * ()
{
    return *m_ptr;
}