#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "--- PDF Main Test (Polymorphism) ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	std::cout << "--- Wrong Classes Test (No Polymorphism) ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound(); // WrongAnimalの音が出る
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrong_i;

	std::cout << std::endl;
	return 0;
}
