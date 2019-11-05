#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
#include<stdexcept>

// 模板函数，函数中数据类型是泛型，对各种类型通用
template <typename T> 
T const& Max(T const& a,T const& b){
    return a<b?b:a;
}

// int main(){
//     int a = 10,b = 15;
//     std::cout<<"the max in int:"<<Max(a,b)<<std::endl;

//     float c = 12.34,d = 25.24;
//     std::cout<<"the max in float:"<<Max(c,d)<<std::endl;

//     std::string e = "this",f = "demo";
//     std::cout<<"the max in string:"<<Max(e,f)<<std::endl;

//     return 0;
// }

// 类模板
template <class T>
class Stack{
    private:
        std::vector<T> elems;
    public:
        void push(T const&);
        void pop();
        T top()const;
        bool empty() const{
            return (this->elems).empty();
        }
};

template <class T>
void Stack<T>::push(T const& elem){
    (this->elems).push_back(elem);
}

template <class T>
void Stack<T>::pop(){
    if(elems.empty()){
        throw std::out_of_range("error:empty stack!");
    }
    (this->elems).pop_back();
}

template <class T>
T Stack<T>::top()const{
    if(elems.empty()){
        throw std::out_of_range("error:empty stack!");
    }
    return (this->elems).back();
}

int main(){
    try{
        Stack<int> intStack;
        Stack<std::string> stringStack;

        intStack.push(7);
        std::cout<<intStack.top()<<std::endl;

        stringStack.push("this");
        std::cout<<stringStack.top()<<std::endl;

        stringStack.pop();
        stringStack.pop();
    }catch (std::exception const& e){
        std::cerr << "exception: "<<e.what()<<std::endl;
        return -1;
    }

    return 0;
}
