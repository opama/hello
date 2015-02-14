#include <iostream>
#include <map>
#include <vector>
#include "Sales_item.h"
using namespace std;
int main()
{
    map<string,int>  sales_map;
    map<string,int> tmp_map;
    string isbn;
    int unit;
    while(1)
    {
        Sales_item book;
        cout << "print item info" << endl;
        cin >> book;
        //cout << book << endl;
        isbn = book.get_isbn();
        unit = book.get_unit();
        int flag = 0;
        cout << "get isbn:" << book.get_isbn() << endl;
        cout <<  "-----------sumary-------------"<< endl;
        for ( map<string,int> ::iterator it=sales_map.begin();it!=sales_map.end();it++)
        {

            if (it->first == isbn)
            {
                (it->second)+=unit;
                flag = 1;
            }

            cout << it->first << " " << (it->second) << endl;

        }
        if (flag == 0)
        {
            sales_map.insert(pair<string,int>(isbn,unit));
            cout << isbn << " " << unit <<endl;
        }
        //cout<<sales_map.size()<<endl;
    }
    return  0;
}