#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << "--- 1. Polymorphism and Virtual Destructor Test ---" << std::endl;

	const int array_size = 4;
	Animal* animals[array_size];

	// 配列の半分をDog、半分をCatで埋める
	std::cout << "\n--- Creating Animals ---" << std::endl;
	for (int i = 0; i < array_size / 2; ++i) {
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = array_size / 2; i < array_size; ++i) {
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	// 配列の全要素の音を鳴らす
	std::cout << "--- Making Sounds ---" << std::endl;
	for (int i = 0; i < array_size; ++i) {
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	// Animalポインタ経由でdeleteする
	// 仮想デストラクタのおかげで、Brainもリークしない
	std::cout << "--- Deleting Animals ---" << std::endl;
	for (int i = 0; i < array_size; ++i) {
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << "\n--- 2. Deep Copy Test (Dog) ---" << std::endl;

	// --- コピーコンストラクタのテスト  ---
	std::cout << "\n--- Testing Copy Constructor ---" << std::endl;
	Dog original_dog;
	original_dog.getBrain()->setIdea(0, "I am the original dog");

	std::cout << "Original Dog Idea: " << original_dog.getBrain()->getIdea(0) << std::endl;

	// ここでコピーコンストラクタが呼ばれる
	Dog copy_dog = original_dog;
	std::cout << "Copied Dog Idea: " << copy_dog.getBrain()->getIdea(0) << std::endl;

	// オリジナルのBrainのアイディアを変更
	original_dog.getBrain()->setIdea(0, "Original idea changed");
	std::cout << "Original Dog Idea (after change): " << original_dog.getBrain()->getIdea(0) << std::endl;

	// コピーされた方は影響を受けない（＝ディープコピーされている）
	std::cout << "Copied Dog Idea (should be unchanged): " << copy_dog.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	// --- コピー代入演算子のテスト  ---
	std::cout << "--- Testing Copy Assignment Operator ---" << std::endl;
	Cat cat1;
	cat1.getBrain()->setIdea(5, "I am cat1");

	Cat cat2;
	cat2.getBrain()->setIdea(5, "I am cat2");

	std::cout << "Cat1 Idea (before assign): " << cat1.getBrain()->getIdea(5) << std::endl;
	std::cout << "Cat2 Idea (before assign): " << cat2.getBrain()->getIdea(5) << std::endl;

	// ここでコピー代入演算子が呼ばれる
	cat2 = cat1;
	std::cout << "Cat2 Idea (after assign): " << cat2.getBrain()->getIdea(5) << std::endl;

	// cat1のアイディアを変更
	cat1.getBrain()->setIdea(5, "Cat1 idea changed");
	std::cout << "Cat1 Idea (after change): " << cat1.getBrain()->getIdea(5) << std::endl;

	// cat2は影響を受けない
	std::cout << "Cat2 Idea (should be unchanged): " << cat2.getBrain()->getIdea(5) << std::endl;

	std::cout << "\n--- Exiting Deep Copy Test (Destructors will be called) ---" << std::endl;
	// original_dog, copy_dog, cat1, cat2 がスコープを抜けるときにデストラクタが呼ばれる

	return 0;
}
