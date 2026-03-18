//1. Header Files & Namespace
#include <iostream>
using namespace std;
//iostream: cout/cin ke liye. namespace std: har baar std:: likhne ki zaroorat nahi.

//2. Base Class — Animal (virtual keyword here!)
class Animal {
public:
virtual void speak() {         // <-- virtual: Late Binding ON
cout << "Generic Sound\n";
}
virtual ~Animal() {}           // <-- virtual destructor (best practice)
};
//virtual lagane se compiler runtime pe actual object ka function dhundta hai — yahi Dynamic Dispatch hai.

//3. Child Classes — Dog, Cat, Bird, Lion
class Dog : public Animal {
public:
void speak() { cout << "Woof!\n"; }
};
 
class Cat : public Animal {
public:
void speak() { cout << "Meow!\n"; }
};
 
class Bird : public Animal {
public:
void speak() { cout << "Tweet!\n"; }
};
 
class Lion : public Animal {
public:
void speak() { cout << "Roar!\n"; }
};
//Har child class Animal se inherit karti hai aur apna speak() override karti hai.

//4. Universal Handler Function
// Animal* pointer accept karta hai — koi bhi child pass kar sako
void makeSpeak(Animal* a) {
a->speak();    // virtual hone ki wajah se sahi function chalega
}
//Yeh function sirf ek baar likha — Dog, Cat, Bird, Lion — sab handle. Yahi Universal Handler ka maqsad hai.

5. main() — Zoo Array + Loop
int main() {
 
// Array of Animal pointers (Upcasting)
Animal* zoo[4];
zoo[0] = new Dog();
zoo[1] = new Cat();
zoo[2] = new Bird();
zoo[3] = new Lion();
 
// Universal function — ek loop mein sab!
for(int i = 0; i < 4; i++) {
makeSpeak(zoo[i]);   // Runtime pe sahi object ka function chalega
}
 
// Memory free karo (best practice)
for(int i = 0; i < 4; i++) {
delete zoo[i];
}
 
return 0;
}

/*86. Expected Output
Woof!
Meow!
Tweet!
Roar!*/

