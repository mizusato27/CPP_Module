#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "--- Test 1: Valid Bureaucrats ---" << std::endl;
	try
	{
		Bureaucrat b1("Alice", 1);
		std::cout << b1 << std::endl;
		Bureaucrat b2("Bob", 150);
		std::cout << b2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- Test 2: Invalid Construction (Too High) ---" << std::endl;
	try
	{
		Bureaucrat b_err("High", 0); // Should throw
		std::cout << b_err << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- Test 3: Invalid Construction (Too Low) ---" << std::endl;
	try
	{
		Bureaucrat b_err("Low", 151); // Should throw
		std::cout << b_err << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- Test 4: Incrementing Grade ---" << std::endl;
	try
	{
		Bureaucrat b("Charlie", 3);
		std::cout << "Start: " << b << std::endl;
		b.incrementGrade(); // 3 -> 2
		std::cout << "After inc: " << b << std::endl;
		b.incrementGrade(); // 2 -> 1
		std::cout << "After inc: " << b << std::endl;

		std::cout << "Trying to increment grade 1..." << std::endl;
		b.incrementGrade(); // 1 -> BOOM!
		std::cout << "This line should not be printed." << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- Test 5: Decrementing Grade ---" << std::endl;
	try
	{
		Bureaucrat b("David", 148);
		std::cout << "Start: " << b << std::endl;
		b.decrementGrade(); // 148 -> 149
		std::cout << "After dec: " << b << std::endl;
		b.decrementGrade(); // 149 -> 150
		std::cout << "After dec: " << b << std::endl;

		std::cout << "Trying to decrement grade 150..." << std::endl;
		b.decrementGrade(); // 150 -> BOOM!
		std::cout << "This line should not be printed." << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
