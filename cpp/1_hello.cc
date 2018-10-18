#include <iostream>

int main() //./a.out<infile>outfile 使用文件重定向
{
    // prompt user to enter two numbers
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;   
	std::cout << "The sum of " << v1 << " and " << v2
	          << " is " << v1 + v2 << std::endl;
	std::cerr << "nodata" << std::endl;
	std::clog << "log" << std::endl;
    return -1;	//echo $? 查看运行状态
}