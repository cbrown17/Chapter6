class Point
{

  //Type declaration statements for data members
  private: 
  double xCoord, yCoord; //Class attributes

  public:
  //Declaration statements for class methods 
  //Constructors for Point class
  Point();
  Point(double x, double y);

  //overloaded operators 
  double operator - (const Point& p1) const;
  bool operator ==(const Point& p2) const;

  //Accesor Method Definition , public method 
  double getX() const{
    return xCoord;
  }
  double getY() const{
    return yCoord;
  }

  //Mutator Methods , public methods 
  void setX(double newX);
  void setY(double newY);

};