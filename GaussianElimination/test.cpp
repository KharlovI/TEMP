#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"doctest.h"
#include"Matrix.h"


	TEST_CASE("Jordan - Gaus")
	{
		std::clock_t start;
		std::clock_t end;
		
		for (int i = 4; i < 1025; i *= 2)
		{
			Matrix identity = identityMatrix(i);

			Matrix A = createRandomMatrix(i);
			Matrix B = JordanGaus(A);

			/*std::cout << "Matrix size:" << i << '\t' << '\t';
			start = clock();
			end = clock() - start;	
			std::cout << "Time:" << (double) end / CLOCKS_PER_SEC << " sec" << std::endl;*/
			/*if (B == NULL)
			{
				CHECK(1 == 1);
				continue;
			}*/
			CHECK(identity == A * B);
		}
	}