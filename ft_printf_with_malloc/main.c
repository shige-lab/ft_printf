#include "ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
int	main()
{

	printf("%%c\n");
	printf("lens:%d\n",ft_printf("ft = %c%c%c%c%c%c\n",'a','~',0 ,128,34,100));
	printf("plen:%d\n",printf("pr = %c%c%c%c%c%c\n",'a','~',0 ,128,34 ,100));
	printf("%%s\n");
	printf("lens:%d\n",ft_printf("ft = %s%s%s%s%s%s\n","",NULL,"aasffff" ,"000000"," ~",";:\t\0aaaa"));
	printf("plen:%d\n",printf("pr = %s%s%s%s%s%s\n","",NULL,"aasffff" ,"000000"," ~" ,";:\t\0aaaa"));
	printf("%%d\n");
	printf("lens:%d\n",ft_printf("ft = %d%d%d%d%d%d\n",0,14,INT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("plen:%d\n",printf("pr = %d%d%d%d%d%d\n",0,14,INT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("%%u\n");
	printf("lens:%d\n",ft_printf("ft = %u%u%u%u%u%u%u\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("plen:%d\n",printf("pt = %u%u%u%u%u%u%u\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("%%X\n");
	printf("lens:%d\n",ft_printf("ft = %X%X%X%X%X%X%X\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("plen:%d\n",printf("pt = %X%X%X%X%X%X%X\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("%%x\n");
	printf("lens:%d\n",ft_printf("ft = %x%x%x%x%x%x%x\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("plen:%d\n",printf("pt = %x%x%x%x%x%x%x\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10));
	printf("%%p\n");
	printf("lens:%d\n",ft_printf("ft = %p%p%p%p%p%p%p%p%p \n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10, ULONG_MAX, ULLONG_MAX));
	printf("plen:%d\n",printf("pt = %p%p%p%p%p%p%p%p%p \n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10, ULONG_MAX, ULLONG_MAX));

	//!標準出力
	// printf("標準出力\n");
	// printf("lens:%d\n",ft_printf("ft = %c\n",'a'));
	// printf("plens:%d\n",printf("pr = %c\n",'a'));
	// printf("lens:%d\n",ft_printf("ft = %s\n","ssss"));
	// printf("plens:%d\n",printf("pr = %s\n","ssss"));
	// printf("lens:%d\n",ft_printf("ft = %d\n",14));
	// printf("plens:%d\n",printf("pr = %d\n",14));
	// printf("lens:%d\n",ft_printf("ft = %u\n",UINT_MAX));
	// printf("plens:%d\n",printf("pr = %u\n",UINT_MAX));
	// printf("lens:%d\n",ft_printf("ft = %x\n",49275));
	// printf("plens:%d\n",printf("pr = %x\n",49275));
	// printf("lens:%d\n",ft_printf("ft = %X\n",95723));
	// printf("plens:%d\n",printf("pr = %X\n",95723));
	// char a = 'a';
	// printf("lens:%d\n",ft_printf("ft = %p\n",&a));
	// printf("plens:%d\n",printf("pr = %p\n",&a));
	// printf("lens:%d\n",ft_printf("ft = %%\n"));
	// printf("plens:%d\n",printf("pr = %%\n"));

	// // !int_max超え
	// printf("int_max超え");
	// long	l = INT_MAX + 2L;
	// char *a = (char *)malloc(l + 1);
	// a = memset(a, 'a', INT_MAX);
	// a[INT_MAX]= 'b';
	// a[l - 1]= 'c';
	// a[INT_MAX - 1] = '\0';
	// // ft_printf("a%s%d%d",a,100,100);
	// int ret = printf("%s",a);
	// fprintf(stderr," return = %d\n", ret);

	// !0の処理
	// printf("\n0の処理\n");
	// printf("lens:%d\n",ft_printf("ft = %c\n",0));
	// printf("plens:%d\n",printf("pr = %c\n",0));
	// printf("lens:%d\n",ft_printf("ft = %s\n",""));
	// printf("plens:%d\n",printf("pr = %s\n",""));
	// printf("lens:%d\n",ft_printf("ft = %d\n",0));
	// printf("plens:%d\n",printf("pr = %d\n",0));
	// printf("lens:%d\n",ft_printf("ft = %u\n",0));
	// printf("plens:%d\n",printf("pr = %u\n",0));
	// printf("lens:%d\n",ft_printf("ft = %x\n",0));
	// printf("plens:%d\n",printf("pr = %x\n",0));
	// printf("lens:%d\n",ft_printf("ft = %X\n",0));
	// printf("plens:%d\n",printf("pr = %X\n",0));
	// printf("lens:%d\n",ft_printf("ft = %p\n",0));
	// printf("plens:%d\n",printf("pr = %p\n",0));


	// !最大値
	// printf("\n最大値\n");
	// printf("lens:%d\n",ft_printf("ft = %d\n",INT_MAX));
	// printf("plens:%d\n",printf("pr = %d\n",INT_MAX));
	// printf("lens:%d\n",ft_printf("ft = %u\n",UINT_MAX));
	// printf("plens:%d\n",printf("pr = %u\n",UINT_MAX));
	// printf("lens:%d\n",ft_printf("ft = %x\n",UINT_MAX));
	// printf("plens:%d\n",printf("pr = %x\n",UINT_MAX));
	// printf("lens:%d\n",ft_printf("ft = %X\n",UINT_MAX));
	// printf("plens:%d\n",printf("pr = %X\n",UINT_MAX));
	// printf("lens:%d\n",ft_printf("ft = %p\n",ULONG_MAX));
	// printf("plens:%d\n",printf("pr = %p\n",ULONG_MAX));

	// !最小値(int_min)
	// printf("\n最小値\n");
	// printf("lens:%d\n",ft_printf("ft = %d\n",INT_MIN));
	// printf("plens:%d\n",printf("pr = %d\n",INT_MIN));
	// printf("lens:%d\n",ft_printf("ft = %u\n",INT_MIN));
	// printf("plens:%d\n",printf("pr = %u\n",INT_MIN));
	// printf("lens:%d\n",ft_printf("ft = %x\n",INT_MIN));
	// printf("plens:%d\n",printf("pr = %x\n",INT_MIN));
	// printf("lens:%d\n",ft_printf("ft = %X\n",INT_MIN));
	// printf("plens:%d\n",printf("pr = %X\n",INT_MIN));
	// printf("lens:%d\n",ft_printf("ft = %p\n",INT_MIN));
	// printf("plens:%d\n",printf("pr = %p\n",INT_MIN));

	// !オーバーフロー
	// printf("\nオーバーフロー\n");
	// printf("lens:%d\n",ft_printf("ft = %d\n",LONG_MAX));
	// printf("plens:%d\n",printf("pr = %d\n",LONG_MAX));
	// printf("lens:%d\n",ft_printf("ft = %u\n",LONG_MAX));
	// printf("plens:%d\n",printf("pr = %u\n",LONG_MAX));
	// printf("lens:%d\n",ft_printf("ft = %x\n",ULONG_MAX));
	// printf("plens:%d\n",printf("pr = %x\n",ULONG_MAX));
	// printf("lens:%d\n",ft_printf("ft = %X\n",ULONG_MAX));
	// printf("plens:%d\n",printf("pr = %X\n",ULONG_MAX));
	// printf("lens:%d\n",ft_printf("ft = %p\n",ULLONG_MAX));
	// printf("plens:%d\n",printf("pr = %p\n",ULLONG_MAX));
	// printf("%zu\n",LONG_MAX);

	// !##エラー処理

	// !##型違い
	// printf("\型違い\n");
	// printf("plens:%d\n",printf("pr = %d\n", "aaaa"));
	// printf("lens:%d\n",ft_printf("ft = %d\n", "aaaa"));
	// segmentation fault
	// printf("plens:%d\n",printf("pr = %s\n", 143));
	// printf("lens:%d\n",ft_printf("ft = %s\n", 143));

	// !引数なし
	// !segmentation fault
	// printf("引数なしn");
	// printf("lens:%d\n",printf("pr = %s\n"));
	// printf("lens:%d\n",ft_printf("ft = %s\n"));

	// printf("lens:%d\n",printf("pr%%s = %s\n", NULL));
	// printf("lens:%d\n",ft_printf("ft%%s = %s\n", NULL));
	// printf("lens:%d\n",printf("pr%%c = %c\n", 'NULL'));
	// printf("lens:%d\n",ft_printf("ft%%c = %c\n", 'NULL'));
	// printf("lens:%d\n",ft_printf("ft%%d = %d\n",NULL));
	// printf("plens:%d\n",printf("pr%%d = %d\n",NULL));

	// printf("lens:%d\n",ft_printf("ft%%u = %u\n",-100));
	// printf("plens:%d\n",printf("pr%%u = %u\n",-100));
	// printf("lens:%d\n",ft_printf("ft%%x = %x\n",1002));
	// printf("plens:%d\n",printf("pr%%x = %x\n",1002));
	// printf("lens:%d\n",ft_printf("ft%%X = %X\n",-100));
	// printf("plens:%d\n",printf("pr%%X = %X\n",-100));
	// printf("lens:%d\n",ft_printf("ft%%p = %p\n","a"));
	// printf("plens:%d\n",printf("pr%%p = %p\n","a"));



	return (0);
}