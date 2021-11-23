// #include "ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <gtest/gtest.h>
#include <gtest/internal/gtest-port.h>

extern "C" int ft_printf(const char *format, ...);

TEST(printf,c)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %c%c%c%c%c%c\n",'a','~',0 ,128,34,100);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %c%c%c%c%c%c\n",'a','~',0 ,128,34,100);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,s)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %s%s%s%s%s%s\n","",NULL,"aasffff" ,"000000"," ~",";:\t\0aaaa");
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %s%s%s%s%s%s\n","",NULL,"aasffff" ,"000000"," ~",";:\t\0aaaa");
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,d)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %d%d%d%d%d%d\n",0,14,INT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %d%d%d%d%d%d\n",0,14,INT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,u)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %u%u%u%u%u%u%u\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %u%u%u%u%u%u%u\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,X)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %X%X%X%X%X%X%X\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %X%X%X%X%X%X%X\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,x)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %x%x%x%x%x%x%x\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %x%x%x%x%x%x%x\n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}

TEST(printf,p)
{

	testing::internal::CaptureStdout();
	int return_value_ft = ft_printf("ft = %p%p%p%p%p%p%p%p%p \n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10, ULONG_MAX, ULLONG_MAX);
	std::string output_ft = testing::internal::GetCapturedStdout().c_str();

	testing::internal::CaptureStdout();
	int return_value = printf("ft = %p%p%p%p%p%p%p%p%p \n",14,0 ,INT_MAX ,UINT_MAX ,INT_MAX - 10 ,INT_MIN ,INT_MIN + 10, ULONG_MAX, ULLONG_MAX);
	std::string output = testing::internal::GetCapturedStdout().c_str();
	EXPECT_EQ(return_value_ft, return_value);
	EXPECT_EQ(output_ft, output);
}