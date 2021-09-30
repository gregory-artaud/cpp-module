#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* array[100];
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	for (int i = 0; i < 50; i++)
		array[i] = new Dog();
	for (int i = 50; i < 100; i++)
		array[i] = new Cat();

	Dog d1;
	Dog* d2;
	Cat c1;
	Cat* c2;

	d1.getBrain()->setFirstIdea("average dog");
	c1.getBrain()->setFirstIdea("average cat");
	d2 = new Dog(d1);
	c2 = new Cat(c1);
	d2->getBrain()->setFirstIdea("master dog");
	c2->getBrain()->setFirstIdea("master cat");
	std::cout << "d1: " << d1.getBrain()->getFirstIdea() << std::endl;
	std::cout << "d2: " << d2->getBrain()->getFirstIdea() << std::endl;
	std::cout << "c1: " << c1.getBrain()->getFirstIdea() << std::endl;
	std::cout << "c2: " << c2->getBrain()->getFirstIdea() << std::endl;

	delete d2;
	delete c2;

    delete j;
	delete i;

	for (int i = 0; i < 100; i++)
		delete array[i];


}
