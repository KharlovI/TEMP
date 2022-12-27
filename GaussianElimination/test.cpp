#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include"doctest.h"
#include"Matrix.h"
#include <ctime>

	TEST_CASE("Jordan - Gaus")
	{
		std::clock_t start;
		std::clock_t end;
		
		for (int i = 64; i < 65; i *= 2)
		{
			Matrix identity = identityMatrix(i);

			Matrix A = createRandomMatrix(i);
			Matrix B = JordanGaus(A);
			Matrix C = Foo(A);

			//B.print();
			//std::cout << std::endl;
			//C.print();
			CHECK(B == C);
		}
	}


	/*TEST_CASE("Minor determinant")
	{
		srand(time(0));

		const int matrixSize = 4;

		Matrix m = Matrix(matrixSize);
		for (int i = 0; i < matrixSize; i++)
		{
			for (int j = 0; j < matrixSize; j++)
			{
				m[i][j] = rand() % 20;
			}
		}

		m.print();

		for (int i = 0; i < matrixSize; i++)
		{
			for (int j = 0; j < matrixSize; j++)
			{
				double value1 = DETERMINANT(m);
				double value2 = determinant(m);

				std::cout << std::endl << value1 << " " << value2;
				CHECK(Compare(value1, value2));
			}
		}
	}*/