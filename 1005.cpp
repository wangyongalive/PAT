////
//// Created by admin1 on 2018/1/10.
////
//
//#include <stdio.h>
//int main()
//{
//    int K, n;
//    int tabel[101] = {0};
//    scanf("%d", &K);
//    for(int i = 0; i < K; i++)
//    {
//        scanf("%d", &n);
//        tabel[n] = 1;
//    }
//    /* find numbers needed to test */
//    for(int i = 1; i <= 100; i++) if(tabel[i])
//        {
//            /* reuse variable n here */
//            for(n = i; n > 1; )
//            {
//                /* calculate one step */
//               if(n % 2)      n = (3 * n + 1) / 2;
//                else           n /= 2;
//                /* see if the new number is in given numbers */
//                if(n <= 100 && tabel[n])
//                {
//                    tabel[n] = 0;
//                    K--;                    /* one less number not 'covered' */
//                    if(n < i) break;        /* did this before, no need going on */
//                }
//            }
//        }
//
//    for(int i = 100; i >= 1; i--) if(tabel[i] == 1)
//        {
//            printf("%d%c", i, --K ? ' ' : '\0');
//        }
//
//    return 0;
//}
