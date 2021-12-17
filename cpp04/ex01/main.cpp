#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define N 2

int main(void)
{
	Animal* array[N];
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	for (int i = 0; i < N / 2; i++)
		array[i] = new Dog();
	for (int i = N / 2; i < N; i++)
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

	for (int i = 0; i < N; i++)
		delete array[i];


}
