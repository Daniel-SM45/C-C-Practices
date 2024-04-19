#include<iostream>
#include<string>

class Instrument {
	public:
		virtual void playSound() = 0;
};

class Guitar : public Instrument {

	public:
		void playSound()
		{
			std::cout << "Guitar is playing...\n";
		}
};

class Bass : public Instrument {
	public:
		void playSound()
		{
			std::cout << "Bass is playing...\n";
		}
};

int main()
{

	Instrument* ptr_instrument = new Guitar();
	ptr_instrument->playSound();


	return 0;
}