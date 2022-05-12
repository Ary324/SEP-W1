/*Define the namespace into two header files*/

namespace geo
{
	double areac(double);
	double circumf(double radius)
	{
		return 2 * PI * radius;
	}
} //end namespace geo


double geo::areac(double radius) {  // Separate definition
	return PI * radius * radius;
}

