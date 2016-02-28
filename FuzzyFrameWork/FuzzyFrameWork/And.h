#pragma once
#ifndef AND_H
#define AND_H

#include "BinaryExpression.h"

namespace fuzzy{

	template<class T>
	class And : public core::BinaryExpression<T>{

	public:
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*) const = 0;
	};

}

#endif;