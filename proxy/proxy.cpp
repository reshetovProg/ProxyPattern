#include <iostream>
#include <map>
#include <Windows.h>
using namespace std;

//class Product {
//    std::string type;
//    int coast;
//public:
//    Product() {}
//    Product(std::string type, int coast) {
//        this->type = type;
//        this->coast = coast;
//    }
//    friend std::ostream& operator  << (std::ostream& out, const Product& pr) {
//        out << pr.type << " " << pr.coast;
//        return out;
//    }
//
//};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");
    //std::map<std::string, Product> basket1;
    //basket1["помидор"] = Product("овощ", 34);
    //basket1["огурец"] = Product("овощ", 80);
    //basket1["ананас"] = Product("фрукт", 250);
    //basket1["банан"] = Product("трава", 100);
    ////basket1["помидор"] = Product("овощ", 45);
    //for (const auto iter : basket1) {
    //    std::cout << iter.first << " " << iter.second << std::endl;
    //}
    //cout << basket1.find("ананас")->second;
   
}

/*
* ВАЖНЫЙ КОММЕНТАРИЙ:
* Доделать Database
* Реализовать DatabaseInterface
* Тест
*/