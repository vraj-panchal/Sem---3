// find the area and perimeter of a rectangle

#include <iostream>

using namespace std;

class rect
{

private:
  int l, b;

public:
  void area(int x, int y)
  {
    l = x;
    b = y;

    int result = l * b;

    cout << "Area of rectangle : " << result << endl;
  }

  void peramiter()
  {

    int result = 2 * (l * b);

    cout << "Area of rectangle : " << result << endl;
  }
};

int main()
{
  rect r;

  int l, b;

  cout << "Enter Two value : ";
  cin >> l;
  cin >> b;

  r.area(l, b);
  r.peramiter();
}