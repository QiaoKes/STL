#include <bits/stdc++.h>
using namespace std;

//必须满足前向迭代器的要求
template<typename ForwardIterator>
void my_iter_swap(ForwardIterator _left,
                  ForwardIterator _right)
{
    //此处优化算法，可以使用类类型内自定义的swap，优化效率
    using std::swap;
    swap(*_left, *_right);
}

//必须满足双向迭代器
template<typename BidirectionalIterator>
void my_reverse(BidirectionalIterator _first,
                BidirectionalIterator _last)
{
    while((_first != _last) && (_first != --_last)) {
        my_iter_swap(_first, _last);
        ++_first;
    }
}

int main()
{
    vector<int> vec{1,2,3,4,5,6};
    my_reverse(vec.begin(), vec.end());
    for(auto&& v : vec) cout << v << " ";
}
