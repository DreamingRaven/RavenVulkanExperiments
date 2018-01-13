// C++ Hack to seperate templates from header files, and not in cpp files by convention as not true compilation

template<typename T,int N>
int ExampleVariableArrayTemplate<T, N>::getSize() {
    return N;
}