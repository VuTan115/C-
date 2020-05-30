#include <bits/stdc++.h>
using namespace std;
void checkAmstrongNum(int number)
{
    bool flag = true;
    int lastNum;
    int sum = 0;
    int originalNum;
    originalNum = number;
    do
    {
        
        lastNum = number % 10; // lấy ra số cuối cùng
        // cout<< lastNum<<endl;
        sum += lastNum * lastNum * lastNum; // cộng vào tổng thầy có thể giải thích hộ em tại sao em dùng pow(lastNum,3 ) mà không được ạ.
        // cout << sum << endl;
        cout << originalNum  << endl;
        number /= 10; //xóa đi số cuối cùng

    } while (number > 0);

    if (sum == originalNum)
    {
        cout << originalNum << " "
             << "is an amstrong number";
    }
    else
    {
        cout << originalNum << " "
             << "is not an amstrong number";
    }

    // return flag;
};
int main()
{
    int number;
    cin >> number;
    checkAmstrongNum(number);
    return 0;
}