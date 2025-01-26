#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <ctime>
using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

struct Customer
{
    int customerID;
    string name;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Mobile Phone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Cooker", "Kitchen"},
        {105, "Shoes", "Fashion"}};

    deque<string> recentCustomers = {"C002", "C003", "C004"};

    recentCustomers.push_back("C001");
    recentCustomers.push_back("C005");

    list<Order> orderHistoryList;

    orderHistoryList.push_back({1, 101, 1, "C001", time(0)});
    orderHistoryList.push_back({2, 102, 1, "C002", time(0)});
    orderHistoryList.push_back({3, 103, 2, "C003", time(0)});

    set<string> categories;

    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 5},
        {103, 10},
        {104, 50},
        {105, 70},
    };

    multimap<string, Order> customerOrders;

    for (const auto &order : orderHistoryList)
    {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerDate = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "John"},
        {"C004", "Smith"},
        {"C005", "Charles"},
    };

    unordered_set<int> uniqueProductIDs;

    for (const auto &product : products)
    {
        uniqueProductIDs.insert(product.productID);
    }
    return 0;
}