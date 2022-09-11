#include<cs50.h>
#include<stdio.h>
int main (void)
{
    // gan này có td gi
    int n = get_int("how many scores ?");
// scores là mảng n là sổ mảng, khai báo mảng score là tên mảng, kích thước số lượng biến trong mảng
// là n, int là kiểu mảng, nhìn chung nó là khai báo mảng, tác dụng
// khai báo để sau khi lấy đc gt từ user thì lưu vào đây.
int scores[n];

    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int ("Scores: ");
    }
    //%f\n: gía giữ kết quả để in
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0););
}
