#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {2, 6, 59, 04};
    //push back to add element at end

    vec.push_back(87);
    for (int val : vec)
    {
        cout << "after pushback of 87 " << val << endl;
    }

    vec.push_back(8);
    for (int val : vec)
    {
        cout << "after pushback of 8 " << val << endl;
    }

    vec.push_back(67);
    for (int val : vec)
    {
        cout << "after pushback of 67 " << val << endl;
    }

    vec.push_back(97);
    for (int val : vec)
    {
        cout << "after pushback of 97 " << val << endl;
    }

    
    cout << vec[3] << endl;
    cout << "size = " << vec.size() << endl;
    for (int val : vec)
    {
        cout << "after all pushback " << val << endl;
    }


    //pop back to remove last element
    vec.pop_back();
    for (int val : vec)
    {
        cout << "after popback " << val << endl;
    }



    for (int val : vec)
    {
        cout << val << endl;
    }

    //to see element at specific index
    cout << vec.at(4) << endl;
    
    cout << vec.front()<< endl;
    
    cout << vec.back()<< endl;


    cout << vec.size()<< endl;

    //capacity double ho jata hainn jab elements size se jyada ho jate hain
    cout << vec.capacity()<< endl;


    
    return 0;
}