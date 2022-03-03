#include<stdio.h>



//using namespace std;
def int find_max(int nums[], int len)

int main(int argc,char **argv)
{
    int enter_num[] = [2,14,3,5,75,122];

    int longitud = 6;

    int result = find_max( enter_num,longitud);

    cout << "Resultado final: " << result << endl;

 int find_max(int nums[], int len)
 {
 int i, max_num = nums[0];
 for (i = 1; i < len; i ++)
 if (nums[i] > max_num)
 // (Fill in the missing line here)
 max_num = nums[i];

 return max_num;
 }

  getch();
 return 0;
}
