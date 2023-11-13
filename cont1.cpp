#include <iostream>
#include <vector>
#include <list>

template <typename Cont>
int Print(const Cont& cnt, const std::string& separator) {
    auto it=cnt.begin();
    if (it!=cnt.end()){std::cout << *it; ++it;}
    for (;it != cnt.end(); ++it){std::cout << separator << *it;}
    std::cout << std::endl;
}
int main() {
    std::vector<int> vec = {9, 11, 1,};
    Print(vec, ", ");
    return 0;
}