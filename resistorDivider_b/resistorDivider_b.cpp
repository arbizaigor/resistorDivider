#include "resistorDivider_b.hpp"

template <typename tResistance, unsigned int iResistors>
const std::vector<unsigned int> resistorDivider_b<tResistance, iResistors>::moVectorDefaultValuesE12 = {10,	12,	15,	18,	22,	27, 33,	39,	47,	56,	68,	82};

template <typename tResistance, unsigned int iResistors>
tResistance resistorDivider_b<tResistance, iResistors>::mGetResistance()
{
	tResistance tReturnValue = 0;

	if (iResistors > 0)
	{
		if (iResistors == 1)
		{
			//if there is only one resistor option, then it must return de shortest \
			error between the value upper and bellow tResistance.


		}
	}


	return tReturnValue;	
}

template <typename tResistance, unsigned int iResistors>
typename resistorDivider_b<tResistance, iResistors>::eNumericBase resistorDivider_b<tResistance, iResistors>::mNumericBase(tResistance& arResistance)
{
	eNumericBase eReturn;

	//TODO colocar um MAP???

	while (true)
	{
		//tResistance
	}

	return eReturn;
}

