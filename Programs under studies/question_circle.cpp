#include<iostream>
constexpr auto PI
{
	3.14159
};

class Circle {
	private:

		double radius;

		double execute()
		{
			return PI * (radius*radius);
		}
		double executeCircunCalc()
		{
			return 2 * PI * radius;
		}

	public:

		Circle(double setradius = 0) : radius (setradius){}//{ radius = setradius;}
		
		void displayRadiusResult()
		{
			std::cout << "Area: " << execute() << "\n";
			std::cout << "Circunferencia: " << executeCircunCalc();
		}

};
int main()
{
	double setRadius;

	std::cout << "Input the radius of the circle >>> ";
	std::cin >> setRadius;

	Circle circleOne(setRadius);
	circleOne.displayRadiusResult();

	return 0;
}