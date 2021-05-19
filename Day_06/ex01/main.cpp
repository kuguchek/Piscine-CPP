#include "struct.hpp"

void *serialize(void) {
	const char alphanum[] = 
	"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	Data *d = new Data;
	int i;
	for (i = 0; i < 8; i++){
		d->s1 += alphanum[rand() % sizeof(alphanum) - 1];
	}
	d->n = rand() % INT_MAX;;
	for (i = 0; i < 8; i++){
		d->s2 += alphanum[rand() % sizeof(alphanum) - 1];
	}
	return reinterpret_cast<void*>(d);
}

Data *deserialize(void *raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	srand(time(0));
	void *s = serialize();
	Data *d = deserialize(s);
	std::cout << s << std::endl;
	std::cout << d << std::endl;
	std::cout << "s1: " << d->s1 << std::endl;
	std::cout << "n: " << d->n << std::endl;
	std::cout << "s2: " << d->s2 << std::endl;
	return (0);
}