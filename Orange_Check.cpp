#include<bits/stdc++.h>
using namespace std;

string Orange_Check(int A, double B)
{
    // Kiểm tra và phân loại quả cam
    if ((A >= 0 && A <= 5) || (B >= 10 && B < 12)) // Fault
    {
        return "Good";
    }
    if ((A > 5 && A <= 10) && (B >= 8 && B < 10))
    {
        return "Normal";
    }
    if ((A > 10 && A <= 30) && (B > 0 && B < 8))
    {
        return "Bad";
    }

    // Các trường hợp không khớp với điều kiện trên được coi là đầu vào không hợp lệ
    return "Invalid Input";
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<Orange_Check(a,b);
}
