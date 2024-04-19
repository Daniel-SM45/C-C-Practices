#include<iostream>

class Rectangle {
	private:

		double width;
		double length;

		double executeArea()
		{
			return length * width;
		}
		double executePerimeter()
		{
			return (2 * length) + (2 * width);
		}
	public:

		Rectangle(double setWidth, double setLength)
		{
			width  = setWidth;
			length = setLength;
		}
		void getRectangleInfo()
		{
			std::cout << "Rectangle Area = "
			          << executeArea()
			          << "\nRectangle Perimeter = "
			          << executePerimeter();

		}
};

struct RectangleData {
	
	double width  = { 0 };
	double length = { 0 };
};

int main()
{
	RectangleData rectangleOne;
	
	std::cout << "Length: ";
	std::cin >> rectangleOne.length;
	std::cout << "Width: ";
	std::cin >> rectangleOne.width;

	Rectangle rectangle(rectangleOne.width,rectangleOne.length);
	rectangle.getRectangleInfo();

	return 0;
}