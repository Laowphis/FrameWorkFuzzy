#pragma once
#ifndef MAMDANIDEFUZZ_H
#define MAMDANIDEFUZZ_H

#include "BinaryExpression.h"

namespace fuzzy{

	template<class T>
	class MamdaniDefuzz : public core::BinaryExpression<T>{

	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const = 0;
	};

}

#endif;