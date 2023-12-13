#ifndef _RESISTOR_DIVIDER_B_HPP
#define _RESISTOR_DIVIDER_B_HPP

#include <vector>

template <typename tResistance, unsigned int iResistors>
class resistorDivider_b
{
public:
	static const std::vector<unsigned int> moVectorDefaultValuesE12;

	enum eNumericBase
	{
		Null = 0,//Should never use this value.
		micro = 8,
		mili = 9,
		Normal = 10,
		Kilo = 11,
		Mega = 12,
		Giga = 13,
		Tera = 14
	};

	resistorDivider_b(tResistance aiResistence, unsigned int aiResistors) {}
	virtual ~resistorDivider_b() {}

	tResistance mGetResistance();

	eNumericBase mNumericBase(tResistance& arResistance);

//private:	
};

#endif



