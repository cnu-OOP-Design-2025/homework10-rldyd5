// #include "MyVector.h"
// #include <stdexcept>

// template<typename T>
// void MyVector<T>::push_back(const T& val) {
//     if (this->length == this->cap) {
//         T* temp = new T[this->length +10];
//         for (int i = 0; i < this->length; i++)
//         {
//             temp[i] = this->data[i];
//         }
//         delete[] this->data;
//         this->data = temp;
//         this->cap += 10;
//     }
//     this->data[this->length] = val;
//     length++;
// };   // Vector 마지막에 항목을 추가하는 함수 구현, 필요시 벡터 크기 증가

// template<typename T>
// void MyVector<T>::pop_back() {
//     this->length--;
// }; // Vector의 마지막 항목을 제거하는 함수 구현

// template<typename T>
// size_t MyVector<T>::size() const {
//     return this->length;
// }; // Vecotr에 있는 항목 개수(length)를 리턴하는 함수 구현

// template<typename T>
// T& MyVector<T>::operator[](int i) {
//     return this->data[i];
// } ; // [] 연산자 구현

// template<typename T>
// bool MyVector<T>::operator==(const MyVector& other) const {
//     if (length != other.length)
//         return false;
//     for (int i = 0; i < length; i++)
//     {
//         if (data[i] != other[i])
//             return false;
//     }
    
//     return true;
// };

// template<typename T>
// bool MyVector<T>::operator!=(const MyVector& other) const {
//     if (length == other.length)
//         return true;
//     for (int i = 0; i < length; i++)
//     {
//         if (data[i] != other[i])
//             return true;
//     }
    
//     return false;
// };

// template<typename T>
// bool MyVector<T>::operator<(const MyVector& other) const {
//     if (length > other.length)
//         return false;
//     else if (length < other.length) 
//         return true;
//     else {
//         for (int i = 0; i < length; i++)
//         {
//             if (data[i] < other[i])
//                 return true;
//             else if (data[i] > other[i])
//                 return false;
//         }
//         return false;
//     }
// };

// template<typename T>
// bool MyVector<T>::operator>(const MyVector& other) const {
//     if (length < other.length)
//         return false;
//     else if (length > other.length) 
//         return true;
//     else {
//         for (int i = 0; i < length; i++)
//         {
//             if (data[i] > other[i])
//                 return true;
//             else if (data[i] < other[i])
//                 return false;
//         }
//         return false;
//     }
// };

// template<typename T>
// bool MyVector<T>::operator<=(const MyVector& other) const {
//     if (length > other.length)
//         return false;
//     else if (length < other.length) 
//         return true;
//     else {
//         for (int i = 0; i < length; i++)
//         {
//             if (data[i] < other[i])
//                 return true;
//             else if (data[i] > other[i])
//                 return false;
//         }
//         return true;
//     }
// };

// template<typename T>
// bool MyVector<T>::operator>=(const MyVector& other) const {
//     if (length < other.length)
//         return false;
//     else if (length > other.length) 
//         return true;
//     else {
//         for (int i = 0; i < length; i++)
//         {
//             if (data[i] > other[i])
//                 return true;
//             else if (data[i] < other[i])
//                 return false;
//         }
//         return true;
//     }
// };


// template<typename T>
// T& MyVector<T>::Iterator::operator*() {
//     return *ptr;
// };

// template<typename T>
// typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator++() {
//     ptr++;
//     return *this;
// }; 

// template<typename T>
// typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator--() {
//     ptr--;
//     return *this;
// };

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::Iterator::operator+(int n) const { 
//     return Iterator(ptr - n);
// };

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::Iterator::operator-(int n) const {
//     return Iterator(ptr - n);
// };

// template<typename T>
// bool MyVector<T>::Iterator::operator==(const Iterator& other) const {
//     return ptr == other.ptr;
// };

// template<typename T>
// bool MyVector<T>::Iterator::operator!=(const Iterator& other) const {
//     return ptr != other.ptr;
// };


// template<typename T>
// int MyVector<T>::Iterator::operator-(const Iterator& other) const {
//     return ptr - other.ptr;
// } ;

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::begin() {
//     return MyVector<T>::Iterator(data);
// } ;

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::end() {
//     return MyVector::Iterator(data + length);
// } ;

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::insert(Iterator pos, const T& value) {
//     if (this->length == this->cap) {
//         T* temp = new T[this->length + 10];
//         for (int i = 0; i < this->length; i++)
//         {
//             temp[i] = this->data[i];
//         }
//         delete this->data;
//         this->data = temp;
//         this->cap += 10;
//     }
//     for (Iterator i = length - 1; i >= pos.ptr  ; i--)
//     {
//         *(data + i) = *(data + i - 1);
//     }
    
//     *(data + pos.ptr) = value;
//     length++;
//     return pos;
// }

// template<typename T>
// typename MyVector<T>::Iterator MyVector<T>::erase(Iterator pos) {
//     for (Iterator i = pos.ptr; i < length - 1; i++)
//     {
//         *(data + i) = *(data + i + 1);
//     }
    
//     length--;
//     return pos.ptr;
// };

// template<typename T>
// void MyVector<T>::clear() {
//     length = 0;
// };

// template<typename T>
// T& MyVector<T>::at(size_t i) {
//     if (i < length) {
//         return data[i];
//     } else {
//         throw std::out_of_range("Index out of range");
//     }
// };

// template<typename T>
// T& MyVector<T>::front() {
//     return data[0];
// };    // 첫번째 항목 리턴 함수 구현

// template<typename T>
// T& MyVector<T>::back() {
//     return data[length - 1];
// };     // 마지막 항목 리턴 함수 구현

// template<typename T>
// size_t MyVector<T>::capacity() const  {
//     return cap;
// };

// template<typename T>
// bool MyVector<T>::empty() const {
//     if (length == 0) {
//         return 1;
//     } else {
//         return 0;
//     }
// };

// // template class MyVector<int>; 
// // template class MyVector<double>;