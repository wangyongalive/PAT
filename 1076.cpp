/*题目
 * 下面是微博上流传的一张照片：“各位亲爱的同学们，
 * 鉴于大家有时需要使用wifi，又怕耽误亲们的学习，
 * 现将wifi密码设置为下列数学题答案：A-1；B-2；C-3；D-4；
 * 请同学们自己作答，每两日一换。谢谢合作！！~”—— 老师们为了促进学生学习也是拼了……
 * 本题就要求你写程序把一系列题目的答案按照卷子上给出的对应关系翻译成wifi的密码。
 * 这里简单假设每道选择题都有4个选项，有且只有1个正确答案。
 *
 * */
/*
 * 由于题目的输入格式限制（每一题有且只有一个正确答案），
 * 实际上不需要管有几题，每题几个选项。
 * 就一次一次暴力读取（每次最多3字符，甚至可以纳入第一行的数字），
 * 只要后面是T就输出就没问题了。
 * */
//#include <stdio.h>
//int main()
//{
//    char string[4];
//    // 以回车结束  空格也会被读入
//    while(scanf("%s", string) != EOF)
//        if(string[2] == 'T')
//            putchar("1234"[string[0] - 'A']);
//    return 0;
//}
//

