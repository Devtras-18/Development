#include<iostream>
#include<fstream>




using namespace std;

int find_max(int nums[], int len);

int find_max(int nums[], int len)
 {
 int i, max_num = nums[0];
    for (i = 1; i < len; i ++)
        if (nums[i] > max_num)
        {// (Fill in the missing line here)
            max_num = nums[i];
            cout << max_num << endl;
        }

 return max_num;
 }


int main()
{
    int enter_num[] = {2,14,180,3,5,75,2555};

    int longitud = 10;

    int result = find_max( enter_num,longitud);

    cout << "Resultado final: " << result << endl;

 return 0;
}
